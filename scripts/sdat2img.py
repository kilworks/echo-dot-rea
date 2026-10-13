#!/usr/bin/env python3
# minimal sdat2img: transfer.list + system.new.dat -> raw ext4 image
# based on the well-known xpirt/sdat2img algorithm. ponytail: only the v1-4 "new" command path we need.
import sys

BLOCK = 4096

def parse_ranges(text):
    a = [int(x) for x in text.strip().split(',')]
    n = a[0]
    pairs = a[1:]
    assert len(pairs) == n
    return list(zip(pairs[0::2], pairs[1::2]))

def main(transfer_list, new_dat, out_img):
    with open(transfer_list) as f:
        lines = [l.strip() for l in f.readlines()]
    version = int(lines[0])
    # lines[1]=total blocks; v>=2 has 2 extra header lines
    cmds = lines[2:] if version < 2 else lines[4:]
    max_block = 0
    for l in cmds:
        parts = l.split(' ', 1)
        if parts[0] == 'new' and len(parts) > 1:
            for _, e in parse_ranges(parts[1]):
                max_block = max(max_block, e)
    with open(new_dat, 'rb') as din, open(out_img, 'wb') as out:
        out.truncate(max_block * BLOCK)
        for l in cmds:
            parts = l.split(' ', 1)
            if parts[0] != 'new':
                continue
            for begin, end in parse_ranges(parts[1]):
                out.seek(begin * BLOCK)
                out.write(din.read((end - begin) * BLOCK))
    print(f"wrote {out_img} ({max_block} blocks, {max_block*BLOCK} bytes)")

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2], sys.argv[3])
