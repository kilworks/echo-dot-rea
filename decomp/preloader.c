// preloader.code.bin  functions=397

// ==== FUN_002008c0 @ 002008c0 ====

uint FUN_002008c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    FUN_00201888();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// ==== FUN_00200a00 @ 00200a00 ====

uint FUN_00200a00(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    FUN_00201888();
    return 0;
  }
  uVar2 = 1;
  uVar1 = 0;
  if (param_2 <= param_1) {
    for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
      uVar2 = uVar2 << 4;
    }
    for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
      uVar2 = uVar2 << 1;
    }
    while( true ) {
      if (param_2 <= param_1) {
        param_1 = param_1 - param_2;
        uVar1 = uVar1 | uVar2;
      }
      if (param_2 >> 1 <= param_1) {
        param_1 = param_1 - (param_2 >> 1);
        uVar1 = uVar1 | uVar2 >> 1;
      }
      if (param_2 >> 2 <= param_1) {
        param_1 = param_1 - (param_2 >> 2);
        uVar1 = uVar1 | uVar2 >> 2;
      }
      if (param_2 >> 3 <= param_1) {
        param_1 = param_1 - (param_2 >> 3);
        uVar1 = uVar1 | uVar2 >> 3;
      }
      bVar3 = param_1 == 0;
      if (!bVar3) {
        uVar2 = uVar2 >> 4;
        bVar3 = uVar2 == 0;
      }
      if (bVar3) break;
      param_2 = param_2 >> 4;
    }
  }
  return uVar1;
}


// ==== FUN_00200a98 @ 00200a98 ====

void FUN_00200a98(void)

{
  FUN_00200a00();
  return;
}


// ==== FUN_00200ac8 @ 00200ac8 ====

ulonglong FUN_00200ac8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == 0 && param_4 == 0) {
    FUN_00201888();
    return 0;
  }
  if ((param_3 - 1 & param_3) == 0 && (param_4 & param_4 - (param_3 == 0)) == 0) {
    uVar3 = 0x1f - LZCOUNT(param_3);
    if ((int)uVar3 < 0) {
      uVar2 = param_2 >> (-LZCOUNT(param_4) + 0x1fU & 0xff);
      uVar3 = -LZCOUNT(param_4) + 0x3f;
    }
    else {
      uVar2 = param_1 >> (uVar3 & 0xff) | param_2 << LZCOUNT(param_3) + 1;
    }
    return CONCAT44(param_2 >> (uVar3 & 0xff),uVar2);
  }
  if (param_2 == 0 && param_4 == 0) {
    uVar3 = FUN_00200a98(param_1,param_3);
    return (ulonglong)uVar3;
  }
  uVar2 = 1;
  uVar3 = 0;
  uVar4 = LZCOUNT(param_2);
  if (param_2 == 0) {
    uVar4 = LZCOUNT(param_1) + 0x20;
  }
  uVar6 = LZCOUNT(param_4);
  if (param_4 == 0) {
    uVar6 = LZCOUNT(param_3) + 0x20;
  }
  uVar5 = uVar6 - uVar4;
  if (uVar4 <= uVar6 && uVar5 != 0) {
    uVar3 = uVar5 - 0x20;
    if ((int)uVar3 < 0) {
      param_4 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
    }
    else {
      param_4 = param_3 << (uVar3 & 0xff);
    }
    param_3 = param_3 << (uVar5 & 0xff);
    if ((int)uVar3 < 0) {
      uVar3 = 0 << (uVar5 & 0xff) | 1U >> (0x20 - uVar5 & 0xff);
    }
    else {
      uVar3 = 1 << (uVar3 & 0xff);
    }
    uVar2 = 1 << (uVar5 & 0xff);
  }
  uVar4 = 0;
  uVar6 = 0;
  while( true ) {
    bVar7 = param_4 <= param_2;
    if (param_2 == param_4) {
      bVar7 = param_3 <= param_1;
    }
    if (bVar7) {
      bVar7 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (param_4 + bVar7);
      uVar4 = uVar4 | uVar2;
      uVar6 = uVar6 | uVar3;
    }
    if (param_2 == 0 && param_1 == 0) break;
    bVar1 = (byte)uVar3;
    uVar3 = uVar3 >> 1;
    uVar2 = (uint)(bVar1 & 1) << 0x1f | uVar2 >> 1;
    if (uVar3 == 0 && uVar2 == 0) break;
    bVar1 = (byte)param_4;
    param_4 = param_4 >> 1;
    param_3 = (uint)(bVar1 & 1) << 0x1f | param_3 >> 1;
  }
  return CONCAT44(uVar6,uVar4);
}


// ==== FUN_00200c14 @ 00200c14 ====

uint FUN_00200c14(int param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    puVar1 = (ushort *)(param_1 + iVar2);
    iVar2 = iVar2 + 2;
    uVar3 = uVar3 + *puVar1;
  } while (iVar2 != 0xe);
  for (; uVar3 >> 0x10 != 0; uVar3 = (uVar3 >> 0x10) + (uVar3 & 0xffff)) {
  }
  return ~uVar3 & 0xffff;
}


// ==== FUN_00200c34 @ 00200c34 ====

void FUN_00200c34(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_11c;
  undefined1 auStack_118 [4];
  short local_114;
  ushort local_110;
  ushort local_10e;
  ushort local_10c;
  ushort local_10a;
  
  FUN_002127e8(DAT_00200df0 + 0x200c3e);
  iVar2 = FUN_0020bd3c(auStack_118);
  iVar5 = DAT_00200df4 + 0x200c4e;
  if (iVar2 != 0) {
    FUN_002127e8(DAT_00200df8 + 0x200c56);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_002127e8(DAT_00200dfc + 0x200c64,local_110,local_10e,local_10c);
  if (local_114 == 0) {
    bVar1 = true;
    local_114 = 1;
    iVar2 = DAT_00200e00 + 0x200c7e;
  }
  else {
    uVar3 = FUN_00200c14(auStack_118);
    if (local_10a != uVar3) {
      FUN_002127e8(DAT_00200e04 + 0x200c90);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = DAT_00200e08 + 0x200c9a;
    bVar1 = false;
  }
  FUN_002127e8(iVar2);
  uVar6 = (uint)local_110;
  uVar3 = FUN_0021143c();
  if (uVar3 < uVar6) {
    FUN_002127e8(DAT_00200e0c + 0x200cae);
    uVar4 = FUN_0021143c();
    FUN_002127e8(DAT_00200e10 + 0x200cc2,local_110,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_0021143c();
  if (local_110 < uVar3) {
    bVar1 = true;
    FUN_002127e8(DAT_00200e14 + 0x200cda);
    local_110 = FUN_0021143c();
  }
  uVar6 = (uint)local_10e;
  uVar3 = FUN_0021b0a8();
  if (uVar3 < uVar6) {
    FUN_002127e8(DAT_00200e18 + 0x200cf4);
    uVar4 = FUN_0021b0a8();
    FUN_002127e8(DAT_00200e1c + 0x200d08,local_10e,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_0021b0a8();
  if (local_10e < uVar3) {
    bVar1 = true;
    FUN_002127e8(DAT_00200e20 + 0x200d20);
    local_10e = FUN_0021b0a8();
  }
  uVar6 = (uint)local_10c;
  uVar3 = FUN_00210930();
  if (uVar3 < uVar6) {
    FUN_002127e8(DAT_00200e24 + 0x200d3a);
    uVar4 = FUN_00210930();
    FUN_002127e8(DAT_00200e28 + 0x200d4e,local_10c,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_00210930();
  if (local_10c < uVar3) {
    bVar1 = true;
    FUN_002127e8(DAT_00200e2c + 0x200d66);
    local_10c = FUN_00210930();
  }
  FUN_002127e8(DAT_00200e30 + 0x200d74);
  if (bVar1) {
    local_11c = 0;
    FUN_002127e8(DAT_00200e34 + 0x200d82);
    local_10a = FUN_00200c14(auStack_118);
    iVar2 = FUN_0020bc34(&local_11c);
    if (iVar2 == 0) {
      iVar2 = FUN_0020be30(auStack_118,local_11c);
      if (iVar2 == 0) {
        FUN_002127e8(DAT_00200e40 + 0x200db8);
        FUN_002127e8(DAT_00200e44 + 0x200dc2,local_110,local_10e,local_10c);
        goto LAB_00200dc8;
      }
      iVar2 = DAT_00200e3c + 0x200dae;
    }
    else {
      iVar2 = DAT_00200e38 + 0x200d9e;
    }
    FUN_002127e8(iVar2);
  }
LAB_00200dc8:
  iVar2 = **(int **)(iVar5 + DAT_00200e48);
  *(ushort *)(iVar2 + 0x5e36c) = local_110;
  *(ushort *)(iVar2 + 0x5e370) = local_10c;
  *(ushort *)(iVar2 + 0x5e36e) = local_10e;
  return;
}


// ==== FUN_00200e4c @ 00200e4c ====

undefined4 FUN_00200e4c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24 [2];
  int local_1c [2];
  
  local_24[0] = param_1;
  local_1c[0] = param_2;
  iVar1 = FUN_00201128(1);
  if (iVar1 == 0) {
    iVar3 = 1;
    iVar1 = DAT_00200eac + 0x200e68;
  }
  else {
    iVar3 = DAT_00200eb0 + 0x200e6e;
    iVar2 = thunk_FUN_0020fa44(iVar3);
    if (iVar2 == 0) {
      iVar1 = DAT_00200eb4 + 0x200e7e;
    }
    else {
      iVar3 = FUN_0020fe6c(iVar1,iVar2,local_24,0,local_1c);
      if ((iVar3 == 0) && (param_2 == local_1c[0])) {
        return 1;
      }
      iVar1 = DAT_00200eb8 + 0x200e9e;
    }
  }
  FUN_002127e8(iVar1,iVar3);
  return 0;
}


// ==== FUN_00201104 @ 00201104 ====

undefined4 FUN_00201104(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00201124;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(iVar2 + 0x20110e);
  if (iVar1 == 0) {
    *(int *)(iVar2 + 0x20110e) = param_1;
  }
  else {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x1c);
    } while (iVar1 != 0);
    *(int *)(iVar2 + 0x1c) = param_1;
  }
  return 0;
}


// ==== FUN_00201128 @ 00201128 ====

int * FUN_00201128(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(DAT_00201140 + 0x20112e); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[7]) {
  }
  return piVar1;
}


// ==== FUN_00201144 @ 00201144 ====

void FUN_00201144(int param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}


// ==== FUN_00201154 @ 00201154 ====

undefined4
FUN_00201154(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_44;
  
  local_44 = *(int *)(param_1 + 0x14);
  if (local_44 == 0) {
    local_44 = **(int **)(DAT_00201310 + 0x201168 + DAT_00201314) + 0x48800;
  }
  uVar7 = *(uint *)(param_1 + 4);
  if (param_5 != 0) {
    iVar10 = 0;
    uVar6 = param_5 + param_3;
    uVar1 = param_4 + CARRY4(param_5,param_3);
    uVar2 = uVar7 - 1 & param_3;
    uVar8 = -uVar7;
    uVar3 = uVar6 & uVar8;
    if (uVar2 != 0) {
      uVar4 = FUN_00200ac8(uVar8 & param_3,0,uVar7,0);
      bVar11 = !CARRY4(uVar2,param_5);
      if (!CARRY4(uVar2,param_5)) {
        bVar11 = uVar2 + param_5 <= uVar7;
      }
      uVar9 = param_5;
      if (!bVar11) {
        uVar9 = uVar7 - uVar2;
        iVar10 = -(uint)(uVar7 < uVar2);
      }
      iVar5 = (**(code **)(param_1 + 0x20))(param_1,uVar4,1,local_44,param_7);
      if (iVar5 != 0) {
        return 0xffffffff;
      }
      FUN_00214b30(param_6,local_44 + uVar2,uVar9);
      bVar11 = CARRY4(param_3,uVar9);
      param_3 = param_3 + uVar9;
      param_6 = param_6 + uVar9;
      param_4 = param_4 + iVar10 + (uint)bVar11;
      param_5 = param_5 - uVar9;
    }
    if (uVar7 <= param_5) {
      uVar8 = uVar8 & param_3;
      iVar10 = FUN_00200ac8(uVar3 - uVar8,-(uint)(uVar3 < uVar8));
      if (iVar10 != 0) {
        uVar4 = FUN_00200ac8(uVar8,0,uVar7,0);
        iVar5 = (**(code **)(param_1 + 0x20))(param_1,uVar4,iVar10,param_6,param_7);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
      }
      uVar8 = uVar7 * iVar10;
      param_6 = param_6 + uVar8;
      bVar11 = CARRY4(param_3,uVar8);
      param_3 = param_3 + uVar8;
      param_4 = param_4 + bVar11;
      param_5 = param_5 - uVar8;
    }
    if ((param_5 != 0) && (uVar8 = uVar6 & uVar7 - 1, uVar8 != 0)) {
      bVar11 = uVar1 <= param_4;
      if (param_4 == uVar1) {
        bVar11 = uVar6 <= param_3;
      }
      if (!bVar11) {
        uVar4 = FUN_00200ac8(uVar3,0,uVar7,0);
        iVar10 = (**(code **)(param_1 + 0x20))(param_1,uVar4,1,local_44,param_7);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        FUN_00214b30(param_6,local_44,uVar8);
        return 0;
      }
    }
  }
  return 0;
}


// ==== FUN_00201318 @ 00201318 ====

undefined4
FUN_00201318(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint local_58;
  int iStack_54;
  
  iVar10 = *(int *)(param_1 + 0x14);
  if (iVar10 == 0) {
    iVar10 = **(int **)(DAT_00201504 + 0x20132e + DAT_00201508) + 0x48800;
  }
  uVar8 = *(uint *)(param_1 + 4);
  if (param_5 != 0) {
    local_58 = param_5;
    iStack_54 = 0;
    uVar2 = param_5 + param_3;
    uVar1 = param_4 + CARRY4(param_5,param_3);
    uVar6 = uVar8 - 1 & param_3;
    uVar9 = -uVar8;
    uVar7 = uVar2 & uVar9;
    if (uVar6 != 0) {
      uVar3 = FUN_00200ac8(uVar9 & param_3,0);
      bVar11 = !CARRY4(param_5,uVar6);
      if (!CARRY4(param_5,uVar6)) {
        bVar11 = param_5 + uVar6 <= uVar8;
      }
      if (!bVar11) {
        local_58 = uVar8 - uVar6;
        iStack_54 = -(uint)(uVar8 < uVar6);
      }
      iVar4 = (**(code **)(param_1 + 0x20))(param_1,uVar3,1,iVar10,param_7);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      FUN_00214b30(uVar6 + iVar10,param_6,local_58);
      iVar4 = (**(code **)(param_1 + 0x24))(param_1,uVar3,1,iVar10,param_7);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      bVar11 = CARRY4(param_3,local_58);
      param_3 = param_3 + local_58;
      param_6 = param_6 + local_58;
      param_4 = param_4 + iStack_54 + (uint)bVar11;
      param_5 = param_5 - local_58;
    }
    if (uVar8 <= param_5) {
      uVar9 = uVar9 & param_3;
      iVar4 = FUN_00200ac8(uVar7 - uVar9,-(uint)(uVar7 < uVar9));
      if (iVar4 != 0) {
        uVar3 = FUN_00200ac8(uVar9,0,uVar8,0);
        iVar5 = (**(code **)(param_1 + 0x24))(param_1,uVar3,iVar4,param_6,param_7);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
      }
      uVar9 = uVar8 * iVar4;
      param_6 = param_6 + uVar9;
      bVar11 = CARRY4(param_3,uVar9);
      param_3 = param_3 + uVar9;
      param_4 = param_4 + bVar11;
      param_5 = param_5 - uVar9;
    }
    if ((param_5 != 0) && (uVar9 = uVar2 & uVar8 - 1, uVar9 != 0)) {
      bVar11 = uVar1 <= param_4;
      if (param_4 == uVar1) {
        bVar11 = uVar2 <= param_3;
      }
      if (!bVar11) {
        uVar3 = FUN_00200ac8(uVar7,0,uVar8,0);
        iVar4 = (**(code **)(param_1 + 0x20))(param_1,uVar3,1,iVar10,param_7);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        FUN_00214b30(iVar10,param_6,uVar9);
        iVar10 = (**(code **)(param_1 + 0x24))(param_1,uVar3,1,iVar10,param_7);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        return 0;
      }
    }
  }
  return 0;
}


// ==== FUN_0020150c @ 0020150c ====

undefined4 FUN_0020150c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00210798(DAT_0020154c + 0x20151e,0x2f,DAT_00201550 + 0x201520,param_4,param_4);
  }
  iVar2 = DAT_00201554;
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[4] = iVar2 + 0x201530;
  do {
    *(undefined1 *)(param_1[4] + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x400);
  iVar2 = param_1[4];
  param_1[2] = iVar2;
  param_1[3] = iVar2;
  param_1[5] = iVar2 + param_2;
  return 1;
}


// ==== FUN_00201558 @ 00201558 ====

undefined4 FUN_00201558(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00210798(DAT_00201598 + 0x20156a,0x45,DAT_0020159c + 0x20156c,param_4,param_4);
  }
  iVar2 = DAT_002015a0;
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[4] = iVar2 + 0x20157c;
  do {
    *(undefined1 *)(param_1[4] + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x400);
  iVar2 = param_1[4];
  param_1[2] = iVar2;
  param_1[3] = iVar2;
  param_1[5] = iVar2 + param_2;
  return 1;
}


// ==== FUN_002015a4 @ 002015a4 ====

uint FUN_002015a4(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  puVar3 = (undefined1 *)param_1[2];
  puVar6 = (undefined1 *)param_1[5];
  puVar7 = (undefined1 *)param_1[4];
  uVar2 = 0;
  if (param_3 != 0) {
    uVar5 = *param_1;
    if (param_3 < *param_1) {
      uVar5 = param_3;
    }
    for (uVar2 = 0; uVar2 != uVar5; uVar2 = uVar2 + 1) {
      puVar4 = puVar3 + 1;
      uVar1 = *puVar3;
      puVar3 = puVar4;
      if (puVar4 == puVar6) {
        puVar3 = puVar7;
      }
      *(undefined1 *)(param_2 + uVar2) = uVar1;
    }
    param_1[2] = (uint)puVar3;
    *param_1 = *param_1 - uVar2;
  }
  return uVar2;
}


// ==== FUN_002015d8 @ 002015d8 ====

void FUN_002015d8(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar5 = (undefined1 *)param_1[5];
  puVar6 = (undefined1 *)param_1[4];
  iVar2 = 0;
  puVar3 = (undefined1 *)param_1[3];
  while (iVar2 != param_3) {
    puVar1 = (undefined1 *)(param_2 + iVar2);
    iVar2 = iVar2 + 1;
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar1;
    puVar3 = puVar4;
    if (puVar4 == puVar5) {
      puVar3 = puVar6;
    }
  }
  param_1[3] = (int)puVar3;
  *param_1 = *param_1 + iVar2;
  return;
}


// ==== FUN_00201888 @ 00201888 ====

void FUN_00201888(void)

{
  FUN_00210798(DAT_00201898 + 0x201892,0x29,DAT_0020189c + 0x201894);
  return;
}


// ==== FUN_00201ce0 @ 00201ce0 ====

void FUN_00201ce0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  local_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_00214b20(&local_20,0,0x10);
  FUN_002063c8(&local_20);
  uVar1 = DAT_00201d78;
  iVar3 = DAT_00201d80 + 0x201d02;
  FUN_002127e8(DAT_00201d84 + 0x201d0a,iVar3,local_20 + iStack_1c + local_18 + local_14);
  iVar2 = DAT_00201d8c;
  FUN_002127e8(DAT_00201d88 + 0x201d1a,iVar3,uVar1);
  FUN_002127e8(DAT_00201d90 + 0x201d2a,iVar3,0x200);
  piVar4 = *(int **)(iVar2 + 0x201d2c + DAT_00201d94);
  iVar2 = DAT_00201d98 + 0x201d3c;
  *piVar4 = DAT_00201d7c;
  FUN_002127e8(iVar2,iVar3);
  FUN_002127e8(DAT_00201d9c + 0x201d4e,iVar3,*piVar4 + 0x178780);
  FUN_002127e8(DAT_00201da0 + 0x201d62,iVar3,*piVar4 + 0x178880);
  FUN_00214b20(*piVar4,0,uVar1);
  return;
}


// ==== FUN_00201da4 @ 00201da4 ====

undefined4 FUN_00201da4(void)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  byte *pbVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte local_1e4 [4];
  byte local_1e0 [64];
  byte local_1a0 [32];
  byte local_180 [32];
  byte local_160 [32];
  char local_140 [32];
  int local_120 [8];
  char local_100 [32];
  char local_e0 [192];
  
  piVar15 = DAT_00202040;
  iVar22 = DAT_002020b8 + 0x201db6;
  puVar5 = (undefined4 *)(DAT_00202034 + -0x1fc);
  puVar7 = (undefined4 *)(DAT_00202038 + -0x1fc);
  *(undefined4 *)(DAT_0020203c + -0x200) = 0;
  *puVar5 = 0;
  *puVar7 = 0;
  piVar3 = DAT_0020204c;
  do {
    *piVar15 = 0;
    piVar15[0x2c00] = 0;
    piVar13 = piVar15 + 1;
    piVar15[0x82800] = 0;
    piVar15 = piVar13;
  } while (piVar13 != piVar3);
  iVar6 = 0;
  do {
    local_1e0[iVar6 + 0x20] = 0x10;
    local_1a0[iVar6] = 0x10;
    local_180[iVar6] = 0x80;
    local_160[iVar6] = 0x80;
    local_1e0[iVar6] = 0;
    local_140[iVar6] = '\0';
    iVar14 = iVar6 + 1;
    local_100[iVar6] = '\0';
    iVar6 = iVar14;
  } while (iVar14 != 0x20);
  iVar6 = FUN_0021046c();
  if (iVar6 == 0) {
    iVar6 = 0;
    do {
      iVar14 = iVar6 * 0x1010101;
      piVar15 = DAT_00202040;
      do {
        piVar3 = DAT_0020204c;
        *piVar15 = iVar14;
        piVar15[0x2c00] = iVar14;
        piVar13 = piVar15 + 1;
        piVar15[0x82800] = iVar14;
        puVar7 = DAT_002020d4;
        puVar5 = DAT_002020d0;
        piVar15 = piVar13;
      } while (piVar13 != piVar3);
      *DAT_00202098 = 0x55000000;
      puVar11 = DAT_002020d8;
      puVar8 = DAT_002020a0;
      puVar18 = DAT_0020209c;
      *puVar5 = 0x55000000;
      *puVar7 = 0x55000000;
      puVar19 = DAT_002020dc;
      puVar4 = DAT_002020a4;
      uVar9 = ~(~(((*puVar11 | *puVar18 | *puVar8) & 0xaa000000) >> 0xc) << 0xc);
      *puVar11 = uVar9;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      puVar18 = DAT_002020a8;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      puVar8 = DAT_002020ac;
      *DAT_002020ac = *DAT_002020ac | 0xc0000000;
      do {
      } while (((DAT_002020b0[0x2c00] | *DAT_002020b0 | *puVar19) & 0x400) == 0);
      iVar14 = 400;
      do {
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar27 = *DAT_002020e0;
      uVar25 = *DAT_002020e4;
      uVar26 = *DAT_002020b4;
      *puVar4 = *puVar4 & 0x3fffffff;
      *puVar18 = *puVar18 & 0x3fffffff;
      bVar21 = (byte)iVar6;
      *puVar8 = *puVar8 & 0x3fffffff;
      iVar14 = DAT_00202454;
      uVar9 = 0;
      do {
        if ((1 << (uVar9 & 0xff) & (uVar25 | uVar27 | uVar26)) == 0) {
          if (local_1e0[uVar9 + 0x20] == 0x10) {
            local_1e0[uVar9 + 0x20] = bVar21;
            local_1a0[uVar9] = bVar21;
          }
          else {
            if (local_100[uVar9] != '\0') goto LAB_002020e8;
            local_1a0[uVar9] = bVar21;
          }
        }
        else {
LAB_002020e8:
          if (local_1a0[uVar9] != 0x10) {
            local_100[uVar9] = '\x01';
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x10);
    FUN_002127e8(DAT_00202450 + 0x202112);
    iVar6 = 0;
    do {
      iVar24 = iVar6 + 1;
      FUN_002127e8(iVar14 + 0x202118,iVar6,local_1e0[iVar6 + 0x20],local_1a0[iVar6]);
      iVar6 = iVar24;
    } while (iVar24 != 0x20);
    FUN_002127e8(DAT_00202458 + 0x202134,0x80);
    puVar5 = DAT_0020240c;
    do {
      puVar7 = DAT_00202410;
      *puVar5 = 0;
      puVar5[0x2c00] = 0;
      puVar16 = puVar5 + 1;
      puVar5[0x82800] = 0;
      puVar5 = puVar16;
    } while (puVar16 != puVar7);
    iVar6 = 0;
    do {
      piVar15 = DAT_00202414;
      iVar14 = iVar6 * 0x1010101;
      *DAT_00202414 = iVar14;
      piVar15[0x2c00] = iVar14;
      *DAT_00202418 = iVar14;
      puVar5 = DAT_00202420;
      *DAT_0020241c = 0x55000000;
      puVar7 = DAT_00202424;
      *puVar5 = 0x55000000;
      puVar18 = DAT_00202428;
      *puVar7 = 0x55000000;
      puVar4 = DAT_00202428;
      uVar9 = ~(~(((*DAT_0020242c | *puVar18 | *DAT_00202430) & 0xaa000000) >> 0xc) << 0xc);
      *DAT_00202428 = uVar9;
      puVar4[0x2c00] = uVar9;
      *DAT_00202430 = uVar9;
      puVar18 = DAT_00202434;
      *DAT_00202434 = *DAT_00202434 | 0xc0000000;
      puVar18[0x2c00] = puVar18[0x2c00] | 0xc0000000;
      *puVar8 = *puVar8 | 0xc0000000;
      puVar18 = DAT_00202434;
      do {
      } while (((*DAT_0020243c | *DAT_00202438 | *DAT_00202440) & 0x400) == 0);
      iVar14 = 400;
      do {
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar27 = *DAT_00202444;
      uVar26 = *DAT_00202448;
      uVar9 = *DAT_0020244c;
      bVar21 = (byte)iVar6;
      *DAT_00202434 = *DAT_00202434 & 0x3fffffff;
      puVar18[0x2c00] = puVar18[0x2c00] & 0x3fffffff;
      *puVar8 = *puVar8 & 0x3fffffff;
      uVar25 = 0;
      do {
        if ((1 << (uVar25 & 0xff) & (uVar26 | uVar27 | uVar9)) == 0) {
          if (local_180[uVar25] == 0x80) {
            local_180[uVar25] = bVar21;
            local_160[uVar25] = bVar21;
          }
          else {
            if (local_140[uVar25] != '\0') goto LAB_00202270;
            local_160[uVar25] = bVar21;
          }
        }
        else {
LAB_00202270:
          if (local_160[uVar25] != 0x80) {
            local_140[uVar25] = '\x01';
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x80);
    iVar14 = DAT_0020245c + 0x202294;
    iVar6 = 0x10;
    do {
      bVar21 = local_180[iVar6];
      uVar25 = (uint)bVar21;
      iVar10 = iVar6 + 8;
      uVar27 = (uint)local_180[iVar6 + 8];
      bVar1 = local_160[iVar6 + 8];
      uVar9 = (uint)bVar1;
      local_180[iVar6] = local_180[iVar6 + 8];
      local_180[iVar6 + 8] = bVar21;
      bVar21 = local_160[iVar6];
      uVar26 = (uint)bVar21;
      local_160[iVar6] = bVar1;
      local_160[iVar6 + 8] = bVar21;
      iVar23 = iVar6 + 1;
      FUN_002127e8(iVar14,iVar6,iVar10,iVar6,uVar27,uVar9,iVar10,uVar25,uVar26);
      iVar24 = DAT_00202464;
      iVar6 = iVar23;
    } while (iVar23 != 0x18);
    FUN_002127e8(DAT_00202460 + 0x2022da);
    iVar6 = 0;
    do {
      iVar14 = iVar6 + 1;
      FUN_002127e8(iVar24 + 0x2022e0,iVar6,local_180[iVar6],local_160[iVar6],uVar27,uVar9,iVar10,
                   uVar25,uVar26);
      iVar6 = iVar14;
    } while (iVar14 != 0x20);
    uVar25 = 0;
    uVar27 = 0;
    uVar26 = 0;
    iVar6 = DAT_00202468 + 0x2022fe;
    iVar14 = DAT_0020246c + 0x20230a;
    iVar24 = DAT_00202470 + 0x202314;
    uVar9 = 0;
    do {
      bVar21 = local_1e0[uVar9 + 0x20];
      if ((bVar21 != 0) || (local_180[uVar9] != 0)) {
        FUN_002127e8(iVar6,uVar9,bVar21,local_180[uVar9]);
      }
      uVar28 = (uint)(byte)((local_1a0[uVar9] + 1) - bVar21);
      uVar17 = (local_160[uVar9] + 1) - (uint)local_180[uVar9] & 0xff;
      if (uVar28 < uVar17) {
        if ((int)uVar27 < (int)(uVar17 - uVar28)) {
          uVar27 = uVar17 - uVar28 & 0xff;
          FUN_002127e8(iVar14,uVar9,uVar27);
        }
        uVar17 = (uVar28 + uVar17) - 1;
        if ((int)uVar25 < (int)uVar17) {
          uVar25 = uVar17 & 0xff;
        }
      }
      uVar17 = uVar9 + 1;
      if ((uVar17 & 7) == 0) {
        iVar10 = (int)(uVar27 + 1) >> 1;
        FUN_002127e8(iVar24,uVar9 >> 3,iVar10);
        uVar25 = uVar9 - 7;
        uVar26 = uVar26 | iVar10 << (uVar25 & 0xff);
        for (; uVar25 <= uVar9; uVar25 = uVar25 + 1) {
          uVar28 = (uint)local_1a0[uVar25];
          uVar27 = (uint)local_160[uVar25];
          if (uVar28 < uVar27) {
            cVar2 = -(char)((int)(uVar27 - uVar28) / 2);
          }
          else {
            cVar2 = (char)((int)(uVar28 - uVar27) / 2);
          }
          local_1e0[uVar25] = (char)iVar10 + cVar2;
        }
        uVar25 = 0;
        uVar27 = 0;
      }
      puVar8 = DAT_00202704;
      puVar18 = DAT_002026fc;
      uVar9 = uVar17;
    } while (uVar17 != 0x20);
    *DAT_00202700 = uVar26;
    *puVar18 = uVar26;
    *puVar8 = uVar26;
    iVar6 = 0;
    do {
      iVar14 = iVar6 + 4;
      *(uint *)((int)local_120 + iVar6) =
           (uint)local_1e0[iVar6] + (uint)local_1e0[iVar6 + 1] * 0x100 +
           (uint)local_1e0[iVar6 + 2] * 0x10000 + (uint)local_1e0[iVar6 + 3] * 0x1000000;
      iVar6 = iVar14;
    } while (iVar14 != 0x20);
    uVar9 = 0;
    iVar6 = *(int *)(iVar22 + DAT_00202770);
    do {
      uVar25 = uVar9 >> 1;
      uVar26 = uVar9 & 1;
      iVar14 = local_120[uVar9];
      uVar9 = uVar9 + 1;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_00202708 + uVar26) * 4) = iVar14;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_0020270c + uVar26) * 4) = iVar14;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_00202710 + uVar26) * 4) = iVar14;
    } while (uVar9 != 8);
    iVar22 = *(int *)(iVar22 + DAT_00202774);
    puVar18 = DAT_0020272c;
    do {
      puVar4 = DAT_0020274c;
      puVar8 = puVar18 + 0x2c00;
      puVar11 = puVar18 + 0x82800;
      uVar9 = (uint)*(byte *)((int)puVar18 + DAT_00202740 + iVar22) +
              ((*puVar8 | *puVar11 | *puVar18) & 0xff) |
              ((uint)*(byte *)((int)puVar18 + DAT_00202778 + iVar22) +
              ((*puVar8 | *puVar11 | *puVar18) >> 0x18)) * 0x1000000 |
              ((uint)*(byte *)((int)puVar18 + DAT_00202744 + iVar22) +
              (((*puVar11 | *puVar8 | *puVar18) & 0xffff) >> 8)) * 0x100 |
              ((uint)*(byte *)((int)puVar18 + DAT_00202748 + iVar22) +
              (((*puVar8 | *puVar11 | *puVar18) & 0xffffff) >> 0x10)) * 0x10000;
      puVar19 = puVar18 + 1;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      *puVar11 = uVar9;
      puVar11 = DAT_00202750;
      puVar8 = DAT_0020272c;
      puVar18 = puVar19;
    } while (puVar19 != puVar4);
    FUN_002127e8(DAT_0020277c + 0x202620);
    puVar19 = DAT_00202724;
    puVar18 = DAT_0020271c;
    FUN_002127e8(DAT_00202780 + 0x202638,*puVar11 | *puVar8 | *DAT_00202754);
    puVar8 = DAT_00202728;
    FUN_002127e8(DAT_00202784 + 0x20264e,*DAT_00202718 | *DAT_00202714 | *puVar18);
    FUN_002127e8(DAT_00202788 + 0x202672,*puVar19 | puVar4[-6] | *puVar8);
    FUN_002127e8(DAT_0020278c + 0x202686,*DAT_0020275c | *DAT_00202758 | puVar18[2]);
    FUN_002127e8(DAT_00202790 + 0x20269e,puVar19[2] | puVar4[-4] | puVar8[2]);
    FUN_002127e8(DAT_00202794 + 0x2026b4,*DAT_00202764 | *DAT_00202760 | puVar18[4]);
    FUN_002127e8(DAT_00202798 + 0x2026cc,puVar19[4] | puVar4[-2] | puVar8[4]);
    FUN_002127e8(DAT_0020279c + 0x2026e2,*DAT_0020276c | *DAT_00202768 | puVar18[6]);
    FUN_002127e8(DAT_002027a0 + 0x2026f4,puVar19[-0x80] | puVar4[-0x86] | puVar8[-0x80]);
  }
  else {
    iVar22 = 0;
    do {
      puVar11 = DAT_002029f8;
      puVar5 = DAT_00202964;
      *DAT_00202960 = 0x55000000;
      *puVar5 = 0x55000000;
      puVar8 = DAT_00202970;
      puVar18 = DAT_0020296c;
      *DAT_00202968 = 0x55000000;
      puVar4 = DAT_00202974;
      uVar9 = ~(~(((*puVar11 | *puVar18 | *puVar8) & 0xaa000000) >> 0xc) << 0xc);
      *puVar11 = uVar9;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      puVar18 = DAT_00202978;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      puVar8 = DAT_0020297c;
      *DAT_0020297c = *DAT_0020297c | 0xc0000000;
      do {
      } while (-1 < (int)((*DAT_00202984 | *DAT_00202980 | *DAT_00202988) << 0x15));
      iVar6 = 400;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar9 = *DAT_0020298c | *DAT_002029fc | *DAT_00202990;
      *puVar4 = *puVar4 & 0x3fffffff;
      *puVar18 = *puVar18 & 0x3fffffff;
      *puVar8 = *puVar8 & 0x3fffffff;
      if (uVar9 == 0xffffffff) break;
      uVar25 = 0;
      do {
        if (((1 << (uVar25 & 0xff) & uVar9) == 0) && (local_100[uVar25] == '\0')) {
          local_1e0[uVar25] = (byte)iVar22;
        }
        else {
          local_100[uVar25] = '\x01';
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0x20);
      iVar6 = 0;
      do {
        iVar14 = iVar6 + 4;
        *(uint *)((int)local_120 + iVar6) =
             (uint)local_1e0[iVar6] + (uint)local_1e0[iVar6 + 1] * 0x100 +
             (uint)local_1e0[iVar6 + 2] * 0x10000 + (uint)local_1e0[iVar6 + 3] * 0x1000000;
        puVar5 = DAT_00202994;
        iVar6 = iVar14;
      } while (iVar14 != 0x20);
      do {
        uVar12 = *(undefined4 *)(DAT_00202998 + (int)local_120 + (int)puVar5);
        *puVar5 = uVar12;
        puVar5[0x2c00] = uVar12;
        puVar7 = puVar5 + 1;
        puVar5[0x82800] = uVar12;
        puVar5 = puVar7;
      } while (puVar7 != DAT_0020299c);
      iVar22 = iVar22 + 1;
    } while (iVar22 != 0x10);
    pbVar20 = local_1e4 + 3;
    iVar22 = 0;
    do {
      local_e0[iVar22] = -1;
      pbVar20 = pbVar20 + 1;
      bVar21 = *pbVar20;
      iVar6 = iVar22 + 6;
      local_e0[iVar22 + 1] = -1;
      local_e0[iVar22 + 2] = -1;
      local_e0[iVar22 + 3] = -1;
      local_e0[iVar22 + 4] = '\0';
      local_e0[iVar22 + 5] = bVar21;
      iVar22 = iVar6;
    } while (iVar6 != 0xc0);
    iVar22 = 0;
    do {
      piVar3 = DAT_00202c80;
      piVar15 = DAT_00202c7c;
      iVar6 = iVar22 * 0x1010101;
      *DAT_00202c84 = iVar6;
      *piVar15 = iVar6;
      *piVar3 = iVar6;
      puVar18 = DAT_00202c8c;
      uVar9 = ~(~(((*DAT_00202c88 | piVar15[10] | piVar3[10]) & 0xff000000) >> 0xc) << 0xc);
      *DAT_00202c88 = uVar9;
      piVar15[10] = uVar9;
      piVar3[10] = uVar9;
      puVar8 = DAT_00202c90;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      *puVar8 = *puVar8 | 0xc0000000;
      puVar8 = DAT_00202c90;
      puVar18 = DAT_00202c8c;
      do {
      } while (-1 < (int)((*DAT_00202c98 | *DAT_00202c94 | *DAT_00202c9c) << 0x15));
      iVar6 = 400;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar25 = *DAT_00202ca4 | *DAT_00202ca0 | *DAT_00202ca8;
      *puVar4 = *puVar4 & 0x3fffffff;
      *puVar18 = *puVar18 & 0x3fffffff;
      *puVar8 = *puVar8 & 0x3fffffff;
      piVar3 = DAT_00202c80;
      piVar15 = DAT_00202c7c;
      iVar6 = 0;
      uVar9 = 0;
      do {
        if ((local_e0[iVar6] == -1) && (-1 < (int)((uVar25 >> (uVar9 & 0xff)) << 0x1f))) {
          local_e0[iVar6] = (char)iVar22;
        }
        if ((local_e0[iVar6] != -1) && (local_e0[iVar6 + 1] == -1)) {
          if ((int)((uVar25 >> (uVar9 & 0xff)) << 0x1f) < 0) {
            local_e0[iVar6 + 1] = (char)iVar22 + -1;
          }
          else {
            if (iVar22 != 0x7f) goto LAB_00202b34;
            local_e0[iVar6 + 1] = '\x7f';
          }
          if ((int)local_e0[iVar6 + 3] - (int)local_e0[iVar6 + 2] <
              (int)local_e0[iVar6 + 1] - (int)local_e0[iVar6]) {
            local_e0[iVar6 + 3] = local_e0[iVar6 + 1];
            local_e0[iVar6 + 2] = local_e0[iVar6];
          }
          local_e0[iVar6 + 1] = -1;
          local_e0[iVar6] = -1;
        }
LAB_00202b34:
        iVar6 = iVar6 + 6;
        uVar9 = uVar9 + 1;
      } while (iVar6 != 0xc0);
      iVar22 = iVar22 + 1;
    } while (iVar22 != 0x80);
    iVar22 = 0;
    do {
      if ((local_e0[iVar22 + 3] != -1) && (local_e0[iVar22 + 2] != -1)) {
        local_e0[iVar22 + 4] = (char)(((int)local_e0[iVar22 + 2] + (int)local_e0[iVar22 + 3]) / 2);
      }
      iVar22 = iVar22 + 6;
    } while (iVar22 != 0xc0);
    iVar22 = 0;
    do {
      iVar6 = 0;
      bVar21 = 0;
      do {
        iVar14 = iVar6 + iVar22 * 0x30;
        iVar6 = iVar6 + 6;
        if (bVar21 < (byte)local_e0[iVar14 + 4]) {
          bVar21 = local_e0[iVar14 + 4];
        }
      } while (iVar6 != 0x30);
      local_1e4[iVar22] = bVar21;
      iVar22 = iVar22 + 1;
    } while (iVar22 != 4);
    iVar22 = (uint)local_1e4[3] * 0x10000 + (uint)local_1e4[1] * 0x100 + (uint)local_1e4[0] +
             (uint)local_1e4[2] * 0x1000000;
    *DAT_00202c84 = iVar22;
    *piVar15 = iVar22;
    *piVar3 = iVar22;
    uVar9 = 0;
    pbVar20 = (byte *)(local_e0 + 5);
    do {
      iVar22 = DAT_00202cac;
      bVar21 = local_1e4[uVar9 >> 3];
      iVar6 = 0;
      do {
        iVar14 = iVar6 + 6;
        uVar25 = (uint)pbVar20[iVar6] + ((uint)bVar21 - (uint)pbVar20[iVar6 + -1]);
        if (0xe < uVar25) {
          uVar25 = 0xf;
        }
        pbVar20[iVar6] = (byte)uVar25;
        iVar6 = iVar14;
      } while (iVar14 != 0x18);
      iVar6 = (uint)pbVar20[0xc] * 0x10000 + (uint)pbVar20[6] * 0x100 + (uint)*pbVar20 +
              (uint)pbVar20[0x12] * 0x1000000;
      *(int *)(DAT_00202cac + uVar9) = iVar6;
      *(int *)(iVar22 + 0xb000 + uVar9) = iVar6;
      *(int *)(DAT_00202cb0 + uVar9) = iVar6;
      uVar9 = uVar9 + 4;
      pbVar20 = pbVar20 + 0x18;
    } while (uVar9 != 0x20);
  }
  return 0;
}


// ==== FUN_00202d0c @ 00202d0c ====

uint FUN_00202d0c(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  puVar1 = DAT_00202dfc;
  *DAT_00202dfc = 0x55000000;
  puVar2 = DAT_00202e00;
  puVar1[0x2c00] = 0x55000000;
  puVar7 = DAT_00202e28;
  puVar6 = DAT_00202e18;
  puVar11 = puVar2 + -0xe;
  *DAT_00202e04 = 0x55000000;
  puVar5 = DAT_00202e10;
  puVar4 = DAT_00202e0c;
  puVar3 = DAT_00202e08;
  puVar12 = DAT_00202e08 + -0xe;
  param_1 = param_1 | (*puVar2 | *DAT_00202e08 | *DAT_00202e0c) & 0xaa000000;
  *puVar2 = param_1;
  *puVar3 = param_1;
  *puVar4 = param_1;
  *puVar11 = *puVar11 | 0x80000000;
  *puVar12 = *puVar12 | 0x80000000;
  puVar3 = DAT_00202e14;
  *DAT_00202e14 = *DAT_00202e14 | 0x80000000;
  puVar8 = DAT_00202e28;
  puVar4 = DAT_00202e18;
  puVar2 = DAT_00202e10;
  do {
  } while (((*puVar7 | *puVar6 | *puVar5) & 0x400) == 0);
  *puVar11 = *puVar11 & 0x7fffffff;
  *puVar12 = *puVar12 & 0x7fffffff;
  *puVar3 = *puVar3 & 0x7fffffff;
  *puVar11 = *puVar11 | 0x40000000;
  *puVar12 = *puVar12 | 0x40000000;
  *puVar3 = *puVar3 | 0x40000000;
  do {
  } while (-1 < (int)((*puVar8 | *puVar4 | *puVar2) << 0x15));
  iVar9 = 400;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar10 = *DAT_00202e20;
  uVar14 = *DAT_00202e1c;
  uVar13 = *DAT_00202e24;
  *puVar11 = *puVar11 & 0xbfffffff;
  *puVar12 = *puVar12 & 0xbfffffff;
  *puVar3 = *puVar3 & 0xbfffffff;
  return uVar10 | uVar14 | uVar13;
}


// ==== FUN_00202e2c @ 00202e2c ====

void FUN_00202e2c(void)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  uint *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  uint local_1a8 [8];
  char local_187 [39];
  char local_160 [320];
  
  iVar28 = DAT_00203168 + 0x202e46;
  iVar14 = DAT_00203170;
  if ((int)(*DAT_00203118 | DAT_00203118[0x2c00] | *DAT_0020311c) < 0) {
    iVar14 = DAT_0020316c;
  }
  iVar18 = *(int *)(iVar28 + iVar14);
  iVar14 = FUN_00206350();
  puVar12 = DAT_00203160;
  puVar11 = DAT_0020315c;
  puVar1 = DAT_00203158;
  puVar10 = DAT_00203154;
  puVar8 = DAT_00203130;
  puVar7 = DAT_0020312c;
  puVar26 = DAT_00203128;
  puVar22 = DAT_00203124;
  if (iVar14 == 3) {
    uVar15 = 4;
  }
  else {
    uVar15 = 6;
  }
  pcVar21 = local_187 + 7;
  do {
    pcVar21[-8] = '\0';
    pcVar19 = pcVar21 + 10;
    pcVar21[-7] = -1;
    pcVar21[-5] = '\0';
    pcVar21[-4] = -1;
    pcVar21[-2] = -1;
    pcVar21[-1] = -1;
    *pcVar21 = '\0';
    pcVar21[1] = '\0';
    pcVar21[-6] = '\0';
    pcVar21[-3] = '\0';
    pcVar21 = pcVar19;
  } while (pcVar19 != local_160 + 8);
  iVar14 = 0;
  do {
    local_160[iVar14] = '\0';
    iVar16 = iVar14 + 10;
    local_160[iVar14 + 1] = -1;
    local_160[iVar14 + 3] = '\0';
    local_160[iVar14 + 4] = -1;
    local_160[iVar14 + 2] = '\0';
    local_160[iVar14 + 5] = '\0';
    iVar14 = iVar16;
  } while (iVar16 != 0x140);
  *DAT_00203120 = 0;
  puVar9 = DAT_00203134;
  *puVar10 = 0;
  puVar10 = DAT_00203138;
  *puVar1 = 0;
  puVar1 = DAT_0020313c;
  *puVar11 = 0;
  *puVar12 = 0;
  *puVar7 = 0;
  *puVar8 = 0;
  *puVar22 = 0;
  *puVar26 = 0;
  puVar26 = DAT_00203144;
  puVar22 = DAT_00203140;
  *puVar9 = 0;
  *puVar26 = 0;
  *puVar22 = 0;
  puVar9[1] = 0;
  *puVar10 = 0;
  *puVar1 = 0;
  uVar20 = 0xf;
  do {
    puVar7 = DAT_00203150;
    puVar26 = DAT_0020314c;
    puVar22 = DAT_00203148;
    uVar17 = uVar20 << 8 | uVar20 << 4 | uVar20 | uVar20 << 0xc |
             (*DAT_00203150 | *DAT_0020314c | *DAT_00203148) & 0xffff0000;
    *DAT_0020314c = uVar17;
    *puVar22 = uVar17;
    *puVar7 = uVar17;
    uVar17 = FUN_00202d0c(0xfff);
    iVar14 = 0;
    do {
      if ((local_187[iVar14 * 10 + 3] == -1) && ((0xff << (iVar14 * 8 & 0xffU) & uVar17) == 0)) {
        local_187[iVar14 * 10 + 3] = (char)uVar20;
      }
      iVar16 = 0;
      do {
        iVar27 = iVar16 * 10 + iVar14 * 0x50 + -0x160;
        if ((local_160[iVar27 + 0x164] == -1) &&
           ((1 << (iVar16 + iVar14 * 8 & 0xffU) & uVar17) == 0)) {
          local_160[iVar27 + 0x164] = (char)uVar20;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 8);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 4);
    bVar29 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar29);
  uVar20 = 0xf;
  *puVar26 = *puVar26 & 0xffff0000;
  *puVar22 = *puVar22 & 0xffff0000;
  *puVar7 = *puVar7 & 0xffff0000;
  do {
    puVar26 = DAT_00203158;
    puVar22 = DAT_00203154;
    uVar17 = uVar20 << 8 | uVar20 << 4 | uVar20 | uVar20 << 0xc;
    *DAT_00203120 = uVar17;
    *puVar22 = uVar17;
    *puVar26 = uVar17;
    puVar26 = DAT_00203160;
    puVar8 = DAT_00203130;
    puVar7 = DAT_0020312c;
    uVar17 = uVar20 << 0x10 | uVar20 << 0x14 | uVar20 << 0x18 | uVar20 << 0x1c | uVar17;
    *DAT_0020315c = uVar17;
    puVar22 = DAT_00203124;
    *puVar26 = uVar17;
    puVar10 = DAT_00203134;
    puVar26 = DAT_00203128;
    *puVar7 = uVar17;
    *puVar8 = uVar17;
    puVar8 = DAT_00203144;
    *puVar22 = uVar17;
    puVar7 = DAT_00203140;
    *puVar26 = uVar17;
    puVar1 = DAT_00203164;
    *puVar10 = uVar17;
    puVar26 = DAT_0020313c;
    puVar22 = DAT_00203138;
    *puVar8 = uVar17;
    *puVar7 = uVar17;
    *puVar1 = uVar17;
    *puVar22 = uVar17;
    *puVar26 = uVar17;
    uVar17 = FUN_00202d0c(0xfff);
    iVar14 = 0;
    do {
      if ((local_187[iVar14 * 10] == -1) && ((0xff << (iVar14 * 8 & 0xffU) & uVar17) == 0)) {
        local_187[iVar14 * 10] = (char)uVar20;
      }
      iVar16 = 0;
      do {
        iVar27 = iVar16 * 10 + iVar14 * 0x50 + -0x160;
        if ((local_160[iVar27 + 0x161] == -1) &&
           ((1 << (iVar16 + iVar14 * 8 & 0xffU) & uVar17) == 0)) {
          local_160[iVar27 + 0x161] = (char)uVar20;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 8);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 4);
    bVar29 = uVar20 != 0;
    uVar20 = uVar20 - 1;
  } while (bVar29);
  pcVar21 = local_187 + 3;
  pcVar19 = local_187 + 7;
  do {
    cVar4 = (pcVar19[-4] + '\x01') - pcVar19[-5];
    pcVar19[-3] = cVar4;
    iVar14 = (int)cVar4;
    cVar4 = (pcVar19[-7] + '\x01') - pcVar19[-8];
    pcVar19[-6] = cVar4;
    iVar16 = (int)cVar4;
    cVar4 = (char)uVar15;
    if (iVar16 == iVar14) {
      pcVar21[4] = cVar4;
LAB_0020318e:
      pcVar21[5] = cVar4;
    }
    else if (iVar14 < iVar16) {
      pcVar21[5] = cVar4;
      uVar20 = (byte)pcVar21[4] + uVar15 + ((int)pcVar19[-6] - (int)pcVar19[-3]) / 2;
      if ((uVar20 & 0xff) < 0x10) {
        pcVar21[4] = (char)uVar20;
      }
      else {
        pcVar21[4] = '\x0f';
      }
    }
    else {
      uVar20 = (iVar14 - iVar16) - (iVar14 - iVar16 >> 0x1f);
      cVar13 = (char)(uVar20 * 0x800000 >> 0x18);
      pcVar21[5] = cVar13;
      if ((uVar20 & 0x1ff) >> 1 <= uVar15) {
        pcVar21[4] = cVar4 - cVar13;
        goto LAB_0020318e;
      }
      pcVar21[4] = '\0';
    }
    pcVar21 = pcVar21 + 10;
    pcVar19 = pcVar19 + 10;
  } while (pcVar21 != local_160 + 4);
  local_1a8[0] = 0;
  uVar20 = 0;
  local_1a8[4] = 0;
  local_1a8[5] = 0;
  local_1a8[1] = 0;
  local_1a8[6] = 0;
  local_1a8[2] = 0;
  local_1a8[7] = 0;
  local_1a8[3] = 0;
  puVar24 = *(undefined4 **)(iVar28 + DAT_002034f8);
  uVar25 = *puVar24;
  iVar14 = 0;
  do {
    cVar13 = (local_160[iVar14 + 1] - local_160[iVar14]) + '\x01';
    cVar5 = (local_160[iVar14 + 4] + '\x01') - local_160[iVar14 + 3];
    local_160[iVar14 + 2] = cVar13;
    iVar16 = (int)cVar13;
    local_160[iVar14 + 5] = cVar5;
    iVar27 = (int)cVar5;
    if (iVar16 < iVar27) {
      uVar17 = (iVar27 - iVar16) - (iVar27 - iVar16 >> 0x1f);
      cVar13 = (char)(uVar17 * 0x800000 >> 0x18);
      local_160[iVar14 + 7] = cVar13;
      if (uVar15 < (uVar17 & 0x1ff) >> 1) {
        cVar13 = '\0';
LAB_0020323a:
        local_160[iVar14 + 6] = cVar13;
      }
      else {
        local_160[iVar14 + 7] = cVar4;
        local_160[iVar14 + 6] = cVar4 - cVar13;
      }
    }
    else {
      local_160[iVar14 + 7] = cVar4;
      if (iVar27 < iVar16) {
        cVar13 = cVar4 + (char)(((int)local_160[iVar14 + 2] - (int)local_160[iVar14 + 5]) / 2);
        goto LAB_0020323a;
      }
      local_160[iVar14 + 6] = cVar4;
    }
    uVar17 = uVar20 >> 3;
    iVar16 = iVar14 + 10;
    uVar20 = uVar20 + 1;
    cVar13 = local_160[iVar14 + 2];
    cVar5 = local_160[iVar14 + 5];
    if (local_1a8[uVar17] < (uint)(byte)local_160[iVar14 + 7]) {
      local_1a8[uVar17] = (uint)(byte)local_160[iVar14 + 7];
    }
    if ((int)cVar13 + (int)cVar5 < 2) {
      uVar25 = 1;
    }
    iVar14 = iVar16;
    if (iVar16 == 0x140) {
      iVar14 = 0;
      uVar15 = 0;
      *puVar24 = uVar25;
      do {
        uVar20 = uVar15 >> 3;
        if (((uint)(byte)local_160[iVar14 + 7] < local_1a8[uVar20]) &&
           (uVar17 = (local_1a8[uVar20] - (uint)(byte)local_160[iVar14 + 7]) +
                     (uint)(byte)local_160[iVar14 + 6], local_160[iVar14 + 6] = (char)uVar17,
           0xe < (uVar17 & 0xff))) {
          local_160[iVar14 + 6] = '\x0f';
        }
        uVar15 = uVar15 + 1;
        iVar16 = iVar14 + 6;
        iVar14 = iVar14 + 10;
        local_1a8[uVar20 + 4] = local_1a8[uVar20 + 4] + (uint)(byte)local_160[iVar16];
      } while (uVar15 != 0x20);
      puVar22 = local_1a8 + 3;
      do {
        puVar26 = puVar22 + 1;
        puVar22 = puVar22 + 1;
        *puVar22 = *puVar26 >> 3;
      } while (puVar22 != local_1a8 + 7);
      FUN_00206350();
      puVar7 = DAT_00203504;
      iVar14 = DAT_00203500;
      puVar26 = DAT_00203480;
      puVar22 = DAT_0020347c;
      iVar16 = 0;
      uVar15 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(iVar28 + DAT_002034fc) + iVar16);
        iVar27 = iVar16 + 4;
        iVar16 = iVar16 + 1;
        uVar15 = uVar15 | local_1a8[iVar27] << ((*pbVar2 & 0x3f) << 2);
      } while (iVar16 != 4);
      iVar27 = 0;
      *DAT_00203504 = uVar15;
      *puVar22 = uVar15;
      *puVar26 = uVar15;
      iVar16 = DAT_00203508;
      puVar26 = *(uint **)(iVar28 + iVar14);
      *puVar26 = uVar15;
      puVar23 = *(undefined4 **)(iVar28 + iVar16);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      do {
        iVar14 = iVar27 * 10;
        bVar3 = *(byte *)(iVar18 + iVar27);
        iVar27 = iVar27 + 1;
        bVar6 = bVar3 >> 3;
        puVar23[bVar6] = ((byte)local_160[iVar14 + 6] & 0xf) << ((bVar3 & 7) << 2) | puVar23[bVar6];
      } while (iVar27 != 0x20);
      iVar14 = 0;
      do {
        *(undefined4 *)(&DAT_10004200 + iVar14) = *(undefined4 *)((int)puVar23 + iVar14);
        *(undefined4 *)(&DAT_1000f200 + iVar14) = *(undefined4 *)((int)puVar23 + iVar14);
        iVar18 = iVar14 + 4;
        *(undefined4 *)(&DAT_1020e200 + iVar14) = *(undefined4 *)((int)puVar23 + iVar14);
        puVar10 = DAT_00203484;
        puVar8 = DAT_00203480;
        iVar14 = iVar18;
      } while (iVar18 != 0x10);
      iVar14 = 0;
      uVar15 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(iVar28 + DAT_0020350c) + iVar14);
        puVar1 = local_1a8 + iVar14;
        iVar14 = iVar14 + 1;
        uVar15 = uVar15 | *puVar1 << ((*pbVar2 & 0x3f) << 2);
      } while (iVar14 != 4);
      *DAT_00203484 = uVar15;
      puVar10[0x2c00] = uVar15;
      *DAT_00203488 = uVar15;
      **(uint **)(iVar28 + DAT_00203510) = uVar15;
      uVar15 = (uVar15 & 0xf000) + 0x1000 |
               (uVar15 & 0xf00) + 0x100 | (uVar15 & 0xf0) + 0x10 | (uVar15 & 0xf) + 1;
      *puVar7 = uVar15;
      *puVar22 = uVar15;
      *puVar8 = uVar15;
      *puVar26 = uVar15;
      uVar25 = *puVar24;
      iVar14 = 0;
      do {
        iVar28 = iVar14 + 10;
        if ((int)local_187[iVar14 + 4] + (int)local_187[iVar14 + 1] < 2) {
          uVar25 = 1;
        }
        iVar14 = iVar28;
      } while (iVar28 != 0x28);
      *puVar24 = uVar25;
      *puVar24 = 0;
      return;
    }
  } while( true );
}


// ==== FUN_00203514 @ 00203514 ====

int FUN_00203514(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  
  puVar2 = DAT_00203730;
  puVar1 = DAT_0020372c;
  iVar21 = DAT_00203750 + 0x203526;
  puVar18 = *(undefined4 **)(iVar21 + DAT_00203754);
  *puVar18 = 0;
  uVar16 = *puVar1;
  uVar10 = *puVar2;
  *puVar2 = *puVar2 & 0xfffffcff | ((*puVar1 & 0x3f) >> 4) << 8;
  puVar11 = *(undefined4 **)(iVar21 + DAT_00203758);
  *puVar11 = 1;
  iVar7 = FUN_002058ec();
  if (-1 < iVar7) {
    *puVar11 = 0;
    puVar20 = *(undefined4 **)(iVar21 + DAT_0020375c);
    puVar12 = *(undefined4 **)(iVar21 + DAT_00203760);
    *puVar20 = *puVar12;
    puVar19 = *(undefined4 **)(iVar21 + DAT_00203764);
    puVar13 = *(undefined4 **)(iVar21 + DAT_00203768);
    *puVar19 = *puVar13;
    iVar7 = FUN_00204a48();
    if ((-1 < iVar7) && (iVar7 = FUN_00201da4(), -1 < iVar7)) {
      puVar14 = *(uint **)(iVar21 + DAT_0020376c);
      *puVar14 = *DAT_00203738 | *DAT_00203734 | *DAT_0020373c;
      puVar4 = DAT_00203744;
      puVar3 = DAT_00203740;
      if ((*puVar1 & 0x20000) != 0) {
        *puVar18 = 1;
        uVar15 = (*puVar1 & 0xff) >> 6;
        *puVar2 = *puVar2 & 0xfffffcff | uVar15 << 8;
        *puVar1 = *puVar1 & 0xffffffcf | uVar15 << 4;
        *puVar3 = *puVar3 | 8;
        *puVar4 = *puVar4 | 8;
        *puVar11 = 1;
        iVar8 = FUN_002058ec();
        iVar6 = DAT_00203774;
        iVar7 = DAT_00203770;
        if (iVar8 < 0) {
          return iVar8;
        }
        *puVar11 = 0;
        puVar11 = *(undefined4 **)(iVar21 + iVar7);
        puVar12 = (undefined4 *)*puVar12;
        *puVar11 = puVar12;
        puVar9 = *(undefined4 **)(iVar21 + DAT_00203778);
        *puVar9 = *puVar13;
        FUN_002127e8(iVar6 + 0x203624,*puVar12);
        FUN_002127e8(DAT_0020377c + 0x20364c,*(undefined4 *)*puVar9);
        iVar7 = FUN_00204a48();
        if (iVar7 < 0) {
          return iVar7;
        }
        iVar7 = FUN_00201da4();
        if (iVar7 < 0) {
          return iVar7;
        }
        puVar17 = *(uint **)(iVar21 + DAT_00203780);
        *puVar17 = *DAT_00203734 | DAT_00203734[0x2c00] | *DAT_0020373c;
        FUN_002050d4(*puVar11,1);
        FUN_00205134(*puVar9,4);
        puVar5 = DAT_00203748;
        *DAT_00203748 = *puVar17;
        puVar5[0x2c00] = *puVar17;
        *DAT_0020374c = *puVar17;
        *puVar3 = *puVar3 & 0xfffffff7;
        *puVar4 = *puVar4 & 0xfffffff7;
      }
      *puVar18 = 0;
      *puVar1 = uVar16;
      *puVar2 = uVar10;
      FUN_00204c48(*puVar20,1);
      FUN_00204cf0(*puVar19,4);
      iVar7 = DAT_00203784;
      puVar3 = DAT_00203734;
      *DAT_00203734 = *puVar14;
      puVar3[0x2c00] = *puVar14;
      *DAT_0020373c = *puVar14;
      FUN_002127e8(iVar7 + 0x2036f2,*puVar1,*puVar2);
      iVar7 = FUN_00202e2c();
      if (-1 < iVar7) {
        FUN_00204c48(*puVar20,1);
        FUN_00204cf0(*puVar19,4);
      }
    }
  }
  return iVar7;
}


// ==== FUN_00203788 @ 00203788 ====

undefined4 FUN_00203788(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_10004000 + param_1) = param_2;
  *(undefined4 *)(&DAT_1000f000 + param_1) = param_2;
  *(undefined4 *)(param_1 + 0x1020e000) = param_2;
  return 0;
}


// ==== FUN_002037a6 @ 002037a6 ====

undefined4 FUN_002037a6(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(&DAT_1000f000 + param_1) | *(uint *)(&DAT_10004000 + param_1) |
             *(uint *)(param_1 + 0x1020e000);
  return 0;
}


// ==== FUN_002037cc @ 002037cc ====

void FUN_002037cc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_c;
  
  local_c = param_2;
  if (param_1 == 1) {
    FUN_002037a6(4,&local_c,param_3,param_4,1);
    local_c = local_c | 0x4000000;
    FUN_00203788(4);
    FUN_00214da8(2);
    do {
      FUN_002037a6(0x3b8,&local_c);
    } while (-1 < (int)(local_c << 0xf));
  }
  else {
    FUN_002037a6(4,&local_c,param_3,param_4,param_1);
    local_c = local_c & 0xfbffffff;
    FUN_00203788(4);
    FUN_00214da8(2);
    do {
      FUN_002037a6(0x3b8,&local_c);
    } while ((int)(local_c << 0xf) < 0);
  }
  return;
}


// ==== FUN_00203830 @ 00203830 ====

undefined4 FUN_00203830(void)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  int iVar86;
  uint uVar87;
  undefined4 uVar88;
  uint *puVar89;
  int iVar90;
  uint *puVar91;
  uint uVar92;
  int iVar93;
  uint uVar94;
  bool bVar95;
  uint uVar96;
  uint uVar97;
  char *pcVar98;
  uint local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  byte local_98 [12];
  char local_8c [12];
  char local_80 [12];
  char local_74 [12];
  char local_68 [12];
  char local_5c [12];
  char acStack_50 [12];
  char acStack_44 [12];
  char local_38 [12];
  char local_2c [12];
  
  iVar93 = DAT_00203de0;
  local_9c = 0;
  iVar86 = FUN_00206350();
  if (iVar86 != 3) {
    return 0xffffffff;
  }
  bVar6 = FUN_002037a6(0xe4,&local_a4);
  FUN_002037a6(0x88,&local_9c);
  bVar7 = FUN_002037a6(0x63c,&local_a8);
  uVar3 = local_a8;
  local_a8 = local_a8 & 0xfffffff9;
  bVar8 = FUN_00203788(0x63c);
  bVar9 = FUN_002037a6(0xfc,&local_a0);
  bVar10 = FUN_00203788(0xfc,local_a0 & 0x8fffffff);
  bVar11 = FUN_002037a6(0x44,&local_a8);
  uVar4 = local_a8;
  local_a8 = local_a8 & 0xbfffffff;
  bVar12 = FUN_00203788(0x44);
  puVar91 = (uint *)**(int **)(iVar93 + 0x203846 + DAT_00203de4);
  iVar93 = 0;
  do {
    local_68[iVar93] = -1;
    local_80[iVar93] = -1;
    local_2c[iVar93] = -1;
    local_74[iVar93] = -1;
    acStack_44[iVar93] = -1;
    local_8c[iVar93] = -1;
    local_38[iVar93] = -1;
    iVar86 = iVar93 + 1;
    acStack_50[iVar93] = -1;
    iVar93 = iVar86;
  } while (iVar86 != 10);
  bVar13 = FUN_002037a6(0xd8,&local_a8);
  local_a8 = local_a8 | 0xf000;
  bVar95 = true;
  bVar14 = FUN_00203788(0xd8);
  bVar15 = FUN_002037a6(0x1dc,&local_a8);
  uVar87 = local_a8;
  local_a8 = local_a8 & 0xff00ffff | 0x4000000;
  bVar16 = FUN_00203788(0x1dc);
  bVar17 = FUN_002037a6(0x1e0,&local_a8);
  uVar5 = local_a8;
  local_a8 = local_a8 | 0x40000000;
  bVar18 = FUN_00203788(0x1e0);
  bVar18 = bVar18 | bVar17 | bVar16 | bVar15 | bVar14 | bVar13 | bVar12 | bVar11 | bVar10 | bVar9 | 
                                                  bVar8 | bVar7 | bVar6;
  do {
    bVar6 = FUN_002037a6(0x1b0,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar7 = FUN_00203788(0x1b0);
    bVar8 = FUN_002037a6(0x1ac,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar9 = FUN_00203788(0x1ac);
    bVar10 = FUN_002037a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar11 = FUN_00203788(0x1a8);
    bVar12 = FUN_002037a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xe0ffffff;
    bVar13 = FUN_00203788(0x1a8);
    bVar14 = FUN_002037a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar15 = FUN_00203788(0x1a8);
    bVar16 = FUN_002037a6(0x1ac,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar17 = FUN_00203788(0x1ac);
    bVar19 = FUN_002037a6(0x1b0,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar20 = FUN_00203788(0x1b0);
    bVar21 = FUN_002037a6(0x1bc,&local_a8);
    local_a8 = local_a8 & 0xffe0ffff;
    bVar22 = FUN_00203788(0x1bc);
    bVar23 = FUN_002037a6(0x1b4,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar24 = FUN_00203788(0x1b4);
    bVar25 = FUN_002037a6(0x1c0,&local_a8);
    local_a8 = local_a8 & 0xffe0ffff;
    bVar26 = FUN_00203788(0x1c0);
    bVar27 = FUN_002037a6(0x80,&local_a8);
    local_a8 = local_a8 | 0x2000;
    bVar28 = FUN_00203788(0x80);
    uVar88 = DAT_00203ddc;
    if (bVar95) {
      uVar88 = DAT_00203dd8;
    }
    bVar29 = FUN_00203788(0x88,uVar88);
    bVar30 = FUN_002037a6(0x4c,&local_a8);
    local_a8 = local_a8 | 4;
    bVar31 = FUN_00203788(0x4c);
    FUN_002037a6(0x4c,&local_a8);
    bVar32 = FUN_002037a6(0x1e4,&local_a8);
    local_a8 = local_a8 | 1;
    bVar33 = FUN_00203788(0x1e4);
    FUN_00214da8(1);
    local_a8 = local_a8 & 0xfffffffe;
    bVar34 = FUN_00203788(0x1e4);
    bVar35 = FUN_002037a6(0x4c,&local_a8);
    local_a8 = local_a8 & 0xfffffffb;
    bVar36 = FUN_00203788(0x4c);
    FUN_00214da8(1);
    bVar37 = FUN_002037a6(0xe4,&local_a8);
    local_a8 = local_a8 & 0xfffffffb | 8;
    bVar38 = FUN_00203788(0xe4);
    FUN_002037a6(0x50,&local_a8);
    if (bVar95) {
      uVar88 = 0x55555555;
    }
    else {
      uVar88 = 0x1010101;
    }
    bVar39 = FUN_00203788(0x50,uVar88);
    uVar94 = 0;
    bVar39 = bVar39 | bVar38 | bVar37 | bVar36 | bVar35 | bVar34 | bVar33 | bVar32 | bVar31 | bVar30
                                                                                              | 
                                                  bVar29 | bVar28 | bVar27 | bVar26 | bVar25 | 
                                                  bVar24 | bVar23 | bVar22 | bVar21 | bVar20 | 
                                                  bVar19 | bVar17 | bVar16 | bVar15 | bVar14 | 
                                                  bVar13 | bVar12 | bVar11 | bVar10 | bVar9 | bVar8 
                                                  | bVar7 | bVar6 | bVar18;
    FUN_002037a6(0x50,&local_a8);
    FUN_00214da8(1);
    do {
      bVar6 = FUN_002037a6(0xc,&local_a8);
      local_a8 = (uVar94 & 0xf) << 0x18 | local_a8 & 0xf0ffffff;
      bVar7 = FUN_00203788(0xc);
      bVar8 = FUN_002037a6(0x4c,&local_a8);
      local_a8 = local_a8 | 2;
      bVar9 = FUN_00203788(0x4c);
      FUN_00214da8(1);
      local_a8 = local_a8 & 0xfffffffd;
      bVar10 = FUN_00203788(0x4c);
      FUN_00214da8(1);
      bVar11 = FUN_002037a6(0x380,&local_a8);
      bVar39 = bVar39 | bVar11 | bVar10 | bVar9 | bVar8 | bVar7 | bVar6;
      cVar40 = (char)uVar94;
      if (!bVar95) {
        iVar93 = 4;
        do {
          cVar41 = local_8c[iVar93];
          if ((cVar41 == -1) || (local_80[iVar93] == -1)) {
            if (iVar93 != 4) {
              iVar86 = 0x20;
            }
            else {
              iVar86 = 0;
            }
            if (iVar93 != 4) {
              iVar90 = 0x24;
            }
            else {
              iVar90 = 4;
            }
            if (((1 << (*(uint *)((int)puVar91 + iVar86) & 0xff) & local_a8) == 0) ||
               ((1 << (*(uint *)((int)puVar91 + iVar90) & 0xff) & local_a8) != 0)) {
              if (cVar41 != -1) {
                bVar2 = false;
                goto LAB_00204710;
              }
            }
            else if (cVar41 == -1) {
              local_8c[iVar93] = cVar40;
            }
            else {
              bVar2 = true;
LAB_00204710:
              if (local_80[iVar93] == -1) {
                if (bVar2) {
                  if (uVar94 == 0xf) {
                    local_80[iVar93] = '\x0f';
                  }
                }
                else {
                  local_80[iVar93] = cVar40 + -1;
                }
                cVar42 = local_80[iVar93];
                if (cVar42 != -1) {
                  if ((int)acStack_44[iVar93] - (int)acStack_50[iVar93] < (int)cVar42 - (int)cVar41)
                  {
                    acStack_50[iVar93] = cVar41;
                    acStack_44[iVar93] = cVar42;
                  }
                  local_8c[iVar93] = -1;
                  local_80[iVar93] = -1;
                }
              }
            }
          }
          if (iVar93 != 4) goto LAB_00203d34;
          iVar93 = 9;
        } while( true );
      }
      uVar92 = 0;
      puVar89 = puVar91;
      do {
        if (((uVar92 != 4) && (uVar92 != 9)) &&
           ((cVar41 = local_8c[uVar92], cVar41 == -1 || (local_80[uVar92] == -1)))) {
          if (uVar92 < 4) {
            uVar96 = *puVar89;
            uVar97 = puVar89[1];
          }
          else {
            uVar96 = puVar89[-2];
            uVar97 = puVar89[-1];
          }
          if (((1 << (uVar96 & 0xff) & local_a8) == 0) || ((1 << (uVar97 & 0xff) & local_a8) != 0))
          {
            if (cVar41 != -1) {
              pcVar98 = (char *)0x0;
              goto LAB_00204690;
            }
          }
          else if (cVar41 == -1) {
            local_8c[uVar92] = cVar40;
          }
          else {
            pcVar98 = (char *)0x1;
LAB_00204690:
            if (local_80[uVar92] == -1) {
              if (pcVar98 == (char *)0x0) {
                local_80[uVar92] = cVar40 + -1;
              }
              else {
                if (uVar94 == 0xf) {
                  pcVar98 = local_80;
                }
                if (uVar94 == 0xf) {
                  pcVar98[uVar92] = '\x0f';
                }
              }
              cVar42 = local_80[uVar92];
              if (cVar42 != -1) {
                if ((int)acStack_44[uVar92] - (int)acStack_50[uVar92] < (int)cVar42 - (int)cVar41) {
                  acStack_50[uVar92] = cVar41;
                  acStack_44[uVar92] = cVar42;
                }
                local_8c[uVar92] = -1;
                local_80[uVar92] = -1;
              }
            }
          }
        }
        uVar92 = uVar92 + 1;
        puVar89 = puVar89 + 2;
      } while (uVar92 != 10);
LAB_00203d34:
      uVar94 = uVar94 + 1;
      FUN_00214da8(1);
    } while (uVar94 != 0x10);
    bVar6 = FUN_002037a6(0xc,&local_a8);
    local_a8 = local_a8 & 0xf0ffffff;
    bVar7 = FUN_00203788(0xc);
    bVar39 = bVar7 | bVar6 | bVar39;
    uVar94 = 0;
    do {
      bVar6 = FUN_002037a6(0x1b0,&local_a8);
      uVar92 = uVar94 << 8;
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar7 = FUN_00203788(0x1b0);
      bVar8 = FUN_002037a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar9 = FUN_00203788(0x1ac);
      bVar10 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar11 = FUN_00203788(0x1a8);
      bVar12 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xe0ffffff | uVar94 << 0x18;
      bVar13 = FUN_00203788(0x1a8);
      bVar14 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar15 = FUN_00203788(0x1a8);
      bVar16 = FUN_002037a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar17 = FUN_00203788(0x1ac);
      bVar18 = FUN_002037a6(0x1b0,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar19 = FUN_00203788(0x1b0);
      bVar20 = FUN_002037a6(0x1bc,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | uVar94 << 0x10;
      bVar21 = FUN_00203788(0x1bc);
      bVar22 = FUN_002037a6(0x1b4,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar23 = FUN_00203788(0x1b4);
      bVar24 = FUN_002037a6(0x1c0,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | uVar94 << 0x10;
      bVar25 = FUN_00203788(0x1c0);
      bVar26 = FUN_002037a6(0x4c,&local_a8);
      local_a8 = local_a8 | 2;
      bVar27 = FUN_00203788(0x4c);
      FUN_00214da8(10);
      local_a8 = local_a8 & 0xfffffffd;
      bVar28 = FUN_00203788(0x4c);
      FUN_00214da8(10);
      bVar29 = FUN_002037a6(0x380,&local_a8);
      bVar39 = bVar39 | bVar29 | bVar28 | bVar27 | bVar26 | bVar25 | bVar24 | bVar23 | bVar22 | 
                                                  bVar21 | bVar20 | bVar19 | bVar18 | bVar17 | 
                                                  bVar16 | bVar15 | bVar14 | bVar13 | bVar12 | 
                                                  bVar11 | bVar10 | bVar9 | bVar8 | bVar7 | bVar6;
      cVar40 = (char)uVar94;
      if (!bVar95) {
        iVar93 = 4;
        do {
          cVar41 = local_74[iVar93];
          if ((cVar41 == -1) || (local_68[iVar93] == -1)) {
            if (iVar93 != 4) {
              iVar86 = 0x20;
            }
            else {
              iVar86 = 0;
            }
            if (iVar93 != 4) {
              iVar90 = 0x24;
            }
            else {
              iVar90 = 4;
            }
            if (((1 << (*(uint *)((int)puVar91 + iVar86) & 0xff) & local_a8) == 0) ||
               ((1 << (*(uint *)((int)puVar91 + iVar90) & 0xff) & local_a8) != 0)) {
              if (cVar41 != -1) {
                bVar2 = false;
                goto LAB_0020482c;
              }
            }
            else if (cVar41 == -1) {
              local_74[iVar93] = cVar40;
            }
            else {
              bVar2 = true;
LAB_0020482c:
              if (local_68[iVar93] == -1) {
                if (bVar2) {
                  if (uVar94 == 0x1f) {
                    local_68[iVar93] = '\x1f';
                  }
                }
                else {
                  local_68[iVar93] = cVar40 + -1;
                }
                cVar42 = local_68[iVar93];
                if (cVar42 != -1) {
                  if ((int)local_2c[iVar93] - (int)local_38[iVar93] < (int)cVar42 - (int)cVar41) {
                    local_38[iVar93] = cVar41;
                    local_2c[iVar93] = cVar42;
                  }
                  local_74[iVar93] = -1;
                  local_68[iVar93] = -1;
                }
              }
            }
          }
          if (iVar93 != 4) goto LAB_00203df6;
          iVar93 = 9;
        } while( true );
      }
      uVar92 = 0;
      puVar89 = puVar91;
      do {
        if (((uVar92 != 4) && (uVar92 != 9)) &&
           ((cVar41 = local_74[uVar92], cVar41 == -1 || (local_68[uVar92] == -1)))) {
          if (uVar92 < 4) {
            uVar96 = *puVar89;
            uVar97 = puVar89[1];
          }
          else {
            uVar96 = puVar89[-2];
            uVar97 = puVar89[-1];
          }
          if (((1 << (uVar96 & 0xff) & local_a8) == 0) || ((1 << (uVar97 & 0xff) & local_a8) != 0))
          {
            if (cVar41 != -1) {
              pcVar98 = (char *)0x0;
              goto LAB_0020479c;
            }
          }
          else if (cVar41 == -1) {
            local_74[uVar92] = cVar40;
          }
          else {
            pcVar98 = (char *)0x1;
LAB_0020479c:
            if (local_68[uVar92] == -1) {
              if (pcVar98 == (char *)0x0) {
                local_68[uVar92] = cVar40 + -1;
              }
              else {
                if (uVar94 == 0x1f) {
                  pcVar98 = local_68;
                }
                if (uVar94 == 0x1f) {
                  pcVar98[uVar92] = '\x1f';
                }
              }
              cVar42 = local_68[uVar92];
              if (cVar42 != -1) {
                if ((int)local_2c[uVar92] - (int)local_38[uVar92] < (int)cVar42 - (int)cVar41) {
                  local_38[uVar92] = cVar41;
                  local_2c[uVar92] = cVar42;
                }
                local_74[uVar92] = -1;
                local_68[uVar92] = -1;
              }
            }
          }
        }
        uVar92 = uVar92 + 1;
        puVar89 = puVar89 + 2;
      } while (uVar92 != 10);
LAB_00203df6:
      uVar94 = uVar94 + 1;
      FUN_00214da8(10);
    } while (uVar94 != 0x20);
    bVar6 = FUN_002037a6(0x80,&local_a8);
    local_a8 = local_a8 & 0xffffdfff;
    bVar7 = FUN_00203788(0x80);
    bVar39 = bVar7 | bVar6 | bVar39;
    if (!bVar95) {
      bVar6 = FUN_002037a6(0xd8,&local_a8);
      local_a8 = local_a8 & 0xffff0fff;
      bVar7 = FUN_00203788(0xd8);
      bVar39 = bVar39 | bVar7 | bVar6;
    }
    FUN_00214da8(10);
    bVar6 = FUN_002037a6(0xe4,&local_a8);
    local_a8 = local_a8 & 0xfffffff7 | 4;
    bVar18 = FUN_00203788(0xe4);
    bVar18 = bVar18 | bVar6 | bVar39;
    if (!bVar95) break;
    bVar95 = false;
  } while( true );
  cVar40 = FUN_002037a6(0x80,&local_a8);
  local_a8 = local_a8 | 0x2000;
  cVar41 = FUN_00203788(0x80);
  cVar42 = FUN_00203788(0x88,DAT_002042dc);
  cVar43 = FUN_002037a6(0x4c,&local_a8);
  local_a8 = local_a8 | 4;
  cVar44 = FUN_00203788(0x4c);
  cVar45 = FUN_002037a6(0x1e4,&local_a8);
  local_a8 = local_a8 | 1;
  cVar46 = FUN_00203788(0x1e4);
  FUN_00214da8(1);
  local_a8 = local_a8 & 0xfffffffe;
  cVar47 = FUN_00203788(0x1e4);
  cVar48 = FUN_002037a6(0x4c,&local_a8);
  local_a8 = local_a8 & 0xfffffffb;
  cVar49 = FUN_00203788(0x4c);
  cVar50 = FUN_002037a6(0x80,&local_a8);
  local_a8 = local_a8 & 0xffffdfff;
  cVar51 = FUN_00203788(0x80);
  cVar52 = FUN_002037a6(0xe4,&local_a8);
  local_a8 = local_a8 & 0xfffffffb;
  cVar53 = FUN_00203788(0xe4);
  bVar6 = 0xf1;
  iVar93 = 0;
  do {
    iVar86 = (int)acStack_44[iVar93] - (int)acStack_50[iVar93];
    iVar90 = (int)local_2c[iVar93] - (int)local_38[iVar93];
    if (iVar86 < iVar90) {
      if (0 < iVar86) {
        iVar86 = (iVar86 - iVar90) - (iVar86 - iVar90 >> 0x1f);
        goto LAB_002042d6;
      }
      bVar7 = -(local_38[iVar93] + (char)(iVar90 >> 1));
LAB_002042e6:
      local_98[iVar93] = bVar7;
    }
    else {
      if (0 < iVar90) {
        iVar86 = iVar86 - iVar90;
LAB_002042d6:
        bVar7 = (byte)(iVar86 >> 1);
        goto LAB_002042e6;
      }
      local_98[iVar93] = acStack_50[iVar93] + (char)(iVar86 >> 1);
    }
    pbVar1 = local_98 + iVar93;
    iVar93 = iVar93 + 1;
    if ((char)bVar6 < (char)*pbVar1) {
      bVar6 = *pbVar1;
    }
    if (iVar93 == 10) {
      iVar86 = 0;
      bVar6 = bVar6 & ~((char)bVar6 >> 0x1f);
      iVar93 = 0;
      do {
        cVar54 = bVar6 - local_98[iVar93];
        if (cVar54 < '\x1f') {
          local_5c[iVar93] = cVar54;
        }
        if ('\x1e' < cVar54) {
          local_5c[iVar93] = '\x1f';
        }
        pcVar98 = local_5c + iVar93;
        iVar93 = iVar93 + 1;
        iVar86 = iVar86 + *pcVar98;
      } while (iVar93 != 10);
      cVar54 = FUN_00203788(0x1dc,uVar87);
      cVar55 = FUN_00203788(0x1e0,uVar5);
      cVar56 = FUN_002037a6(0x1b0,&local_a8);
      local_a8 = (int)local_5c[0] | local_a8 & 0xffffffe0;
      cVar57 = FUN_00203788(0x1b0);
      cVar58 = FUN_002037a6(0x1ac,&local_a8);
      local_a8 = (int)local_5c[1] | local_a8 & 0xffffffe0;
      cVar59 = FUN_00203788(0x1ac);
      cVar60 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = (int)local_5c[2] | local_a8 & 0xffffffe0;
      cVar61 = FUN_00203788(0x1a8);
      cVar62 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xe0ffffff | (int)local_5c[3] << 0x18;
      cVar63 = FUN_00203788(0x1a8);
      cVar64 = FUN_002037a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[4] << 8;
      cVar65 = FUN_00203788(0x1a8);
      cVar66 = FUN_002037a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[5] << 8;
      cVar67 = FUN_00203788(0x1ac);
      cVar68 = FUN_002037a6(0x1b0,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[6] << 8;
      cVar69 = FUN_00203788(0x1b0);
      cVar70 = FUN_002037a6(0x1bc,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | (int)local_5c[7] << 0x10;
      cVar71 = FUN_00203788(0x1bc);
      cVar72 = FUN_002037a6(0x1b4,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[8] << 8;
      cVar73 = FUN_00203788(0x1b4);
      cVar74 = FUN_002037a6(0x1c0,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | (int)local_5c[9] << 0x10;
      cVar75 = FUN_00203788(0x1c0);
      uVar87 = FUN_00200a00(iVar86 + 5,10);
      if (0xe < uVar87) {
        uVar87 = 0xf;
      }
      cVar76 = FUN_002037a6(0x1b8,&local_a8);
      local_a8 = local_a8 & 0xffffe0e0 | uVar87 | uVar87 << 8;
      cVar77 = FUN_00203788(0x1b8);
      cVar78 = FUN_002037a6(0xc,&local_a8);
      local_a8 = local_a8 & 0xfffffff | uVar87 << 0x1c;
      cVar79 = FUN_00203788(0xc);
      FUN_002037cc(1);
      FUN_002127e8(DAT_0020490c + 0x2045a2,0);
      cVar80 = FUN_002037a6(0xc,&local_a8);
      local_a8 = (bVar6 & 0xf) << 0x18 | local_a8 & 0xf0ffffff;
      cVar81 = FUN_00203788(0xc);
      FUN_002037cc(0);
      *(byte *)(DAT_00204910 + 0x2045da) = bVar6;
      cVar82 = FUN_00203788(0xfc,local_a0);
      cVar83 = FUN_00203788(0x44,uVar4);
      cVar84 = FUN_00203788(0x63c,uVar3);
      cVar85 = FUN_00203788(0xe4,local_a4);
      FUN_00203788(0x88,local_9c);
      uVar88 = 0;
      if (cVar85 != '\0' ||
          (cVar84 != '\0' ||
          (cVar83 != '\0' ||
          (cVar82 != '\0' ||
          (cVar81 != '\0' ||
          (cVar80 != '\0' ||
          (cVar79 != '\0' ||
          (cVar78 != '\0' ||
          (cVar77 != '\0' ||
          ((((((((((((((((((((((cVar55 != '\0' ||
                               (cVar54 != '\0' ||
                               (bVar18 != 0 ||
                               (cVar53 != '\0' ||
                               (cVar52 != '\0' ||
                               (cVar51 != '\0' ||
                               (cVar50 != '\0' ||
                               (cVar49 != '\0' ||
                               (cVar48 != '\0' ||
                               (cVar47 != '\0' ||
                               (cVar46 != '\0' ||
                               (cVar45 != '\0' ||
                               (cVar44 != '\0' ||
                               (cVar43 != '\0' ||
                               (cVar42 != '\0' || (cVar41 != '\0' || cVar40 != '\0'))))))))))))))))
                              || cVar56 != '\0') || cVar57 != '\0') || cVar58 != '\0') ||
                           cVar59 != '\0') || cVar60 != '\0') || cVar61 != '\0') || cVar62 != '\0')
                       || cVar63 != '\0') || cVar64 != '\0') || cVar65 != '\0') || cVar66 != '\0')
                   || cVar67 != '\0') || cVar68 != '\0') || cVar69 != '\0') || cVar70 != '\0') ||
               cVar71 != '\0') || cVar72 != '\0') || cVar73 != '\0') || cVar74 != '\0') ||
           cVar75 != '\0') || cVar76 != '\0')))))))))) {
        uVar88 = 0xffffffff;
      }
      return uVar88;
    }
  } while( true );
}


// ==== FUN_00204978 @ 00204978 ====

void FUN_00204978(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00214a7c(*param_1);
    uVar4 = FUN_00214a7c(*param_1);
    puVar3 = DAT_002049f0;
    puVar2 = DAT_002049ec;
    puVar1 = DAT_002049e8;
    uVar5 = (uVar4 & 0x1f) << 0x10;
    uVar4 = ((uVar4 & 0x1f) - 4) * 0x100;
    *DAT_002049e8 = (*DAT_002049f0 | *DAT_002049e8 | *DAT_002049ec) & 0xffe0e0ff | uVar5 | uVar4;
    *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xffe0e0ff | uVar5 | uVar4;
    *puVar3 = uVar4 | uVar5 | (*puVar2 | *puVar1 | *puVar3) & 0xffe0e0ff;
  }
  return;
}


// ==== FUN_00204a48 @ 00204a48 ====

int FUN_00204a48(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar12 = DAT_00204bb0;
  iVar5 = DAT_00204bac;
  iVar14 = DAT_00204ba8;
  puVar11 = (undefined4 *)(DAT_00204ba8 + 0x204a60);
  *(undefined4 *)(DAT_00204ba4 + 0x204a5a) = 0;
  local_3c = *puVar11;
  uStack_38 = *(undefined4 *)(iVar14 + 0x204a64);
  uStack_34 = *(undefined4 *)(iVar14 + 0x204a68);
  uStack_30 = *(undefined4 *)(iVar14 + 0x204a6c);
  iVar12 = iVar12 + 0x204a6a;
  local_2c = *(undefined4 *)(iVar14 + 0x204a70);
  uStack_28 = *(undefined4 *)(iVar14 + 0x204a74);
  uStack_24 = *(undefined4 *)(iVar14 + 0x204a78);
  bVar1 = false;
  puVar11 = (undefined4 *)(DAT_00204bb4 + 0x204a78);
  do {
    puVar4 = DAT_00204ba0;
    puVar3 = DAT_00204b9c;
    puVar2 = DAT_00204b98;
    iVar14 = *(int *)(iVar12 + DAT_00204bb8);
    if (bVar1) {
      iVar8 = (((*DAT_00204b9c | *DAT_00204b98 | *DAT_00204ba0) & 0x7fffffff) >> 0x1c) - 1;
      FUN_002127e8(iVar5 + 0x204a66,iVar8);
      uVar15 = iVar8 * 0x10000000;
      *puVar2 = uVar15 | (*puVar4 | *puVar3 | *puVar2) & 0x8fffffff;
      *puVar3 = uVar15 | (*puVar3 | *puVar2 | *puVar4) & 0x8fffffff;
      *puVar4 = uVar15 | (*puVar3 | *puVar2 | *puVar4) & 0x8fffffff;
      iVar8 = 0;
      *puVar11 = 0;
      do {
        *(undefined4 *)(iVar14 + iVar8) = 0;
        iVar8 = iVar8 + 4;
      } while (iVar8 != 0x40);
    }
    iVar10 = 0;
    FUN_0020503c(0,*(undefined4 *)(iVar12 + DAT_00204bbc),&local_3c);
    iVar8 = *(int *)(iVar12 + DAT_00204bc0);
    piVar6 = (int *)(iVar14 + -4);
    do {
      piVar9 = piVar6;
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar8 + iVar10 * 4) == 0) {
        iVar14 = -1;
        goto LAB_00204b6e;
      }
      piVar6 = piVar9 + 1;
    } while ((*piVar6 != 1) || (piVar9[2] != 1));
    iVar14 = FUN_00214a7c();
    puVar13 = *(undefined4 **)(iVar12 + DAT_00204bc4);
    iVar7 = FUN_00214a7c(*puVar13);
    if (iVar7 < iVar14) {
      *puVar13 = *(undefined4 *)(iVar8 + iVar10 * 4);
    }
    iVar14 = 0;
LAB_00204b6e:
    if (*(char *)**(undefined4 **)(iVar12 + DAT_00204bc4) != '0') {
      FUN_00204978(*(undefined4 **)(iVar12 + DAT_00204bc4),1);
      return iVar14;
    }
    if (iVar14 == 0) {
      return 0;
    }
    if (bVar1) {
      return -1;
    }
    bVar1 = true;
  } while( true );
}


// ==== FUN_00204c10 @ 00204c10 ====

int FUN_00204c10(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    if ((1 << uVar1 & param_1) != 0) {
      iVar3 = iVar3 + 1;
    }
  } while (uVar2 != 0x20);
  return iVar3;
}


// ==== FUN_00204c2c @ 00204c2c ====

uint FUN_00204c2c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) & param_1) != 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  return 0xffffffff;
}


// ==== FUN_00204c48 @ 00204c48 ====

void FUN_00204c48(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = FUN_00214a7c(*param_1);
  puVar3 = DAT_00204ce4;
  puVar2 = DAT_00204ce0;
  puVar1 = DAT_00204cdc;
  uVar7 = uVar6 & 3;
  uVar6 = ((uVar6 & 0x1f) >> 2) << 0x18;
  *DAT_00204cdc = (*DAT_00204cdc | *DAT_00204ce0 | *DAT_00204ce4) & 0xf8ffffff | uVar6;
  *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xf8ffffff | uVar6;
  puVar5 = DAT_00204cec;
  puVar4 = DAT_00204ce8;
  *puVar3 = uVar6 | (*puVar2 | *puVar1 | *puVar3) & 0xf8ffffff;
  uVar6 = uVar7 << 4;
  *puVar4 = (*puVar4 | *puVar5 | puVar3[0x11]) & 0xffffffcc | uVar7 | uVar6;
  *puVar5 = (*puVar4 | *puVar5 | puVar3[0x11]) & 0xffffffcc | uVar7 | uVar6;
  puVar3[0x11] = uVar6 | uVar7 | (*puVar5 | *puVar4 | puVar3[0x11]) & 0xffffffcc;
  return;
}


// ==== FUN_00204cf0 @ 00204cf0 ====

void FUN_00204cf0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar3 = DAT_00204e74;
  puVar2 = DAT_00204e70;
  puVar1 = DAT_00204e6c;
  if (param_2 == 4) {
    uVar9 = *DAT_00204e6c;
    uVar10 = *DAT_00204e70;
    uVar8 = *DAT_00204e74;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar1 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar2 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar3 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    return;
  }
  uVar4 = FUN_00214a7c(*param_1);
  uVar4 = uVar4 & 0x7f;
  uVar5 = uVar4 << 8;
  uVar6 = uVar4 << 0x10;
  uVar7 = uVar4 << 0x18;
  *puVar1 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar2 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar3 = uVar7 | uVar6 | uVar5 | uVar4 | (*puVar1 | *puVar2 | *puVar3) & 0x80000000;
  return;
}


// ==== FUN_00204e78 @ 00204e78 ====

void FUN_00204e78(void)

{
  return;
}


// ==== FUN_0020503c @ 0020503c ====

void FUN_0020503c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_002050c8 + 0x20504e;
  iVar2 = param_1;
  piVar3 = param_2;
  (*(code *)*param_3)();
  if (param_1 == 0) {
    (*(code *)param_3[1])();
  }
  for (iVar5 = 0; *(int *)(param_2[param_1 * 5 + 1] + iVar5) != 0; iVar5 = iVar5 + 4) {
    (*(code *)param_2[param_1 * 5 + 4])(param_2[param_1 * 5 + 1] + iVar5,1);
    param_2[param_1 * 5 + 2] = *(int *)(param_2[param_1 * 5 + 1] + iVar5);
    if (param_1 == 0) {
      (*(code *)param_3[2])();
      piVar3 = *(int **)(iVar6 + DAT_002050cc);
      iVar2 = *piVar3;
      iVar1 = (*(code *)param_3[3])();
      pcVar4 = (code *)param_3[4];
      *piVar3 = iVar1 + iVar2;
      (*pcVar4)();
    }
    else {
      FUN_0020503c(param_1 + -1,param_2,param_3);
    }
  }
  (*(code *)param_3[5])
            (param_1,*(undefined4 *)(iVar6 + DAT_002050cc),*(undefined4 *)(iVar6 + DAT_002050d0),
             (code *)param_3[5],iVar2,piVar3);
  (*(code *)param_3[6])(param_1);
  return;
}


// ==== FUN_002050d4 @ 002050d4 ====

void FUN_002050d4(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = FUN_00214a7c(*param_1);
  puVar3 = DAT_00205130;
  puVar2 = DAT_0020512c;
  puVar1 = DAT_00205128;
  uVar4 = (uVar4 & 3) << 6 | (uVar4 & 3) << 2;
  *DAT_00205128 = (*DAT_00205128 | *DAT_0020512c | *DAT_00205130) & 0xffffff33 | uVar4;
  *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xffffff33 | uVar4;
  *puVar3 = uVar4 | (*puVar2 | *puVar1 | *puVar3) & 0xffffff33;
  return;
}


// ==== FUN_00205134 @ 00205134 ====

void FUN_00205134(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  puVar3 = DAT_002052b8;
  puVar2 = DAT_002052b4;
  puVar1 = DAT_002052b0;
  if (param_2 == 4) {
    uVar9 = *DAT_002052b0;
    uVar10 = *DAT_002052b4;
    uVar8 = *DAT_002052b8;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar1 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar2 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_00214a7c(*param_1);
    uVar5 = FUN_00214a7c(param_1[1]);
    uVar6 = FUN_00214a7c(param_1[2]);
    uVar7 = FUN_00214a7c(param_1[3]);
    *puVar3 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    return;
  }
  uVar4 = FUN_00214a7c(*param_1);
  uVar4 = uVar4 & 0x7f;
  uVar5 = uVar4 << 8;
  uVar6 = uVar4 << 0x10;
  uVar7 = uVar4 << 0x18;
  *puVar1 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar2 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar3 = uVar7 | uVar6 | uVar5 | uVar4 | (*puVar1 | *puVar2 | *puVar3) & 0x80000000;
  return;
}


// ==== FUN_002058ec @ 002058ec ====

undefined4 FUN_002058ec(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int unaff_r4;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar17 = DAT_00205c0c + 0x2058fe;
  local_3c = *(undefined4 *)(DAT_00205c08 + 0x2058fc);
  uStack_38 = *(undefined4 *)(DAT_00205c08 + 0x205900);
  uStack_34 = *(undefined4 *)(DAT_00205c08 + 0x205904);
  uStack_30 = *(undefined4 *)(DAT_00205c08 + 0x205908);
  iVar15 = 0;
  local_2c = *(undefined4 *)(DAT_00205c08 + 0x20590c);
  uStack_28 = *(undefined4 *)(DAT_00205c08 + 0x205910);
  uStack_24 = *(undefined4 *)(DAT_00205c08 + 0x205914);
  *(undefined4 *)(DAT_00205c10 + 0x205912) = 0;
  *(undefined4 *)(DAT_00205c14 + 0x205918) = 0;
  iVar12 = DAT_00205c18 + 0x20591e;
  do {
    *(undefined4 *)(iVar15 + iVar12) = 0;
    puVar4 = DAT_00205c20;
    puVar1 = DAT_00205bf8;
    iVar15 = iVar15 + 4;
  } while (iVar15 != 0x80);
  FUN_00214b20(DAT_00205c1c + 0x205934,0,0x200);
  iVar15 = 0;
  FUN_00214b20(DAT_00205c24 + 0x205942,0,0xc);
  iVar12 = 0;
  FUN_00214b20(DAT_00205c28 + 0x205950,0,0xc);
  puVar3 = DAT_00205c04;
  puVar2 = DAT_00205bfc;
  iVar20 = 0;
  *DAT_00205bfc = *DAT_00205bfc | 0x10000000;
  puVar2[0x2c00] = puVar2[0x2c00] | 0x10000000;
  *DAT_00205c00 = *DAT_00205c00 | 0x10000000;
  *puVar4 = *puVar4 | 0x100;
  *puVar3 = *puVar3 | 0x100;
  *puVar1 = *puVar1 | 0x100;
  FUN_0020503c(1,*(undefined4 *)(iVar17 + DAT_00205c2c),&local_3c);
  iVar13 = DAT_00205c30 + 0x2059b0;
  do {
    uVar11 = *(undefined4 *)(iVar13 + iVar20 * 4);
    iVar5 = FUN_00204c10(uVar11);
    if (iVar12 + 1 < iVar5) {
      iVar6 = FUN_00204c2c(uVar11);
      iVar6 = iVar6 + iVar5 / 2;
LAB_00205a24:
      unaff_r4 = iVar20;
      iVar12 = iVar5;
      iVar15 = iVar6;
    }
    else if ((iVar5 != 0) && (iVar10 = iVar5 + 1, iVar12 <= iVar10)) {
      iVar6 = FUN_00204c2c(uVar11);
      iVar6 = iVar6 + iVar5 / 2;
      if (iVar15 < 8) {
        iVar14 = 7 - iVar15;
      }
      else {
        iVar14 = iVar15 + -7;
      }
      if (iVar6 < 8) {
        iVar16 = 7 - iVar6;
      }
      else {
        iVar16 = iVar6 + -7;
      }
      if (iVar10 == iVar12) {
        iVar16 = iVar16 + 1;
        iVar12 = iVar10;
      }
      if (iVar16 < iVar14) goto LAB_00205a24;
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 != 0x20);
  piVar19 = *(int **)(iVar17 + DAT_00205c34);
  puVar18 = *(undefined4 **)(iVar17 + DAT_00205c38);
  if (*piVar19 == 1) {
    puVar21 = *(undefined4 **)(iVar17 + DAT_00205c3c);
    uVar7 = FUN_00214a7c(*(undefined4 *)*puVar21);
    uVar8 = FUN_00214a7c(puVar18[unaff_r4]);
    if (((uVar8 ^ uVar7) & 0x1f) != 0) {
      uVar11 = FUN_00214a7c(*(undefined4 *)*puVar21);
      uVar9 = FUN_00214a7c(puVar18[unaff_r4]);
      FUN_002127e8(DAT_00205c40 + 0x205a82,uVar11,uVar9);
      iVar12 = FUN_00214a7c(*(undefined4 *)*puVar21);
      iVar15 = FUN_00214a7c(*puVar18);
      unaff_r4 = iVar12 - iVar15;
    }
  }
  FUN_00204e78(DAT_00205c44 + 0x205aa2,*piVar19,unaff_r4,puVar18[unaff_r4]);
  iVar12 = FUN_00204c10(*(undefined4 *)(DAT_00205c48 + 0x205aae + unaff_r4 * 4));
  iVar15 = FUN_00206350();
  if ((iVar15 == 4) && (10 < iVar12)) {
    iVar12 = 10;
  }
  else if (iVar12 == 0) {
    FUN_00204e78(DAT_00205cac + 0x205c76);
    uVar11 = 0xffffffff;
    goto LAB_00205c7c;
  }
  iVar15 = FUN_00204c2c(*(undefined4 *)(DAT_00205c4c + 0x205ada + unaff_r4 * 4));
  uVar11 = puVar18[unaff_r4];
  puVar21 = *(undefined4 **)(iVar17 + DAT_00205c50);
  *puVar21 = puVar18 + unaff_r4;
  piVar19 = *(int **)(iVar17 + DAT_00205c54);
  iVar13 = *(int *)(iVar17 + DAT_00205c58);
  iVar20 = DAT_00205c5c + 0x205b0c;
  *piVar19 = iVar13 + (iVar15 + iVar12 / 2) * 4;
  FUN_00204e78(iVar20,uVar11);
  FUN_00204e78(iVar20,*(undefined4 *)*piVar19);
  FUN_00204c48(*puVar21,1);
  iVar5 = DAT_00205c60 + 0x205b38;
  iVar15 = DAT_00205c64 + 0x205b3c;
  iVar20 = DAT_00205c68 + 0x205b40;
  iVar12 = 0;
  do {
    iVar6 = FUN_00214a7c(*(undefined4 *)*puVar21);
    iVar6 = FUN_00204c2c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    iVar10 = FUN_00214a7c(*(undefined4 *)*puVar21);
    iVar10 = FUN_00204c10(*(undefined4 *)(iVar5 + (iVar12 + iVar10 * 4) * 4));
    iVar14 = *(int *)(iVar17 + DAT_00205c6c);
    uVar9 = *(undefined4 *)(iVar13 + (iVar6 + iVar10 / 2) * 4);
    *(undefined4 *)(iVar14 + iVar12 * 4) = uVar9;
    iVar6 = FUN_00214a7c(*(undefined4 *)*puVar21);
    iVar6 = FUN_00204c2c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    uVar11 = *(undefined4 *)(iVar13 + iVar6 * 4);
    iVar6 = FUN_00214a7c(*(undefined4 *)*puVar21);
    iVar6 = FUN_00204c2c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    iVar10 = FUN_00214a7c(*(undefined4 *)*puVar21);
    iVar10 = FUN_00204c10(*(undefined4 *)(iVar5 + (iVar12 + iVar10 * 4) * 4));
    iVar16 = iVar12 + 1;
    FUN_00204e78(iVar15,iVar20,iVar12,uVar9,uVar11,*(undefined4 *)(iVar13 + (iVar10 + iVar6) * 4));
    iVar12 = iVar16;
  } while (iVar16 != 4);
  *piVar19 = iVar14;
  FUN_00204cf0(iVar14,4);
  uVar11 = 0;
LAB_00205c7c:
  puVar1 = DAT_00205ca4;
  *puVar4 = *puVar4 & 0xfffffeff;
  *puVar1 = *puVar1 & 0xfffffeff;
  *DAT_00205ca8 = *DAT_00205ca8 & 0xfffffeff;
  return uVar11;
}


// ==== FUN_00205cb0 @ 00205cb0 ====

void FUN_00205cb0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(DAT_00205cfc + 0x205cb8) == 0) {
    iVar5 = **(int **)(DAT_00205d00 + 0x205cbe + DAT_00205d04);
    uVar4 = 0;
    do {
      iVar3 = 8;
      uVar2 = uVar4;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = uVar2 >> 1;
        if (uVar1 != 0) {
          uVar2 = DAT_00205cf8 ^ uVar2;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(uint *)(iVar5 + iVar3 + 0x40000) = uVar2;
    } while (uVar4 != 0x100);
    *(undefined4 *)(DAT_00205d08 + 0x205cf6) = 1;
  }
  return;
}


// ==== FUN_00205d0c @ 00205d0c ====

int FUN_00205d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_3;
  iVar1 = FUN_00201128(1);
  if (iVar1 == 0) {
    FUN_002127e8(DAT_00205d58 + 0x205d26,DAT_00205d5c + 0x205d28);
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(iVar1 + 0x20))
                      (iVar1,param_3,param_5 >> 9 | param_6 << 0x17,param_1,8,param_2,uVar2);
    if (iVar1 != 0) {
      FUN_002127e8(DAT_00205d60 + 0x205d4e,DAT_00205d64 + 0x205d50,iVar1);
    }
  }
  return iVar1;
}


// ==== FUN_00206254 @ 00206254 ====

uint FUN_00206254(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = DAT_00206328;
  puVar4 = DAT_00206324;
  puVar3 = DAT_00206320;
  puVar2 = DAT_0020631c;
  puVar1 = DAT_00206318;
  uVar7 = *DAT_0020631c | *DAT_00206318 | *DAT_00206320;
  *DAT_00206324 = DAT_00206328;
  puVar4[0x2c00] = uVar5;
  *DAT_0020632c = uVar5;
  puVar4 = DAT_00206334;
  uVar5 = DAT_00206330;
  *DAT_00206334 = DAT_00206330;
  puVar4[0x2c00] = uVar5;
  *DAT_00206338 = uVar5;
  *puVar1 = *puVar1 & 0xfffffffd;
  *puVar2 = *puVar2 & 0xfffffffd;
  *puVar3 = *puVar3 & 0xfffffffd;
  puVar4 = DAT_0020633c;
  *DAT_0020633c = param_1;
  puVar4[0x2c00] = param_1;
  *DAT_00206340 = param_1;
  *puVar1 = *puVar1 | 2;
  *puVar2 = *puVar2 | 2;
  *puVar3 = *puVar3 | 2;
  FUN_00214da8(1000);
  iVar6 = DAT_0020634c;
  *puVar1 = *puVar1 & 0xfffffffd;
  *puVar2 = *puVar2 & 0xfffffffd;
  *puVar3 = *puVar3 & 0xfffffffd;
  uVar8 = ((DAT_00206344[0x2c00] | *DAT_00206344 | *DAT_00206348) & 0xfffffff) >> 0x14;
  FUN_002127e8(iVar6 + 0x2062de,uVar8);
  *puVar1 = uVar7;
  *puVar2 = uVar7;
  *puVar3 = uVar7;
  return uVar8;
}


// ==== FUN_00206350 @ 00206350 ====

uint FUN_00206350(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00206374 + 0x206358;
  uVar1 = **(uint **)(iVar2 + DAT_00206378);
  if ((uVar1 == 0) && (0 < **(int **)(iVar2 + DAT_0020637c))) {
    uVar1 = *(uint *)(*(int *)(iVar2 + DAT_00206380) + 4) & 0xf;
  }
  return uVar1;
}


// ==== FUN_00206384 @ 00206384 ====

undefined4 FUN_00206384(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_002063b8 + 0x20638e;
  if (0 < **(int **)(iVar2 + DAT_002063bc)) {
    if ((*(uint *)(*(int *)(iVar2 + DAT_002063c4) + 0x28) & 0x20000) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  FUN_002127e8(DAT_002063c0 + 0x20639c,0,**(int **)(iVar2 + DAT_002063bc),iVar2,in_r3);
  return 0xffffffff;
}


// ==== FUN_002063c8 @ 002063c8 ====

undefined4 FUN_002063c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00206410 + 0x2063d6;
  if (0 < **(int **)(iVar3 + DAT_00206414)) {
    iVar1 = FUN_00206384();
    iVar4 = DAT_00206418 + 0x2063ea;
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      *(undefined4 *)(param_1 + iVar2 * 4) =
           *(undefined4 *)(*(int *)(iVar3 + DAT_0020641c) + iVar2 * 4 + 0x6c);
      FUN_002127e8(iVar4,iVar2);
    }
  }
  return 0;
}


// ==== FUN_00206458 @ 00206458 ====

void FUN_00206458(undefined4 param_1)

{
  FUN_00211468(0x21e,param_1,0x7f,0);
  FUN_00211468(0x220,param_1,0x7f,0);
  return;
}


// ==== FUN_0020647c @ 0020647c ====

void FUN_0020647c(undefined4 param_1)

{
  FUN_00211468(0x554,**(int **)(DAT_002064b4 + 0x206484 + DAT_002064b8) == 4,3,4);
  FUN_00211468(0x554,param_1,0xf,8);
  return;
}


// ==== FUN_002064bc @ 002064bc ====

void FUN_002064bc(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_00211440(0x21e,&local_14,0x7f,0,param_1);
  FUN_00211440(0x220,&local_10,0x7f,0);
  FUN_00211440(0x554,&local_c,0xf,8);
  FUN_002127e8(DAT_00206500 + 0x2064fa,local_14,local_10,local_c);
  return;
}


// ==== FUN_002072b4 @ 002072b4 ====

void FUN_002072b4(void)

{
  return;
}


// ==== FUN_002072b8 @ 002072b8 ====

undefined8
FUN_002072b8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_40;
  uint uStack_3c;
  
  if ((DAT_00207434 & param_3) != 0) {
    FUN_002127e8(DAT_00207438 + 0x2072de);
  }
  if (param_9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *param_1 - 1;
  }
  local_40 = 0;
  uStack_3c = 0;
  uVar11 = 0xffffffff;
  iVar1 = DAT_0020743c + 0x207306;
  iVar4 = DAT_00207440 + 0x20730a;
  puVar9 = param_1;
  for (uVar10 = 0; uVar10 < *param_1; uVar10 = uVar10 + 1) {
    uVar3 = puVar9[4];
    uVar5 = puVar9[5];
    uVar7 = puVar9[2];
    uVar8 = puVar9[3];
    uVar6 = puVar9[6];
    uVar16 = param_7;
    uVar17 = param_8;
    uVar18 = local_40;
    uVar19 = uStack_3c;
    uVar20 = uVar12;
    uVar21 = uVar11;
    FUN_002127e8(iVar4,uVar10,uVar7,uVar8,uVar3,uVar5,param_7,param_8,local_40,uStack_3c,uVar12,
                 uVar11,uVar6);
    uVar2 = uVar3 + uVar7;
    uVar7 = uVar5 + uVar8 + CARRY4(uVar3,uVar7);
    bVar13 = uVar7 <= param_8;
    if (param_8 == uVar7) {
      bVar13 = uVar2 <= param_7;
    }
    bVar14 = uVar7 <= uStack_3c;
    if (uStack_3c == uVar7) {
      bVar14 = uVar2 <= local_40;
    }
    bVar15 = param_4 <= uVar5;
    if (uVar5 == param_4) {
      bVar15 = param_3 <= uVar3;
    }
    FUN_002127e8(iVar1,uVar10,bVar13,puVar9[6] <= uVar12,!bVar14,bVar15,uVar16,uVar17,uVar18,uVar19,
                 uVar20,uVar21,uVar6);
    if ((((bVar13) && (puVar9[6] <= uVar12)) && (!bVar14)) && (bVar15)) {
      uVar11 = uVar10;
      local_40 = uVar2;
      uStack_3c = uVar7;
    }
    puVar9 = puVar9 + 6;
  }
  if (uVar11 == 0xffffffff) {
    FUN_002127e8(DAT_00207444 + 0x2073dc);
    iVar1 = 0;
    iVar4 = 0;
  }
  else {
    uVar12 = param_1[uVar11 * 6 + 4];
    param_1[uVar11 * 6 + 4] = uVar12 - param_3;
    param_1[uVar11 * 6 + 5] = (param_1[uVar11 * 6 + 5] - param_4) - (uint)(uVar12 < param_3);
    FUN_002127e8(DAT_00207448 + 0x20741e);
    iVar1 = param_1[uVar11 * 6 + 4] + param_1[uVar11 * 6 + 2];
    iVar4 = param_1[uVar11 * 6 + 5] +
            param_1[uVar11 * 6 + 3] + (uint)CARRY4(param_1[uVar11 * 6 + 4],param_1[uVar11 * 6 + 2]);
  }
  return CONCAT44(iVar4,iVar1);
}


// ==== FUN_0020744c @ 0020744c ====

void FUN_0020744c(int *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 extraout_r1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_28;
  uint uStack_24;
  
  local_28 = 0;
  uStack_24 = 0;
  puVar2 = param_2;
  for (uVar4 = 0; uVar4 != *param_2; uVar4 = uVar4 + 1) {
    uVar6 = puVar2[4];
    bVar12 = CARRY4(local_28,uVar6);
    local_28 = local_28 + uVar6;
    uStack_24 = uStack_24 + puVar2[5] + (uint)bVar12;
    puVar2 = puVar2 + 4;
  }
  FUN_002127e8(DAT_00207580 + 0x20748e,uVar4,0,1,param_1,param_2);
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  uVar6 = 0;
  FUN_00214b20(param_1,0,0x68);
  uVar8 = 0;
  piVar3 = param_1;
  uVar4 = 0;
  puVar2 = param_2;
  do {
    puVar5 = puVar2 + 4;
    if (*param_2 <= uVar4) {
LAB_00207540:
      FUN_002127e8(DAT_00207584 + 0x20754e,puVar5,local_28,uStack_24,0,1);
      iVar1 = DAT_00207588;
      uVar4 = uStack_24;
      if (uStack_24 == 1) {
        uVar4 = local_28;
      }
      if (uVar4 != 0) {
        param_3[2] = local_28;
        param_3[3] = uStack_24 - 1;
        FUN_002127e8(iVar1 + 0x207574,extraout_r1,*param_3,param_3[1],local_28,uStack_24 - 1);
      }
      return;
    }
    bVar12 = CARRY4(uVar6,*puVar5);
    uVar6 = uVar6 + *puVar5;
    uVar8 = uVar8 + puVar2[5] + (uint)bVar12;
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    uVar7 = uVar8;
    if (uVar8 == 1) {
      uVar7 = uVar6;
    }
    piVar3[6] = uVar4;
    piVar3[2] = uVar9;
    piVar3[3] = uVar10;
    if (uVar7 != 0) {
      uVar7 = param_2[(uVar4 + 1) * 4];
      uVar9 = uVar7 - uVar6;
      iVar1 = (((param_2 + (uVar4 + 1) * 4)[1] - uVar8) - (uint)(uVar7 < uVar6)) + 1;
      uVar6 = param_1[uVar4 * 6 + 2];
      iVar11 = param_1[uVar4 * 6 + 3];
      param_1[uVar4 * 6 + 4] = uVar9;
      param_1[uVar4 * 6 + 5] = iVar1;
      *param_3 = uVar6 + uVar9;
      param_3[1] = iVar11 + iVar1 + (uint)CARRY4(uVar6,uVar9);
      puVar5 = (uint *)(param_1[uVar4 * 6 + 4] | param_1[uVar4 * 6 + 5]);
      if (puVar5 != (uint *)0x0) {
        *param_1 = *param_1 + 1;
      }
      goto LAB_00207540;
    }
    uVar7 = *puVar5;
    uVar9 = puVar2[5];
    piVar3[4] = uVar7;
    piVar3[5] = uVar9;
    if (uVar7 != 0 || uVar9 != 0) {
      *param_1 = *param_1 + 1;
    }
    piVar3 = piVar3 + 6;
    uVar4 = uVar4 + 1;
    puVar2 = puVar5;
  } while( true );
}


// ==== FUN_0020758c @ 0020758c ====

void FUN_0020758c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *local_28 [4];
  
  local_28[0] = param_1;
  local_28[1] = (uint *)param_2;
  local_28[2] = (uint *)param_3;
  local_28[3] = (uint *)param_4;
  uVar1 = FUN_00206384();
  *param_1 = uVar1;
  FUN_002063c8(local_28);
  uVar1 = *param_1;
  param_1[2] = 0x40000000;
  param_1[3] = 0;
  puVar2 = param_1;
  for (uVar3 = 0; uVar3 != uVar1; uVar3 = uVar3 + 1) {
    puVar2[4] = (uint)local_28[uVar3];
    puVar2[5] = 0;
    if (uVar3 != 0) {
      puVar2[2] = puVar2[-2] + *puVar2;
      puVar2[3] = puVar2[-1] + puVar2[1] + (uint)CARRY4(puVar2[-2],*puVar2);
    }
    puVar2 = puVar2 + 4;
  }
  puVar2 = param_1 + uVar1 * 4 + 2;
  for (; (int)uVar1 < 4; uVar1 = uVar1 + 1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  return;
}


// ==== FUN_0020767c @ 0020767c ====

undefined4 FUN_0020767c(uint param_1,uint param_2)

{
  if ((param_1 < 0x9b) && (param_2 < 2)) {
    if (param_2 == 0) {
      *(int *)(*(int *)(DAT_002076bc + 0x20769a) + (param_1 & 0xfffffff0) + 8) =
           1 << (param_1 & 0xf);
    }
    else {
      *(int *)((param_1 & 0xfffffff0) + *(int *)(DAT_002076c0 + 0x2076a8) + 4) =
           1 << (param_1 & 0xf);
    }
    return 0;
  }
  return 0xfffffffe;
}


// ==== FUN_002076c4 @ 002076c4 ====

uint FUN_002076c4(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((0x9a < param_1) || (1 < param_2)) {
    return 0xfffffffe;
  }
  iVar1 = 0;
  do {
    if (param_1 == *(byte *)(iVar1 * 3 + DAT_00207bd4 + 0x2076e2)) {
      iVar1 = DAT_00207bd4 + 0x2076e2 + iVar1 * 3;
      if (param_2 != 0) {
        uVar4 = *(byte *)(iVar1 + 2) - 2;
        iVar1 = *(int *)(DAT_00207bdc + 0x207712) + (*(byte *)(iVar1 + 1) + 0xd9) * 0x10;
        goto LAB_00207bc0;
      }
      iVar2 = (uint)*(byte *)(iVar1 + 1) * 0x10 + 0xd98;
      iVar5 = 3;
      uVar4 = *(byte *)(iVar1 + 2) - 2;
      iVar1 = *(int *)(DAT_00207bd8 + 0x207700);
      goto LAB_00207bac;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  if (param_1 == 0x7f) {
    if (param_2 == 0) {
      uVar3 = 0x6000;
      iVar1 = *(int *)(DAT_00207be0 + 0x207732);
LAB_00207754:
      *(undefined4 *)(iVar1 + 0xc48) = uVar3;
      return param_2;
    }
    uVar3 = 0x4000;
    iVar1 = *(int *)(DAT_00207be4 + 0x207740);
  }
  else if (param_1 == 0x80) {
    if (param_2 == 0) {
      uVar3 = 0x600;
      iVar1 = *(int *)(DAT_00207be8 + 0x207754);
      goto LAB_00207754;
    }
    uVar3 = 0x400;
    iVar1 = *(int *)(DAT_00207bec + 0x207766);
  }
  else if (param_1 == 0x81) {
    if (param_2 == 0) {
      uVar3 = 0x60;
      iVar1 = *(int *)(DAT_00207bf0 + 0x20777c);
      goto LAB_00207754;
    }
    uVar3 = 0x40;
    iVar1 = *(int *)(DAT_00207bf4 + 0x207788);
  }
  else {
    if (param_1 != 0x82) {
      if (param_1 == 0x83) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_00207c04 + 0x2077c4) + 0xc54) = 4;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00207c00 + 0x2077b4) + 0xc58) = 6;
        return 0;
      }
      if (param_1 == 0x84) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_00207c0c + 0x2077ee) + 0xc14) = 0x400;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00207c08 + 0x2077dc) + 0xc18) = 0x600;
        return 0;
      }
      if (param_1 == 0x85) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_00207c14 + 0x207818) + 0xc04) = 0x400;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00207c10 + 0x207806) + 0xc08) = 0x600;
        return 0;
      }
      if (param_1 == 0x86) {
        if (param_2 == 0) {
          uVar3 = 0x6000;
          iVar1 = *(int *)(DAT_00207c18 + 0x20782e);
LAB_0020784c:
          *(undefined4 *)(iVar1 + 0xc38) = uVar3;
          return param_2;
        }
        uVar3 = 0x4000;
        iVar1 = *(int *)(DAT_00207c1c + 0x20783a);
      }
      else if (param_1 == 0x87) {
        if (param_2 == 0) {
          uVar3 = 0x600;
          iVar1 = *(int *)(DAT_00207c20 + 0x20784c);
          goto LAB_0020784c;
        }
        uVar3 = 0x400;
        iVar1 = *(int *)(DAT_00207c24 + 0x20785c);
      }
      else if (param_1 == 0x88) {
        if (param_2 == 0) {
          uVar3 = 0x60;
          iVar1 = *(int *)(DAT_00207c28 + 0x207870);
          goto LAB_0020784c;
        }
        uVar3 = 0x40;
        iVar1 = *(int *)(DAT_00207c2c + 0x20787a);
      }
      else {
        if (param_1 != 0x89) {
          if (param_1 == 0x79) {
            if (param_2 != 0) {
              *(undefined4 *)(*(int *)(DAT_00207c3c + 0x2078b6) + 0xc84) = 0x400;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00207c38 + 0x2078a6) + 0xc88) = 0x600;
            return 0;
          }
          if (param_1 == 0x7a) {
            if (param_2 != 0) {
              *(undefined4 *)(*(int *)(DAT_00207c44 + 0x2078dc) + 0xc74) = 0x400;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00207c40 + 0x2078cc) + 0xc78) = 0x600;
            return 0;
          }
          if (param_1 == 0x7b) {
            if (param_2 == 0) {
              uVar3 = 6;
              iVar1 = *(int *)(DAT_00207c48 + 0x2078f0);
LAB_0020790a:
              *(undefined4 *)(iVar1 + 0xca8) = uVar3;
              return param_2;
            }
            uVar3 = 4;
            iVar1 = *(int *)(DAT_00207c4c + 0x2078fa);
          }
          else if (param_1 == 0x7c) {
            if (param_2 == 0) {
              uVar3 = 0x60;
              iVar1 = *(int *)(DAT_00207c50 + 0x20790a);
              goto LAB_0020790a;
            }
            uVar3 = 0x40;
            iVar1 = *(int *)(DAT_00207c54 + 0x207918);
          }
          else if (param_1 == 0x7d) {
            if (param_2 == 0) {
              uVar3 = 0x600;
              iVar1 = *(int *)(DAT_00207c58 + 0x20792e);
              goto LAB_0020790a;
            }
            uVar3 = 0x400;
            iVar1 = *(int *)(DAT_00207c5c + 0x20793a);
          }
          else {
            if (param_1 != 0x7e) {
              if (param_1 == 0x55) {
                if (param_2 != 0) {
                  *(undefined4 *)(*(int *)(DAT_00207c6c + 0x20797a) + 0xce4) = 0x400;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00207c68 + 0x20796a) + 0xce8) = 0x600;
                return 0;
              }
              if (param_1 == 0x56) {
                if (param_2 != 0) {
                  *(undefined4 *)(*(int *)(DAT_00207c74 + 0x2079a0) + 0xcd4) = 0x400;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00207c70 + 0x207990) + 0xcd8) = 0x600;
                return 0;
              }
              if (param_1 == 0x57) {
                if (param_2 == 0) {
                  uVar3 = 6;
                  iVar1 = *(int *)(DAT_00207c78 + 0x2079b4);
LAB_00207a08:
                  *(undefined4 *)(iVar1 + 0xd08) = uVar3;
                  return param_2;
                }
                uVar3 = 4;
                iVar1 = *(int *)(DAT_00207c7c + 0x2079be);
              }
              else if (param_1 == 0x58) {
                if (param_2 == 0) {
                  uVar3 = 0x60;
                  iVar1 = *(int *)(DAT_00207c80 + 0x2079ce);
                  goto LAB_00207a08;
                }
                uVar3 = 0x40;
                iVar1 = *(int *)(DAT_00207c84 + 0x2079d8);
              }
              else if (param_1 == 0x59) {
                if (param_2 == 0) {
                  uVar3 = 0x600;
                  iVar1 = *(int *)(DAT_00207c88 + 0x2079ea);
                  goto LAB_00207a08;
                }
                uVar3 = 0x400;
                iVar1 = *(int *)(DAT_00207c8c + 0x2079f6);
              }
              else {
                if (param_1 != 0x5a) {
                  if (param_1 == 0x8f) {
                    if (param_2 == 0) {
                      uVar3 = 0x6000;
                      iVar1 = *(int *)(DAT_00207c98 + 0x207a2e);
LAB_00207a82:
                      *(undefined4 *)(iVar1 + 0xf48) = uVar3;
                      return param_2;
                    }
                    uVar3 = 0x4000;
                    iVar1 = *(int *)(DAT_00207c9c + 0x207a3a);
                  }
                  else if (param_1 == 0x90) {
                    if (param_2 == 0) {
                      uVar3 = 0x600;
                      iVar1 = *(int *)(DAT_00207ca0 + 0x207a4c);
                      goto LAB_00207a82;
                    }
                    uVar3 = 0x400;
                    iVar1 = *(int *)(DAT_00207ca4 + 0x207a58);
                  }
                  else if (param_1 == 0x91) {
                    if (param_2 == 0) {
                      uVar3 = 0x60;
                      iVar1 = *(int *)(DAT_00207ca8 + 0x207a68);
                      goto LAB_00207a82;
                    }
                    uVar3 = 0x40;
                    iVar1 = *(int *)(DAT_00207cac + 0x207a72);
                  }
                  else {
                    if (param_1 != 0x92) {
                      if (param_1 == 0x93) {
                        if (param_2 == 0) {
                          uVar3 = 6;
                          iVar1 = *(int *)(DAT_00207cb8 + 0x207aa4);
LAB_00207b82:
                          *(undefined4 *)(iVar1 + 0xf58) = uVar3;
                          return param_2;
                        }
                        uVar3 = 4;
                        iVar1 = *(int *)(DAT_00207cbc + 0x207aae);
LAB_00207b90:
                        *(undefined4 *)(iVar1 + 0xf54) = uVar3;
                        return 0;
                      }
                      if (param_1 == 0x94) {
                        if (param_2 != 0) {
                          *(undefined4 *)(*(int *)(DAT_00207cc4 + 0x207ad0) + 0xf14) = 0x400;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_00207cc0 + 0x207ac0) + 0xf18) = 0x600;
                        return 0;
                      }
                      if (param_1 == 0x95) {
                        if (param_2 != 0) {
                          *(undefined4 *)(*(int *)(DAT_00207ccc + 0x207af6) + 0xf04) = 0x400;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_00207cc8 + 0x207ae6) + 0xf08) = 0x600;
                        return 0;
                      }
                      if (param_1 == 0x96) {
                        if (param_2 == 0) {
                          uVar3 = 0x6000;
                          iVar1 = *(int *)(DAT_00207cd0 + 0x207b0c);
LAB_00207b60:
                          *(undefined4 *)(iVar1 + 0xf38) = uVar3;
                          return param_2;
                        }
                        uVar3 = 0x4000;
                        iVar1 = *(int *)(DAT_00207cd4 + 0x207b18);
                      }
                      else if (param_1 == 0x97) {
                        if (param_2 == 0) {
                          uVar3 = 0x600;
                          iVar1 = *(int *)(DAT_00207cd8 + 0x207b2a);
                          goto LAB_00207b60;
                        }
                        uVar3 = 0x400;
                        iVar1 = *(int *)(DAT_00207cdc + 0x207b36);
                      }
                      else if (param_1 == 0x98) {
                        if (param_2 == 0) {
                          uVar3 = 0x60;
                          iVar1 = *(int *)(DAT_00207ce0 + 0x207b46);
                          goto LAB_00207b60;
                        }
                        uVar3 = 0x40;
                        iVar1 = *(int *)(DAT_00207ce4 + 0x207b50);
                      }
                      else {
                        if (param_1 != 0x99) {
                          if (param_1 != 0x9a) {
                            uVar4 = param_1 & 0xf;
                            if (param_2 != 0) {
                              iVar1 = *(int *)(DAT_00207cfc + 0x207bbc) +
                                      ((param_1 >> 4) + 0x10) * 0x10;
LAB_00207bc0:
                              *(int *)(iVar1 + 4) = 1 << (uVar4 & 0xff);
                              return 0;
                            }
                            iVar2 = (param_1 >> 4) * 0x10 + 0x108;
                            iVar5 = 1;
                            iVar1 = *(int *)(DAT_00207cf8 + 0x207bac);
LAB_00207bac:
                            *(int *)(iVar1 + iVar2) = iVar5 << (uVar4 & 0xff);
                            return param_2;
                          }
                          if (param_2 == 0) {
                            uVar3 = 0x60;
                            iVar1 = *(int *)(DAT_00207cf0 + 0x207b82);
                            goto LAB_00207b82;
                          }
                          uVar3 = 0x40;
                          iVar1 = *(int *)(DAT_00207cf4 + 0x207b90);
                          goto LAB_00207b90;
                        }
                        if (param_2 == 0) {
                          uVar3 = 6;
                          iVar1 = *(int *)(DAT_00207ce8 + 0x207b60);
                          goto LAB_00207b60;
                        }
                        uVar3 = 4;
                        iVar1 = *(int *)(DAT_00207cec + 0x207b6e);
                      }
                      *(undefined4 *)(iVar1 + 0xf34) = uVar3;
                      return 0;
                    }
                    if (param_2 == 0) {
                      uVar3 = 6;
                      iVar1 = *(int *)(DAT_00207cb0 + 0x207a82);
                      goto LAB_00207a82;
                    }
                    uVar3 = 4;
                    iVar1 = *(int *)(DAT_00207cb4 + 0x207a90);
                  }
                  *(undefined4 *)(iVar1 + 0xf44) = uVar3;
                  return 0;
                }
                if (param_2 == 0) {
                  uVar3 = 0x6000;
                  iVar1 = *(int *)(DAT_00207c90 + 0x207a08);
                  goto LAB_00207a08;
                }
                uVar3 = 0x4000;
                iVar1 = *(int *)(DAT_00207c94 + 0x207a18);
              }
              *(undefined4 *)(iVar1 + 0xd04) = uVar3;
              return 0;
            }
            if (param_2 == 0) {
              uVar3 = 0x6000;
              iVar1 = *(int *)(DAT_00207c60 + 0x20794c);
              goto LAB_0020790a;
            }
            uVar3 = 0x4000;
            iVar1 = *(int *)(DAT_00207c64 + 0x207958);
          }
          *(undefined4 *)(iVar1 + 0xca4) = uVar3;
          return 0;
        }
        if (param_2 == 0) {
          uVar3 = 6;
          iVar1 = *(int *)(DAT_00207c30 + 0x20788a);
          goto LAB_0020784c;
        }
        uVar3 = 4;
        iVar1 = *(int *)(DAT_00207c34 + 0x207894);
      }
      *(undefined4 *)(iVar1 + 0xc34) = uVar3;
      return 0;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(DAT_00207bf8 + 0x207798);
      uVar3 = 6;
      goto LAB_00207754;
    }
    uVar3 = 4;
    iVar1 = *(int *)(DAT_00207bfc + 0x2077a4);
  }
  *(undefined4 *)(iVar1 + 0xc44) = uVar3;
  return 0;
}


// ==== FUN_00207d00 @ 00207d00 ====

undefined4 FUN_00207d00(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((0x9a < param_1) || (1 < param_2)) {
    return 0xfffffffe;
  }
  iVar2 = 0;
  do {
    if (param_1 == *(byte *)(iVar2 * 3 + DAT_002081f8 + 0x207d1a)) {
      iVar2 = DAT_002081f8 + 0x207d1a + iVar2 * 3;
      if (param_2 == 0) {
        *(int *)(*(int *)(DAT_002081fc + 0x207d34) + (*(byte *)(iVar2 + 1) + 0xd9) * 0x10 + 4) =
             1 << *(sbyte *)(iVar2 + 2);
        return 0;
      }
      *(int *)(*(int *)(DAT_00208200 + 0x207d52) + (uint)*(byte *)(iVar2 + 1) * 0x10 + 0xd98) =
           1 << *(sbyte *)(iVar2 + 2);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  if (param_1 == 0x7f) {
    uVar3 = 0x1000;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208208 + 0x207d7e);
LAB_00207d98:
      *(undefined4 *)(*piVar1 + 0xc44) = uVar3;
      return 0;
    }
    piVar1 = (int *)(DAT_00208204 + 0x207d76);
    uVar4 = uVar3;
  }
  else if (param_1 == 0x80) {
    uVar3 = 0x100;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208210 + 0x207d9a);
      goto LAB_00207d98;
    }
    piVar1 = (int *)(DAT_0020820c + 0x207d92);
    uVar4 = uVar3;
  }
  else {
    if (param_1 != 0x81) {
      if (param_1 == 0x82) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_0020821c + 0x207dd2) + 0xc48) = 1;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208220 + 0x207de2) + 0xc44) = 1;
        return 0;
      }
      if (param_1 == 0x83) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208224 + 0x207df8) + 0xc58) = 1;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208228 + 0x207e08) + 0xc54) = 1;
        return 0;
      }
      if (param_1 == 0x84) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_0020822c + 0x207e22) + 0xc18) = 0x100;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208230 + 0x207e30) + 0xc14) = 0x100;
        return 0;
      }
      if (param_1 == 0x85) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208234 + 0x207e48) + 0xc08) = 0x100;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208238 + 0x207e54) + 0xc04) = 0x100;
        return 0;
      }
      if (param_1 == 0x86) {
        uVar3 = 0x1000;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208240 + 0x207e72);
LAB_00207e88:
          *(undefined4 *)(*piVar1 + 0xc34) = uVar3;
          return 0;
        }
        piVar1 = (int *)(DAT_0020823c + 0x207e6c);
        uVar4 = uVar3;
      }
      else if (param_1 == 0x87) {
        uVar3 = 0x100;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208248 + 0x207e8a);
          goto LAB_00207e88;
        }
        piVar1 = (int *)(DAT_00208244 + 0x207e84);
        uVar4 = uVar3;
      }
      else {
        if (param_1 != 0x88) {
          if (param_1 == 0x89) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208254 + 0x207ebc) + 0xc38) = 1;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208258 + 0x207eca) + 0xc34) = 1;
            return 0;
          }
          if (param_1 == 0x79) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_0020825c + 0x207ee2) + 0xc88) = 0x100;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208260 + 0x207eee) + 0xc84) = 0x100;
            return 0;
          }
          if (param_1 == 0x7a) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208264 + 0x207f06) + 0xc78) = 0x100;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208268 + 0x207f12) + 0xc74) = 0x100;
            return 0;
          }
          if (param_1 == 0x7b) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_0020826c + 0x207f26) + 0xca8) = 1;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208270 + 0x207f34) + 0xca4) = 1;
            return 0;
          }
          if (param_1 == 0x7c) {
            uVar3 = 0x10;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208278 + 0x207f52);
LAB_00207f68:
              *(undefined4 *)(*piVar1 + 0xca4) = uVar3;
              return 0;
            }
            piVar1 = (int *)(DAT_00208274 + 0x207f4c);
            uVar4 = uVar3;
          }
          else if (param_1 == 0x7d) {
            uVar3 = 0x100;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208280 + 0x207f6a);
              goto LAB_00207f68;
            }
            piVar1 = (int *)(DAT_0020827c + 0x207f64);
            uVar4 = uVar3;
          }
          else {
            if (param_1 != 0x7e) {
              if (param_1 == 0x55) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_0020828c + 0x207fa0) + 0xce8) = 0x100;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208290 + 0x207fac) + 0xce4) = 0x100;
                return 0;
              }
              if (param_1 == 0x56) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_00208294 + 0x207fc4) + 0xcd8) = 0x100;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208298 + 0x207fd0) + 0xcd4) = 0x100;
                return 0;
              }
              if (param_1 == 0x57) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_0020829c + 0x207fe4) + 0xd08) = 1;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_002082a0 + 0x207ff2) + 0xd04) = 1;
                return 0;
              }
              if (param_1 == 0x58) {
                uVar3 = 0x10;
                if (param_2 != 0) {
                  piVar1 = (int *)(DAT_002082a8 + 0x20800c);
LAB_00208022:
                  *(undefined4 *)(*piVar1 + 0xd04) = uVar3;
                  return 0;
                }
                piVar1 = (int *)(DAT_002082a4 + 0x208006);
                uVar4 = uVar3;
              }
              else if (param_1 == 0x59) {
                uVar3 = 0x100;
                if (param_2 != 1) {
                  piVar1 = (int *)(DAT_002082b0 + 0x208024);
                  goto LAB_00208022;
                }
                piVar1 = (int *)(DAT_002082ac + 0x20801e);
                uVar4 = uVar3;
              }
              else {
                if (param_1 != 0x5a) {
                  if (param_1 == 0x8f) {
                    uVar3 = 0x1000;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_002082c0 + 0x208060);
LAB_00208076:
                      *(undefined4 *)(*piVar1 + 0xf44) = uVar3;
                      return 0;
                    }
                    piVar1 = (int *)(DAT_002082bc + 0x20805a);
                  }
                  else if (param_1 == 0x90) {
                    uVar3 = 0x100;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_002082c8 + 0x208078);
                      goto LAB_00208076;
                    }
                    piVar1 = (int *)(DAT_002082c4 + 0x208072);
                  }
                  else if (param_1 == 0x91) {
                    uVar3 = 0x10;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_002082d0 + 0x208096);
                      goto LAB_00208076;
                    }
                    piVar1 = (int *)(DAT_002082cc + 0x208090);
                    uVar3 = 0x10;
                  }
                  else {
                    if (param_1 != 0x92) {
                      if (param_1 == 0x93) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_002082dc + 0x2080c4) + 0xf58) = 6;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_002082e0 + 0x2080d2) + 0xf54) = 4;
                        return 0;
                      }
                      if (param_1 == 0x94) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_002082e4 + 0x2080ea) + 0xf18) = 0x100;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_002082e8 + 0x2080f6) + 0xf14) = 0x100;
                        return 0;
                      }
                      if (param_1 == 0x95) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_002082ec + 0x20810e) + 0xf08) = 0x100;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_002082f0 + 0x20811a) + 0xf04) = 0x100;
                        return 0;
                      }
                      if (param_1 == 0x96) {
                        uVar3 = 0x1000;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_002082f8 + 0x208138);
                          goto LAB_0020814e;
                        }
                        piVar1 = (int *)(DAT_002082f4 + 0x208132);
                        uVar4 = uVar3;
                      }
                      else if (param_1 == 0x97) {
                        uVar3 = 0x100;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_00208300 + 0x208150);
LAB_0020814e:
                          *(undefined4 *)(*piVar1 + 0xf34) = uVar3;
                          return 0;
                        }
                        piVar1 = (int *)(DAT_002082fc + 0x20814a);
                        uVar4 = uVar3;
                      }
                      else {
                        if (param_1 != 0x98) {
                          if (param_1 == 0x99) {
                            if (param_2 == 1) {
                              *(undefined4 *)(*(int *)(DAT_0020830c + 0x208182) + 0xf38) = 1;
                              return 0;
                            }
                            *(undefined4 *)(*(int *)(DAT_00208310 + 0x208190) + 0xf34) = 1;
                            return 0;
                          }
                          if (param_1 != 0x9a) {
                            if (param_2 == 0) {
                              *(int *)(*(int *)(DAT_0020831c + 0x2081d0) +
                                      (param_1 >> 4) * 0x10 + 0x208) = 1 << (param_1 & 0xf);
                              return 0;
                            }
                            *(int *)(*(int *)(DAT_00208320 + 0x2081e0) +
                                     ((param_1 >> 4) + 0x20) * 0x10 + 4) = 1 << (param_1 & 0xf);
                            return 0;
                          }
                          if (param_2 == 1) {
                            *(undefined4 *)(*(int *)(DAT_00208314 + 0x2081a8) + 0xf58) = 0x10;
                            return 0;
                          }
                          *(undefined4 *)(*(int *)(DAT_00208318 + 0x2081b4) + 0xf54) = 0x10;
                          return 0;
                        }
                        uVar3 = 0x10;
                        uVar4 = 0x10;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_00208308 + 0x208174);
                          goto LAB_0020814e;
                        }
                        piVar1 = (int *)(DAT_00208304 + 0x208168);
                      }
                      *(undefined4 *)(*piVar1 + 0xf38) = uVar4;
                      return 0;
                    }
                    uVar3 = 1;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_002082d8 + 0x2080b4);
                      goto LAB_00208076;
                    }
                    piVar1 = (int *)(DAT_002082d4 + 0x2080a8);
                  }
                  *(undefined4 *)(*piVar1 + 0xf48) = uVar3;
                  return 0;
                }
                uVar3 = 0x1000;
                uVar4 = 0x1000;
                if (param_2 != 1) {
                  piVar1 = (int *)(DAT_002082b8 + 0x208048);
                  goto LAB_00208022;
                }
                piVar1 = (int *)(DAT_002082b4 + 0x20803c);
              }
              *(undefined4 *)(*piVar1 + 0xd08) = uVar4;
              return 0;
            }
            uVar3 = 0x1000;
            uVar4 = 0x1000;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208288 + 0x207f8e);
              goto LAB_00207f68;
            }
            piVar1 = (int *)(DAT_00208284 + 0x207f82);
          }
          *(undefined4 *)(*piVar1 + 0xca8) = uVar4;
          return 0;
        }
        uVar3 = 0x10;
        uVar4 = 0x10;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208250 + 0x207eae);
          goto LAB_00207e88;
        }
        piVar1 = (int *)(DAT_0020824c + 0x207ea2);
      }
      *(undefined4 *)(*piVar1 + 0xc38) = uVar4;
      return 0;
    }
    uVar3 = 0x10;
    uVar4 = 0x10;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208218 + 0x207dc2);
      goto LAB_00207d98;
    }
    piVar1 = (int *)(DAT_00208214 + 0x207db4);
  }
  *(undefined4 *)(*piVar1 + 0xc48) = uVar4;
  return 0;
}


// ==== FUN_002083a8 @ 002083a8 ====

undefined4 FUN_002083a8(uint param_1,uint param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  if ((param_1 < 0x9b) && (param_2 < 8)) {
    iVar1 = FUN_00200a00(param_1,5);
    iVar2 = *(int *)(DAT_002083f8 + 0x2083c6);
    iVar1 = (iVar1 + 0x60) * 0x10;
    FUN_00200a98(param_1,5);
    *(uint *)(iVar2 + iVar1) =
         *(uint *)(iVar2 + iVar1) & ~(7 << (extraout_r1 * 3 & 0xffU)) |
         param_2 << (extraout_r1 * 3 & 0xffU);
    return 0;
  }
  return 0xfffffffe;
}


// ==== FUN_002083fc @ 002083fc ====

void FUN_002083fc(uint *param_1)

{
  *param_1 = *param_1 & 0x7fffffff;
  return;
}


// ==== FUN_00208406 @ 00208406 ====

void FUN_00208406(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002083fc(&local_c);
  FUN_0020767c(local_c,param_2);
  return;
}


// ==== FUN_00208422 @ 00208422 ====

void FUN_00208422(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002083fc(&local_c);
  FUN_002076c4(local_c,param_2);
  return;
}


// ==== FUN_0020843e @ 0020843e ====

void FUN_0020843e(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002083fc(&local_c);
  FUN_00207d00(local_c,param_2);
  return;
}


// ==== FUN_00208490 @ 00208490 ====

void FUN_00208490(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002083fc(&local_c);
  FUN_002083a8(local_c,param_2);
  return;
}


// ==== FUN_002084ae @ 002084ae ====

undefined4 FUN_002084ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00216eb8(param_2,param_1,0,param_1,param_4);
  thunk_FUN_00216e08();
  return 0;
}


// ==== FUN_00208808 @ 00208808 ====

undefined4 FUN_00208808(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_2c;
  
  iVar10 = DAT_002089e0 + 0x208824;
  uVar5 = param_1[3];
  if (((((*(uint *)(DAT_002089dc + 0x208812) == (uint)*(byte *)((int)param_1 + 0x32)) &&
        (*(int *)(DAT_002089e4 + 0x20882e) == param_1[8])) &&
       ((*(uint *)(*param_1 + 0x20) & 0xffff) ==
        *(uint *)(*(int *)(iVar10 + DAT_002089e8) + (uint)*(ushort *)(param_1 + 1) * 4))) &&
      (iVar2 = (uint)*(ushort *)(param_1 + 1) * 0x10,
      iVar6 = *(int *)(iVar10 + DAT_002089ec) + iVar2,
      *(char *)(*(int *)(iVar10 + DAT_002089ec) + iVar2) != '\0')) &&
     ((*(char *)(iVar6 + 3) != '\0' || (*(char *)(iVar6 + 0xf) != '\0')))) {
    FUN_002127e8(DAT_002089f0 + 0x208860);
  }
  uVar9 = (uint)*(byte *)((int)param_1 + 0x32);
  uVar7 = param_1[8];
  *(uint *)(DAT_002089f4 + 0x20886e) = uVar9;
  *(uint *)(DAT_002089f8 + 0x208878) = uVar7;
  if (uVar9 == 2) {
    if (0xd48 < uVar7) goto LAB_0020889c;
    uVar13 = 8;
  }
  else {
    if ((uVar9 == 1) && (400 < uVar7)) {
LAB_0020889c:
      FUN_002127e8(DAT_002089fc + 0x2088a4,0x83);
      return 0xffffffea;
    }
    uVar13 = 0x40;
  }
  uVar12 = 1;
  local_2c = 8;
  uVar8 = uVar5;
  uVar14 = uVar13;
  do {
    uVar11 = 1;
    do {
      uVar3 = FUN_00200a00(uVar5 >> 1,uVar11 * uVar12);
      if ((uVar3 <= uVar7) && (uVar7 - uVar3 < uVar8)) {
        uVar8 = uVar7 - uVar3;
        uVar14 = uVar11;
        local_2c = uVar12 & 0xffff;
      }
      uVar11 = uVar11 + 1 & 0xffff;
    } while (uVar11 <= uVar13);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 9);
  uVar5 = FUN_00200a00(uVar5,uVar14 * local_2c * 2);
  if (uVar7 < uVar5) {
    if (uVar9 == 2) {
      iVar10 = DAT_00208a00 + 0x208922;
    }
    else {
      iVar10 = DAT_00208a04 + 0x208928;
    }
    FUN_002127e8(DAT_00208a08 + 0x208930,0x9c,iVar10,uVar7);
    uVar4 = DAT_002089d8;
  }
  else {
    uVar7 = uVar14 - 1 & 0xffff;
    uVar13 = local_2c - 1 & 0xffff;
    uVar8 = *(uint *)(*param_1 + 0x20) & 0xfffff8c0;
    if (uVar9 == 2) {
      uVar8 = uVar8 | 0x10;
      *(uint *)(*(int *)(iVar10 + DAT_002089e8) + (uint)*(ushort *)(param_1 + 1) * 4) = uVar8;
      *(short *)(param_1 + 0xf) = (short)uVar8;
      uVar1 = (ushort)(uVar13 << 0xc) | (ushort)((uVar14 - 1 & 7) << 8) |
              (ushort)*(undefined4 *)(*param_1 + 0x48) & 0x88ff | 1;
    }
    else {
      uVar8 = uVar7 | uVar13 << 8 | uVar8;
      *(uint *)(*(int *)(iVar10 + DAT_002089e8) + (uint)*(ushort *)(param_1 + 1) * 4) = uVar8;
      *(short *)(param_1 + 0xf) = (short)uVar8;
      uVar1 = (ushort)*(undefined4 *)(*param_1 + 0x48) & 0xfffe;
    }
    *(ushort *)((int)param_1 + 0x3e) = uVar1;
    iVar2 = *(int *)(iVar10 + DAT_002089ec) + (uint)*(ushort *)(param_1 + 1) * 0x10;
    uVar4 = 0;
    if ((*(char *)(*(int *)(iVar10 + DAT_002089ec) + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0')
       && ((*(char *)(iVar2 + 3) != '\0' || (uVar4 = 0, *(char *)(iVar2 + 0xf) != '\0')))) {
      FUN_002127e8(DAT_00208a10 + 0x2089ba,uVar5,*(undefined4 *)(DAT_00208a0c + 0x2089b8),uVar13,
                   uVar7);
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ==== FUN_00208a14 @ 00208a14 ====

void FUN_00208a14(int *param_1)

{
  int iVar1;
  
  FUN_002127e8(DAT_00208ae0 + 0x208a60,0xd5,param_1[3],(short)param_1[1],
               *(undefined1 *)((int)param_1 + 0x32),param_1[5],*(undefined1 *)((int)param_1 + 0x37),
               param_1[6],(char)param_1[0xe],(short)param_1[2],*(undefined2 *)((int)param_1 + 0x46),
               *(undefined2 *)((int)param_1 + 0x42),(short)param_1[0x12],(short)param_1[0x11],
               param_1[8]);
  FUN_002127e8(DAT_00208ae4 + 0x208a6e,0xd8,*param_1);
  iVar1 = *param_1;
  FUN_002127e8(DAT_00208ae8 + 0x208ad6,0xec,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
               *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),
               *(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
               *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x30),
               *(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x48),
               *(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 100),
               *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x6c));
  return;
}


// ==== FUN_00208aec @ 00208aec ====

void FUN_00208aec(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  ushort uVar7;
  undefined1 *puVar8;
  int iVar9;
  
  puVar6 = (undefined1 *)param_1[0xb];
  uVar7 = *(ushort *)(param_1 + 0x11);
  FUN_00214d5a((short)param_1[0x10],*param_1 + 0x10);
  iVar9 = DAT_00208cf8 + 0x208b0e;
  if ((uint)param_1[8] < 0x65) {
    FUN_00214d5a(0x8001,*param_1 + 0x28);
  }
  FUN_00214d5a((short)param_1[0xf],*param_1 + 0x20);
  FUN_00214d5a(*(undefined2 *)((int)param_1 + 0x3e),*param_1 + 0x48);
  if ((short)param_1[9] == 0) {
    *(undefined2 *)(param_1 + 9) = 2;
  }
  if (-1 < (int)((uint)*(ushort *)(param_1 + 0x10) << 0x1e)) {
    FUN_00214d5a((short)param_1[9],*param_1 + 0x1c);
  }
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  FUN_00214d5a(uVar2,*param_1 + 0x40);
  uVar3 = (uint)*(byte *)(param_1 + 0xc) << 1;
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    uVar3 = uVar3 | 1;
  }
  FUN_00214d5a(uVar3,*param_1 + 4);
  FUN_00214d5a(7,*param_1 + 0xc);
  FUN_00214d5a(1,*param_1 + 0x38);
  iVar5 = *param_1;
  if ((char)param_1[0xe] == '\0') {
    uVar3 = *(uint *)(iVar5 + 8) & 0xffff | 7;
  }
  else {
    uVar3 = *(uint *)(iVar5 + 8) & 0xfff8;
  }
  FUN_00214d5a(uVar3,iVar5 + 8);
  FUN_00214d5a(*(undefined2 *)((int)param_1 + 0x46),*param_1 + 0x14);
  FUN_00214d5a((short)param_1[0x12],*param_1 + 0x6c);
  FUN_00214d5a(*(undefined1 *)((int)param_1 + 0x42),*param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x37) == '\0') {
    if (param_1[6] != 2) {
      puVar8 = puVar6 + uVar7;
      for (; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        FUN_00214d5a(*puVar6,*param_1);
      }
      uVar7 = 0xffff;
    }
    goto LAB_00208cee;
  }
  FUN_00214d5a(1,param_1[7] + 0xc);
  iVar5 = param_1[7];
  if (param_1[6] == 2) {
    FUN_00214d5a(0,iVar5);
    FUN_00214d5a(1,param_1[7] + 0x18);
    FUN_00214d5a(param_1[0xb],param_1[7] + 0x20);
    iVar5 = param_1[7];
    uVar1 = (undefined2)param_1[0x11];
LAB_00208c62:
    iVar5 = iVar5 + 0x28;
  }
  else {
    if (param_1[6] != 1) {
      FUN_00214d5a(0,iVar5);
      FUN_00214d5a(0,param_1[7] + 0x18);
      FUN_00214d5a(param_1[0xb],param_1[7] + 0x1c);
      FUN_00214d5a(param_1[0xb],param_1[7] + 0x20);
      FUN_00214d5a(*(undefined2 *)((int)param_1 + 0x46),param_1[7] + 0x24);
      iVar5 = param_1[7];
      uVar1 = (undefined2)param_1[0x12];
      goto LAB_00208c62;
    }
    FUN_00214d5a(0,iVar5);
    FUN_00214d5a(0,param_1[7] + 0x18);
    FUN_00214d5a(param_1[0xb],param_1[7] + 0x1c);
    uVar1 = (undefined2)param_1[0x11];
    iVar5 = param_1[7] + 0x24;
  }
  FUN_00214d5a(uVar1,iVar5);
  FUN_00214d5a(1,param_1[7] + 8);
  iVar5 = *(int *)(iVar9 + DAT_00208cfc);
  iVar9 = iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10;
  if ((*(char *)(iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
     ((*(char *)(iVar9 + 1) != '\0' || (*(char *)(iVar9 + 0xf) != '\0')))) {
    FUN_002127e8(DAT_00208d00 + 0x208c94,(char)param_1[0xc],(short)param_1[0x11]);
  }
  iVar9 = iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10;
  if ((*(char *)(iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
     ((*(char *)(iVar9 + 1) != '\0' || (*(char *)(iVar9 + 0xf) != '\0')))) {
    puVar4 = (undefined4 *)param_1[7];
    FUN_002127e8(DAT_00208d04 + 0x208cce,*puVar4,puVar4[6],puVar4[7],puVar4[8],puVar4[9],puVar4[10],
                 puVar4[2]);
  }
LAB_00208cee:
  *(ushort *)(param_1 + 0x11) = uVar7;
  return;
}


// ==== FUN_00208d08 @ 00208d08 ====

undefined4 FUN_00208d08(uint param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  sVar1 = (short)uVar4;
  uVar7 = (undefined2)(uVar4 >> 0x10);
  sVar5 = sVar1;
  if (*(char *)(param_1 + 0x37) == '\0') {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x18) == 3) {
      if ((((uVar4 & 0xffff) - 1 & 0xffff) < 8) && (((uVar4 >> 0x10) - 1 & 0xffff) < 8)) {
        uVar4 = 2;
        goto LAB_00208e64;
      }
      FUN_002127e8(DAT_00208e84 + 0x208d76,0x1fc,uVar4 & 0xffff,2,uVar4 >> 0x10,param_2);
      uVar4 = 2;
    }
    else {
      uVar6 = uVar4 & 0xffff;
      uVar4 = (uVar4 & 0xffffff) >> 0x10;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      sVar5 = (short)(uVar6 * uVar4);
      if ((uVar6 != 0) && (uVar6 * uVar4 < 9)) {
        uVar7 = 0;
        goto LAB_00208e64;
      }
      uVar7 = 0;
      FUN_002127e8(DAT_00208e80 + 0x208d4a,0x1f0,uVar6,uVar4,0,param_2);
    }
    uVar8 = 0xffffffea;
  }
  else {
    iVar9 = *(int *)(DAT_00208e7c + 0x208d18 + DAT_00208e88);
    if (*(int *)(param_1 + 0x18) == 3) {
      uVar10 = uVar4 & 0xffff;
      uVar6 = uVar4 >> 0x10;
      if (((uVar10 - 1 & 0xffff) < 0xfffc) && (((uVar4 >> 0x10) - 1 & 0xffff) < 0x100)) {
        uVar8 = 0;
        uVar4 = param_1;
      }
      else {
        uVar4 = uVar6;
        FUN_002127e8(DAT_00208e94 + 0x208e1c,0x21c,uVar10,2,uVar6,param_2);
        uVar8 = 0xffffffea;
      }
      iVar2 = (uint)*(ushort *)(param_1 + 4) * 0x10;
      iVar3 = iVar9 + iVar2;
      if ((*(char *)(iVar9 + iVar2) != '\0') &&
         ((*(char *)(iVar3 + 1) != '\0' || (*(char *)(iVar3 + 0xf) != '\0')))) {
        FUN_002127e8(DAT_00208e98 + 0x208e4e,uVar10,2,uVar6,uVar4,param_2);
      }
      uVar4 = 2;
    }
    else {
      uVar6 = uVar4 & 0xffff;
      uVar4 = (uVar4 & 0xffffff) >> 0x10;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      sVar5 = sVar1 * (short)uVar4;
      if ((uVar6 - 1 & 0xffff) < 0xfffc) {
        uVar8 = 0;
        uVar10 = param_1;
      }
      else {
        uVar10 = 0;
        FUN_002127e8(DAT_00208e8c + 0x208dbe,0x20f,uVar6,uVar4,0,param_2);
        uVar8 = 0xffffffea;
      }
      iVar2 = (uint)*(ushort *)(param_1 + 4) * 0x10;
      iVar3 = iVar9 + iVar2;
      uVar7 = 0;
      if ((*(char *)(iVar9 + iVar2) != '\0') &&
         ((*(char *)(iVar3 + 1) != '\0' || (uVar7 = 0, *(char *)(iVar3 + 0xf) != '\0')))) {
        uVar7 = 0;
        FUN_002127e8(DAT_00208e90 + 0x208df2,uVar6,uVar4,0,uVar10,param_2);
      }
    }
  }
LAB_00208e64:
  *(short *)(param_1 + 0x42) = (short)uVar4;
  *(short *)(param_1 + 0x46) = sVar1;
  *(short *)(param_1 + 0x44) = sVar5;
  *(undefined2 *)(param_1 + 0x48) = uVar7;
  return uVar8;
}


// ==== FUN_00208e9c @ 00208e9c ====

int FUN_00208e9c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_002090b0 + 0x208eaa;
  uVar6 = param_1[0xb];
  if (*(char *)((int)param_1 + 0x37) != '\0') {
    iVar1 = *(int *)(iVar5 + DAT_002090b4);
    iVar4 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
    if ((*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
       ((*(char *)(iVar4 + 1) != '\0' || (*(char *)(iVar4 + 0xf) != '\0')))) {
      FUN_002127e8(DAT_002090b8 + 0x208ec8);
    }
    if (param_1[7] == 0) {
      uVar2 = 0x236;
      uVar6 = (uint)*(ushort *)(param_1 + 1);
      iVar5 = DAT_002090bc + 0x208eda;
      goto LAB_00208f32;
    }
    if (0xc0000000 < uVar6) {
      FUN_002127e8(DAT_002090c0 + 0x208eea,0x23c);
      return -0x16;
    }
  }
  *(undefined2 *)(param_1 + 2) = 0;
  uVar6 = FUN_00208d08(param_1);
  if ((int)uVar6 < 0) {
    uVar2 = 0x24b;
    iVar5 = DAT_002090c4 + 0x208f06;
  }
  else {
    if ((short)param_1[1] == 2) {
      param_1[3] = 13000;
    }
    else {
      uVar2 = FUN_00210ff8();
      iVar1 = FUN_002008c0(uVar2,10);
      param_1[3] = iVar1;
    }
    uVar6 = FUN_00208808(param_1);
    if (-1 < (int)uVar6) {
      *(undefined2 *)(param_1 + 0x10) = 0x28;
      if (*(char *)((int)param_1 + 0x37) != '\0') {
        *(undefined2 *)(param_1 + 0x10) = 0x2c;
      }
      if (param_1[6] == 3) {
        *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x10;
      }
      if ((*(char *)((int)param_1 + 0x32) == '\x02') ||
         ((1 < *(ushort *)((int)param_1 + 0x42) && (param_1[5] == 1)))) {
        *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 2;
      }
      FUN_00208aec(param_1);
      iVar1 = *(int *)(iVar5 + DAT_002090b4);
      iVar5 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
      if ((*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
         ((*(char *)(iVar5 + 2) != '\0' || (*(char *)(iVar5 + 0xf) != '\0')))) {
        FUN_002127e8(DAT_002090cc + 0x208fa6);
      }
      FUN_00214d5a(1,*param_1 + 0x24);
      iVar5 = param_1[10];
      if ((char)param_1[0xe] == '\0') {
LAB_00209066:
        if ((*(char *)((int)param_1 + 0x37) == '\0') && (param_1[6] - 2U < 2)) {
          uVar6 = (*(uint *)(*param_1 + 0x30) & 0xff) >> 4;
          puVar3 = (undefined1 *)param_1[0xb];
          while (uVar6 = uVar6 - 1 & 0xffff, uVar6 != 0xffff) {
            *puVar3 = (char)*(undefined4 *)*param_1;
            puVar3 = puVar3 + 1;
          }
        }
      }
      else {
        iVar4 = 0xffff;
        do {
          uVar6 = *(uint *)(*param_1 + 0xc);
          *(short *)(param_1 + 2) = (short)uVar6;
          if ((uVar6 & 6) != 0) {
            iVar5 = -0x79;
            FUN_002127e8(DAT_002090e0 + 0x2090a4,0x151,(short)param_1[1],(char)param_1[0xc]);
            goto LAB_00208ff2;
          }
          if ((int)(uVar6 << 0x1f) < 0) goto LAB_00209066;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar5 = -0x6e;
        FUN_002127e8(DAT_002090d0 + 0x208fec,0x14d,(short)param_1[1],(char)param_1[0xc]);
LAB_00208ff2:
        if ((int)((uint)*(ushort *)(param_1 + 2) << 0x1d) < 0) {
          FUN_002127e8(DAT_002090d4 + 0x209002,0x155);
        }
        if ((int)((uint)*(ushort *)(param_1 + 2) << 0x1e) < 0) {
          FUN_002127e8(DAT_002090d8 + 0x209014,0x157);
        }
        if (*(char *)((int)param_1 + 0x3a) == '\0') {
          FUN_00208a14(param_1);
        }
        FUN_00214d5a(1,*param_1 + 0x50);
        FUN_00214d5a(0,*param_1 + 4);
        FUN_00214d5a(7,*param_1 + 0xc);
        FUN_00214d5a(1,*param_1 + 0x38);
      }
      iVar4 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
      if (*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) == '\0') {
        return iVar5;
      }
      if ((*(char *)(iVar4 + 2) == '\0') && (*(char *)(iVar4 + 0xf) == '\0')) {
        return iVar5;
      }
      FUN_002127e8(DAT_002090dc + 0x209062);
      return iVar5;
    }
    uVar2 = 599;
    iVar5 = DAT_002090c8 + 0x208f34;
  }
LAB_00208f32:
  FUN_002127e8(iVar5,uVar2,uVar6);
  return -0x16;
}


// ==== FUN_002090e4 @ 002090e4 ====

undefined4 FUN_002090e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = 0x288;
    iVar1 = DAT_00209110 + 0x2090f6;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      return 0;
    }
    uVar2 = 0x28f;
    iVar1 = DAT_00209114 + 0x209104;
  }
  FUN_002127e8(iVar1,uVar2,param_3,0,param_4);
  return 0xffffffea;
}


// ==== FUN_00209118 @ 00209118 ====

void FUN_00209118(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  switch(*(undefined2 *)(param_1 + 1)) {
  case 0:
    uVar2 = DAT_0020919c;
    break;
  case 1:
    uVar2 = DAT_002091a0;
    break;
  case 2:
    uVar2 = DAT_002091a4;
    break;
  case 3:
    uVar2 = DAT_002091a8;
    break;
  default:
    FUN_002127e8(DAT_002091ac + 0x209146,0x2aa);
    goto LAB_00209148;
  }
  *param_1 = uVar2;
LAB_00209148:
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[5] = (uint)(param_1[5] == 1);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(bool *)((int)param_1 + 0x3a) = *(char *)((int)param_1 + 0x3a) == '\x01';
  if (param_1[8] == 0) {
    *(undefined1 *)((int)param_1 + 0x32) = 0;
    param_1[8] = 100;
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x32);
    if (cVar1 != '\x02') {
      cVar1 = '\x01';
    }
    *(char *)((int)param_1 + 0x32) = cVar1;
  }
  *(bool *)((int)param_1 + 0x39) = *(char *)((int)param_1 + 0x39) == '\x01';
  return;
}


// ==== FUN_002091b0 @ 002091b0 ====

int FUN_002091b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(int *)(param_1 + 0x1c) =
       (int)(s_verify_fail__ret____d_0021fff5 + *(ushort *)(param_1 + 4) + 0xe) * 0x80;
  iVar1 = FUN_002090e4();
  if (iVar1 < 0) {
    FUN_002127e8(DAT_00209210 + 0x2091e0,0x314);
    return iVar1;
  }
  FUN_00209118(param_1);
  iVar1 = FUN_00208e9c(param_1);
  if (*(int *)(param_1 + 0x28) != iVar1) {
    FUN_002127e8(DAT_00209214 + 0x209204,0x31d,*(int *)(param_1 + 0x28),iVar1);
    return -1;
  }
  return 0;
}


// ==== FUN_00209218 @ 00209218 ====

int FUN_00209218(int param_1,undefined4 param_2,ushort param_3,int param_4)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x28) = (uint)param_3 | param_4 << 0x10;
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x1c) =
       (int)(s_verify_fail__ret____d_0021fff5 + *(ushort *)(param_1 + 4) + 0xe) * 0x80;
  iVar1 = FUN_002090e4();
  if (iVar1 < 0) {
    FUN_002127e8(DAT_00209280 + 0x20924e,0x33c);
    return iVar1;
  }
  FUN_00209118(param_1);
  iVar1 = FUN_00208e9c(param_1);
  if (*(int *)(param_1 + 0x28) != iVar1) {
    FUN_002127e8(DAT_00209284 + 0x209272,0x345,*(int *)(param_1 + 0x28),iVar1);
    return -1;
  }
  return 0;
}


// ==== FUN_00209344 @ 00209344 ====

void FUN_00209344(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar2) = 0;
    *(undefined4 *)((int)param_2 + iVar2) = 0;
    *(undefined4 *)((int)param_3 + iVar2) = 0;
    uVar1 = DAT_00209384;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0xc);
  *param_1 = DAT_00209380;
  *param_3 = 1;
  param_1[1] = uVar1;
  param_3[1] = 1;
  *param_2 = DAT_00209388;
  *param_3 = *param_3 | 0x10;
  param_2[1] = DAT_0020938c;
  param_3[1] = param_3[1] | 0x10;
  return;
}


// ==== FUN_00209390 @ 00209390 ====

void FUN_00209390(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_3c [10];
  
  piVar1 = local_3c + 3;
  piVar2 = local_3c + 6;
  FUN_002127e8(DAT_0020940c + 0x20939a);
  FUN_00209344(local_3c,piVar1,piVar2);
  iVar4 = 0;
  do {
    if (*(int *)((int)piVar1 + iVar4) != 0) {
      FUN_00208490(*(int *)((int)piVar1 + iVar4),(*(uint *)((int)piVar2 + iVar4) & 0xff) >> 4);
      FUN_00208406(*(undefined4 *)((int)piVar1 + iVar4),0);
      FUN_00208422(*(undefined4 *)((int)piVar1 + iVar4),1);
      FUN_0020843e(*(undefined4 *)((int)piVar1 + iVar4),1);
    }
    iVar3 = *(int *)((int)local_3c + iVar4);
    if (iVar3 != 0) {
      FUN_00208490(iVar3,*(uint *)((int)piVar2 + iVar4) & 0xf);
      FUN_00208406(*(undefined4 *)((int)local_3c + iVar4),1);
      FUN_00208422(*(undefined4 *)((int)local_3c + iVar4),0);
      FUN_0020843e(*(undefined4 *)((int)local_3c + iVar4),0);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0xc);
  thunk_FUN_00214dc4(0x21);
  return;
}


// ==== FUN_00209410 @ 00209410 ====

void FUN_00209410(void)

{
  FUN_00211468(0x40,0,1,0);
  FUN_00209390();
  *DAT_00209444 = *DAT_00209444 & 0xfffe;
  *DAT_00209448 = 1;
  FUN_00211468(0x40,0,1,2);
  return;
}


// ==== FUN_0020944c @ 0020944c ====

void FUN_0020944c(void)

{
  return;
}


// ==== FUN_00209450 @ 00209450 ====

undefined4 FUN_00209450(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x48) {
    if (param_1 == 2) {
      iVar1 = FUN_0021187e();
      if (iVar1 == 1) {
        FUN_002127e8(DAT_002094ac + 0x20947a);
        return 1;
      }
    }
    else if (((uint)*(ushort *)(DAT_002094a4 + (param_1 >> 4) * 4) & 1 << (param_1 & 0xf)) == 0) {
      FUN_002127e8(DAT_002094b0 + 0x20949c,param_1);
      return 1;
    }
  }
  else {
    FUN_002127e8(DAT_002094a8 + 0x20945e,param_1);
  }
  return 0;
}


// ==== FUN_00209ed4 @ 00209ed4 ====

/* WARNING: Removing unreachable block (ram,0x0021723c) */

void FUN_00209ed4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  undefined4 uVar33;
  undefined4 in_r3;
  uint *puVar34;
  undefined4 *puVar35;
  int iVar36;
  int iVar37;
  
  puVar27 = DAT_00209f30;
  puVar35 = DAT_00209f2c;
  if ((**(int **)(DAT_00209f3c + 0x209ede + DAT_00209f40) == 1) &&
     (**(int **)(DAT_00209f3c + 0x209ede + DAT_00209f44) == 1)) {
    FUN_002127e8(DAT_00209f48 + 0x209efc,*DAT_00209f34,DAT_00209f44,DAT_00209f34,in_r3);
    puVar1 = DAT_00209f38;
    *puVar35 = 0;
    *puVar27 = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    return;
  }
  *DAT_00209f2c = 0;
  *puVar27 = 0;
  *DAT_00206644 = DAT_00206640;
  uVar12 = FUN_00206350();
  iVar37 = DAT_00206648 + 0x20651c;
  puVar35 = *(undefined4 **)(iVar37 + DAT_0020664c);
  *puVar35 = uVar12;
  FUN_002127e8(DAT_00206650 + 0x206526,uVar12);
  switch(*puVar35) {
  case 1:
    iVar26 = DAT_00206654 + 0x20653e;
    break;
  case 2:
    iVar26 = DAT_00206658 + 0x206544;
    break;
  case 3:
    iVar26 = DAT_0020665c + 0x20654e;
    break;
  case 4:
    iVar26 = DAT_00206660 + 0x206554;
    break;
  default:
    uVar12 = FUN_00206350();
    FUN_002127e8(DAT_00206664 + 0x206560,uVar12);
    goto LAB_00206562;
  }
  FUN_002127e8(iVar26);
LAB_00206562:
  FUN_002127e8(DAT_00206668 + 0x20656c,0);
  FUN_002127e8(DAT_0020666c + 0x20657a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (**(int **)(iVar37 + DAT_00206670) < 1) {
    iVar26 = 0;
    iVar37 = DAT_00206674 + 0x2065a8;
    goto LAB_0020725a;
  }
  iVar26 = DAT_0020667c + 0x2065b6;
  **(undefined4 **)(iVar37 + DAT_00206678) = 0;
  FUN_002127e8(iVar26,0);
  iVar36 = *(int *)(iVar37 + DAT_00206680);
  uVar13 = (uint)*(byte *)(iVar36 + 0x13);
  uVar14 = (uint)*(byte *)(iVar36 + 0x14);
  uVar15 = (uint)*(byte *)(iVar36 + 0x15);
  uVar16 = (uint)*(byte *)(iVar36 + 0x16);
  uVar17 = (uint)*(byte *)(iVar36 + 0x17);
  uVar18 = (uint)*(byte *)(iVar36 + 0x18);
  uVar19 = (uint)*(byte *)(iVar36 + 0x19);
  uVar20 = (uint)*(byte *)(iVar36 + 0x1a);
  uVar21 = (uint)*(byte *)(iVar36 + 0x1b);
  uVar22 = (uint)*(byte *)(iVar36 + 0x1c);
  uVar23 = (uint)*(byte *)(iVar36 + 0x1d);
  uVar24 = (uint)*(byte *)(iVar36 + 0x1e);
  uVar25 = (uint)*(byte *)(iVar36 + 0x1f);
  FUN_002127e8(DAT_00206684 + 0x2065fe,*(undefined1 *)(iVar36 + 0x10),*(undefined1 *)(iVar36 + 0x11)
               ,*(undefined1 *)(iVar36 + 0x12),uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,
               uVar20,uVar21,uVar22,uVar23,uVar24,uVar25);
  iVar26 = DAT_00206a58;
  puVar35 = DAT_00206930;
  uVar30 = *(uint *)(iVar36 + 4) & 0xf;
  if (uVar30 == 2) {
    FUN_002127e8(DAT_00206688 + 0x206610);
    uVar12 = 0xb4c;
    iVar37 = DAT_0020668c + 0x20661e;
    iVar26 = DAT_00206690 + 0x206620;
LAB_00206ff8:
    FUN_00210798(iVar37,uVar12,iVar26);
  }
  else {
    if (uVar30 != 3) {
      if (uVar30 == 4) {
        FUN_002127e8(DAT_00207178 + 0x206fd4);
        uVar12 = 0xba9;
        iVar37 = DAT_0020717c + 0x206fe2;
        iVar26 = DAT_00207180 + 0x206fe4;
      }
      else {
        FUN_002127e8(DAT_00207184 + 0x206fea);
        uVar12 = 0xbaf;
        iVar37 = DAT_00207188 + 0x206ff8;
        iVar26 = DAT_0020718c + 0x206ffa;
      }
      goto LAB_00206ff8;
    }
    piVar31 = *(int **)(iVar37 + DAT_00206694);
    iVar28 = DAT_00206a54;
    if ((undefined1 *)(*(uint *)(iVar36 + 0xb0) & 0xfff00000) == &DAT_11200000) {
      iVar28 = DAT_00206698;
    }
    iVar28 = *(int *)(iVar37 + iVar28);
    *piVar31 = iVar28;
    puVar4 = DAT_00206a5c;
    puVar27 = DAT_00206934;
    iVar32 = *piVar31;
    FUN_002127e8(iVar26 + 0x2066aa,*(undefined4 *)(iVar32 + 0xc),iVar28,iVar32,uVar13,uVar14,uVar15,
                 uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25);
    FUN_002127e8(DAT_00206a60 + 0x2066c0,0x48,0xf);
    FUN_00206458(0x48);
    FUN_0020647c(0xf);
    FUN_002064bc(0);
    FUN_002127e8(DAT_00206a64 + 0x2066e0,0x640,2);
    iVar26 = FUN_00210f94();
    FUN_002127e8(DAT_00206a68 + 0x2066f4,iVar26 << 2,0x640,2);
    puVar2 = DAT_00206a6c;
    uVar12 = DAT_0020693c;
    *DAT_00206938 = *(uint *)(iVar36 + 0x28);
    puVar1 = DAT_00206940;
    *DAT_00206940 = DAT_00206944;
    puVar1[2] = DAT_00206948;
    puVar1 = DAT_0020694c;
    *DAT_0020694c = 0;
    puVar1[2] = uVar12;
    puVar1[6] = DAT_00206950;
    puVar1[8] = 3;
    puVar1[10] = DAT_00206954;
    puVar1[0x18] = DAT_00206958;
    puVar1[0x34] = 0x27;
    puVar1[0x36] = DAT_0020695c;
    puVar29 = DAT_00206960;
    puVar1[0x38] = 0;
    *puVar29 = 0xcccccccc;
    puVar29[2] = 0xcccccccc;
    uVar12 = DAT_00206964;
    puVar29[0x1c] = DAT_00206964;
    puVar29[0x1d] = uVar12;
    uVar12 = DAT_00206968;
    puVar29[0x1e] = DAT_00206968;
    puVar29[0x1f] = uVar12;
    uVar12 = DAT_0020696c;
    puVar29[0x20] = DAT_0020696c;
    puVar29[0x21] = uVar12;
    puVar1 = DAT_00206970;
    *DAT_00206970 = DAT_00206974;
    puVar1[0xaa] = DAT_00206978;
    puVar1[-0x16] = DAT_0020697c;
    puVar1 = DAT_00206984;
    uVar12 = DAT_00206980;
    *DAT_00206984 = DAT_00206980;
    puVar1[2] = uVar12;
    puVar1 = DAT_00206988;
    *DAT_00206988 = DAT_0020698c;
    puVar1[2] = DAT_00206990;
    puVar1[4] = DAT_00206994;
    puVar1[6] = DAT_00206998;
    puVar1[8] = DAT_0020699c;
    puVar1 = DAT_002069a0;
    *puVar35 = 0x6b8;
    uVar12 = DAT_002069a4;
    *puVar1 = DAT_002069a4;
    puVar1[0x2c00] = uVar12;
    puVar35 = DAT_002069a8;
    *DAT_002069a8 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 0xff22ff22;
    puVar35[0x2c01] = 0xff22ff22;
    **(undefined4 **)(iVar37 + DAT_00206a70) = 0xb;
    **(undefined4 **)(iVar37 + DAT_00206a74) = 0xb;
    *puVar27 = uVar12;
    puVar35[0x2c01] = uVar12;
    puVar1 = DAT_002069b4;
    puVar27 = DAT_002069b0;
    uVar12 = DAT_002069ac;
    puVar35[0x2c05] = DAT_002069ac;
    puVar35[0x2c06] = uVar12;
    puVar35 = DAT_002069bc;
    puVar34 = DAT_002069b8;
    *DAT_002069b8 = *DAT_002069b8 | 0x3f00;
    puVar34[0x2c00] = puVar34[0x2c00] | 0x3f00;
    puVar29 = DAT_002069c0;
    uVar12 = *(undefined4 *)(iVar36 + 100);
    *DAT_002069c0 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_002069c8;
    uVar12 = DAT_002069c4;
    *DAT_002069c8 = DAT_002069c4;
    puVar29[0x2c00] = uVar12;
    uVar12 = DAT_002069cc;
    *puVar27 = DAT_002069cc;
    *puVar1 = uVar12;
    uVar12 = DAT_002069d0;
    *puVar35 = 0;
    puVar29[0x2c27] = 0;
    *puVar2 = uVar12;
    puVar35 = DAT_002069bc;
    puVar2[0x2c00] = uVar12;
    puVar2 = DAT_002069d8;
    puVar29 = DAT_002069d4;
    *DAT_002069d4 = 0;
    puVar29[0x2c00] = 0;
    puVar29 = DAT_002069dc;
    *DAT_002069dc = 0x80000000;
    puVar29[0x2c00] = 0x80000000;
    piVar31 = DAT_002069e4;
    iVar26 = DAT_002069e0;
    *DAT_002069e4 = DAT_002069e0;
    piVar31[0x2c00] = iVar26;
    piVar31 = DAT_002069e8;
    iVar26 = iVar26 + -0x68000000;
    *DAT_002069e8 = iVar26;
    piVar31[0x2c00] = iVar26;
    puVar29 = DAT_002069f0;
    uVar12 = DAT_002069ec;
    *DAT_002069f0 = DAT_002069ec;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_002069f4;
    *DAT_002069f4 = 0xc0000000;
    puVar29[0x2c00] = 0xc0000000;
    puVar3 = DAT_002069fc;
    puVar34 = DAT_002069f8;
    uVar13 = *(uint *)(iVar36 + 0x38);
    *DAT_002069f8 = uVar13;
    *puVar3 = uVar13;
    *puVar34 = *puVar34 | 0x10000000;
    *puVar3 = *puVar3 | 0x10000000;
    puVar29 = DAT_00206a00;
    *DAT_00206a00 = 0x80;
    puVar29[0x2c00] = 0x80;
    puVar29 = DAT_00206a08;
    uVar12 = DAT_00206a04;
    *puVar27 = DAT_00206a04;
    *puVar1 = uVar12;
    puVar1 = DAT_00206a0c;
    uVar12 = *(undefined4 *)(iVar36 + 0x3c);
    *puVar29 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00206a10;
    uVar12 = *(undefined4 *)(iVar36 + 0x40);
    *DAT_00206a10 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00206a18;
    uVar12 = DAT_00206a14;
    *DAT_00206a18 = DAT_00206a14;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00206a20;
    uVar12 = DAT_00206a1c;
    *DAT_00206a20 = DAT_00206a1c;
    puVar29[0x2c00] = uVar12;
    uVar12 = *(undefined4 *)(iVar36 + 0x60);
    *puVar1 = uVar12;
    puVar29[0x2c02] = uVar12;
    uVar12 = DAT_00206a24;
    puVar27[0x56] = DAT_00206a24;
    puVar27[0x2c56] = uVar12;
    puVar27 = DAT_00206a2c;
    uVar12 = DAT_00206a28;
    *DAT_00206a2c = DAT_00206a28;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00206a30;
    *DAT_00206a30 = 2;
    puVar27[0x2c00] = 2;
    puVar27 = DAT_00206a38;
    uVar12 = DAT_00206a34;
    *DAT_00206a38 = DAT_00206a34;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00206a40;
    uVar12 = DAT_00206a3c;
    *DAT_00206a40 = DAT_00206a3c;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00206a44;
    *DAT_00206a44 = uVar12;
    puVar27[0x2c00] = uVar12;
    puVar34 = DAT_00206a48;
    uVar13 = DAT_00206a4c;
    if ((*DAT_00206938 & 0x20000) == 0) {
      uVar13 = DAT_00206a50;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    *puVar35 = 5;
    *puVar2 = 5;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(200);
    FUN_002127e8(DAT_00206df0 + 0x206a98,DAT_00206df4 + 0x206a9a,0x489,
                 *(undefined4 *)(iVar36 + 0xb8));
    puVar35 = DAT_00206d90;
    uVar12 = DAT_00206d8c;
    *DAT_00206d90 = DAT_00206d8c;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00206d94;
    *DAT_00206d94 = 1;
    puVar35[0x2c00] = 1;
    puVar1 = DAT_00206d9c;
    puVar27 = DAT_00206d94;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(10);
    *puVar27 = 0;
    *puVar1 = 0;
    *puVar4 = *puVar4 & 0xfffffff8;
    *puVar34 = *puVar34 & 0xfffffff8;
    FUN_00203830();
    iVar26 = *(int *)(iVar37 + DAT_00206df8);
    FUN_002127e8(DAT_00206dfc + 0x206af8,DAT_00206e00 + 0x206afa,0x49e,
                 *(undefined4 *)(iVar26 + 0xb4));
    puVar35 = DAT_00206d90;
    uVar12 = *(undefined4 *)(iVar26 + 0xb4);
    *DAT_00206d90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    uVar12 = DAT_00206d98;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(1);
    iVar26 = DAT_00206e08;
    iVar28 = DAT_00206e04 + 0x206b2e;
    *puVar27 = 0;
    *puVar1 = 0;
    FUN_002127e8(iVar28,iVar26 + 0x206b34,0x4ad,uVar12);
    puVar35 = DAT_00206d90;
    *DAT_00206d90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(1);
    *puVar27 = 0;
    *puVar1 = 0;
    iVar26 = *(int *)(iVar37 + DAT_00206df8);
    FUN_002127e8(DAT_00206e0c + 0x206b78,DAT_00206e10 + 0x206b7a,0x4bd,
                 *(undefined4 *)(iVar26 + 0xac));
    puVar35 = DAT_00206d90;
    uVar12 = *(undefined4 *)(iVar26 + 0xac);
    *DAT_00206d90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    puVar27 = DAT_00206d9c;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(1);
    puVar3 = DAT_00206da0;
    uVar12 = DAT_00206d98;
    puVar35 = DAT_00206d94;
    *DAT_00206d94 = 0;
    *puVar27 = 0;
    iVar26 = DAT_00206e14;
    if ((*puVar3 & 0x20000) != 0) {
      *puVar4 = *puVar4 | 8;
      iVar28 = DAT_00206e18;
      *puVar34 = *puVar34 | 8;
      FUN_002127e8(iVar26 + 0x206bd4,iVar28 + 0x206bde,0x4d2,*(undefined4 *)(iVar36 + 0xb4));
      puVar1 = DAT_00206da4;
      uVar33 = *(undefined4 *)(iVar36 + 0xb4);
      *DAT_00206d90 = uVar33;
      *puVar1 = uVar33;
      *puVar35 = 1;
      *puVar27 = 1;
      DataSynchronizationBarrier(0xf);
      FUN_00214da8(1);
      iVar26 = DAT_00206e20;
      iVar28 = DAT_00206e1c + 0x206c0c;
      *puVar35 = 0;
      *puVar27 = 0;
      FUN_002127e8(iVar28,iVar26 + 0x206c12,0x4e1,DAT_00206d98);
      puVar1 = DAT_00206d90;
      *DAT_00206d90 = uVar12;
      puVar1[0x2c00] = uVar12;
      *puVar35 = 1;
      *puVar27 = 1;
      DataSynchronizationBarrier(0xf);
      FUN_00214da8(1);
      puVar1 = DAT_00206d94;
      *DAT_00206d94 = 0;
      puVar1[0x2c00] = 0;
      puVar3 = DAT_00206da8;
      *DAT_00206da8 = *DAT_00206da8 & 0xfffffff7;
      puVar5 = DAT_00206dac;
      *DAT_00206dac = *DAT_00206dac & 0xfffffff7;
      *puVar3 = *puVar3 | 1;
      *puVar5 = *puVar5 | 1;
    }
    FUN_002127e8(DAT_00206e24 + 0x206c7c,DAT_00206e28 + 0x206c7e,0x4f7,
                 *(undefined4 *)(iVar36 + 0xa4));
    puVar1 = DAT_00206da4;
    uVar12 = *(undefined4 *)(iVar36 + 0xa4);
    *DAT_00206d90 = uVar12;
    *puVar1 = uVar12;
    *puVar35 = 1;
    *puVar27 = 1;
    puVar1 = DAT_00206d9c;
    puVar27 = DAT_00206d94;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(1);
    iVar26 = DAT_00206e2c;
    *puVar27 = 0;
    *puVar1 = 0;
    iVar37 = *(int *)(iVar37 + DAT_00206df8);
    FUN_002127e8(iVar26 + 0x206cb6,DAT_00206e30 + 0x206cbe,0x505,*(undefined4 *)(iVar37 + 0xa8));
    puVar35 = DAT_00206d90;
    uVar12 = *(undefined4 *)(iVar37 + 0xa8);
    *DAT_00206d90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    puVar3 = DAT_00206db0;
    DataSynchronizationBarrier(0xf);
    FUN_00214da8(1);
    puVar5 = DAT_00206db8;
    puVar27 = DAT_00206db4;
    puVar35 = DAT_00206d94;
    *DAT_00206d94 = 0x1100;
    puVar35[0x2c00] = 0x1100;
    puVar1 = DAT_00206dc0;
    puVar35 = DAT_00206dbc;
    puVar29 = DAT_00206dbc + -0x5a;
    uVar13 = DAT_00206dc4;
    if (-1 < (int)(*DAT_00206da0 << 0xe)) {
      uVar13 = DAT_00206dc8;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    *puVar1 = 1;
    puVar1 = DAT_00206dcc;
    *puVar27 = 1;
    *puVar35 = 1;
    *puVar1 = 1;
    *puVar29 = 0xa56;
    puVar27 = DAT_00206dd0;
    puVar35[0x2ba6] = 0xa56;
    puVar35 = DAT_00206dd4;
    *DAT_00206dd4 = 0;
    puVar35[0x2c00] = 0;
    uVar12 = *(undefined4 *)(iVar36 + 0x34);
    *puVar27 = uVar12;
    puVar27[0x2c00] = uVar12;
    puVar35 = DAT_00206dd8;
    uVar12 = *(undefined4 *)(iVar36 + 0x68);
    *DAT_00206dd8 = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00206ddc;
    uVar12 = *(undefined4 *)(iVar36 + 0x44);
    *DAT_00206ddc = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00206de0;
    uVar12 = *(undefined4 *)(iVar36 + 0x60);
    puVar27 = DAT_00206de0 + -0x78;
    *DAT_00206de0 = uVar12;
    puVar1[-1] = uVar12;
    uVar12 = *(undefined4 *)(iVar36 + 0x48);
    *puVar27 = uVar12;
    puVar35[0x2b88] = uVar12;
    puVar35 = DAT_00206de8;
    uVar12 = DAT_00206de4;
    *puVar3 = 0;
    *puVar5 = 0;
    *puVar35 = uVar12;
    puVar35[0x2c00] = uVar12;
    piVar31 = DAT_002070c4;
    puVar35 = DAT_00206dec;
    *DAT_00206dec = 0;
    puVar35[0x2c00] = 0;
    puVar6 = DAT_002070c8;
    uVar13 = *(uint *)(iVar36 + 0x4c) & 0x3fffffff;
    *(uint *)(iVar36 + 0x4c) = uVar13;
    *puVar6 = uVar13;
    puVar6[0x2c00] = uVar13;
    uVar13 = DAT_002070cc;
    if (-1 < *piVar31 << 0xe) {
      uVar13 = DAT_002070d0;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    iVar37 = FUN_0021046c();
    if (iVar37 == 1) {
      FUN_002127e8(DAT_0020714c + 0x206e70,1);
      uVar12 = 0x18181818;
      uVar33 = 0;
    }
    else {
      uVar12 = 0;
      uVar33 = 0x22222222;
    }
    puVar9 = DAT_00207154;
    puVar8 = DAT_00207150;
    puVar35 = DAT_002070d4;
    *DAT_002070d4 = uVar33;
    puVar34 = DAT_002070d8;
    puVar35[0x2c00] = uVar33;
    puVar10 = DAT_00207158;
    puVar4 = DAT_002070e0;
    puVar35 = DAT_002070dc;
    *DAT_002070dc = uVar33;
    puVar11 = DAT_0020715c;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070e4;
    *DAT_002070e4 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070e8;
    *DAT_002070e8 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070ec;
    *DAT_002070ec = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070f0;
    *DAT_002070f0 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070f4;
    *DAT_002070f4 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070f8;
    *DAT_002070f8 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_002070fc;
    *DAT_002070fc = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00207100;
    *DAT_00207100 = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar6 = DAT_00207104;
    *puVar8 = 0x2222;
    *puVar6 = 0x2222;
    *puVar3 = 0x2222;
    *puVar5 = 0x2222;
    puVar7 = DAT_00207108;
    *DAT_00207108 = 0x66666666;
    *puVar9 = 0x66666666;
    *puVar34 = 0x66666666;
    *puVar4 = 0x66666666;
    puVar34[1] = 0x66666666;
    puVar34 = DAT_0020710c;
    *puVar10 = 0x66666666;
    puVar35 = DAT_00207110;
    *puVar11 = 0x66666666;
    *puVar34 = 0x66666666;
    uVar12 = DAT_00207114;
    *puVar35 = DAT_00207114;
    puVar35[0x2c00] = uVar12;
    FUN_002127e8(DAT_00207160 + 0x206f42,*puVar3 | *puVar5 | *DAT_00207118);
    FUN_002127e8(DAT_00207164 + 0x206f66,*puVar8 | *puVar6 | *DAT_0020711c);
    FUN_002127e8(DAT_00207168 + 0x206f74,*puVar9 | *puVar7 | *DAT_00207120);
    FUN_002127e8(DAT_0020716c + 0x206f96,*DAT_002070e0 | *DAT_002070d8 | *DAT_00207124);
    FUN_002127e8(DAT_00207170 + 0x206fae,*puVar10 | *DAT_00207128 | *DAT_0020712c);
    FUN_002127e8(DAT_00207174 + 0x206fc4,*puVar34 | *puVar11 | *DAT_00207130);
  }
  *DAT_00207134 = *DAT_00207134 | 0x400;
  iVar37 = FUN_00203514();
  if (iVar37 < 0) {
    iVar37 = DAT_00207190 + 0x207014;
  }
  else {
    iVar37 = DAT_00207194 + 0x20701a;
  }
  FUN_002127e8(iVar37);
  if ((*(uint *)(iVar36 + 0xb0) & 0xfff00000) == DAT_00207138) {
    uVar12 = FUN_00206254(5);
    uVar13 = FUN_00206254(8);
    uVar14 = (uVar13 & 0x3f) >> 2;
    FUN_002127e8(DAT_00207198 + 0x20704e,uVar12,uVar14,(uVar13 & 0x3ff) >> 6);
    iVar37 = DAT_00207148;
    puVar34 = DAT_0020713c;
    if (uVar14 == 6) {
      FUN_002127e8(DAT_0020719c + 0x20705c);
      *puVar34 = *puVar34 | 8;
      uVar13 = FUN_00206254(8);
      uVar14 = (uVar13 & 0x3ff) >> 6;
      FUN_002127e8(DAT_002071a0 + 0x20707e,(uVar13 & 0x3f) >> 2,uVar14);
      *puVar34 = *puVar34 & 0xfffffff7;
      piVar31 = DAT_002070c4;
      if (uVar14 == 0) {
        FUN_002127e8(DAT_002071a4 + 0x207090);
        *DAT_002070c4 = DAT_00207140;
      }
      else {
        FUN_002127e8(DAT_002071a8 + 0x2070a2);
        *piVar31 = DAT_00207144;
LAB_002070bc:
        *(undefined4 *)(iVar36 + 0x70) = 0x40000000;
      }
    }
    else {
      if (uVar14 == 7) {
        FUN_002127e8(DAT_002071ac + 0x2070b6);
        *DAT_002070c4 = iVar37;
        goto LAB_002070bc;
      }
      FUN_002127e8(DAT_002072a0 + 0x2071b6);
      puVar35 = DAT_00207288;
      uVar12 = DAT_00207284;
      *DAT_00207280 = iVar37;
      *puVar35 = uVar12;
    }
  }
  if (*DAT_00207280 << 0xe < 0) {
    DAT_0020728c[0x39] =
         DAT_0020728c[0x39] & 0xfff0ffff | (((*DAT_0020728c & 0x7ffffff) >> 0x18) + 2) * 0x10000;
  }
  puVar4 = DAT_00207298;
  puVar3 = DAT_00207294;
  puVar34 = DAT_00207290;
  *DAT_00207290 = *DAT_00207290 | 0x100000;
  puVar34[0x2c00] = puVar34[0x2c00] | 0x100000;
  puVar34 = DAT_0020729c;
  *DAT_0020729c = *DAT_0020729c | 0x80000000;
  puVar34[0x2c00] = puVar34[0x2c00] | 0x80000000;
  *puVar3 = *puVar3 | 0x4f10;
  *puVar4 = *puVar4 | 0x4f10;
  iVar26 = FUN_00209f4c(0x40000000,0x2000);
  iVar37 = iVar26;
  if (((*DAT_00207280 << 0xe < 0) && (iVar37 = FUN_00209f4c(0x80000000,0x2000), iVar26 != 0)) ||
     (iVar37 != 0)) {
    FUN_002127e8(DAT_002072ac + 0x207270,DAT_002072b0 + 0x207272);
    FUN_002127e8(DAT_0021725c + 0x217222);
    puVar34 = DAT_00217254 + -2;
    *DAT_00217254 = 0x1971;
    *puVar34 = *puVar34 | 0x22000014;
    FUN_00214da8(100);
    *DAT_00217258 = 0x1209;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar37 = DAT_002072a4 + 0x20725a;
  iVar26 = DAT_002072a8 + 0x20725c;
LAB_0020725a:
  FUN_002127e8(iVar37,iVar26);
  return;
}


// ==== FUN_00209f4c @ 00209f4c ====

undefined4 FUN_00209f4c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar7 = param_2 >> 2;
  for (uVar6 = 0; uVar6 != uVar7; uVar6 = uVar6 + 1) {
    param_1[uVar6] = 0;
  }
  puVar8 = (uint *)(param_1 + -1);
  uVar6 = 0;
  puVar4 = puVar8;
  while( true ) {
    if (uVar6 == uVar7) {
      uVar6 = 0;
      puVar4 = puVar8;
      while( true ) {
        if (uVar6 == uVar7) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            *(char *)(uVar6 + (int)param_1) = (char)uVar6;
          }
          uVar6 = 0;
          while( true ) {
            if (uVar6 == param_2) {
              uVar6 = 0;
              while( true ) {
                uVar9 = uVar6 & 0xff;
                if (param_2 <= uVar6) {
                  for (uVar6 = 0; uVar6 != param_2 >> 1; uVar6 = uVar6 + 1) {
                    *(short *)((int)param_1 + uVar6 * 2) = (short)uVar6;
                  }
                  uVar6 = 0;
                  while( true ) {
                    if (uVar6 == param_2 >> 1) {
                      for (uVar6 = 0; uVar9 = DAT_0020a354, uVar6 != uVar7; uVar6 = uVar6 + 1) {
                        param_1[uVar6] = uVar6;
                      }
                      uVar6 = 0;
                      while( true ) {
                        if (uVar6 == uVar7) {
                          for (uVar6 = 0; uVar1 = DAT_0020a354, uVar6 != uVar7; uVar6 = uVar6 + 1) {
                            param_1[uVar6] = uVar9;
                          }
                          uVar6 = 0;
                          puVar4 = puVar8;
                          while( true ) {
                            if (uVar6 == uVar7) {
                              uVar6 = 0;
                              piVar3 = param_1;
                              while( true ) {
                                uVar9 = DAT_0020a358;
                                if (uVar6 == uVar7) {
                                  uVar6 = 0;
                                  puVar4 = puVar8;
                                  while( true ) {
                                    if (uVar6 == uVar7) {
                                      uVar6 = 0;
                                      puVar4 = puVar8;
                                      while( true ) {
                                        if (uVar6 == uVar7) {
                                          uVar6 = 0;
                                          puVar4 = puVar8;
                                          while( true ) {
                                            if (uVar6 == uVar7) {
                                              uVar6 = 0;
                                              puVar4 = puVar8;
                                              while( true ) {
                                                if (uVar6 == uVar7) {
                                                  uVar6 = 0;
                                                  piVar3 = param_1;
                                                  while( true ) {
                                                    if (uVar6 == uVar7) {
                                                      uVar6 = 0;
                                                      while( true ) {
                                                        if (uVar6 == uVar7) {
                                                          for (uVar6 = 0; uVar6 != uVar7;
                                                              uVar6 = uVar6 + 1) {
                                                            param_1[uVar6] = 0x5a5a5a5a;
                                                          }
                                                          uVar6 = 0;
                                                          puVar4 = puVar8;
                                                          while( true ) {
                                                            if (uVar6 == uVar7) {
                                                              uVar6 = 0;
                                                              puVar4 = puVar8;
                                                              while( true ) {
                                                                if (uVar6 == uVar7) {
                                                                  uVar6 = 0;
                                                                  puVar4 = puVar8;
                                                                  while( true ) {
                                                                    if (uVar6 == uVar7) {
                                                                      uVar6 = 0;
                                                                      puVar4 = puVar8;
                                                                      while( true ) {
                                                                        iVar2 = DAT_0020a35c;
                                                                        if (uVar6 == uVar7) {
                                                                          uVar6 = 0;
                                                                          while( true ) {
                                                                            if (uVar6 == uVar7) {
                                                                              for (piVar3 = param_1;
                                                                                  piVar3 < param_1 +
                                                                                           uVar7;
                                                                                  piVar3 = piVar3 + 
                                                  8) {
                                                    *(undefined1 *)piVar3 = 0x78;
                                                    *(undefined1 *)((int)piVar3 + 1) = 0x56;
                                                    *(undefined2 *)((int)piVar3 + 2) = 0x1234;
                                                    piVar3[1] = iVar2;
                                                    *(undefined2 *)(piVar3 + 2) = 0x5678;
                                                    *(undefined1 *)((int)piVar3 + 10) = 0x34;
                                                    *(undefined1 *)((int)piVar3 + 0xb) = 0x12;
                                                    piVar3[3] = iVar2;
                                                    *(undefined1 *)(piVar3 + 4) = 0x78;
                                                    *(undefined1 *)((int)piVar3 + 0x11) = 0x56;
                                                    *(undefined2 *)((int)piVar3 + 0x12) = 0x1234;
                                                    piVar3[5] = iVar2;
                                                    *(undefined2 *)(piVar3 + 6) = 0x5678;
                                                    *(undefined1 *)((int)piVar3 + 0x1a) = 0x34;
                                                    *(undefined1 *)((int)piVar3 + 0x1b) = 0x12;
                                                    piVar3[7] = iVar2;
                                                  }
                                                  uVar6 = 0;
                                                  while( true ) {
                                                    if (uVar6 == uVar7) {
                                                      uVar6 = 0;
                                                      *(undefined1 *)param_1 = 0;
                                                      while( true ) {
                                                        uVar9 = uVar6 & 0xff;
                                                        if (uVar6 == uVar7 * 4) {
                                                          uVar6 = 0;
                                                          puVar5 = (ushort *)((int)param_1 + -2);
                                                          *(undefined2 *)param_1 = 0;
                                                          while( true ) {
                                                            if (uVar6 == uVar7 * 2) {
                                                              uVar6 = 0;
                                                              *param_1 = 0;
                                                              while( true ) {
                                                                if (uVar6 == uVar7) {
                                                                  return 0;
                                                                }
                                                                if (uVar6 < uVar7 - 1) {
                                                                  puVar8[2] = uVar6 + 1;
                                                                }
                                                                puVar8 = puVar8 + 1;
                                                                if (*puVar8 != uVar6) break;
                                                                uVar6 = uVar6 + 1;
                                                              }
                                                              return 0xffffffe9;
                                                            }
                                                            if (uVar6 < uVar7 * 2 - 1) {
                                                              puVar5[2] = (short)uVar6 + 1;
                                                            }
                                                            puVar5 = puVar5 + 1;
                                                            if ((uint)*puVar5 != (uVar6 & 0xffff))
                                                            break;
                                                            uVar6 = uVar6 + 1;
                                                          }
                                                          return 0xffffffea;
                                                        }
                                                        if (uVar6 < uVar7 * 4 - 1) {
                                                          *(char *)((int)param_1 +
                                                                   (uVar9 + 1 & 0xff)) =
                                                               (char)(uVar9 + 1);
                                                        }
                                                        if (*(byte *)((int)param_1 + uVar9) != uVar9
                                                           ) break;
                                                        uVar6 = uVar6 + 1;
                                                      }
                                                      return 0xffffffeb;
                                                    }
                                                    if (param_1[uVar6] != DAT_0020a35c) break;
                                                    uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xffffffec;
                                                  }
                                                  if (param_1[uVar6] != 0x5a5a5a5a) break;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xffffffed;
                                                  }
                                                  if (puVar4[1] != 0xa5a5a5a5) break;
                                                  puVar4 = puVar4 + 1;
                                                  *puVar4 = 0x5a5a5a5a;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xffffffee;
                                                  }
                                                  if (puVar4[1] != 0x5a5a5a5a) break;
                                                  puVar4 = puVar4 + 1;
                                                  *puVar4 = 0xa5a5a5a5;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xffffffef;
                                                  }
                                                  if (puVar4[1] != 0xa5a5a5a5) break;
                                                  puVar4 = puVar4 + 1;
                                                  *puVar4 = 0x5a5a5a5a;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xfffffff0;
                                                  }
                                                  if (puVar4[1] != 0x5a5a5a5a) break;
                                                  puVar4 = puVar4 + 1;
                                                  *puVar4 = 0xa5a5a5a5;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xfffffff1;
                                                  }
                                                  if (param_1[uVar6] != -1) break;
                                                  uVar6 = uVar6 + 1;
                                                  }
                                                  return 0xfffffff2;
                                                  }
                                                  if (*piVar3 != -0x10000) break;
                                                  *(undefined2 *)piVar3 = 0xffff;
                                                  uVar6 = uVar6 + 1;
                                                  piVar3 = piVar3 + 1;
                                                  }
                                                  return 0xfffffff3;
                                                }
                                                if (puVar4[1] != 0) break;
                                                *(undefined2 *)((int)puVar4 + 6) = 0xffff;
                                                uVar6 = uVar6 + 1;
                                                puVar4 = puVar4 + 1;
                                              }
                                              return 0xfffffff4;
                                            }
                                            if (puVar4[1] != 0xa5000000) break;
                                            *(undefined1 *)((int)puVar4 + 7) = 0;
                                            uVar6 = uVar6 + 1;
                                            puVar4 = puVar4 + 1;
                                          }
                                          return 0xfffffff5;
                                        }
                                        if (puVar4[1] != 0xa500a500) break;
                                        *(undefined1 *)((int)puVar4 + 5) = 0;
                                        uVar6 = uVar6 + 1;
                                        puVar4 = puVar4 + 1;
                                      }
                                      return 0xfffffff6;
                                    }
                                    if (puVar4[1] != uVar9) break;
                                    *(undefined1 *)((int)puVar4 + 6) = 0;
                                    uVar6 = uVar6 + 1;
                                    puVar4 = puVar4 + 1;
                                  }
                                  return 0xfffffff7;
                                }
                                if (*piVar3 != -0x5a5a5a5b) break;
                                *(undefined1 *)piVar3 = 0;
                                uVar6 = uVar6 + 1;
                                piVar3 = piVar3 + 1;
                              }
                              return 0xfffffff8;
                            }
                            if (puVar4[1] != uVar1) break;
                            puVar4 = puVar4 + 1;
                            *puVar4 = 0xa5a5a5a5;
                            uVar6 = uVar6 + 1;
                          }
                          return 0xfffffff9;
                        }
                        if (param_1[uVar6] != uVar6) break;
                        uVar6 = uVar6 + 1;
                      }
                      return 0xfffffffa;
                    }
                    if ((uint)*(ushort *)((int)param_1 + uVar6 * 2) != (uVar6 & 0xffff)) break;
                    uVar6 = uVar6 + 1;
                  }
                  return 0xfffffffb;
                }
                if (*(byte *)(uVar6 + (int)param_1) == uVar9) {
                  *(short *)(uVar6 + (int)param_1) = (short)uVar9;
                }
                if (*(ushort *)(uVar6 + (int)param_1) != uVar9) break;
                uVar6 = uVar6 + 2;
              }
              return 0xfffffffc;
            }
            if ((uint)*(byte *)(uVar6 + (int)param_1) != (uVar6 & 0xff)) break;
            uVar6 = uVar6 + 1;
          }
          return 0xfffffffd;
        }
        if (puVar4[1] != 0xffffffff) break;
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        uVar6 = uVar6 + 1;
      }
      return 0xfffffffe;
    }
    if (puVar4[1] != 0) break;
    puVar4 = puVar4 + 1;
    *puVar4 = 0xffffffff;
    uVar6 = uVar6 + 1;
  }
  return 0xffffffff;
}


// ==== FUN_0020a360 @ 0020a360 ====

int FUN_0020a360(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_0020a3e0 + 0x20a36a);
  iVar1 = FUN_0020a710(*puVar5);
  uVar2 = FUN_0020a700(*puVar5);
  if (iVar1 == 0) {
    return 5;
  }
  if ((*(int *)(iVar1 + 0x1c) << 0x1f < 0) && (2 < *(byte *)(iVar1 + 0x10c))) {
    if (param_1 == 8) {
      param_1 = 0;
    }
    else if ((param_1 != 1) && (param_1 != 2)) {
      param_1 = param_1 & 0xff;
    }
    if (param_1 != (*(byte *)(iVar1 + 0xff) & 7)) {
      uVar4 = param_1 & 0xff | *(byte *)(iVar1 + 0xff) & 0xfffffff8;
      iVar3 = FUN_0020ab64(uVar2,iVar1,1,0xb3,uVar4,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0020abfe(uVar2,iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*(byte *)(iVar1 + 0xff) != uVar4) {
        return 4;
      }
    }
  }
  return 0;
}


// ==== FUN_0020a42c @ 0020a42c ====

int FUN_0020a42c(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint local_68 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  iVar13 = DAT_0020a658 + 0x20a43a;
  iVar2 = FUN_00201128(1);
  if (iVar2 == 0) {
    iVar2 = FUN_0020b7f8();
    piVar16 = (int *)(DAT_0020a65c + 0x20a44e);
    *piVar16 = iVar2;
    if (iVar2 != -1) {
      iVar3 = FUN_0020b6ac(iVar2,2);
      iVar2 = DAT_0020a660;
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar12 = (undefined4 *)(DAT_0020a660 + 0x20a46e);
      FUN_00214b20(puVar12,0,0x28);
      iVar3 = FUN_0020a710(*piVar16);
      *(undefined4 *)(iVar2 + 0x20a472) = 0x200;
      *(undefined4 *)(iVar2 + 0x20a476) = 0x200;
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar4 = *piVar16;
      *(undefined4 *)(iVar2 + 0x20a482) = 0;
      *(undefined4 *)(iVar2 + 0x20a47a) = uVar9;
      *(int *)(iVar2 + 0x20a48e) = DAT_0020a664 + 0x20a494;
      *(int *)(iVar2 + 0x20a492) = DAT_0020a668 + 0x20a49a;
      *puVar12 = 1;
      uVar9 = FUN_0020a700(iVar4);
      *(undefined4 *)(iVar2 + 0x20a486) = uVar9;
      FUN_00214b20(DAT_0020a66c + 0x20a4ae,0,8);
      iVar4 = *(int *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x20a47e) = 0;
      if ((iVar4 << 0x1f < 0) && (2 < *(byte *)(iVar3 + 0x10c))) {
        if (((int)((uint)*(byte *)(iVar3 + 0xfb) << 0x1f) < 0) && (*(byte *)(iVar3 + 0x129) != 0)) {
          uVar14 = (uint)*(byte *)(iVar3 + 0x129) * (uint)*(byte *)(iVar3 + 300) * 0x80000;
        }
        else {
          uVar14 = *(uint *)(iVar3 + 0x28c);
        }
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = (uint)*(byte *)(iVar3 + 0x12e) << 0x11;
        local_68[3] = 0;
        local_68[4] = local_68[2];
        local_68[5] = 0;
        local_68[6] = (uint)*(byte *)(iVar3 + 0xf4) << 0x11;
        local_68[7] = 0;
        uVar7 = (uint)*(byte *)(iVar3 + 0xe1) +
                ((uint)*(byte *)(iVar3 + 0xe2) + (uint)*(byte *)(iVar3 + 0xe3) * 0x100) * 0x100;
        uVar17 = (uint)*(byte *)(iVar3 + 0xe4) +
                 ((uint)*(byte *)(iVar3 + 0xe5) + (uint)*(byte *)(iVar3 + 0xe6) * 0x100) * 0x100;
        local_48 = (ulonglong)uVar14 *
                   (ulonglong)
                   ((uint)*(byte *)(iVar3 + 0xdb) +
                   ((uint)*(byte *)(iVar3 + 0xdc) + (uint)*(byte *)(iVar3 + 0xdd) * 0x100) * 0x100);
        puVar11 = local_68;
        local_40 = (ulonglong)uVar14 *
                   (ulonglong)
                   ((uint)*(byte *)(iVar3 + 0xde) +
                   ((uint)*(byte *)(iVar3 + 0xdf) + (uint)*(byte *)(iVar3 + 0xe0) * 0x100) * 0x100);
        lVar1 = (ulonglong)*(uint *)(iVar3 + 4) * (ulonglong)*(uint *)(iVar3 + 8);
        local_38 = (ulonglong)uVar14 * (ulonglong)uVar7;
        local_28 = lVar1;
        local_30 = (ulonglong)uVar14 * (ulonglong)uVar17;
        puVar10 = *(uint **)(iVar13 + DAT_0020a674);
        uVar5 = *puVar10;
        uVar6 = puVar10[1];
        puVar15 = (uint *)(DAT_0020a670 + 0x20a5d2);
        uVar14 = 1;
        do {
          puVar15[-2] = uVar14;
          uVar18 = uVar14 + 1;
          uVar8 = puVar11[uVar14 * 2];
          uVar14 = local_68[uVar14 * 2 + 1];
          bVar19 = CARRY4(uVar8,uVar5);
          uVar5 = uVar8 + uVar5;
          *puVar15 = uVar8 >> 9 | uVar14 << 0x17;
          uVar6 = uVar14 + uVar6 + bVar19;
          puVar15[1] = uVar14 >> 9;
          puVar15 = puVar15 + 4;
          uVar14 = uVar18;
        } while (uVar18 != 9);
        *puVar10 = uVar5;
        puVar10[1] = uVar6;
        iVar2 = DAT_0020a67c;
        iVar3 = *(int *)(DAT_0020a678 + 0x20a61e);
        do {
          puVar11 = puVar11 + 2;
          iVar3 = iVar3 + *puVar11;
        } while (puVar11 != (uint *)&local_30);
        uVar9 = FUN_00200a00(iVar3,*(undefined4 *)(DAT_0020a67c + 0x20a624),&local_30,puVar11,uVar7,
                             0,uVar17);
        iVar3 = DAT_0020a680;
        *(undefined4 *)(iVar2 + 0x20a630) = uVar9;
        **(longlong **)(iVar13 + iVar3) = lVar1;
        puVar12 = (undefined4 *)(DAT_0020a684 + 0x20a636);
        *puVar12 = 9;
        iVar2 = DAT_0020a688 + 0x20a63c;
      }
      else {
        iVar2 = 0;
        puVar12 = (undefined4 *)(DAT_0020a68c + 0x20a644);
        *puVar12 = 0;
      }
      iVar13 = DAT_0020a690;
      puVar12[1] = iVar2;
      FUN_00201104(iVar13 + 0x20a64c);
    }
  }
  return 0;
}


// ==== FUN_0020a694 @ 0020a694 ====

uint FUN_0020a694(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 & 0x1f;
  uVar2 = *(uint *)(param_1 + (3 - (param_2 >> 5)) * 4) >> uVar1;
  if (0x1f < param_3 + uVar1) {
    uVar2 = uVar2 | *(int *)(param_1 + (0x40000002 - (param_2 >> 5)) * 4) << (0x20 - uVar1 & 0xff);
  }
  return uVar2 & (1 << (param_3 & 0xff)) - 1U;
}


// ==== thunk_FUN_0020cc04 @ 0020a6ce ====

void thunk_FUN_0020cc04(void)

{
  return;
}


// ==== FUN_0020a6d2 @ 0020a6d2 ====

void FUN_0020a6d2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_00214b30(&uStack_14,param_1 + 0x13e,4,param_4,param_1);
  FUN_00214b30(&uStack_14,param_1 + 0x120,4);
  FUN_00214b30(&uStack_14,param_1 + 0xe9,4);
  return;
}


// ==== FUN_0020a700 @ 0020a700 ====

int FUN_0020a700(int param_1)

{
  return DAT_0020a70c + 0x20a706 + param_1 * 0x80;
}


// ==== FUN_0020a710 @ 0020a710 ====

int FUN_0020a710(int param_1)

{
  return param_1 * 0x2dc + DAT_0020a720 + 0x20a71a;
}


// ==== FUN_0020a724 @ 0020a724 ====

void FUN_0020a724(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_2 + 0x20);
  do {
    iVar1 = FUN_0020e564(param_1,param_2);
    if (iVar1 == 0) {
      return;
    }
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  return;
}


// ==== FUN_0020a73e @ 0020a73e ====

void FUN_0020a73e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_24;
  undefined4 local_20;
  
  local_3c = param_3 << 0x10;
  local_40 = 0x37;
  local_38 = 1;
  local_20 = 5;
  local_24 = 100;
  while ((iVar1 = FUN_0020a724(param_1,&local_40), iVar1 != 0 ||
         (iVar1 = FUN_0020a724(param_1,param_2), iVar1 != 0))) {
    bVar2 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar2) {
      return;
    }
  }
  return;
}


// ==== FUN_0020a77a @ 0020a77a ====

int FUN_0020a77a(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = 100;
  local_40 = 0x129;
  local_24 = 100;
  local_38 = 3;
  local_20 = 5;
  iStack_3c = param_2;
  do {
    iVar1 = FUN_0020a73e(param_1,&local_40,0,5);
    if (((iVar1 != 0) || (local_34 < 0)) || (param_2 == 0)) goto LAB_0020a7bc;
    thunk_FUN_00214dc4(10);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = 1;
LAB_0020a7bc:
  if (param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  return iVar1;
}


// ==== FUN_0020a7c8 @ 0020a7c8 ====

int FUN_0020a7c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 0x88;
  if ((DAT_0020a808 & param_2) == 0) {
    local_2c = 0xaa;
  }
  else {
    local_2c = 0x1aa;
  }
  local_28 = 1;
  local_10 = 0;
  local_14 = 100;
  iVar1 = FUN_0020a724(param_1,&local_30);
  if (iVar1 == 0) {
    if (local_24 == -0x56) {
      iVar1 = 0;
    }
    else {
      iVar1 = 5;
    }
  }
  return iVar1;
}


// ==== FUN_0020a80c @ 0020a80c ====

int FUN_0020a80c(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = 100;
  local_40 = 1;
  local_24 = 100;
  local_38 = 3;
  local_20 = 0;
  iStack_3c = param_2;
  while( true ) {
    iVar1 = FUN_0020a724(param_1,&local_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((param_2 == 0) || (local_34 < 0)) break;
    thunk_FUN_00214dc4(10);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = local_34;
  return 0;
}


// ==== FUN_0020a9d8 @ 0020a9d8 ====

int FUN_0020a9d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_2 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = 0x80000000;
  }
  local_40 = 0x86;
  local_3c = local_3c | 0xfffff1;
  local_38 = 1;
  local_20 = 5;
  local_24 = 100;
  FUN_0020e2ac();
  do {
    FUN_0020d9ea(param_1,1);
    FUN_0020d9e0(param_1,0x40);
    FUN_0020d950(param_1,extraout_r1,DAT_0020aa70,DAT_0020aa74,0);
    iVar1 = FUN_0020a724(param_1,&local_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_0020dcc8(param_1,param_3,0x40);
    if (iVar1 == 0) break;
    FUN_0020e5e0(param_1,1);
    iVar2 = FUN_0020eab8(param_1);
  } while (iVar2 != 7);
  FUN_0020e2ac(param_1);
  return iVar1;
}


// ==== FUN_0020aa78 @ 0020aa78 ====

uint FUN_0020aa78(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  param_2 = *(uint *)(param_1 + 0x4c) & param_2;
  iVar1 = FUN_0020f9a8(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 3 << (iVar1 - 1U & 0xff) & param_2;
  }
  return uVar2;
}


// ==== FUN_0020aa92 @ 0020aa92 ====

void FUN_0020aa92(undefined4 param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_2c = 0;
  local_10 = 5;
  local_14 = 100;
  FUN_0020a724(param_1,&local_30);
  return;
}


// ==== FUN_0020aab2 @ 0020aab2 ====

int FUN_0020aab2(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38 = 0xd;
  local_34 = *(int *)(param_2 + 0x18) << 0x10;
  local_30 = 1;
  local_18 = 5;
  local_1c = 100;
  iVar1 = FUN_0020a724(param_1,&local_38);
  if (iVar1 == 0) {
    *param_3 = local_2c;
    thunk_FUN_0020cc04();
  }
  return iVar1;
}


// ==== FUN_0020aae6 @ 0020aae6 ====

void FUN_0020aae6(undefined4 param_1,int param_2)

{
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 7;
  local_2c = *(int *)(param_2 + 0x18) << 0x10;
  local_28 = 8;
  local_10 = 5;
  local_14 = 100;
  FUN_0020a724(param_1,&local_30);
  return;
}


// ==== FUN_0020ab0c @ 0020ab0c ====

void FUN_0020ab0c(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  ushort local_32;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_00214b20(&local_40,0,0x28);
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    local_40 = 0x83;
    local_38 = 6;
    local_3c = 0;
  }
  else {
    local_40 = 3;
    local_3c = *param_3 << 0x10;
    local_38 = 1;
  }
  local_20 = 5;
  local_24 = 100;
  iVar1 = FUN_0020a724(param_1,&local_40);
  if ((iVar1 == 0) && (-1 < *(int *)(param_2 + 0x1c) << 0x1f)) {
    *param_3 = (uint)local_32;
  }
  return;
}


// ==== FUN_0020ab64 @ 0020ab64 ====

/* WARNING: Type propagation algorithm not settling */

int FUN_0020ab64(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  uint local_44 [3];
  undefined4 local_38;
  undefined4 local_24;
  undefined4 local_20;
  
  local_44[0] = 0;
  local_44[1] = 6;
  local_44[2] = param_3 | 0x3000000 | (uint)param_5 << 8 | param_4 << 0x10;
  local_38 = 8;
  local_20 = 5;
  local_24 = 100;
  iVar1 = FUN_0020a724(param_1,local_44 + 1);
  if (iVar1 == 0) {
    iVar1 = DAT_0020abd0;
    do {
      iVar2 = FUN_0020aab2(param_1,param_2,local_44);
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((local_44[0] & 0x80) != 0) {
        return 4;
      }
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        return 0;
      }
    } while ((-1 < (int)(local_44[0] << 0x17)) || ((local_44[0] & 0x1fff) >> 9 == 7));
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_0020abd4 @ 0020abd4 ====

int FUN_0020abd4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [16];
  byte local_38;
  
  iVar1 = FUN_0020a9d8(param_1,1,auStack_48);
  if (iVar1 == 0) {
    if ((local_38 & 0xf) == 1) {
      *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 4;
    }
    else {
      iVar1 = 4;
    }
  }
  return iVar1;
}


// ==== FUN_0020abfe @ 0020abfe ====

int FUN_0020abfe(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_22c;
  undefined4 local_228;
  undefined1 auStack_220 [512];
  
  if (*(byte *)(param_2 + 0x269) < 4) {
    return 0;
  }
  FUN_00214b20(auStack_220,0,0x200);
  local_248 = 8;
  uStack_244 = 0;
  uStack_240 = 1;
  local_228 = 5;
  local_22c = 100;
  FUN_0020e2ac(param_1);
  iVar5 = 0;
  do {
    FUN_0020d9ea(param_1,1);
    FUN_0020d9e0(param_1,0x200);
    FUN_0020d950(param_1,extraout_r1,DAT_0020a9cc,DAT_0020a9d0,0);
    iVar2 = FUN_0020a724(param_1,&local_248);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_0020dcc8(param_1,auStack_220,0x200);
    if (iVar2 == 0) break;
    FUN_0020e5e0(param_1,1);
    iVar5 = FUN_0020eab8(param_1);
  } while (iVar5 != 7);
  FUN_0020e2ac(param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iVar5 == 7) {
    return 0;
  }
  FUN_00214b30(param_2 + 0x4c,auStack_220,0x200);
  uVar4 = (uint)*(byte *)(param_2 + 0x122) << 0x10 | (uint)*(byte *)(param_2 + 0x121) << 8 |
          (uint)*(byte *)(param_2 + 0x120) | (uint)*(byte *)(param_2 + 0x123) << 0x18;
  *(uint *)(param_2 + 0x2a0) = uVar4;
  if (uVar4 != 0) {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  *(undefined4 *)(param_2 + 0x2a4) = 0;
  bVar1 = *(byte *)(param_2 + 0x110);
  uVar4 = (uint)bVar1;
  if (((int)(uVar4 << 0x18) < 0) || ((int)(uVar4 << 0x19) < 0)) {
    *(undefined4 *)(param_2 + 0x2a4) = DAT_0020a9c0;
    *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
    uVar3 = 0x32;
  }
  else if ((bVar1 & 0x30) == 0) {
    if ((bVar1 & 0xc) == 0) {
      if ((int)(uVar4 << 0x1e) < 0) {
        *(undefined4 *)(param_2 + 0x2a4) = DAT_0020a9c4;
        uVar3 = 0x2b;
      }
      else {
        if (-1 < (int)(uVar4 << 0x1f)) goto LAB_0020a9b0;
        *(undefined4 *)(param_2 + 0x2a4) = DAT_0020a9c8;
        uVar3 = 0x2a;
      }
    }
    else {
      *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
      *(undefined4 *)(param_2 + 0x2a4) = DAT_0020a9c4;
      uVar3 = 0x2c;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2a4) = DAT_0020a9c0;
    if ((bVar1 & 0xc) != 0) {
      *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
    }
    uVar3 = 0x2d;
  }
  *(undefined1 *)(param_2 + 0x2d8) = uVar3;
LAB_0020a9b0:
  FUN_0020a6d2(param_2);
  return 0;
}


// ==== FUN_0020ac0e @ 0020ac0e ====

void FUN_0020ac0e(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = param_1[0xd];
  if ((param_3 < (uint)param_1[0xd]) && (uVar3 = param_1[0xc], (uint)param_1[0xc] <= param_3)) {
    uVar3 = param_3;
  }
  if (*param_1 == 0) {
    uVar4 = 0;
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar1 = *(ushort *)(*param_1 + 0x20);
    uVar2 = (uVar1 & 0x7f) >> 6;
    if ((uVar1 & 0x100) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 3;
    }
  }
  FUN_0020dfd4(param_1,uVar2,uVar3,uVar4);
  return;
}


// ==== FUN_0020ac82 @ 0020ac82 ====

void FUN_0020ac82(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 0x12a;
  local_28 = 1;
  local_14 = 100;
  local_10 = 5;
  local_2c = param_3;
  FUN_0020a73e(param_1,&local_30,*(undefined4 *)(param_2 + 0x18));
  return;
}


// ==== FUN_0020aca8 @ 0020aca8 ====

int FUN_0020aca8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38 = 0x10;
  local_30 = 1;
  local_18 = 3;
  local_1c = 100;
  local_34 = param_2;
  iVar1 = FUN_0020a724(param_1,&local_38);
  if (iVar1 == 0) {
    FUN_0020d9e0(param_1,param_2);
  }
  return iVar1;
}


// ==== FUN_0020acda @ 0020acda ====

int FUN_0020acda(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((*(uint *)(param_2 + 0x1c) & 2) != 0) {
    if ((param_3 == 8) || (param_3 == 4)) {
      if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
        local_3c = 0;
        param_3 = 1;
      }
      else {
        local_3c = 2;
        param_3 = 4;
      }
    }
    else {
      local_3c = 0;
      param_3 = 1;
    }
    local_40 = 0x106;
    local_38 = 1;
    local_20 = 5;
    local_24 = 100;
    iVar1 = FUN_0020a73e(param_1,&local_40,*(undefined4 *)(param_2 + 0x18),0);
    if (iVar1 != 0) {
      return iVar1;
    }
    goto LAB_0020adf8;
  }
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    return 0;
  }
  if (*(byte *)(param_2 + 0x269) < 4) {
    return 0;
  }
  if (param_3 == 8) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (-1 < iVar1 << 0x1a) goto LAB_0020ad86;
    uVar2 = *(ushort *)(param_2 + 0x20);
    if ((int)((uint)uVar2 << 0x17) < 0) {
      if (-1 < iVar1 << 0x16) goto LAB_0020ae02;
      uVar4 = 6;
    }
    else {
      if ((int)((uint)uVar2 << 0x1d) < 0) {
        if (iVar1 << 0x18 < 0) {
          if ((*(byte *)(param_2 + 0x2be) & 4) == 0) {
            uVar4 = 2;
          }
          else {
            uVar4 = 6;
          }
          goto LAB_0020adc0;
        }
      }
      else if ((uVar2 & 0x280) == 0) goto LAB_0020ad86;
LAB_0020ae02:
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 0;
    if (param_3 != 4) goto LAB_0020adc0;
LAB_0020ad86:
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = 0;
    if ((uVar3 & 1) == 0) {
LAB_0020adbe:
      param_3 = 1;
    }
    else {
      uVar4 = (uint)*(ushort *)(param_2 + 0x20);
      if ((int)(uVar4 << 0x17) < 0) {
        if ((uVar3 & 0x200) == 0) {
          uVar4 = 2;
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        if ((int)(uVar4 << 0x1d) < 0) {
          if ((int)(uVar3 << 0x18) < 0) {
            if ((*(byte *)(param_2 + 0x2be) & 4) == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = 5;
            }
            goto LAB_0020ae08;
          }
        }
        else {
          uVar4 = uVar4 & 0x280;
          if ((*(ushort *)(param_2 + 0x20) & 0x280) == 0) goto LAB_0020adbe;
        }
        uVar4 = 1;
      }
LAB_0020ae08:
      param_3 = 4;
    }
  }
LAB_0020adc0:
  iVar1 = FUN_0020ab64(param_1,param_2,1,0xb7,uVar4 & 0xff);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (uVar4 - 5 < 2) {
    uVar2 = *(ushort *)(param_2 + 0x20) | 0x40;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0x20) & 0xffbf;
  }
  *(ushort *)(param_2 + 0x20) = uVar2;
  FUN_0020ac0e(param_1,*(ushort *)(param_2 + 0x20) & 0x40,*(undefined4 *)(param_1 + 0x3c));
LAB_0020adf8:
  FUN_0020e1a0(param_1,param_3);
  return 0;
}


// ==== FUN_0020ae14 @ 0020ae14 ====

int FUN_0020ae14(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)(param_1[7] << 0x1e)) && (3 < *(byte *)((int)param_1 + 0x269))) {
    if ((param_1 == (undefined4 *)0x0) || (-1 < (int)(param_1[7] << 0x1f))) {
      iVar1 = 5;
    }
    else {
      iVar1 = FUN_0020ab64(*param_1,param_1,1,0xb3,param_2,0xb3);
      if ((iVar1 == 0) && (iVar1 = FUN_0020abfe(*param_1,param_1), iVar1 == 0)) {
        if (*(byte *)((int)param_1 + 0xff) == param_2) {
          iVar1 = 0;
        }
        else {
          iVar1 = 4;
        }
      }
    }
    return iVar1;
  }
  return 4;
}


// ==== FUN_0020ae34 @ 0020ae34 ====

uint FUN_0020ae34(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_24;
  
  iVar3 = *param_1;
  bVar1 = false;
  local_24 = 2;
  iVar4 = param_2;
  piVar5 = param_1;
  uVar6 = param_3;
  if (-1 < (int)((uint)*(ushort *)(param_1 + 8) << 0x1b)) {
    iVar4 = *(int *)(iVar3 + 0x40) * param_2;
  }
  do {
    if (bVar1) {
      if ((param_1[7] << 0x1f < 0) && ((int)((uint)*(ushort *)(param_1 + 8) << 0x17) < 0)) {
        piVar5 = (int *)0x0;
        uVar2 = FUN_0020ed28(iVar3,param_4,iVar4,param_3);
      }
      else {
        uVar2 = FUN_0020e834(iVar3,param_4,iVar4,param_3,piVar5,param_2,uVar6);
      }
      if (uVar2 == 0) {
        return 0;
      }
      if (*(uint *)(iVar3 + 0x34) >> 4 < *(uint *)(iVar3 + 0x3c)) {
        FUN_0020ac0e(iVar3,*(ushort *)(param_1 + 8) & 0x40,*(uint *)(iVar3 + 0x3c) >> 1);
        goto LAB_0020aea6;
      }
    }
    else {
LAB_0020aea6:
      uVar2 = (**(code **)(iVar3 + 0x78))(iVar3,param_4,iVar4,param_3);
      if (uVar2 == 0) {
        return 0;
      }
    }
    if (((uVar2 & 0xfffffff7) == 2) || (uVar2 == 0xc)) {
      if (bVar1) {
        return uVar2;
      }
      bVar1 = true;
    }
    else if (uVar2 - 6 < 2) {
      return uVar2;
    }
    local_24 = local_24 + -1;
    if (local_24 == 0) {
      return uVar2;
    }
  } while( true );
}


// ==== FUN_0020aedc @ 0020aedc ====

int FUN_0020aedc(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_0020a700();
  iVar2 = FUN_0020a710(param_1);
  uVar4 = *(uint *)(iVar1 + 0x40);
  uVar5 = *(uint *)(iVar1 + 0x10);
  if (param_3 != 0) {
    uVar3 = param_2 * (uVar4 >> 9);
    if (*(uint *)(iVar2 + 4) <= uVar3 && uVar3 - *(uint *)(iVar2 + 4) != 0) {
      return 5;
    }
    do {
      uVar3 = param_3;
      if (uVar5 <= param_3) {
        uVar3 = uVar5;
      }
      iVar1 = FUN_0020ae34(iVar2,param_2,uVar3,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_3 = param_3 - uVar3;
      param_2 = param_2 + uVar3;
      param_4 = param_4 + uVar4 * uVar5;
    } while (param_3 != 0);
  }
  return 0;
}


// ==== FUN_0020af38 @ 0020af38 ====

uint FUN_0020af38(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  bool bVar7;
  uint local_40;
  int local_38;
  uint local_24;
  
  iVar1 = FUN_0020a700();
  piVar2 = (int *)FUN_0020a710(param_1);
  uVar5 = *(uint *)(iVar1 + 0x40);
  uVar6 = *(uint *)(iVar1 + 0x10);
  if (param_3 == 0) {
LAB_0020af5e:
    uVar5 = 0;
  }
  else {
    uVar4 = (uVar5 >> 9) * param_2;
    if (uVar4 < (uint)piVar2[1] || uVar4 - piVar2[1] == 0) {
      local_40 = param_3;
LAB_0020af78:
      iVar1 = *piVar2;
      uVar4 = local_40;
      if (uVar6 <= local_40) {
        uVar4 = uVar6;
      }
      bVar7 = (int)((uint)*(ushort *)(piVar2 + 8) << 0x1b) < 0;
      if (bVar7) {
        unaff_r10 = param_2;
      }
      local_38 = 2;
      if (!bVar7) {
        unaff_r10 = *(int *)(iVar1 + 0x40) * param_2;
      }
      bVar7 = false;
      do {
        if (bVar7) {
          if ((piVar2[7] << 0x1f < 0) && ((int)((uint)*(ushort *)(piVar2 + 8) << 0x17) < 0)) {
            uVar3 = FUN_0020ed28(iVar1,unaff_r10,param_4,uVar4,1);
          }
          else {
            uVar3 = FUN_0020ee24(iVar1,unaff_r10,param_4,uVar4);
          }
          if (uVar3 == 0) goto LAB_0020affe;
          if (*(uint *)(iVar1 + 0x34) >> 4 < *(uint *)(iVar1 + 0x3c)) {
            FUN_0020ac0e(iVar1,*(ushort *)(piVar2 + 8) & 0x40,*(uint *)(iVar1 + 0x3c) >> 1);
            goto LAB_0020aff0;
          }
        }
        else {
LAB_0020aff0:
          uVar3 = (**(code **)(iVar1 + 0x7c))(iVar1,unaff_r10,param_4,uVar4);
          if (uVar3 == 0) goto LAB_0020affe;
        }
        if (((uVar3 & 0xfffffff7) == 2) || (uVar3 == 0xc)) {
          if (bVar7) break;
          bVar7 = true;
        }
        if (uVar3 == 1) {
          return 1;
        }
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      if (uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0020b03c;
    }
    uVar5 = 5;
  }
  return uVar5;
LAB_0020affe:
  do {
    uVar3 = FUN_0020aab2(iVar1,piVar2,&local_24);
    if (uVar3 != 0) {
      return uVar3;
    }
  } while ((-1 < (int)(local_24 << 0x17)) || ((local_24 & 0x1fff) >> 9 == 7));
LAB_0020b03c:
  param_2 = param_2 + uVar4;
  param_4 = param_4 + uVar6 * uVar5;
  local_40 = local_40 - uVar4;
  if (local_40 == 0) goto LAB_0020af5e;
  goto LAB_0020af78;
}


// ==== FUN_0020b054 @ 0020b054 ====

void FUN_0020b054(void)

{
  return;
}


// ==== FUN_0020b058 @ 0020b058 ====

int FUN_0020b058(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 uStack_54;
  byte local_53;
  undefined4 local_44;
  undefined4 local_40;
  
  if ((param_3 & 0x7f) != 0) {
    param_3 = param_3 & 0xffffff80;
  }
  uVar4 = FUN_0020aa78(param_1,param_3);
  *(uint *)(param_1 + 0x48) = uVar4;
  if (uVar4 == 0) {
    return 4;
  }
  FUN_0020aa92(param_1);
  if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
    FUN_0020a7c8(param_1,uVar4);
  }
  *(undefined1 *)(param_2 + 0x2d8) = 10;
  if ((*(uint *)(param_2 + 0x1c) & 2) == 0) {
    local_5c = FUN_0020a80c(param_1,uVar4 | 0x40000000,param_2 + 0xc);
  }
  else {
    local_5c = FUN_0020a77a();
  }
  if (local_5c != 0) {
    return local_5c;
  }
  if ((*(uint *)(param_2 + 0xc) & 0x40000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x10;
  }
  *(ushort *)(param_2 + 0x20) = uVar10 | *(ushort *)(param_2 + 0x20);
  local_60 = 2;
  local_58 = 2;
  local_40 = 5;
  local_44 = 100;
  iVar5 = FUN_0020a724(param_1,&local_60);
  iVar12 = param_2 + 0x24;
  if (iVar5 != 0) {
    return iVar5;
  }
  FUN_00214b30(iVar12,&uStack_54,0x10);
  FUN_00214b20(param_2 + 0x24c,0,0x1c);
  uVar1 = FUN_0020a694(iVar12,0x40,8);
  *(undefined1 *)(param_2 + 0x254) = uVar1;
  uVar1 = FUN_0020a694(iVar12,0x48,8);
  *(undefined1 *)(param_2 + 0x253) = uVar1;
  uVar1 = FUN_0020a694(iVar12,0x50,8);
  *(undefined1 *)(param_2 + 0x252) = uVar1;
  uVar1 = FUN_0020a694(iVar12,0x58,8);
  *(undefined1 *)(param_2 + 0x251) = uVar1;
  uVar1 = FUN_0020a694(iVar12,0x60,8);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined1 *)(param_2 + 0x250) = uVar1;
  if (iVar5 << 0x1e < 0) {
    uVar1 = FUN_0020a694(iVar12,8,4);
    *(undefined1 *)(param_2 + 0x266) = uVar1;
    sVar2 = FUN_0020a694(iVar12,0xc,8);
    *(short *)(param_2 + 0x262) = sVar2;
    uVar6 = FUN_0020a694(iVar12,0x18,0x20);
    *(undefined4 *)(param_2 + 0x25c) = uVar6;
    uVar1 = FUN_0020a694(iVar12,0x38,4);
    *(undefined1 *)(param_2 + 0x265) = uVar1;
    uVar1 = FUN_0020a694(iVar12,0x3c,4);
    *(undefined1 *)(param_2 + 0x264) = uVar1;
    uVar3 = FUN_0020a694(iVar12,0x68,0x10);
    *(undefined2 *)(param_2 + 0x260) = uVar3;
    uVar6 = FUN_0020a694(iVar12,0x78,8);
    *(short *)(param_2 + 0x262) = sVar2 + 2000;
    *(undefined4 *)(param_2 + 0x24c) = uVar6;
  }
  else {
    sVar2 = FUN_0020a694(iVar12,8,4);
    *(short *)(param_2 + 0x262) = sVar2 + 0x7cd;
    uVar1 = FUN_0020a694(iVar12,0xc,4);
    *(undefined1 *)(param_2 + 0x266) = uVar1;
    uVar1 = FUN_0020a694(iVar12,0x38,8);
    *(undefined1 *)(param_2 + 0x255) = uVar1;
    switch(*(undefined1 *)(param_2 + 0x269)) {
    case 0:
    case 1:
      uVar6 = FUN_0020a694(iVar12,0x10,0x18);
      *(undefined4 *)(param_2 + 0x25c) = uVar6;
      uVar1 = FUN_0020a694(iVar12,0x28,4);
      *(undefined1 *)(param_2 + 0x265) = uVar1;
      uVar1 = FUN_0020a694(iVar12,0x2c,4);
      *(undefined1 *)(param_2 + 0x264) = uVar1;
      uVar1 = FUN_0020a694(iVar12,0x30,8);
      uVar6 = 0x68;
      uVar9 = 0x18;
      *(undefined1 *)(param_2 + 0x256) = uVar1;
      break;
    case 2:
    case 3:
    case 4:
      uVar6 = FUN_0020a694(iVar12,0x10,0x20);
      *(undefined4 *)(param_2 + 0x25c) = uVar6;
      uVar3 = FUN_0020a694(iVar12,0x68,0x10);
      uVar6 = 0x78;
      uVar9 = 8;
      *(undefined2 *)(param_2 + 0x260) = uVar3;
      break;
    default:
      goto switchD_0020b1f6_default;
    }
    uVar6 = FUN_0020a694(iVar12,uVar6,uVar9);
    *(undefined4 *)(param_2 + 0x24c) = uVar6;
  }
switchD_0020b1f6_default:
  if (iVar5 << 0x1f < 0) {
    *(undefined4 *)(param_2 + 0x18) = 1;
  }
  iVar5 = FUN_0020ab0c(param_1,param_2,param_2 + 0x18);
  if (iVar5 != 0) {
    return iVar5;
  }
  local_60 = 9;
  local_58 = 2;
  local_5c = *(int *)(param_2 + 0x18) << 0x10;
  local_40 = 5;
  local_44 = 10000;
  iVar5 = FUN_0020a724(param_1,&local_60);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = param_2 + 0x34;
  FUN_00214b30(iVar5,&uStack_54,0x10);
  uVar4 = FUN_0020a694(iVar5,0x7e,2);
  *(char *)(param_2 + 0x268) = (char)uVar4;
  if (((int)(*(uint *)(param_2 + 0x1c) << 0x1f) < 0) && (3 < uVar4)) {
    return 5;
  }
  uVar11 = *(uint *)(param_2 + 0x1c) & 2;
  if ((uVar11 != 0) && (1 < uVar4)) {
    return 5;
  }
  iVar7 = FUN_0020a694(iVar5,99,4);
  iVar8 = FUN_0020a694(iVar5,0x60,3);
  *(uint *)(param_2 + 0x278) =
       *(int *)(DAT_0020b5e4 + 0x20b31a + iVar8 * 4) *
       (uint)*(byte *)(DAT_0020b5e0 + 0x20b312 + iVar7);
  uVar6 = FUN_0020a694(iVar5,0x50,4);
  *(undefined4 *)(param_2 + 0x27c) = uVar6;
  iVar7 = FUN_0020a694(iVar5,0x2f,3);
  iVar8 = FUN_0020a694(iVar5,0x3e,0xc);
  *(int *)(param_2 + 0x284) = iVar8 + 1 << (iVar7 + 2U & 0xff);
  if (uVar11 == 0) {
    uVar1 = FUN_0020a694(iVar5,0x7a,4);
    *(undefined1 *)(param_2 + 0x269) = uVar1;
  }
  else if (uVar4 == 1) {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
    iVar5 = FUN_0020a694(iVar5,0x30,0x16);
    *(undefined4 *)(param_2 + 0x27c) = 9;
    *(int *)(param_2 + 0x284) = (iVar5 + 1) * 0x400;
  }
  iVar5 = FUN_0020aae6(param_1,param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
    if ((int)((uint)*(ushort *)(param_2 + 0x26a) << 0x15) < 0) {
      iVar5 = FUN_0020a9d8(param_1,0,&local_60);
      if (iVar5 == 0) {
        uVar4 = (uint)local_53;
        if ((int)(uVar4 << 0x1f) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020b5d4;
        }
        if ((int)(uVar4 << 0x1e) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020b5d8;
        }
        if ((int)(uVar4 << 0x1b) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020b5d8;
          *(undefined4 *)(param_2 + 0x2cc) = 1;
        }
      }
      if (*(int *)(param_1 + 0x2c) << 0x1b < 0) {
        FUN_0020abd4(param_1,param_2);
      }
    }
    FUN_0020acda(param_1,param_2,4);
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    iVar5 = 0;
    if ((*(ushort *)(param_2 + 0x20) & 0x24) == 0) {
LAB_0020b542:
      iVar7 = *(int *)(param_2 + 0x278);
    }
    else {
      iVar7 = *(int *)(param_2 + 0x2c8);
    }
  }
  else {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x200;
    FUN_0020acda(param_1,param_2,8);
    if (((int)(*(uint *)(param_1 + 0x2c) << 0x17) < 0) && (-1 < *(int *)(param_1 + 0x4c) << 0x18)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffeff;
    }
    iVar5 = FUN_0020abfe(param_1,param_2);
    uVar4 = DAT_0020b5dc;
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = 0;
    if (DAT_0020b5dc < *(uint *)(param_2 + 0x2a4)) {
      if (*(int *)(param_1 + 0x2c) << 0x16 < 0) {
        iVar5 = FUN_0020aca8(param_1,0x200);
        if ((((iVar5 == 0) && (iVar5 = FUN_0020ab64(param_1,param_2,1,0xb9,2), iVar5 == 0)) &&
            (iVar5 = FUN_0020ab64(param_1,param_2,1,0xb9,1), iVar5 == 0)) &&
           ((iVar5 = FUN_0020ab64(param_1,param_2,1,0xb7,6), iVar5 == 0 &&
            (iVar5 = FUN_0020ab64(param_1,param_2,1,0xb9,3), iVar5 == 0)))) {
          uVar10 = *(ushort *)(param_2 + 0x20) | 0x100;
LAB_0020b4e6:
          *(ushort *)(param_2 + 0x20) = uVar10;
        }
      }
      else {
        if (-1 < *(int *)(param_1 + 0x2c) << 0x17) goto LAB_0020b4ec;
        iVar5 = FUN_0020ab64(param_1,param_2,1,0xb9,2);
        if (iVar5 == 0) {
          uVar10 = *(ushort *)(param_2 + 0x20) | 0x80;
          goto LAB_0020b4e6;
        }
      }
    }
    else if (*(uint *)(param_2 + 0x2a4) != 0) {
LAB_0020b4ec:
      if (*(int *)(param_1 + 0x2c) << 0x1c < 0) {
        iVar5 = FUN_0020ab64(param_1,param_2,1,0xb9,1);
        if (iVar5 == 0) {
          *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 4;
        }
        if ((*(int *)(param_1 + 0x2c) << 0x18 < 0) &&
           ((int)((uint)*(byte *)(param_2 + 0x2be) << 0x1d) < 0)) {
          FUN_0020acda(param_1,param_2,8);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    if ((int)((uint)*(ushort *)(param_2 + 0x20) << 0x1d) < 0) {
      *(uint *)(param_2 + 0x10) = uVar4;
      goto LAB_0020b54c;
    }
    if ((*(ushort *)(param_2 + 0x20) & 0x180) == 0) goto LAB_0020b542;
    iVar7 = *(int *)(param_2 + 0x2a4);
  }
  if (iVar7 != -1) {
    *(int *)(param_2 + 0x10) = iVar7;
  }
LAB_0020b54c:
  if (((*(int *)(param_2 + 0x1c) << 0x1f < 0) && ((*(ushort *)(param_2 + 0x20) & 0x140) != 0)) ||
     (iVar5 = FUN_0020aca8(param_1,0x200), iVar5 == 0)) {
    if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
      FUN_0020ac82(param_1,param_2,0);
    }
    if ((*(int *)(param_2 + 0x1c) << 0x1e < 0) ||
       (-1 < (int)((uint)*(ushort *)(param_2 + 0x20) << 0x1c))) {
      *(undefined4 *)(param_2 + 8) = 0x200;
      iVar7 = *(int *)(param_2 + 0x284) << (*(int *)(param_2 + 0x27c) - 9U & 0xff);
    }
    else {
      *(undefined4 *)(param_2 + 8) = 0x200;
      iVar7 = *(int *)(param_2 + 0x2a0);
    }
    iVar8 = DAT_0020b5e8;
    *(int *)(param_2 + 4) = iVar7;
    FUN_0020b054(iVar8 + 0x20b5b4,iVar12,0x10,0x10,0);
    *(undefined2 *)(param_2 + 0x22) = 1;
  }
  return iVar5;
}


// ==== FUN_0020b686 @ 0020b686 ====

undefined4 FUN_0020b686(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 auStack_30 [4];
  
  FUN_00214b20(param_1,0,0x80);
  auStack_30[3] = *(undefined4 *)(DAT_0020f304 + 0x20f0f6);
  auStack_30[2] = *(undefined4 *)(DAT_0020f304 + 0x20f0f2);
  auStack_30[1] = *(undefined4 *)(DAT_0020f304 + 0x20f0ee);
  auStack_30[0] = *(undefined4 *)(DAT_0020f304 + 0x20f0ea);
  puVar6 = (uint *)auStack_30[param_2];
  iVar8 = *(int *)(DAT_0020f308 + 0x20f0f4 + DAT_0020f30c);
  if (param_3 == 0xffffffff) {
    param_3 = (uint)*(byte *)(iVar8 + param_2 * 0x18);
  }
  iVar7 = param_2 * 0x98 + DAT_0020f310 + 0x20f122;
  uVar1 = *(undefined1 *)(param_2 * 0x18 + iVar8 + 1);
  FUN_00214b20(iVar7,0);
  *(char *)(param_1 + 0x5a) = (char)param_2;
  *(uint **)(param_1 + 0x28) = puVar6;
  *(char *)(param_1 + 0x58) = (char)param_3;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  if ((param_2 & 0xff) == 3) {
    iVar4 = DAT_0020f314 + 0x20f14c;
  }
  else {
    iVar4 = DAT_0020f318 + 0x20f152;
  }
  uVar5 = *(undefined4 *)(iVar4 + param_3 * 4);
  *(int *)(param_1 + 0x74) = iVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = DAT_0020f2f8;
  *(undefined4 *)(param_1 + 0x44) = 9;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  if (*(int *)(param_2 * 0x18 + iVar8 + 0x14) << 0x18 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0x1a;
  }
  if (*(int *)(param_2 * 0x18 + iVar8 + 0x14) << 0x16 < 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
  }
  if (*(char *)(param_2 * 0x18 + iVar8 + 0xc) == '\x04') {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  }
  if (*(char *)(param_2 * 0x18 + iVar8 + 0xc) == '\b') {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x21;
  }
  if (*(int *)(param_2 * 0x18 + iVar8 + 0x14) << 0x15 < 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x100;
  }
  if (*(int *)(param_2 * 0x18 + iVar8 + 0x14) << 0x14 < 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
  }
  uVar5 = DAT_0020f2fc;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  if ((*(uint *)(param_1 + 0x2c) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_0020f300;
  }
  *(undefined4 *)(param_1 + 8) = 0x10000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x10000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x2000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x800;
  *(undefined4 *)(param_1 + 0x24) = 0xffff;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  *(char *)(iVar7 + 0x30) = (char)param_4;
  iVar4 = param_2 * 0x18 + iVar8;
  *(undefined1 *)(iVar7 + 0x44) = 0;
  *(undefined1 *)(iVar7 + 0x31) = 6;
  uVar3 = (uint)*(byte *)(iVar4 + 3);
  bVar2 = *(byte *)(iVar4 + 2);
  *(uint *)(iVar7 + 0x70) = uVar3;
  *(uint *)(iVar7 + 0x74) = uVar3;
  *(uint *)(iVar7 + 0x78) = (uint)bVar2;
  *(int *)(iVar7 + 0x28) = iVar7 + 0x48;
  FUN_0020bf10(param_1);
  *(undefined4 *)(iVar7 + 0x6c) = 0;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined4 *)(iVar7 + 0x80) = 0;
  *(undefined4 *)(iVar7 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xce4;
  FUN_0020d4cc(param_1,1);
  FUN_0020e27c(param_1,0);
  FUN_0020e27c(param_1,2);
  uVar3 = *puVar6;
  iVar7 = FUN_0020f9a8(1);
  iVar4 = 6;
  *puVar6 = uVar3 & 0xfffffffe | 1 << (iVar7 - 1U & 0xff);
  *puVar6 = *puVar6 | 8;
  *puVar6 = *puVar6 | 4;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar7 = 0x3e9;
    do {
      if (-1 < (int)(*puVar6 << 0x1d)) {
        iVar7 = 6;
        puVar6[5] = puVar6[5] | 0x80000000;
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar4 = 0x3e9;
          do {
            if (-1 < (int)puVar6[5]) {
              puVar6[3] = puVar6[3];
              if (puVar6[3] != 0) {
                FUN_002127e8(DAT_0020f4f8 + 0x20f32e);
              }
              puVar6[0x3c] = 0;
              puVar6[0x3e] = 0;
              puVar6[0x3f] = 0;
              puVar6[1] = 0;
              puVar6[0xc] = puVar6[0xc] | 0x80000;
              puVar6[0xc] = puVar6[0xc] & 0xffefffff;
              uVar3 = puVar6[0x2e];
              FUN_0020f9a8(0x10000000);
              puVar6[0x2e] = uVar3 & 0xefffffff;
              uVar3 = puVar6[0x2e];
              iVar7 = FUN_0020f9a8(0x8000);
              puVar6[0x2e] = 1 << (iVar7 - 1U & 0xff) | uVar3 & 0xffff7fff;
              FUN_0020d2b8(param_1,(uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8,
                           *(int *)(param_1 + 0x6c) == 0x708);
              FUN_0020d0fc(param_1,0);
              FUN_0020cc2c(param_1,1);
              puVar6[0x1c] = puVar6[0x1c] & 0xffff7fff;
              uVar3 = puVar6[1];
              bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8 + 2);
              iVar7 = FUN_0020f9a8(2);
              puVar6[1] = uVar3 & 0xfffffffd | (uint)bVar2 << (iVar7 - 1U & 0xff);
              uVar3 = puVar6[1];
              bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8 + 3);
              iVar8 = FUN_0020f9a8(4);
              puVar6[1] = uVar3 & 0xfffffffb | (uint)bVar2 << (iVar8 - 1U & 0xff);
              FUN_0020d652(param_1,0);
              FUN_0020e1a0(param_1,1);
              FUN_0020dfd4(param_1,0,DAT_0020f4f0,0);
              FUN_0020da00(param_1,param_4);
              FUN_0020da3c(param_1,0x20);
              FUN_0020dcb2(param_1,DAT_0020f4f4);
              FUN_0020c796(param_1);
              FUN_0020d950(param_1,extraout_r1,DAT_0020f4e8,DAT_0020f4ec,0);
              if (*(byte *)(param_1 + 0x5a) < 2) {
                uVar3 = puVar6[0xc];
                FUN_0020f9a8(0x80000);
                puVar6[0xc] = uVar3 & 0xfff7ffff;
                uVar3 = puVar6[0xc];
                FUN_0020f9a8(0x100000);
                puVar6[0xc] = uVar3 & 0xffefffff;
                uVar3 = puVar6[0xc];
                FUN_0020f9a8(2);
                puVar6[0xc] = uVar3 & 0xfffffffd;
              }
              return 0;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          thunk_FUN_00214da8(200);
        } while( true );
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
}


// ==== FUN_0020b6ac @ 0020b6ac ====

uint FUN_0020b6ac(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *local_1c [3];
  undefined4 uStack_10;
  
  piVar6 = (int *)(DAT_0020b6e0 + 0x20b6be + param_1 * 0x80);
  uStack_10 = param_4;
  uVar4 = FUN_0020b686(piVar6,param_1,0xffffffff,param_2);
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar5 = (undefined4 *)(param_1 * 0x2dc + DAT_0020b6e4 + 0x20b6d4);
  local_1c[0] = puVar5;
  FUN_00214b20(puVar5,0,0x2dc,uStack_10,piVar6);
  *puVar5 = piVar6;
  puVar5[7] = 0;
  *(ushort *)(puVar5 + 8) = *(ushort *)(puVar5 + 8) | 1;
  FUN_0020aa92(piVar6);
  FUN_0020a7c8(piVar6,piVar6[0x13]);
  iVar2 = FUN_0020a77a(piVar6,0,local_1c);
  if (iVar2 == 0) {
    uVar4 = puVar5[7] | 2;
  }
  else {
    uVar4 = FUN_0020a80c(piVar6,0,local_1c);
    if (uVar4 != 0) {
      return uVar4;
    }
    uVar4 = puVar5[7] | 1;
  }
  puVar5[7] = uVar4;
  uVar3 = FUN_0020b058(piVar6,puVar5,local_1c[0]);
  uVar4 = uVar3;
  if (uVar3 == 0) {
    FUN_0020ac0e(piVar6,*(ushort *)(puVar5 + 8) & 0x40,puVar5[4]);
    *piVar6 = (int)puVar5;
    uVar1 = *(ushort *)(puVar5 + 8);
    uVar4 = uVar1 & 0x100;
    if ((uVar1 & 0x100) != 0) {
      FUN_0020ac0e(piVar6,uVar1 & 0x40,puVar5[4]);
      uVar4 = uVar3;
    }
  }
  return uVar4;
}


// ==== FUN_0020b6e8 @ 0020b6e8 ====

uint FUN_0020b6e8(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar6 = DAT_0020b7f0 + 0x20b6fe;
  iVar4 = iVar6 + param_1 * 0x80;
  local_4c = 0;
  FUN_00214b20(iVar4,0,0x80);
  uVar5 = (param_1 & 0xf) << 0x18;
  uVar1 = FUN_0020f500(param_1,iVar4);
  if (uVar1 == 0) {
    iVar2 = DAT_0020b7f4 + 0x20b734;
    iVar3 = iVar2 + param_1 * 0x2dc;
    FUN_00214b20(iVar3,0);
    *(int *)(iVar6 + param_1 * 0x80) = iVar3;
    iVar6 = FUN_0020f084(iVar4);
    if (iVar6 == 0) {
      uVar5 = uVar5 | 0xa0200000;
    }
    else {
      *(ushort *)(iVar3 + 0x20) = *(ushort *)(iVar3 + 0x20) | 1;
      *(int *)(iVar2 + param_1 * 0x2dc) = iVar4;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      FUN_0020aa92(iVar4);
      FUN_0020a7c8(iVar4,*(undefined4 *)(iVar4 + 0x4c));
      FUN_00214b20(&local_48,0,0x28);
      local_48 = 0x85;
      local_40 = 4;
      local_28 = 5;
      local_2c = 100;
      local_44 = uVar1;
      iVar6 = FUN_0020a724(iVar4,&local_48);
      local_4c = local_3c;
      if (iVar6 == 0) {
        uVar5 = uVar5 | 0x90000000;
        uVar1 = *(uint *)(iVar3 + 0x1c) | 4;
      }
      else {
        iVar6 = FUN_0020a77a(iVar4,0,&local_4c);
        if (iVar6 == 0) {
          uVar5 = uVar5 | 0xa0000000;
          uVar1 = *(uint *)(iVar3 + 0x1c) | 2;
        }
        else {
          uVar1 = FUN_0020a80c(iVar4,0,&local_4c);
          if (uVar1 != 0) {
            return uVar1 & 0xffff | uVar5 | 0x80000000;
          }
          uVar5 = uVar5 | 0xc0000000;
          uVar1 = *(uint *)(iVar3 + 0x1c) | 1;
        }
      }
      *(uint *)(iVar3 + 0x1c) = uVar1;
    }
  }
  else {
    uVar5 = uVar1 & 0xffff | uVar5;
  }
  return uVar5;
}


// ==== FUN_0020b7f8 @ 0020b7f8 ====

int FUN_0020b7f8(void)

{
  uint uVar1;
  int iVar2;
  
  if (((int)(*DAT_0020b864 << 0x18) < 0) && ((*DAT_0020b864 & 0x40) == 0)) {
    uVar1 = FUN_0020b6e8(0);
    if ((int)uVar1 < 0) {
      if ((int)(uVar1 << 1) < 0) {
        return 0;
      }
      if ((uVar1 & 0x30000000) != 0) {
        return -1;
      }
    }
    iVar2 = FUN_0020b6e8(3);
    if ((iVar2 < 0) && (iVar2 << 1 < 0)) {
      return 3;
    }
  }
  else {
    uVar1 = FUN_0020b6e8(3);
    if ((int)uVar1 < 0) {
      if ((int)(uVar1 << 1) < 0) {
        return 3;
      }
      if ((uVar1 & 0x30000000) != 0) {
        return -1;
      }
    }
    uVar1 = FUN_0020b6e8(0);
    if ((int)uVar1 < 0) {
      return (int)((uVar1 ^ 0x40000000) << 1) >> 0x1f;
    }
  }
  return -1;
}


// ==== FUN_0020b868 @ 0020b868 ====

int FUN_0020b868(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_002127e8(DAT_0020b910 + 0x20b882,DAT_0020b914 + 0x20b884,param_5,param_4,param_3,param_2);
  if ((param_5 == '\x01') && (param_4 == 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_4 == 1;
  }
  FUN_0020da42(param_1,2,0);
  FUN_0020e658(param_1,param_3,bVar3);
  FUN_0020dca0(param_1,1);
  if (param_5 == '\x01') {
    iVar1 = FUN_0020af38();
  }
  else {
    iVar1 = FUN_0020aedc(0,0,param_3,param_2);
  }
  FUN_0020da42(param_1,2,0);
  if (iVar1 != 0) {
    if (param_5 == '\x01') {
      iVar2 = DAT_0020b918 + 0x20b8ee;
    }
    else {
      iVar2 = DAT_0020b91c + 0x20b8f4;
    }
    FUN_002127e8(DAT_0020b920 + 0x20b8fc,DAT_0020b924 + 0x20b8fe,iVar2,iVar1);
  }
  FUN_0020dca0(param_1,0);
  return iVar1;
}


// ==== FUN_0020b928 @ 0020b928 ====

int FUN_0020b928(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = param_2[1];
  uVar1 = *(ushort *)*param_2;
  uVar7 = (uint)((ushort *)*param_2)[2];
  uVar5 = 1;
  if (uVar1 == 3) {
    uVar5 = uVar7;
  }
  iVar2 = FUN_0020b868(*param_1,iVar6,uVar5,uVar1,1,param_2);
  if (iVar2 == 0) {
    FUN_00214b20(iVar6,0,uVar7 << 9);
    if ((uVar1 & 0xfffd) == 1) {
      *(undefined1 *)(iVar6 + 0x1ff) = 5;
      iVar2 = FUN_0020b868(*param_1,iVar6,1,5,1,param_2);
      if (iVar2 != 0) {
        iVar6 = DAT_0020b9e4 + 0x20b9aa;
        iVar4 = DAT_0020b9e8 + 0x20b9ac;
        goto LAB_0020b9cc;
      }
      if (uVar1 == 1) {
        return 0;
      }
    }
    *(char *)(iVar6 + 0x1ff) = (char)uVar1;
    *(undefined1 *)(iVar6 + 0x1fe) = 0;
    if (uVar1 == 4) {
      uVar3 = *param_1;
    }
    else {
      uVar3 = *param_1;
      uVar7 = 1;
    }
    iVar2 = FUN_0020b868(uVar3,iVar6,uVar7,uVar1,2,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    iVar6 = DAT_0020b9ec + 0x20b9cc;
    iVar4 = DAT_0020b9f0 + 0x20b9ce;
  }
  else {
    iVar6 = DAT_0020b9dc + 0x20b958;
    iVar4 = DAT_0020b9e0 + 0x20b95a;
  }
LAB_0020b9cc:
  FUN_002127e8(iVar6,iVar4,iVar2);
  return iVar2;
}


// ==== FUN_0020b9f4 @ 0020b9f4 ====

void FUN_0020b9f4(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 0xff);
  do {
    uVar1 = *(undefined1 *)(param_1 + iVar3);
    *(undefined1 *)(param_1 + iVar3) = *puVar2;
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + -1;
  } while (iVar3 != 0x80);
  return;
}


// ==== FUN_0020ba0e @ 0020ba0e ====

ushort FUN_0020ba0e(ushort *param_1)

{
  return *param_1 << 8 | *param_1 >> 8;
}


// ==== FUN_0020ba16 @ 0020ba16 ====

uint FUN_0020ba16(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}


// ==== FUN_0020ba1c @ 0020ba1c ====

undefined4
FUN_0020ba1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  psVar6 = (short *)*param_1;
  iVar5 = param_1[1];
  uVar7 = *(undefined4 *)(psVar6 + 6);
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_00214b20(iVar5,0,(uint)(ushort)psVar6[2] << 9,param_4,CONCAT22(psVar6[2],(short)param_1));
  sVar2 = FUN_0020ba0e(psVar6);
  sVar1 = *psVar6;
  local_1c._2_2_ = sVar2;
  if (sVar1 == 1) {
    FUN_00214b30(iVar5 + 0x1fe,(int)&local_1c + 2,2);
    iVar5 = iVar5 + 0xc4;
    uVar7 = *(undefined4 *)(psVar6 + 10);
    uVar4 = 0x20;
  }
  else {
    if ((sVar1 != 2) && (sVar1 != 4)) {
      if (sVar1 != 3) {
        return 0;
      }
      iVar8 = iVar5 + 0xe4;
      FUN_00214b30(iVar5 + 0x1fe,(int)&local_1c + 2,2);
      uVar3 = FUN_0020ba0e(psVar6 + 3);
      local_1c = CONCAT22(local_1c._2_2_,uVar3);
      FUN_00214b30(iVar5 + 0x1f8,&local_1c,2);
      local_18 = FUN_0020ba16(*(undefined4 *)(psVar6 + 4));
      FUN_00214b30(iVar5 + 500,&local_18,4);
      FUN_0020ba0e(psVar6 + 2);
      FUN_00214b30(iVar5 + 0x1fa,&stack0xffffffe2,2);
      FUN_00214b30(iVar8,*(undefined4 *)(psVar6 + 8),0x100);
      FUN_0020b9f4(iVar8);
      local_14 = 0x20;
      FUN_00217298(iVar8,0x11c);
      FUN_002172cc(iVar5 + 0xc4,&local_14);
      return 0;
    }
    FUN_00214b30(iVar5 + 0x1fe,(int)&local_1c + 2,2);
    if (local_1c._2_2_ == 4) {
      local_1c._0_2_ = FUN_0020ba0e(psVar6 + 3);
      FUN_00214b30(iVar5 + 0x1f8,&local_1c,2);
    }
    iVar5 = iVar5 + 0x1e4;
    uVar4 = 0x10;
  }
  FUN_00214b30(iVar5,uVar7,uVar4);
  return 0;
}


// ==== FUN_0020bb2c @ 0020bb2c ====

undefined4 FUN_0020bb2c(undefined4 *param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined1 auStack_36 [2];
  undefined4 local_34;
  byte abStack_30 [32];
  
  iVar7 = param_1[1];
  psVar8 = (short *)*param_1;
  FUN_00214b30(auStack_36,iVar7 + 0x1fc,2);
  sVar2 = FUN_0020ba0e(auStack_36);
  psVar8[1] = sVar2;
  if ((ushort)(*psVar8 - 2U) < 2) {
    puVar9 = *(undefined4 **)(psVar8 + 4);
    uVar3 = FUN_0020ba16(iVar7 + 500);
    *puVar9 = uVar3;
  }
  if ((*psVar8 == 2) || (*psVar8 == 4)) {
    iVar4 = FUN_00214b42(*(undefined4 *)(psVar8 + 6),iVar7 + 0x1e4,0x10);
    if (iVar4 != 0) {
      FUN_002127e8(DAT_0020bbe0 + 0x20bb88,DAT_0020bbe4 + 0x20bb8a);
      return 0xffffffff;
    }
    local_34 = 0x20;
    FUN_00217298(iVar7 + 0xe4,0x11c);
    FUN_002172cc(abStack_30,&local_34);
    bVar6 = 0;
    iVar4 = 0;
    do {
      iVar5 = iVar7 + iVar4;
      pbVar1 = abStack_30 + iVar4;
      iVar4 = iVar4 + 1;
      bVar6 = bVar6 | *(byte *)(iVar5 + 0xc4) ^ *pbVar1;
    } while (iVar4 != 0x20);
    if (bVar6 != 0) {
      FUN_002127e8(DAT_0020bbe8 + 0x20bbd2,DAT_0020bbec + 0x20bbd4);
      return 0xfffffffe;
    }
  }
  return 0;
}


// ==== FUN_0020bbf0 @ 0020bbf0 ====

uint FUN_0020bbf0(uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if ((int)(param_1 << 0x18) < 0) {
      iVar1 = DAT_0020bc24 + 0x20bc0c;
    }
    else {
      iVar1 = DAT_0020bc28 + 0x20bc12;
    }
    FUN_002127e8(DAT_0020bc2c + 0x20bc18,DAT_0020bc30 + 0x20bc1a,
                 *(undefined4 *)(DAT_0020bc20 + 0x20bc02 + (param_1 & 7) * 4),iVar1);
  }
  return param_1;
}


// ==== FUN_0020bc34 @ 0020bc34 ====

int FUN_0020bc34(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_248;
  undefined1 *local_244;
  undefined1 auStack_240 [16];
  undefined2 local_230;
  undefined2 local_22e;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined4 local_228;
  undefined1 *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 auStack_218 [512];
  
  FUN_0020a700(0);
  iVar1 = FUN_0020a710(0);
  FUN_00214b20(&local_230,0,0x18);
  FUN_0021b784(auStack_240,0x10);
  local_230 = 2;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_220 = 0;
  local_21c = 0;
  local_228 = param_1;
  local_224 = auStack_240;
  iVar2 = FUN_0020ae14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    iVar3 = DAT_0020bd18 + 0x20bca6;
    FUN_002127e8(DAT_0020bd1c + 0x20bca8,iVar3);
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020ba1c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020b928(iVar1,&local_248);
      if (iVar2 == 0) {
        iVar2 = FUN_0020bb2c(&local_248);
        FUN_002127e8(DAT_0020bd28 + 0x20bcfa,iVar3,local_22e);
        if (iVar2 == 0) {
          iVar2 = FUN_0020bbf0(local_22e);
        }
      }
      else {
        FUN_002127e8(DAT_0020bd24 + 0x20bce2,iVar3,iVar2);
      }
    }
    else {
      FUN_002127e8(DAT_0020bd20 + 0x20bcc6,iVar3,iVar2);
    }
  }
  else {
    FUN_002127e8(DAT_0020bd10 + 0x20bc98,DAT_0020bd14 + 0x20bc9a,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020bd3c @ 0020bd3c ====

int FUN_0020bd3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *local_248;
  undefined1 *local_244;
  undefined1 auStack_240 [16];
  undefined2 local_230;
  undefined2 local_22e;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined4 local_228;
  undefined1 *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 auStack_218 [228];
  undefined1 auStack_134 [284];
  
  FUN_0020a700(0);
  iVar1 = FUN_0020a710(0);
  FUN_00214b20(&local_230,0,0x18);
  FUN_0021b784(auStack_240,0x10);
  local_230 = 4;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_224 = auStack_240;
  iVar2 = FUN_0020ae14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020ba1c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020b928(iVar1,&local_248);
      if (iVar2 == 0) {
        iVar2 = FUN_0020bb2c(&local_248);
        if ((iVar2 == 0) && (iVar2 = FUN_0020bbf0(local_22e), iVar2 == 0)) {
          FUN_00214b30(param_1,auStack_134,0x100);
          FUN_0020b9f4(param_1);
        }
      }
      else {
        FUN_002127e8(DAT_0020be28 + 0x20bde0,DAT_0020be2c + 0x20bde2,iVar2);
      }
    }
    else {
      FUN_002127e8(DAT_0020be20 + 0x20bdc2,DAT_0020be24 + 0x20bdc4,iVar2);
    }
  }
  else {
    FUN_002127e8(DAT_0020be18 + 0x20bda0,DAT_0020be1c + 0x20bda2,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020be30 @ 0020be30 ====

int FUN_0020be30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_24c;
  undefined2 *local_248;
  undefined1 *local_244;
  undefined1 auStack_240 [16];
  undefined2 local_230;
  undefined2 local_22e;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined4 *local_228;
  undefined1 *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 auStack_218 [512];
  
  local_24c = param_2;
  FUN_0020a700(0);
  iVar1 = FUN_0020a710(0);
  FUN_00214b20(&local_230,0,0x18);
  FUN_0021b784(auStack_240,0x10);
  local_230 = 3;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_21c = 0;
  local_228 = &local_24c;
  local_224 = auStack_240;
  local_220 = param_1;
  iVar2 = FUN_0020ae14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020ba1c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020b928(iVar1,&local_248);
      if (iVar2 == 0) {
        FUN_0020bb2c(&local_248);
        iVar2 = FUN_0020bbf0(local_22e);
      }
      else {
        FUN_002127e8(DAT_0020bf08 + 0x20bedc,DAT_0020bf0c + 0x20bede,iVar2);
      }
    }
    else {
      FUN_002127e8(DAT_0020bf00 + 0x20bebe,DAT_0020bf04 + 0x20bec0,iVar2);
    }
  }
  else {
    FUN_002127e8(DAT_0020bef8 + 0x20be9a,DAT_0020befc + 0x20be9c,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020bf10 @ 0020bf10 ====

void FUN_0020bf10(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x5a);
  iVar5 = *(int *)(param_1 + 0x74);
  uVar2 = uVar1 * 0x38 + DAT_0020bf7c + 0x20bf20;
  uVar3 = DAT_0020bf80 + 0x20bf2a;
  iVar4 = uVar3 + uVar1 * 0x40;
  FUN_00214b20(uVar2,0,0x38,uVar1,param_1,param_2);
  FUN_00214b20(iVar4,0,0x40);
  if ((uVar3 & 0xf) != 0) {
    FUN_002127e8(DAT_0020bf84 + 0x20bf4e,DAT_0020bf88 + 0x20bf52,iVar4,DAT_0020bf8c + 0x20bf54,0x43)
    ;
  }
  if ((uVar2 & 0xf) != 0) {
    FUN_002127e8(DAT_0020bf90 + 0x20bf68,DAT_0020bf94 + 0x20bf6c,uVar2,DAT_0020bf98 + 0x20bf6e,0x44)
    ;
  }
  *(int *)(iVar5 + 0x8c) = iVar4;
  *(uint *)(iVar5 + 0x88) = uVar2;
  return;
}


// ==== FUN_0020bf9c @ 0020bf9c ====

void FUN_0020bf9c(void)

{
  return;
}


// ==== FUN_0020bf9e @ 0020bf9e ====

byte FUN_0020bf9e(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    bVar2 = bVar2 + *(char *)(param_1 + iVar1);
  }
  return ~bVar2;
}


// ==== FUN_0020bfb8 @ 0020bfb8 ====

uint FUN_0020bfb8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x74);
  iVar1 = *(int *)(iVar3 + 0x68);
  if (iVar1 + param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = iVar1 * 0x1c + *(int *)(iVar3 + 0x88);
      iVar5 = (param_2 + 1) * 0x1c;
      *(int *)(iVar3 + 0x68) = iVar1 + param_2 + 1;
      FUN_00214b20(uVar4,0,iVar5,iVar3,param_1,param_2,param_3);
      uVar2 = iVar5 + -0x38 + uVar4;
      *(uint *)(uVar2 + 4) = iVar5 + -0x1c + uVar4;
      for (; uVar2 != uVar4; uVar2 = uVar2 - 0x1c) {
        *(uint *)(uVar2 - 0x18) = uVar2;
      }
      if ((uVar4 & 0xf) != 0) {
        FUN_002127e8(DAT_0020c034 + 0x20c006,DAT_0020c038 + 0x20c00a,uVar4,DAT_0020c03c + 0x20c00c,
                     0x76);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ==== FUN_0020c040 @ 0020c040 ====

byte * FUN_0020c040(int param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar4 = *(int *)(param_1 + 0x74);
  iVar2 = *(int *)(iVar4 + 0x6c);
  iVar3 = iVar2 + param_2;
  if (iVar3 < 5) {
    if (param_2 == 0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      uVar5 = *(uint *)(iVar4 + 0x8c);
      *(int *)(iVar4 + 0x6c) = iVar3;
      pbVar6 = (byte *)(uVar5 + iVar2 * 0x10);
      FUN_00214b20(pbVar6,0,param_2 * 0x10,iVar4,param_1,param_2,param_3);
      iVar2 = param_2 * 0x10 + -0x10;
      pbVar7 = pbVar6 + iVar2;
      pbVar6[iVar2] = pbVar6[iVar2] | 1;
      pbVar7[4] = 0;
      pbVar7[5] = 0;
      pbVar7[6] = 0;
      pbVar7[7] = 0;
      while (pbVar7 != pbVar6) {
        *(byte **)(pbVar7 + -0xc) = pbVar7;
        pbVar1 = pbVar7 + -0x10;
        pbVar7 = pbVar7 + -0x10;
        *pbVar7 = *pbVar1 & 0xfe;
      }
      if ((uVar5 & 0xf) != 0) {
        FUN_002127e8(DAT_0020c0c8 + 0x20c090,DAT_0020c0cc + 0x20c094,pbVar6,DAT_0020c0d0 + 0x20c096,
                     0x97);
      }
    }
  }
  else {
    pbVar6 = (byte *)0x0;
  }
  return pbVar6;
}


// ==== FUN_0020c0d4 @ 0020c0d4 ====

void FUN_0020c0d4(int param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if ((param_3 & 0xf) != 0) {
    FUN_002127e8(DAT_0020c118 + 0x20c0ec,DAT_0020c11c + 0x20c0f0,param_3,DAT_0020c120 + 0x20c0f2,
                 0xa3,param_2);
  }
  *(uint *)(param_2 + 8) = param_3;
  *param_2 = *param_2 | 3;
  if (*(int *)(iVar2 + 0x10) << 0x1f < 0) {
    for (; param_3 != 0; param_3 = *(uint *)(param_3 + 4)) {
      uVar1 = FUN_0020bf9e(param_3,0x10);
      *(undefined1 *)(param_3 + 1) = uVar1;
    }
  }
  return;
}


// ==== FUN_0020c124 @ 0020c124 ====

void FUN_0020c124(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  int extraout_r3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x74);
  if ((param_2 & 0xf) != 0) {
    param_1 = 0xc5;
    FUN_002127e8(DAT_0020c184 + 0x20c13e,DAT_0020c188 + 0x20c142,param_2,DAT_0020c18c + 0x20c144,
                 0xc5,param_2);
  }
  if (0 < param_3) {
    if (*(int *)(iVar4 + 0x80) == 0) {
      *(uint *)(iVar4 + 0x80) = param_2;
    }
    else {
      *(uint *)(*(int *)(iVar4 + 0x84) + 4) = param_2;
    }
    iVar3 = *(int *)(iVar4 + 0x10);
    iVar2 = iVar3 << 0x1f;
    *(uint *)(iVar4 + 0x84) = param_3 * 0x1c + param_2 + -0x1c;
    if (iVar2 < 0) {
      for (; param_2 != 0; param_2 = *(uint *)(param_2 + 4)) {
        uVar1 = FUN_0020bf9e(param_2,0x10,iVar2,iVar3,param_1);
        *(undefined1 *)(param_2 + 1) = uVar1;
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
    }
  }
  return;
}


// ==== FUN_0020c190 @ 0020c190 ====

void FUN_0020c190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  return;
}


// ==== FUN_0020c1a2 @ 0020c1a2 ====

int FUN_0020c1a2(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  FUN_0020bf9c(param_2,param_3);
  iVar1 = 4;
  while( true ) {
    bVar2 = param_4 == 0;
    if (param_4 == 0) {
      bVar2 = param_3 < 0x800001;
    }
    iVar1 = iVar1 + -1;
    if (bVar2) break;
    bVar2 = 0x7fffff < param_3;
    param_3 = param_3 - 0x800000;
    param_1[1] = 0x800000;
    *param_1 = param_2;
    param_4 = param_4 + -1 + (uint)bVar2;
    param_2 = param_2 + 0x800000;
    param_1 = param_1 + 2;
    if (iVar1 == 0) {
LAB_0020c1f6:
      return 4 - iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  goto LAB_0020c1f6;
}


// ==== FUN_0020c1fe @ 0020c1fe ====

void FUN_0020c1fe(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0xc) = param_6;
  *(undefined4 *)(param_2 + 8) = param_5;
  if (*(char *)(param_2 + 0x20) == '\x02') {
    *(undefined4 *)(param_2 + 0x10) = 1;
    **(undefined4 **)(param_2 + 0x18) = param_3;
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 4) = param_5;
    FUN_0020bf9c(param_3,param_5);
  }
  else {
    uVar1 = FUN_0020c1a2(*(undefined4 *)(param_2 + 0x18));
    *(undefined4 *)(param_2 + 0x10) = uVar1;
  }
  FUN_0020d5c0(param_1);
  *puVar2 = *puVar2 & 0xfffffff7;
  return;
}


// ==== FUN_0020c246 @ 0020c246 ====

void FUN_0020c246(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(iVar3 + 0x98);
  iVar1 = FUN_0020f9a8(1);
  *(uint *)(iVar3 + 0x98) = uVar2 & 0xfffffffe | 1 << (iVar1 - 1U & 0xff);
  return;
}


// ==== FUN_0020c276 @ 0020c276 ====

void FUN_0020c276(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  uVar2 = puVar3[0x26];
  iVar1 = FUN_0020f9a8(2);
  puVar3[0x26] = uVar2 & 0xfffffffd | 1 << (iVar1 - 1U & 0xff);
  do {
  } while ((int)(puVar3[0x27] << 0x1f) < 0);
  *puVar3 = *puVar3 | 8;
  FUN_0020c190(param_1);
  return;
}


// ==== FUN_0020c2be @ 0020c2be ====

undefined4 FUN_0020c2be(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  do {
    iVar1 = FUN_0020c798(param_1,0xf778);
    if ((iVar1 == 0) || (iVar1 << 0x11 < 0)) {
LAB_0020c338:
      uVar2 = 1;
      goto LAB_0020c33e;
    }
    if (iVar1 << 0x10 < 0) goto LAB_0020c2dc;
    if (iVar1 << 0x16 < 0) goto LAB_0020c338;
    if (iVar1 << 0x15 < 0) goto LAB_0020c2dc;
    if (iVar1 << 0x1b < 0) goto LAB_0020c338;
    if (iVar1 << 0x1a < 0) goto LAB_0020c2dc;
    if ((*(char *)(param_1 + 0x5a) == '\x03') && (iVar1 << 8 < 0)) {
      uVar2 = 0xd;
      goto LAB_0020c33e;
    }
    if (iVar1 << 0x1c < 0) {
      *(uint *)(iVar4 + 0x40) = puVar3[0x20];
      FUN_0020cc04();
    }
  } while ((((*(char *)(iVar4 + 0x44) == '\0') || (*(char *)(iVar4 + 0x30) != '\x02')) ||
           (-1 < iVar1 << 0x12)) && (-1 < iVar1 << 0x13));
  while ((puVar3[3] & 0x60000) == 0) {
    if ((puVar3[0x27] & 1) == 0) {
      return 0;
    }
  }
LAB_0020c2dc:
  uVar2 = 2;
LAB_0020c33e:
  iVar4 = 6;
  *puVar3 = *puVar3 | 4;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = 0x3e9;
    do {
      if (-1 < (int)(*puVar3 << 0x1d)) {
        return uVar2;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
}


// ==== FUN_0020c368 @ 0020c368 ====

void FUN_0020c368(void)

{
  return;
}


// ==== FUN_0020c36a @ 0020c36a ====

undefined4 FUN_0020c36a(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar9 = param_2[4];
  puVar7 = (undefined4 *)param_2[6];
  if ((char)param_2[8] == '\x02') {
    *(undefined4 *)(iVar6 + 0x90) = *puVar7;
    uVar9 = *(uint *)(iVar6 + 0x98);
    iVar4 = FUN_0020f9a8(0x400);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xfffffbff | 1 << (iVar4 - 1U & 0xff);
    *(undefined4 *)(iVar6 + 0xa8) = puVar7[1];
    uVar9 = *(uint *)(iVar6 + 0x98);
    bVar1 = *(byte *)((int)param_2 + 0x21);
    iVar4 = FUN_0020f9a8(0x7000);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xffff8fff | (uint)bVar1 << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98) & 0xfffffeff;
    FUN_0020f9a8(0x100);
  }
  else {
    if ((char)param_2[8] != '\x03') {
      return 0;
    }
    uVar5 = *param_2;
    iVar2 = FUN_0020bfb8(param_1,1);
    *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) & 0xfe;
    iVar3 = FUN_0020c040(param_1,uVar9);
    iVar4 = iVar3;
    for (uVar8 = 0; uVar8 != uVar9; uVar8 = uVar8 + 1) {
      bVar1 = (byte)uVar5;
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) & 0xf9 | bVar1 & 2 | bVar1 & 4;
      *(undefined4 *)(iVar4 + 8) = *puVar7;
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xff000000 | puVar7[1] & 0xffffff;
      puVar7 = puVar7 + 2;
      iVar4 = iVar4 + 0x10;
    }
    FUN_0020c0d4(param_1,iVar2,iVar3);
    FUN_0020bf9c(iVar3,uVar8 << 4);
    FUN_0020c124(param_1,iVar2,1);
    FUN_0020c368(param_1);
    FUN_0020bf9c(iVar2,0x38);
    *(int *)(iVar6 + 0x90) = iVar2;
    uVar9 = *(uint *)(iVar6 + 0x9c);
    iVar4 = FUN_0020f9a8(2);
    *(uint *)(iVar6 + 0x9c) = uVar9 & 0xfffffffd | (uVar5 & 1) << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98);
    bVar1 = *(byte *)((int)param_2 + 0x21);
    iVar4 = FUN_0020f9a8(0x7000);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xffff8fff | (uint)bVar1 << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98);
    iVar4 = FUN_0020f9a8(0x100);
    uVar9 = uVar9 & 0xfffffeff | 1 << (iVar4 - 1U & 0xff);
  }
  *(uint *)(iVar6 + 0x98) = uVar9;
  return 0;
}


// ==== FUN_0020c538 @ 0020c538 ====

int FUN_0020c538(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar4 = *(int *)(param_1 + 0x74);
  uVar11 = *(uint *)(param_1 + 0x40);
  iVar8 = *(int *)(param_1 + 0x28);
  uVar5 = param_3[1];
  iVar10 = *param_3;
  *(int *)(param_1 + 0x70) = param_2;
  FUN_0020d9e0(param_1,uVar11);
  FUN_0020d950(param_1,extraout_r1,param_3[2] * DAT_0020c708,0,0);
  local_48 = (ulonglong)uVar11 * (ulonglong)uVar5;
  iVar6 = (int)((ulonglong)local_48 >> 0x20);
  uVar3 = uVar5;
  local_40 = local_48;
  if (*(char *)(iVar4 + 0x30) != '\x02') goto LAB_0020c674;
  bVar12 = iVar6 == 0;
  if (iVar6 == 0) {
    bVar12 = (uint)local_48 < 0x800001;
  }
  if (!bVar12) {
    local_40 = 0x800000;
  }
  uVar7 = (uint)local_40;
  uVar9 = local_40._4_4_;
  do {
    uVar3 = FUN_00200ac8(uVar7,uVar9,uVar11,0);
LAB_0020c674:
    do {
      do {
        if (local_48._4_4_ == 0 && (uint)local_48 == 0) {
          return 0;
        }
        FUN_0020d9ea(param_1,uVar3);
        FUN_0020c1fe(param_1,iVar4 + 0x10,iVar10,local_40._4_4_,(uint)local_40,local_40._4_4_);
        iVar6 = FUN_0020da54(param_1,param_2);
        FUN_0020c36a(param_1,iVar4 + 0x10);
        if (iVar6 != 0) {
          FUN_0020c190();
          iVar2 = 0;
          iVar1 = iVar6;
          goto LAB_0020c6ea;
        }
        iVar1 = FUN_0020dbc8(param_1,param_2);
        iVar2 = iVar6;
        if (iVar1 == 2) {
          if ((*(uint *)(iVar8 + 0x34) & 0x1800) != 0) {
            FUN_0020e5e0(param_1,1);
          }
          if (*(char *)(param_1 + 0x5c) == '\x02') goto LAB_0020c6ea;
          iVar1 = FUN_0020e2b4(param_1,param_2);
          if (iVar1 != 0) {
            FUN_0020c190(param_1);
            goto LAB_0020c6ea;
          }
        }
        else if (iVar1 != 0) goto LAB_0020c6ea;
        FUN_0020c246(param_1);
        iVar2 = FUN_0020c2be(param_1,0xffffffff);
        FUN_0020c276(param_1);
        FUN_0020bf9c(iVar10,uVar11 * uVar3);
        iVar1 = iVar2;
        if (iVar2 != 0) {
LAB_0020c6ea:
          FUN_0020d61c(param_1);
          if (iVar2 != 0) {
            FUN_0020e5e0(param_1,1);
            iVar1 = iVar2;
          }
          return iVar1;
        }
        if (((1 < uVar5) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_0020e5a8(param_1,param_2), iVar6 != 0)) {
          FUN_0020d61c(param_1);
          return 4;
        }
        iVar10 = iVar10 + (uint)local_40;
        uVar7 = (uint)local_48 - (uint)local_40;
        uVar9 = (local_48._4_4_ - local_40._4_4_) - (uint)((uint)local_48 < (uint)local_40);
        local_48 = CONCAT44(uVar9,uVar7);
      } while (uVar7 == 0 && uVar9 == 0);
      *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) + uVar3;
      bVar12 = local_40._4_4_ <= uVar9;
      if (uVar9 == local_40._4_4_) {
        bVar12 = (uint)local_40 <= uVar7;
      }
      if (!bVar12) {
        local_40 = CONCAT44(uVar9,uVar7);
      }
      bVar12 = uVar9 <= local_40._4_4_;
      if (local_40._4_4_ == uVar9) {
        bVar12 = uVar7 <= (uint)local_40;
      }
    } while (!bVar12);
  } while( true );
}


// ==== FUN_0020c750 @ 0020c750 ====

void FUN_0020c750(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_4 < 2) {
    local_38 = 0x18;
  }
  else {
    local_38 = 0x19;
  }
  if (*(int *)(*(int *)(param_1 + 0x74) + 4) << 0x1e < 0) {
    local_38 = 0x19;
  }
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x90) != 0) {
    local_38 = 0x19;
  }
  local_18 = 0;
  local_1c = 100;
  local_30 = 1;
  local_3c = 0xfa;
  local_44 = param_3;
  local_40 = param_4;
  local_34 = param_2;
  FUN_0020c538(param_1,&local_38,&local_44);
  return;
}


// ==== FUN_0020c796 @ 0020c796 ====

void FUN_0020c796(void)

{
  return;
}


// ==== FUN_0020c798 @ 0020c798 ====

uint FUN_0020c798(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  iVar3 = DAT_0020c7ec;
  while( true ) {
    uVar4 = puVar2[3];
    uVar5 = uVar4 & param_2;
    if (uVar5 != 0) break;
    if (iVar3 == 0) goto LAB_0020c7bc;
    iVar3 = iVar3 + -1;
    thunk_FUN_00214dc4(1);
  }
  if (iVar3 != 0) {
LAB_0020c7e2:
    puVar2[3] = uVar5;
    return uVar4;
  }
LAB_0020c7bc:
  iVar3 = 6;
  *puVar2 = *puVar2 | 4;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = 0x3e9;
    do {
      if (-1 < (int)(*puVar2 << 0x1d)) goto LAB_0020c7e2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
}


// ==== FUN_0020cc04 @ 0020cc04 ====

void FUN_0020cc04(void)

{
  return;
}


// ==== FUN_0020cc06 @ 0020cc06 ====

void FUN_0020cc06(void)

{
  return;
}


// ==== FUN_0020cc08 @ 0020cc08 ====

void FUN_0020cc08(void)

{
  return;
}


// ==== FUN_0020cc0a @ 0020cc0a ====

void FUN_0020cc0a(uint param_1)

{
  FUN_0020cc04(((param_1 & 0x7fff) >> 0xe) << 0x16 | ((param_1 & 0xffff) >> 0xf) << 0x17 |
               param_1 & 0x1fff | ((param_1 & 0x3fff) >> 0xd) << 0x13);
  return;
}


// ==== FUN_0020cc2c @ 0020cc2c ====

void FUN_0020cc2c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = DAT_0020d0f8;
  puVar2 = DAT_0020d0f4;
  puVar6 = DAT_0020ce8c;
  puVar1 = DAT_0020ce88;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    puVar6 = DAT_0020ce88 + 8;
    uVar5 = *DAT_0020ce88;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar1 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar1;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar1 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(8);
    *puVar6 = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x80);
    *puVar6 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x8000);
    *puVar6 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(8);
    puVar1[0xc] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x80);
    puVar1[0xc] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x800);
    puVar1[0xc] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x8000);
    puVar1[0xc] = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    return;
  case 1:
    uVar5 = *DAT_0020ce8c;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_0020f9a8(8);
    puVar6[8] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_0020f9a8(0x80);
    puVar6[8] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_0020f9a8(0x800);
    puVar6[8] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_0020f9a8(0x8000);
    uVar5 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    break;
  case 2:
    uVar5 = *DAT_0020d0f4;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar2 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar2;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar2 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_0020f9a8(8);
    puVar2[8] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x80);
    puVar2[8] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x800);
    puVar2[8] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x8000);
    uVar5 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    puVar6 = puVar2;
    break;
  case 3:
    puVar6 = DAT_0020d0f8 + 8;
    uVar5 = *DAT_0020d0f8;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar3 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar3;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar3 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(8);
    *puVar6 = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x80);
    *puVar6 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_0020f9a8(0x8000);
    *puVar6 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(8);
    puVar3[0xc] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x80);
    puVar3[0xc] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x800);
    puVar3[0xc] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x8000);
    puVar3[0xc] = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0x10];
    iVar4 = FUN_0020f9a8(0x80);
    uVar5 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    break;
  default:
    goto switchD_0020cc3c_default;
  }
  puVar6[8] = uVar5;
switchD_0020cc3c_default:
  return;
}


// ==== FUN_0020d0fc @ 0020d0fc ====

void FUN_0020d0fc(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = DAT_0020d2b4;
  puVar2 = DAT_0020d2b0;
  puVar1 = DAT_0020d2ac;
  puVar6 = DAT_0020d2a8;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    uVar5 = *DAT_0020d2a8;
    iVar4 = FUN_0020f9a8(0xf);
    *puVar6 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6 & 0xfffffc0f;
    FUN_0020f9a8(0x3f0);
    break;
  case 1:
    uVar5 = *DAT_0020d2ac;
    puVar6 = puVar1;
    if (param_2 == 0) {
      iVar4 = FUN_0020f9a8(0xf);
      *puVar1 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar1;
      iVar4 = FUN_0020f9a8(0x3f0);
      uVar5 = uVar5 & 0xfffffc0f | 0xc << (iVar4 - 1U & 0xff);
    }
    else {
      iVar4 = FUN_0020f9a8(0xf);
      *puVar1 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar1 & 0xfffffc0f;
      FUN_0020f9a8(0x3f0);
    }
    break;
  case 2:
    uVar5 = *DAT_0020d2b0;
    puVar6 = puVar2;
    if (param_2 == 0) {
      FUN_0020f9a8(0xf);
      *puVar2 = uVar5 & 0xfffffff0;
      uVar5 = *puVar2;
      iVar4 = FUN_0020f9a8(0x3f0);
      uVar5 = uVar5 & 0xfffffc0f | 0xc << (iVar4 - 1U & 0xff);
    }
    else {
      iVar4 = FUN_0020f9a8(0xf);
      *puVar2 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar2 & 0xfffffc0f;
      FUN_0020f9a8(0x3f0);
    }
    break;
  case 3:
    uVar5 = *DAT_0020d2b4;
    iVar4 = FUN_0020f9a8(0xf);
    *puVar3 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar3 & 0xfffffc0f;
    FUN_0020f9a8(0x3f0);
    puVar6 = puVar3;
    break;
  default:
    goto switchD_0020d10a_default;
  }
  *puVar6 = uVar5;
switchD_0020d10a_default:
  return;
}


// ==== FUN_0020d2b8 @ 0020d2b8 ====

void FUN_0020d2b8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar6 = DAT_0020d4c0;
  puVar5 = DAT_0020d4b4;
  puVar4 = DAT_0020d4a8;
  puVar11 = DAT_0020d49c;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 == 0) {
      bVar1 = *(byte *)(param_2 + 4);
      bVar2 = *(byte *)(param_2 + 5);
      bVar3 = *(byte *)(param_2 + 6);
    }
    else {
      bVar1 = *(byte *)(param_2 + 9);
      bVar2 = *(byte *)(param_2 + 10);
      bVar3 = *(byte *)(param_2 + 0xb);
    }
    uVar12 = (uint)bVar1;
    uVar10 = (uint)bVar2;
    uVar9 = (uint)bVar3;
    switch(*(undefined1 *)(param_1 + 0x5a)) {
    case 0:
      uVar8 = *DAT_0020d49c;
      iVar7 = FUN_0020f9a8(7);
      puVar4 = DAT_0020d4a0;
      *puVar11 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_0020f9a8(7);
      puVar11 = DAT_0020d4a4;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_0020f9a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 1:
      uVar8 = *DAT_0020d4a8;
      iVar7 = FUN_0020f9a8(7);
      puVar5 = DAT_0020d4ac;
      *puVar4 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar5;
      iVar7 = FUN_0020f9a8(7);
      puVar11 = DAT_0020d4b0;
      *puVar5 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_0020f9a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 2:
      uVar8 = *DAT_0020d4b4;
      iVar7 = FUN_0020f9a8(7);
      puVar4 = DAT_0020d4b8;
      *puVar5 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_0020f9a8(7);
      puVar11 = DAT_0020d4bc;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_0020f9a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 3:
      uVar8 = *DAT_0020d4c0;
      iVar7 = FUN_0020f9a8(7);
      puVar4 = DAT_0020d4c4;
      *puVar6 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_0020f9a8(7);
      puVar11 = DAT_0020d4c8;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_0020f9a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    default:
      goto switchD_0020d2e4_default;
    }
    *puVar11 = uVar9;
  }
switchD_0020d2e4_default:
  return;
}


// ==== FUN_0020d4cc @ 0020d4cc ====

void FUN_0020d4cc(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = DAT_0020d5bc;
  puVar1 = DAT_0020d5b8;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    uVar3 = *DAT_0020d5bc;
    iVar4 = FUN_0020f9a8(0x80);
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    uVar3 = uVar3 & 0xffffff7f | iVar2 << (iVar4 - 1U & 0xff);
    break;
  case 2:
    uVar3 = *DAT_0020d5bc;
    iVar4 = FUN_0020f9a8(0x800000);
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    *puVar5 = uVar3 & 0xff7fffff | iVar2 << (iVar4 - 1U & 0xff);
  case 1:
    puVar5 = DAT_0020d5bc;
    uVar3 = *DAT_0020d5bc;
    iVar4 = FUN_0020f9a8(0x8000);
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    uVar3 = uVar3 & 0xffff7fff | iVar2 << (iVar4 - 1U & 0xff);
    break;
  case 3:
    iVar4 = 1 - param_2;
    if (1 < param_2) {
      iVar4 = 0;
    }
    uVar3 = *DAT_0020d5b8;
    iVar2 = FUN_0020f9a8(0x80);
    *puVar1 = uVar3 & 0xffffff7f | iVar4 << (iVar2 - 1U & 0xff);
    uVar3 = *puVar1;
    iVar2 = FUN_0020f9a8(0x8000);
    uVar3 = uVar3 & 0xffff7fff | iVar4 << (iVar2 - 1U & 0xff);
    puVar5 = puVar1;
    break;
  default:
    goto switchD_0020d4da_default;
  }
  *puVar5 = uVar3;
switchD_0020d4da_default:
  return;
}


// ==== FUN_0020d5c0 @ 0020d5c0 ====

void FUN_0020d5c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 6;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x80000000;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = 0x3e9;
    do {
      if (-1 < *(int *)(iVar1 + 0x14)) {
        return;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
}


// ==== FUN_0020d5f0 @ 0020d5f0 ====

void FUN_0020d5f0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 6;
  puVar2 = *(uint **)(param_1 + 0x28);
  *puVar2 = *puVar2 | 4;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = 0x3e9;
    do {
      if (-1 < (int)(*puVar2 << 0x1d)) {
        return;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
}


// ==== FUN_0020d61c @ 0020d61c ====

void FUN_0020d61c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_0020d5f0();
  FUN_0020d5c0(param_1);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  return;
}


// ==== FUN_0020d63c @ 0020d63c ====

void FUN_0020d63c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar3 = DAT_0020cc00;
  puVar2 = DAT_0020cab4;
  puVar7 = DAT_0020cab0;
  puVar1 = DAT_0020caac;
  if ((param_2 == 1) || (param_2 != 2)) {
    iVar5 = 3;
  }
  else {
    iVar5 = 4;
  }
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    puVar7 = DAT_0020caac + 8;
    uVar6 = *DAT_0020caac;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar1 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(7);
    *puVar7 = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x70);
    *puVar7 = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x7000);
    *puVar7 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(7);
    puVar1[0xc] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x70);
    puVar1[0xc] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x700);
    puVar1[0xc] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_0020f9a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    break;
  case 1:
    uVar6 = *DAT_0020cab0;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_0020f9a8(7);
    puVar7[8] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_0020f9a8(0x70);
    puVar7[8] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_0020f9a8(0x700);
    puVar7[8] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_0020f9a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    goto LAB_0020caa8;
  case 2:
    uVar6 = *DAT_0020cab4;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar2 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_0020f9a8(7);
    puVar2[8] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x70);
    puVar2[8] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x700);
    puVar2[8] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_0020f9a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    puVar7 = puVar2;
LAB_0020caa8:
    puVar7[8] = uVar6;
    return;
  case 3:
    puVar7 = DAT_0020cc00 + 8;
    uVar6 = *DAT_0020cc00;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar3 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(7);
    *puVar7 = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x70);
    *puVar7 = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_0020f9a8(0x7000);
    *puVar7 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(7);
    puVar3[0xc] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x70);
    puVar3[0xc] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x700);
    puVar3[0xc] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_0020f9a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    break;
  default:
    goto switchD_0020c7fc_default;
  }
  puVar7[4] = uVar6;
switchD_0020c7fc_default:
  return;
}


// ==== FUN_0020d652 @ 0020d652 ====

void FUN_0020d652(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0x5a) == '\x03') {
    uVar2 = *puVar3;
    iVar1 = FUN_0020f9a8(0x1800000);
    *puVar3 = uVar2 & 0xfe7fffff | param_2 << (iVar1 - 1U & 0xff);
    *(int *)(iVar4 + 0x7c) = param_2;
    FUN_0020f9a8(0x1800000);
  }
  return;
}


// ==== FUN_0020d69a @ 0020d69a ====

void FUN_0020d69a(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  switch(param_4) {
  case 0:
    if (param_2 != 0) {
      uVar2 = *(uint *)(iVar3 + 0x208);
      FUN_0020f9a8(1);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffffe;
      uVar2 = *(uint *)(iVar3 + 0x208);
      FUN_0020f9a8(0x200);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffdff;
    }
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_0020f9a8(2);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffffd | param_3 << (iVar1 - 1U & 0xff);
      *(uint *)(iVar4 + 0x78) = param_3;
    }
    break;
  case 1:
    uVar2 = *(uint *)(iVar3 + 0x208);
    if (param_2 == 0) {
      FUN_0020f9a8(0x10);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xffffffef;
      if (param_3 < 2) {
        uVar2 = *(uint *)(iVar3 + 4);
        FUN_0020f9a8(0x200);
        *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff;
        uVar2 = *(uint *)(iVar3 + 4);
        iVar1 = FUN_0020f9a8(0x100);
        uVar2 = uVar2 & 0xfffffeff | param_3 << (iVar1 - 1U & 0xff);
      }
      else {
        if (param_3 != 2) {
          return;
        }
        uVar2 = *(uint *)(iVar3 + 4) & 0xfffffbff;
        FUN_0020f9a8(0x400);
      }
      goto LAB_0020d7de;
    }
    iVar1 = FUN_0020f9a8(0x10);
    *(uint *)(iVar3 + 0x208) = 1 << (iVar1 - 1U & 0xff) | uVar2 & 0xffffffef;
    if (1 < param_3) {
      return;
    }
    uVar2 = *(uint *)(iVar3 + 0x208);
    iVar1 = FUN_0020f9a8(8);
    *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffff7 | param_3 << (iVar1 - 1U & 0xff);
    goto LAB_0020d7e0;
  case 2:
    if (param_2 == 0) {
      FUN_0020d652(param_1,0);
      *(undefined4 *)(iVar4 + 0x7c) = 0;
    }
    else {
      FUN_0020d652(param_1,2);
      *(undefined4 *)(iVar4 + 0x7c) = 2;
    }
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      FUN_0020f9a8(0x20);
      *(uint *)(iVar3 + 4) = uVar2 & 0xffffffdf;
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_0020f9a8(4);
      uVar2 = uVar2 & 0xfffffffb | param_3 << (iVar1 - 1U & 0xff);
    }
    else {
      if (param_3 != 2) {
        return;
      }
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_0020f9a8(0x20);
      *(uint *)(iVar3 + 4) = uVar2 & 0xffffffdf | 1 << (iVar1 - 1U & 0xff);
      uVar2 = *(uint *)(iVar3 + 4) & 0xfeffffff;
      FUN_0020f9a8(0x1000000);
    }
    *(uint *)(iVar3 + 4) = uVar2;
    *(uint *)(iVar4 + 0x70) = param_3;
    break;
  case 3:
    uVar2 = *(uint *)(iVar3 + 0x208);
    FUN_0020f9a8(0x10);
    *(uint *)(iVar3 + 0x208) = uVar2 & 0xffffffef;
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      FUN_0020f9a8(0x200);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff;
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_0020f9a8(0x100);
      uVar2 = uVar2 & 0xfffffeff | param_3 << (iVar1 - 1U & 0xff);
    }
    else {
      if (param_3 != 2) {
        return;
      }
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_0020f9a8(0x200);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff | 1 << (iVar1 - 1U & 0xff);
      uVar2 = *(uint *)(iVar3 + 4) & 0xffffbfff;
      FUN_0020f9a8(0x4000);
    }
LAB_0020d7de:
    *(uint *)(iVar3 + 4) = uVar2;
LAB_0020d7e0:
    *(uint *)(iVar4 + 0x74) = param_3;
  }
  return;
}


// ==== FUN_0020d950 @ 0020d950 ====

void FUN_0020d950(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_00200a00(DAT_0020d9dc);
    iVar1 = FUN_00200ac8((iVar1 - 1U) + param_3,
                         ((iVar1 != 0) - 1) + param_4 + (uint)CARRY4(iVar1 - 1U,param_3),iVar1,0,
                         param_1,param_2);
    uVar2 = *puVar4;
    uVar3 = (uint)(iVar1 + param_5 + 0xfffff) >> 0x14;
    iVar1 = FUN_0020f9a8(0x300000);
    if (1 < (uVar2 & 0x300000) >> (iVar1 - 1U & 0xff)) {
      uVar3 = uVar3 << 1;
    }
    if (uVar3 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
  }
  uVar2 = puVar4[0xc];
  iVar1 = FUN_0020f9a8(0xff000000);
  puVar4[0xc] = uVar2 & 0xffffff | uVar3 << (iVar1 - 1U & 0xff);
  return;
}


// ==== FUN_0020d9e0 @ 0020d9e0 ====

void FUN_0020d9e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x24) = param_2;
  FUN_0020d5c0();
  return;
}


// ==== FUN_0020d9ea @ 0020d9ea ====

void FUN_0020d9ea(int param_1,uint param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x74) + 8) << 0x1f < 0) {
    param_2 = param_2 & 0xbfffffff | 0x80000000;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0x50) = param_2;
  return;
}


// ==== FUN_0020da00 @ 0020da00 ====

void FUN_0020da00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0020da28;
  *(char *)(*(int *)(param_1 + 0x74) + 0x30) = (char)param_2;
  iVar2 = iVar2 + 0x20da0e;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + DAT_0020da2c);
    iVar1 = DAT_0020da30;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + DAT_0020da34);
    iVar1 = DAT_0020da38;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar2 + iVar1);
  return;
}


// ==== FUN_0020da3c @ 0020da3c ====

void FUN_0020da3c(int param_1,undefined4 param_2)

{
  **(undefined4 **)(param_1 + 0x74) = param_2;
  return;
}


// ==== FUN_0020da42 @ 0020da42 ====

void FUN_0020da42(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x74) + 4);
  if (param_3 == 0) {
    param_2 = uVar1 & ~param_2;
  }
  else {
    param_2 = param_2 | uVar1;
  }
  *(uint *)(*(int *)(param_1 + 0x74) + 4) = param_2;
  return;
}


// ==== FUN_0020da54 @ 0020da54 ====

void FUN_0020da54(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_2;
  iVar4 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x74);
  uVar3 = uVar2 & 0xfffffe7f | *(int *)(param_1 + 0x40) << 0x10 |
          *(int *)(DAT_0020dbc4 + 0x20da78 + param_2[2] * 4) << 7;
  if (uVar2 == 0x19) {
    if (*(int *)(iVar1 + 4) << 0x1f < 0) {
      uVar3 = uVar3 | 0x10000000;
    }
    else if (*(int *)(iVar1 + 4) << 0x1e < 0) {
      uVar3 = uVar3 | 0x20000000;
    }
    uVar3 = uVar3 | 0x3000;
LAB_0020db8a:
    if (*(int *)(iVar4 + 0x3c) << 0x1f < 0) {
      uVar2 = 1000;
      while (*(int *)(iVar4 + 0x3c) << 0x1f < 0) {
        if (uVar2 == 0) goto LAB_0020db78;
        uVar2 = uVar2 - 1;
        thunk_FUN_00214dc4(1);
      }
LAB_0020dbaa:
      if (uVar2 == 0) {
LAB_0020db78:
        uVar2 = 1;
        goto LAB_0020dbb6;
      }
    }
  }
  else {
    if ((uVar2 != 0x18) && (uVar2 != 0x32)) {
      if (uVar2 == 0x12) {
        if (*(int *)(iVar1 + 4) << 0x1f < 0) {
          uVar3 = uVar3 | 0x10001000;
        }
        else {
          if (*(int *)(iVar1 + 4) << 0x1e < 0) {
            uVar3 = uVar3 | 0x20000000;
          }
LAB_0020dbbc:
          uVar3 = uVar3 | 0x1000;
        }
      }
      else {
        if (((((uVar2 & 0xfffffffb) == 0x11) || (uVar2 == 0x133)) || (uVar2 == 0x86)) ||
           ((uVar2 == 8 || (uVar2 - 0x1e < 2)))) {
          uVar3 = uVar3 | 0x800;
          goto LAB_0020db62;
        }
        if (uVar2 == 0xc) {
          uVar3 = uVar3 & 0xf000ffff;
LAB_0020db20:
          uVar3 = uVar3 | 0x4000;
        }
        else if (uVar2 == 0xb5) {
          uVar2 = param_2[1];
          if ((int)uVar2 < 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if (((int)(uVar2 << 4) < 0) && (1 < (uVar2 & 0x1ff))) goto LAB_0020dbbc;
LAB_0020db3e:
          uVar3 = uVar3 | 0x800;
        }
        else if (uVar2 == 0xb4) {
          if (((int)param_2[1] < 0) && ((param_2[1] & 0x3ffffff) >> 9 != 0)) goto LAB_0020db20;
        }
        else if (uVar2 == 0x8b) {
          uVar3 = uVar3 | 0x40000000;
        }
        else {
          if (uVar2 == 0x93) {
            if ((*(uint *)(iVar1 + 4) & 3) != 0) {
              uVar3 = uVar3 | 0x30000000;
            }
            goto LAB_0020db3e;
          }
          if (uVar2 == 0x28) {
            uVar3 = uVar3 | 0x8000;
          }
          else if (uVar2 == 0x14) {
            uVar3 = uVar3 | 0x3800;
          }
          else {
            if (uVar2 != 0xb) goto LAB_0020db62;
            uVar3 = uVar3 | 0x1800;
          }
        }
      }
      goto LAB_0020db8a;
    }
    uVar3 = uVar3 | 0x2800;
LAB_0020db62:
    if (uVar2 != 0xd) goto LAB_0020db8a;
    if (*(int *)(iVar4 + 0x3c) << 0x1e < 0) {
      uVar2 = param_2[7];
      while (*(int *)(iVar4 + 0x3c) << 0x1e < 0) {
        if (uVar2 == 0) goto LAB_0020db78;
        uVar2 = uVar2 - 1;
        thunk_FUN_00214dc4(1);
      }
      goto LAB_0020dbaa;
    }
  }
  uVar2 = 0;
  *(uint *)(iVar4 + 0x38) = param_2[1];
  *(uint *)(iVar4 + 0x34) = uVar3;
LAB_0020dbb6:
  param_2[9] = uVar2;
  return;
}


// ==== FUN_0020dbc8 @ 0020dbc8 ====

void FUN_0020dbc8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2[2];
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = DAT_0020dc94;
  if (*param_2 != 0x28) {
    uVar3 = DAT_0020dc90;
  }
  uVar1 = FUN_0020c798(param_1,uVar3,DAT_0020dc90,*param_2,param_4);
  if (uVar1 == 0) {
    iVar2 = 1;
LAB_0020dc32:
    if (iVar5 == 8) {
      do {
      } while (-1 < *(int *)(iVar4 + 8) << 0xf);
    }
    if (iVar2 != 0) goto LAB_0020dc72;
  }
  else {
    if ((DAT_0020dc98 & uVar1) == 0) {
      if ((uVar1 & 0x420) == 0) {
        if ((uVar1 & 0x210) == 0) {
          iVar2 = 5;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
      goto LAB_0020dc32;
    }
    if (iVar5 != 0) {
      if (iVar5 != 2) {
        if ((DAT_0020dc9c & uVar1) == 0) {
          param_2[3] = *(int *)(iVar4 + 0x40);
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          param_2[3] = *(int *)(iVar4 + 0x80);
        }
        goto LAB_0020dc32;
      }
      param_2[3] = *(int *)(iVar4 + 0x4c);
      param_2[4] = *(int *)(iVar4 + 0x48);
      param_2[5] = *(int *)(iVar4 + 0x44);
      param_2[6] = *(int *)(iVar4 + 0x40);
    }
  }
  switch(param_2[2]) {
  case 1:
  case 8:
    FUN_0020cc04(param_2[3]);
    break;
  case 3:
    FUN_0020cc06(param_2[3]);
    break;
  case 5:
    FUN_0020cc08(param_2[3]);
    break;
  case 6:
    FUN_0020cc0a(param_2[3]);
  }
  iVar2 = 0;
LAB_0020dc72:
  param_2[9] = iVar2;
  if ((*param_2 == 0x37) && (iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(int *)(param_1 + 0x60) = param_2[1];
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}


// ==== FUN_0020dca0 @ 0020dca0 ====

void FUN_0020dca0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 0;
  return;
}


// ==== FUN_0020dcb2 @ 0020dcb2 ====

void FUN_0020dcb2(int param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x5a) == '\x03') {
    param_2 = param_2 | 0x800000;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0x10) = param_2 | *(uint *)(*(int *)(param_1 + 0x28) + 0x10);
  return;
}


// ==== FUN_0020dcc8 @ 0020dcc8 ====

undefined4 FUN_0020dcc8(int param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = false;
  puVar3 = param_2;
  uVar4 = param_3;
LAB_0020dcd0:
  do {
    iVar6 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 0xc) = iVar6;
    if (iVar6 << 0x10 < 0) {
      uVar7 = 2;
      FUN_0020f9a8(0xffff,puVar3,uVar4,*(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 0x60),
                   param_2,param_3);
LAB_0020dd66:
      FUN_0020d61c(param_1);
      return uVar7;
    }
    if (iVar6 << 0x11 < 0) {
      uVar7 = 1;
      goto LAB_0020dd66;
    }
    if (iVar6 << 0x1a < 0) {
      uVar7 = 0xc;
      FUN_0020f9a8(0xffff,puVar3,uVar4,*(undefined4 *)(iVar5 + 0x60),param_1,
                   *(undefined4 *)(iVar5 + 0x60),param_3);
      goto LAB_0020dd66;
    }
    if (iVar6 << 0x13 < 0) {
      if (uVar4 == 0) {
        return 0;
      }
      bVar1 = true;
LAB_0020dd14:
      uVar8 = *(uint *)(iVar5 + 0x14) & 0xff;
      puVar2 = puVar3;
      if (uVar4 < 0x40) {
        uVar10 = uVar4;
        uVar9 = uVar4;
        if (uVar8 < uVar4) goto LAB_0020dcd0;
      }
      else {
        if (uVar8 < 0x40) goto LAB_0020dcd0;
        uVar10 = 0x40;
        uVar9 = 0x40;
      }
      do {
        if ((int)uVar10 < 4) {
          do {
            for (puVar3 = puVar2; puVar3 != (undefined4 *)(uVar10 + (int)puVar2);
                puVar3 = (undefined4 *)((int)puVar3 + 1)) {
              *(undefined1 *)puVar3 = *(undefined1 *)(iVar5 + 0x1c);
            }
            uVar10 = 0xffffffff;
          } while( true );
        }
        uVar10 = uVar10 - 4;
        puVar3 = puVar2 + 1;
        *puVar2 = *(undefined4 *)(iVar5 + 0x1c);
        puVar2 = puVar3;
      } while (uVar10 != 0);
      uVar4 = uVar4 - uVar9;
      goto LAB_0020dcd0;
    }
    if (uVar4 != 0) goto LAB_0020dd14;
    if (bVar1) {
      return 0;
    }
  } while( true );
}


// ==== FUN_0020ddec @ 0020ddec ====

void FUN_0020ddec(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = DAT_0020dfcc;
  puVar4 = DAT_0020dfc4;
  iVar6 = DAT_0020dfc0;
  puVar3 = DAT_0020dfbc;
  cVar1 = *(char *)((int)param_1 + 0x5a);
  uVar2 = (undefined1)param_3;
  if (cVar1 == '\x03') {
    if ((*param_1 == 0) || (-1 < (int)((uint)*(ushort *)(*param_1 + 0x20) << 0x17))) {
      *(char *)(param_1 + 0x16) = (char)param_2;
      *(undefined1 *)((int)param_1 + 0x59) = uVar2;
      param_1[0xe] = *(int *)(iVar5 + 0x20de22 + param_2 * 4);
    }
    else {
      param_2 = 1;
      *(undefined1 *)((int)param_1 + 0x59) = uVar2;
      param_1[0xe] = iVar6;
    }
    puVar4 = DAT_0020dfc8;
    uVar7 = *DAT_0020dfc8;
    iVar6 = FUN_0020f9a8(3);
    *puVar4 = param_3 << (iVar6 - 1U & 0xff) | uVar7 & 0xfffffffc;
    uVar7 = *puVar3;
    iVar6 = FUN_0020f9a8(0x8000);
    *puVar3 = 1 << (iVar6 - 1U & 0xff) | uVar7 & 0xffff7fff;
    uVar7 = *puVar4;
    iVar6 = FUN_0020f9a8(0xf00);
    *puVar4 = param_2 << (iVar6 - 1U & 0xff) | uVar7 & 0xfffff0ff;
    uVar7 = *puVar3;
    iVar6 = FUN_0020f9a8(0x10000);
    uVar7 = uVar7 & 0xfffeffff | 1 << (iVar6 - 1U & 0xff);
  }
  else {
    iVar6 = DAT_0020dfd0 + 0x20de38;
    *(char *)(param_1 + 0x16) = (char)param_2;
    *(undefined1 *)((int)param_1 + 0x59) = uVar2;
    param_1[0xe] = *(int *)(iVar6 + param_2 * 4);
    uVar7 = *puVar4;
    if (cVar1 == '\x02') {
      iVar6 = FUN_0020f9a8(0x70000);
      *puVar4 = uVar7 & 0xfff8ffff | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_0020f9a8(0x4000);
      uVar7 = uVar7 & 0xffffbfff | 1 << (iVar6 - 1U & 0xff);
    }
    else if (cVar1 == '\x01') {
      iVar6 = FUN_0020f9a8(0x700);
      *puVar4 = uVar7 & 0xfffff8ff | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_0020f9a8(0x2000);
      uVar7 = 1 << (iVar6 - 1U & 0xff) | uVar7 & 0xffffdfff;
    }
    else {
      iVar6 = FUN_0020f9a8(7);
      *puVar4 = uVar7 & 0xfffffff8 | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_0020f9a8(0x1000);
      uVar7 = uVar7 & 0xffffefff | 1 << (iVar6 - 1U & 0xff);
    }
  }
  *puVar3 = uVar7;
  return;
}


// ==== FUN_0020dfd4 @ 0020dfd4 ====

void FUN_0020dfd4(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x74);
  puVar5 = *(uint **)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x34);
  if ((param_3 < *(uint *)(param_1 + 0x34)) &&
     (uVar3 = param_3, param_3 < *(uint *)(param_1 + 0x30))) {
    uVar3 = *(uint *)(param_1 + 0x30);
  }
  FUN_0020ddec(param_1,*(undefined1 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x59));
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((param_4 & 3) == 0) {
    uVar7 = 0;
    if (param_2 == 0) {
      if (uVar3 < uVar1) {
        uVar6 = uVar1 >> 1;
        if (uVar3 < uVar6) {
          uVar7 = FUN_00200a00((uVar1 - 1) + uVar3 * 4);
          uVar6 = FUN_00200a00(uVar1 >> 2,uVar7);
        }
        iVar4 = 0;
        uVar1 = uVar6;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
      uVar6 = uVar1 >> 2;
      if (uVar3 < uVar6) {
        uVar7 = FUN_00200a00((uVar1 - 1) + uVar3 * 4);
        uVar6 = FUN_00200a00(uVar6,uVar7);
        uVar7 = uVar7 >> 1;
      }
      iVar4 = 2;
      uVar1 = uVar6;
    }
  }
  else {
    uVar7 = 0;
    iVar4 = 3;
    uVar1 = uVar1 >> 1;
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
  uVar3 = *puVar5;
  iVar2 = FUN_0020f9a8(DAT_0020e19c);
  *puVar5 = (uVar7 | iVar4 << 0xc) << (iVar2 - 1U & 0xff) | uVar3 & 0xff8000ff;
  do {
  } while (-1 < (int)(*puVar5 << 0x18));
  if ((param_4 & 3) == 0) {
    FUN_0020d69a(param_1,0,*(uint *)(iVar8 + 0x78) & 0xff,0);
    FUN_0020d69a(param_1,0,*(undefined1 *)(iVar8 + 0x70),2);
    FUN_0020d69a(param_1,0,*(undefined1 *)(iVar8 + 0x74),1);
    uVar3 = puVar5[0x2e];
    FUN_0020f9a8(0x10000000);
    puVar5[0x2e] = uVar3 & 0xefffffff;
    uVar3 = puVar5[0x2e] & 0x1fffffff;
    FUN_0020f9a8(0xe0000000);
  }
  else {
    FUN_0020d69a(param_1,1,*(uint *)(iVar8 + 0x78) & 0xff,0);
    FUN_0020d69a(param_1,1,*(undefined1 *)(iVar8 + 0x70),2);
    FUN_0020d69a(param_1,1,*(undefined1 *)(iVar8 + 0x74),1);
    uVar3 = puVar5[0x2e];
    FUN_0020f9a8(0x10000000);
    puVar5[0x2e] = uVar3 & 0xefffffff;
    uVar3 = puVar5[0x2e];
    iVar8 = FUN_0020f9a8(0xe0000000);
    uVar3 = uVar3 & 0x1fffffff | 1 << (iVar8 - 1U & 0xff);
  }
  puVar5[0x2e] = uVar3;
  FUN_0020f9a8(0x30000);
  return;
}


// ==== FUN_0020e1a0 @ 0020e1a0 ====

void FUN_0020e1a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (param_2 == 8) {
    uVar4 = 2;
  }
  else {
    uVar4 = (uint)(param_2 == 4);
  }
  uVar2 = *(uint *)(iVar3 + 0x30);
  iVar1 = FUN_0020f9a8(0x30000);
  *(uint *)(iVar3 + 0x30) = uVar2 & 0xfffcffff | uVar4 << (iVar1 - 1U & 0xff);
  FUN_0020f9a8(0x300000);
  FUN_0020f9a8(DAT_0020e1f4);
  return;
}


// ==== FUN_0020e1f8 @ 0020e1f8 ====

void FUN_0020e1f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0020e238 + 0x20e20c;
  FUN_0020d0fc(param_1,*(int *)(param_1 + 0x6c) == 0x708);
  FUN_0020d2b8(param_1,(uint)*(byte *)(param_1 + 0x5a) * 0x18 + *(int *)(iVar1 + DAT_0020e23c),
               *(int *)(param_1 + 0x6c) == 0x708,param_4);
  return;
}


// ==== FUN_0020e240 @ 0020e240 ====

void FUN_0020e240(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  
  if (param_2 != 0) {
    FUN_0020d63c(param_1,2);
    FUN_0020e1f8(param_1,1);
    FUN_0020d4cc(param_1,1,extraout_r2,param_4);
    return;
  }
  FUN_0020d4cc();
  FUN_0020e1f8(param_1,0);
  FUN_0020d63c(param_1,1,extraout_r2_00,param_4);
  return;
}


// ==== FUN_0020e27a @ 0020e27a ====

void FUN_0020e27a(void)

{
  return;
}


// ==== FUN_0020e27c @ 0020e27c ====

void FUN_0020e27c(undefined4 param_1,char param_2)

{
  if ((byte)(param_2 - 1U) < 2) {
    FUN_0020e240(param_1,1);
    FUN_0020e27a(param_1,1);
    return;
  }
  FUN_0020e27a(param_1,0);
  FUN_0020e240(param_1,0);
  return;
}


// ==== FUN_0020e2ac @ 0020e2ac ====

void FUN_0020e2ac(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}


// ==== FUN_0020e2b4 @ 0020e2b4 ====

undefined4 FUN_0020e2b4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 extraout_r1;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar15 = *(uint **)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x3c);
  puVar7 = puVar15 + 1;
  uVar8 = puVar15[1];
  puVar20 = puVar15 + 0x2d;
  iVar1 = FUN_0020f9a8(2);
  puVar9 = puVar15 + 0x3c;
  uVar10 = puVar15[0x3c];
  iVar2 = FUN_0020f9a8(0x7c00000);
  uVar11 = puVar15[0x2d];
  uVar10 = (uVar10 & 0x7c00000) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_0020f9a8(0x38);
  uVar12 = puVar15[0x2c];
  puVar6 = puVar15 + 0x2c;
  uVar11 = (uVar11 & 0x38) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_0020f9a8(0x380);
  uVar13 = *puVar15;
  uVar17 = (uVar12 & 0x380) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_0020f9a8(0x300000);
  uVar12 = uVar17 + 1;
  do {
    uVar18 = uVar11 + 1;
    do {
      uVar19 = uVar10 + 1;
      do {
        uVar16 = 0;
        do {
          FUN_0020d69a(param_1,((uVar13 & 0x300000) >> (iVar2 - 1U & 0xff) & 0xff) == 3,
                       ((uVar8 & 2) >> (iVar1 - 1U & 0xff)) + uVar16 & 1,0);
          if (*(uint *)(param_1 + 0x3c) <= DAT_0020e55c) {
            uVar14 = *puVar7;
            FUN_0020f9a8(2);
            *puVar7 = uVar14 & 0xfffffffd;
          }
          if (*param_2 == 0xc) {
            return 0;
          }
          if (*(char *)(param_1 + 0x5c) != '\0') {
            *(undefined1 *)(param_1 + 0x5c) = 0;
            local_48 = 0x37;
            local_44 = *(undefined4 *)(param_1 + 0x60);
            local_40 = 1;
            local_28 = 5;
            local_2c = 100;
            iVar3 = 0xb;
            do {
              iVar4 = FUN_0020e564(param_1,&local_48);
              if (iVar4 == 0) break;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            *(undefined1 *)(param_1 + 0x5c) = 1;
            if (iVar4 != 0) {
              return 6;
            }
          }
          iVar3 = FUN_0020da54(param_1,param_2);
          if (iVar3 == 1) {
            uVar16 = uVar16 - 1;
LAB_0020e422:
            iVar3 = *param_2;
            if (iVar3 == 0xc) goto LAB_0020e428;
          }
          else {
            if (iVar3 != 0) goto LAB_0020e422;
LAB_0020e428:
            iVar3 = FUN_0020dbc8(param_1,param_2);
            FUN_0020f9a8(2,puVar7,*puVar7);
            FUN_0020f9a8(0x7c00000,puVar9,*puVar9);
            FUN_0020f9a8(0x38,extraout_r1,*puVar20);
            FUN_0020f9a8(0x380,puVar6,*puVar6);
            if (iVar3 == 0) {
              *(undefined1 *)(param_1 + 0x5c) = 0;
              return 0;
            }
            iVar3 = *param_2;
          }
          if ((iVar3 - 0x11U < 2) || (iVar3 - 0x18U < 2)) {
            FUN_0020e5e0(param_1,1);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 2);
        uVar16 = *puVar9;
        iVar3 = FUN_0020f9a8(0x7c00000);
        uVar14 = uVar19 & 0x1f;
        uVar19 = uVar19 + 1;
        *puVar9 = uVar14 << (iVar3 - 1U & 0xff) | uVar16 & 0xf83fffff;
      } while (uVar19 != uVar10 + 0x21);
      if (uVar5 <= DAT_0020e560) {
        return 6;
      }
      uVar19 = *puVar20;
      iVar3 = FUN_0020f9a8(0x38);
      uVar16 = uVar18 & 7;
      uVar18 = uVar18 + 1;
      *puVar20 = uVar16 << (iVar3 - 1U & 0xff) | uVar19 & 0xffffffc7;
    } while (uVar18 != uVar11 + 9);
    uVar18 = *puVar6;
    iVar3 = FUN_0020f9a8(0x380);
    uVar19 = uVar12 & 7;
    uVar12 = uVar12 + 1;
    *puVar6 = uVar18 & 0xfffffc7f | uVar19 << (iVar3 - 1U & 0xff);
    if (uVar12 == uVar17 + 9) {
      return 6;
    }
  } while( true );
}


// ==== FUN_0020e564 @ 0020e564 ====

int FUN_0020e564(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0020da54();
  if ((iVar1 == 0) && (iVar1 = FUN_0020dbc8(param_1,param_2), iVar1 == 2)) {
    if ((*(uint *)(*(int *)(param_1 + 0x28) + 0x34) & 0x1800) != 0) {
      FUN_0020e5e0(param_1,1);
    }
    if (*(char *)(param_1 + 0x5c) != '\x02') {
      iVar1 = FUN_0020e2b4(param_1,param_2);
      return iVar1;
    }
  }
  return iVar1;
}


// ==== FUN_0020e5a8 @ 0020e5a8 ====

void FUN_0020e5a8(int *param_1,int *param_2)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((*(int *)(*param_1 + 0x1c) << 0x1f < 0) && (param_2 != (int *)0x0)) && (*param_2 == 0x12)) {
    local_28 = 1;
  }
  else {
    local_28 = 8;
  }
  local_30 = 0xc;
  uStack_2c = 0;
  local_10 = 5;
  local_14 = 100;
  FUN_0020e564(param_1,&local_30);
  return;
}


// ==== FUN_0020e5e0 @ 0020e5e0 ====

void FUN_0020e5e0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  
  do {
    while( true ) {
      FUN_0020d61c(param_1);
      local_48 = 0xd;
      local_2c = 100;
      local_44 = *(int *)(*param_1 + 0x18) << 0x10;
      local_40 = 1;
      local_28 = 5;
      iVar1 = FUN_0020e564(param_1,&local_48);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = (local_3c & 0x1fff) >> 9;
      thunk_FUN_0020cc04();
      if (uVar2 - 5 < 2) break;
      if (uVar2 != 7) {
        if (uVar2 != 4) {
          return;
        }
        FUN_0020d61c(param_1);
        return;
      }
      thunk_FUN_00214dc4(100);
    }
  } while ((param_2 == 0) || (iVar1 = FUN_0020e5a8(param_1,0), iVar1 == 0));
  return;
}


// ==== FUN_0020e658 @ 0020e658 ====

void FUN_0020e658(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_14;
  
  local_30 = 0x17;
  if (param_3 != 0) {
    param_2 = param_2 | 0x80000000;
  }
  local_28 = 1;
  local_14 = 100;
  local_2c = param_2;
  FUN_0020e564(param_1,&local_30);
  return;
}


// ==== FUN_0020e834 @ 0020e834 ====

undefined4 FUN_0020e834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_88;
  uint local_84;
  int local_7c;
  
  puVar14 = *(uint **)(param_1 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x3c);
  puVar15 = puVar14 + 0x2c;
  uVar9 = *puVar14;
  iVar1 = FUN_0020f9a8(0x300000);
  uVar9 = (uVar9 & 0x300000) >> (iVar1 - 1U & 0xff);
  uVar10 = puVar14[0x2c];
  iVar1 = FUN_0020f9a8(0x7c00);
  uVar11 = puVar14[0x2c];
  uVar10 = (uVar10 & 0x7c00) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_0020f9a8(0x380);
  uVar12 = puVar14[1];
  uVar16 = (uVar11 & 0x380) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_0020f9a8(4);
  uVar11 = puVar14[1];
  iVar2 = FUN_0020f9a8(8);
  puVar14[1] = 1 << (iVar2 - 1U & 0xff) | uVar11 & 0xfffffff7;
  local_84 = uVar16 + 1;
  do {
    local_88 = uVar10 + 1;
    do {
      local_7c = 0x20;
      do {
        iVar2 = 0;
        do {
          FUN_0020d69a(param_1,uVar9 == 3,((uVar12 & 4) >> (iVar1 - 1U & 0xff)) + iVar2 & 1,2);
          iVar3 = (**(code **)(param_1 + 0x78))(param_1,param_2,param_3,param_4);
          if (iVar3 == 6) {
            return 6;
          }
          if (iVar3 == 10) {
            return 10;
          }
          if (iVar3 == 0xc) {
            return 0xc;
          }
          uVar11 = puVar14[0x18];
          uVar20 = FUN_0020f9a8(0xffff);
          uVar11 = (uVar11 & 0xffff) >> ((int)uVar20 - 1U & 0xff);
          if (uVar9 != 2) {
            uVar11 = uVar11 & 0xffff00ff;
          }
          FUN_0020f9a8(4,(int)((ulonglong)uVar20 >> 0x20),puVar14 + 1,puVar14[1]);
          FUN_0020f9a8(0x7c00);
          FUN_0020f9a8(0x380);
          if ((iVar3 == 0) && (uVar11 == 0)) {
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 2);
        uVar7 = puVar14[0x3e];
        uVar13 = puVar14[0x3f];
        uVar18 = (uVar7 & 0x1fffffff) >> 0x18;
        uVar17 = (uVar7 & 0x1fffff) >> 0x10;
        uVar19 = (uVar7 & 0x1fff) >> 8;
        uVar7 = uVar7 & 0x1f;
        uVar4 = (uVar13 & 0x1fffffff) >> 0x18;
        uVar5 = (uVar13 & 0x1fffff) >> 0x10;
        uVar8 = (uVar13 & 0x1fff) >> 8;
        uVar13 = uVar13 & 0x1f;
        if ((int)(uVar11 << 0x1f) < 0) {
          uVar18 = uVar18 + 1;
          uVar17 = uVar17 + 1;
          uVar19 = uVar19 + 1;
          uVar7 = uVar7 + 1;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 + 1;
          uVar8 = uVar8 + 1;
          uVar13 = uVar13 + 1;
        }
        local_7c = local_7c + -1;
        puVar14[0x3e] =
             (uVar17 & 0x1f) << 0x10 | (uVar18 & 0x1f) << 0x18 | uVar7 & 0x1f | (uVar19 & 0x1f) << 8
        ;
        puVar14[0x3f] =
             uVar13 & 0x1f | (uVar5 & 0x1f) << 0x10 | (uVar4 & 0x1f) << 0x18 | (uVar8 & 0x1f) << 8;
      } while (local_7c != 0);
      if (uVar6 <= DAT_0020eab4) break;
      uVar11 = *puVar15;
      iVar2 = FUN_0020f9a8(0x7c00);
      uVar4 = local_88 & 0x1f;
      local_88 = local_88 + 1;
      *puVar15 = uVar11 & 0xffff83ff | uVar4 << (iVar2 - 1U & 0xff);
    } while (local_88 != uVar10 + 0x21);
    if (uVar9 != 1) {
      return 2;
    }
    uVar11 = *puVar15;
    iVar2 = FUN_0020f9a8(0x380);
    uVar4 = local_84 & 7;
    local_84 = local_84 + 1;
    *puVar15 = uVar11 & 0xfffffc7f | uVar4 << (iVar2 - 1U & 0xff);
    if (local_84 == uVar16 + 9) {
      return 2;
    }
  } while( true );
}


// ==== FUN_0020eab8 @ 0020eab8 ====

undefined4 FUN_0020eab8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_5c;
  uint local_58;
  
  puVar11 = (uint *)param_1[10];
  bVar17 = DAT_0020ed24 < (uint)param_1[0xf];
  uVar13 = 0;
  if (*param_1 != 0) {
    uVar13 = *(ushort *)(*param_1 + 0x20) & 0x40;
  }
  uVar6 = *puVar11;
  iVar1 = FUN_0020f9a8(0x300000);
  uVar7 = puVar11[0x2c];
  uVar12 = (uVar6 & 0x300000) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_0020f9a8(0x7c00);
  uVar6 = puVar11[0x2c];
  iVar2 = FUN_0020f9a8(0x380);
  uVar8 = puVar11[1];
  iVar3 = FUN_0020f9a8(4);
  uVar9 = puVar11[1];
  iVar4 = FUN_0020f9a8(8);
  uVar8 = ((uVar8 & 4) >> (iVar3 - 1U & 0xff)) + 1;
  puVar11[1] = 1 << (iVar4 - 1U & 0xff) | uVar9 & 0xfffffff7;
  FUN_0020d69a(param_1,uVar12 == 3,uVar8 & 1,2);
  if (1 < uVar8) {
    uVar8 = puVar11[0x18];
    iVar3 = FUN_0020f9a8(0xffff);
    uVar8 = (uVar8 & 0xffff) >> (iVar3 - 1U & 0xff);
    if (uVar13 == 0) {
      uVar8 = uVar8 & 0xffff00ff;
    }
    local_58 = puVar11[0x3e];
    uVar10 = puVar11[0x3f];
    local_5c = (local_58 & 0x1fff) >> 8;
    uVar15 = (local_58 & 0x1fffffff) >> 0x18;
    uVar16 = (local_58 & 0x1fffff) >> 0x10;
    uVar14 = (uVar10 & 0x1fffffff) >> 0x18;
    local_58 = local_58 & 0x1f;
    uVar9 = (uVar10 & 0x1fffff) >> 0x10;
    uVar5 = (uVar10 & 0x1fff) >> 8;
    uVar10 = uVar10 & 0x1f;
    if ((int)(uVar8 << 0x1f) < 0) {
      uVar15 = uVar15 + 1;
      uVar16 = uVar16 + 1;
      uVar14 = uVar14 + 1;
      uVar9 = uVar9 + 1;
      uVar5 = uVar5 + 1;
      uVar10 = uVar10 + 1;
      local_5c = local_5c + 1;
      local_58 = local_58 + 1;
    }
    puVar11[0x3e] =
         (uVar16 & 0x1f) << 0x10 | (uVar15 & 0x1f) << 0x18 | local_58 & 0x1f |
         (local_5c & 0x1f) << 8;
    puVar11[0x3f] =
         (uVar9 & 0x1f) << 0x10 | (uVar14 & 0x1f) << 0x18 | uVar10 & 0x1f | (uVar5 & 0x1f) << 8;
    if ((((((uVar15 == 0x20) || (uVar16 == 0x20)) || (local_5c == 0x20)) ||
         ((local_58 == 0x20 || (uVar14 == 0x20)))) ||
        ((uVar9 == 0x20 || ((uVar5 == 0x20 || (uVar10 == 0x20)))))) && (bVar17)) {
      uVar8 = puVar11[0x2c];
      uVar7 = ((uVar7 & 0x7c00) >> (iVar1 - 1U & 0xff)) + 1;
      iVar1 = FUN_0020f9a8(0x7c00);
      puVar11[0x2c] = (uVar7 & 0x1f) << (iVar1 - 1U & 0xff) | uVar8 & 0xffff83ff;
      if ((0x1f < uVar7) && (uVar12 == 1)) {
        uVar7 = puVar11[0x2c];
        iVar1 = FUN_0020f9a8(0x380);
        puVar11[0x2c] =
             uVar7 & 0xfffffc7f |
             (((uVar6 & 0x380) >> (iVar2 - 1U & 0xff)) + 1 & 7) << (iVar1 - 1U & 0xff);
      }
    }
  }
  iVar1 = param_1[0x19] + 1;
  param_1[0x19] = iVar1;
  if (bVar17) {
    if (uVar12 == 1) {
      bVar17 = iVar1 == 0x4000;
    }
    else {
      bVar17 = iVar1 == 0x800;
    }
  }
  else {
    if (uVar12 == 1) {
      return 0;
    }
    bVar17 = iVar1 == 0x40;
  }
  if (!bVar17) {
    return 0;
  }
  return 7;
}


// ==== FUN_0020ed28 @ 0020ed28 ====

int FUN_0020ed28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint *puVar8;
  int local_3c;
  int local_38;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5a) == '\x03') {
    uVar2 = *(uint *)(iVar5 + 0x188);
    puVar8 = (uint *)(iVar5 + 0x188);
    iVar6 = 7;
    iVar1 = FUN_0020f9a8(0x7c);
    uVar3 = *(uint *)(iVar5 + 0x188);
    uVar2 = (uVar2 & 0x7c) >> (iVar1 - 1U & 0xff);
    iVar5 = FUN_0020f9a8(0x1f000);
    local_38 = 0x20;
    uVar3 = (uVar3 & 0x1f000) >> (iVar5 - 1U & 0xff);
    do {
      uVar4 = *puVar8;
      if (uVar3 < 0x1f) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = 0;
      }
      iVar5 = FUN_0020f9a8(0x1f000);
      *puVar8 = uVar4 & 0xfffe0fff | uVar3 << (iVar5 - 1U & 0xff);
      local_3c = 0x20;
      do {
        if (uVar2 == 0) {
          uVar2 = 0x1f;
        }
        else {
          uVar2 = uVar2 - 1;
        }
        uVar4 = *puVar8;
        iVar5 = FUN_0020f9a8(0x7c);
        *puVar8 = uVar4 & 0xffffff83 | uVar2 << (iVar5 - 1U & 0xff);
        if (param_5 == 0) {
          pcVar7 = *(code **)(param_1 + 0x78);
LAB_0020edf6:
          iVar6 = (*pcVar7)(param_1,param_2,param_3,param_4);
        }
        else if (param_5 == 1) {
          pcVar7 = *(code **)(param_1 + 0x7c);
          goto LAB_0020edf6;
        }
        if (iVar6 == 6) {
          return 6;
        }
        if (iVar6 == 10) {
          return 10;
        }
        if (iVar6 == 0) {
          return 0;
        }
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  else {
    iVar6 = 7;
  }
  return iVar6;
}


// ==== FUN_0020ee24 @ 0020ee24 ====

int FUN_0020ee24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  
  puVar15 = *(uint **)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x3c);
  uVar8 = *puVar15;
  iVar1 = FUN_0020f9a8(0x300000);
  uVar9 = puVar15[0x3c];
  iVar2 = FUN_0020f9a8(0x1f);
  uVar10 = puVar15[1];
  uVar14 = (uVar9 & 0x1f) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_0020f9a8(0x100);
  uVar9 = puVar15[0x2d];
  puVar6 = puVar15 + 0x2d;
  iVar3 = FUN_0020f9a8(7);
  uVar11 = puVar15[1];
  uVar16 = (uVar9 & 7) >> (iVar3 - 1U & 0xff);
  iVar3 = FUN_0020f9a8(8);
  uVar17 = uVar16 + 1;
  puVar15[1] = 1 << (iVar3 - 1U & 0xff) | uVar11 & 0xfffffff7;
  uVar9 = puVar15[0x3e];
  uVar11 = (uVar9 & 0x1fffffff) >> 0x18;
  do {
    uVar7 = uVar11 + 0x20;
    do {
      uVar12 = uVar14 + 0x20;
      do {
        iVar3 = 0;
        do {
          FUN_0020d69a(param_1,(uVar8 & 0x300000) >> (iVar1 - 1U & 0xff) == 2,
                       ((uVar10 & 0x100) >> (iVar2 - 1U & 0xff)) + iVar3 & 1,1);
          iVar4 = (**(code **)(param_1 + 0x7c))(param_1,param_2,param_3,param_4);
          if (iVar4 == 6) {
            return 6;
          }
          if (iVar4 == 10) {
            return 10;
          }
          if (iVar4 == 0xc) {
            return 0xc;
          }
          FUN_0020f9a8(0x1f);
          FUN_0020f9a8(0x100,extraout_r1,puVar15 + 1,puVar15[1]);
          FUN_0020f9a8(7,extraout_r1_00,puVar6,*puVar6);
          if (iVar4 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 2);
        uVar13 = puVar15[0x3c];
        uVar14 = uVar14 + 1;
        iVar3 = FUN_0020f9a8(0x1f);
        puVar15[0x3c] = uVar13 & 0xffffffe0 | (uVar14 & 0x1f) << (iVar3 - 1U & 0xff);
      } while (uVar14 != uVar12);
      uVar11 = uVar11 + 1;
      puVar15[0x3e] = uVar9 & 0x1f1f1f | (uVar11 & 0x1f) << 0x18;
    } while (uVar11 != uVar7);
    if (uVar5 <= DAT_0020effc) {
      return iVar4;
    }
    uVar12 = *puVar6;
    iVar3 = FUN_0020f9a8(7);
    uVar7 = uVar17 & 7;
    uVar17 = uVar17 + 1;
    *puVar6 = uVar12 & 0xfffffff8 | uVar7 << (iVar3 - 1U & 0xff);
    if (uVar17 == uVar16 + 9) {
      return iVar4;
    }
  } while( true );
}


// ==== FUN_0020f000 @ 0020f000 ====

void FUN_0020f000(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(iVar3 + 8);
  if ((*(uint *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 +
                 *(int *)(DAT_0020f07c + 0x20f008 + DAT_0020f080) + 0x14) & 1) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  else if (param_2 == 0) {
    *(uint *)(iVar3 + 8) = uVar2 & 0xfffffffe;
    uVar2 = *(uint *)(iVar3 + 8) & 0xffff0fff;
    FUN_0020f9a8(0xf000);
  }
  else {
    iVar1 = FUN_0020f9a8(0xf000);
    *(uint *)(iVar3 + 8) = uVar2 & 0xffff0fff | 8 << (iVar1 - 1U & 0xff);
    uVar2 = *(uint *)(iVar3 + 8) | 1;
  }
  *(uint *)(iVar3 + 8) = uVar2;
  return;
}


// ==== FUN_0020f084 @ 0020f084 ====

bool FUN_0020f084(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 +
                    *(int *)(DAT_0020f0cc + 0x20f08c + DAT_0020f0d0) + 0x14);
  if ((int)(uVar1 << 0x1a) < 0) {
    bVar3 = false;
    if ((uVar1 & 1) != 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 8);
      iVar2 = FUN_0020f9a8(2);
      bVar3 = (uVar1 & 2) >> (iVar2 - 1U & 0xff) == 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


// ==== FUN_0020f500 @ 0020f500 ====

undefined4 FUN_0020f500(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 auStack_30 [4];
  
  auStack_30[3] = *(undefined4 *)(DAT_0020f710 + 0x20f516);
  auStack_30[2] = *(undefined4 *)(DAT_0020f710 + 0x20f512);
  auStack_30[1] = *(undefined4 *)(DAT_0020f710 + 0x20f50e);
  auStack_30[0] = *(undefined4 *)(DAT_0020f710 + 0x20f50a);
  puVar9 = (uint *)auStack_30[param_1];
  iVar6 = *(int *)(DAT_0020f714 + 0x20f51c + DAT_0020f718);
  iVar7 = iVar6 + param_1 * 0x18;
  uVar2 = *(undefined1 *)(iVar7 + 1);
  uVar3 = *(undefined1 *)(iVar6 + param_1 * 0x18);
  iVar10 = param_1 * 0x98 + DAT_0020f71c + 0x20f536;
  FUN_00214b20(iVar10,0);
  uVar5 = DAT_0020f704;
  *(char *)(param_2 + 0x5a) = (char)param_1;
  *(uint **)(param_2 + 0x28) = puVar9;
  *(undefined4 *)(param_2 + 0x34) = uVar5;
  uVar5 = DAT_0020f708;
  *(undefined4 *)(param_2 + 0x44) = 9;
  *(undefined1 *)(param_2 + 0x58) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar5;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined1 *)(param_2 + 0x59) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = 2;
  *(int *)(param_2 + 0x74) = iVar10;
  if ((*(uint *)(iVar7 + 0x14) & 0x80) != 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0x1a;
  }
  if (*(int *)(param_1 * 0x18 + iVar6 + 0x14) << 0x17 < 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x40;
  }
  if (*(int *)(param_1 * 0x18 + iVar6 + 0x14) << 0x16 < 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x80;
  }
  if (*(char *)(param_1 * 0x18 + iVar6 + 0xc) == '\x04') {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 1;
  }
  if (*(char *)(param_1 * 0x18 + iVar6 + 0xc) == '\b') {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x21;
  }
  if (*(int *)(param_1 * 0x18 + iVar6 + 0x14) << 0x15 < 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x100;
  }
  if (*(int *)(param_1 * 0x18 + iVar6 + 0x14) << 0x14 < 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x200;
  }
  *(undefined1 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  uVar5 = DAT_0020f70c;
  if (-1 < *(int *)(param_2 + 0x2c) << 0x17) {
    uVar5 = 0x240000;
  }
  *(undefined4 *)(param_2 + 0x4c) = uVar5;
  *(undefined4 *)(param_2 + 8) = 0x10000;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x10000;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0x2000000;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x800;
  *(undefined4 *)(param_2 + 0x24) = 0xffff;
  *(undefined4 *)(iVar10 + 0x6c) = 0;
  *(undefined4 *)(iVar10 + 0x68) = 0;
  iVar6 = param_1 * 0x18 + iVar6;
  *(undefined4 *)(iVar10 + 0x8c) = 0;
  *(undefined4 *)(iVar10 + 0x88) = 0;
  *(undefined4 *)(iVar10 + 0x80) = 0;
  *(undefined4 *)(iVar10 + 0x84) = 0;
  *(undefined4 *)(iVar10 + 0x10) = 0;
  uVar8 = (uint)*(byte *)(iVar6 + 3);
  *(undefined1 *)(iVar10 + 0x44) = 0;
  *(undefined1 *)(iVar10 + 0x31) = 6;
  *(uint *)(iVar10 + 0x70) = uVar8;
  *(uint *)(iVar10 + 0x74) = uVar8;
  bVar1 = *(byte *)(iVar6 + 2);
  *(undefined1 *)(iVar10 + 0x30) = 1;
  *(uint *)(iVar10 + 0x78) = (uint)bVar1;
  *(int *)(iVar10 + 0x28) = iVar10 + 0x48;
  FUN_0020e27c(param_2);
  FUN_0020e27c(param_2,2);
  uVar8 = *puVar9;
  iVar6 = FUN_0020f9a8(1);
  iVar7 = 6;
  *puVar9 = uVar8 & 0xfffffffe | 1 << (iVar6 - 1U & 0xff);
  *puVar9 = *puVar9 | 8;
  *puVar9 = *puVar9 | 4;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar6 = 0x3e9;
    do {
      if (-1 < (int)(*puVar9 << 0x1d)) {
        iVar6 = 6;
        puVar9[5] = puVar9[5] | 0x80000000;
        goto LAB_0020f6e2;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    thunk_FUN_00214da8(200);
  } while( true );
LAB_0020f6e2:
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar7 = 0x3e9;
  do {
    if (-1 < (int)puVar9[5]) {
      puVar9[3] = puVar9[3];
      if (puVar9[3] != 0) {
        FUN_002127e8(DAT_0020f9a0 + 0x20f732);
      }
      puVar9[0x3c] = 0;
      puVar9[0x3e] = 0;
      puVar9[0x3f] = 0;
      iVar11 = 1;
      puVar9[1] = 0;
      puVar9[0xc] = puVar9[0xc] | 0x80000;
      uVar8 = puVar9[0x2e];
      iVar6 = FUN_0020f9a8(0x10000000);
      puVar9[0x2e] = uVar8 & 0xefffffff | 1 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[0x2e];
      FUN_0020f9a8(0x8000);
      puVar9[0x2e] = uVar8 & 0xffff7fff;
      uVar8 = puVar9[0x2c];
      iVar6 = FUN_0020f9a8(0x10000);
      puVar9[0x2c] = uVar8 & 0xfffeffff | 1 << (iVar6 - 1U & 0xff);
      FUN_0020cc2c(param_2,1);
      uVar8 = puVar9[1];
      iVar7 = *(int *)(iVar10 + 0x78);
      iVar6 = FUN_0020f9a8(2);
      puVar9[1] = uVar8 & 0xfffffffd | iVar7 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[1];
      iVar7 = *(int *)(iVar10 + 0x70);
      iVar6 = FUN_0020f9a8(4);
      puVar9[1] = uVar8 & 0xfffffffb | iVar7 << (iVar6 - 1U & 0xff);
      FUN_0020d652(param_2,0);
      FUN_0020e1a0(param_2,1);
      FUN_0020dcb2(param_2,DAT_0020f990);
      FUN_0020da00(param_2,1);
      FUN_0020da3c(param_2,0x20);
      FUN_0020ddec(param_2,uVar3,uVar2);
      uVar8 = *(uint *)(param_2 + 0x38);
      if (DAT_0020f994 < uVar8) {
        if (DAT_0020f994 < uVar8 >> 1) {
          iVar11 = 0;
          uVar4 = FUN_00200a00(uVar8 + 0xfde7f,DAT_0020f998);
          uVar8 = FUN_00200a00(uVar8 >> 2,uVar4);
        }
        else {
          uVar4 = 0;
          iVar11 = 0;
          uVar8 = uVar8 >> 1;
        }
      }
      else {
        uVar4 = 0;
      }
      *(uint *)(param_2 + 0x38) = uVar8;
      uVar8 = *puVar9;
      iVar6 = FUN_0020f9a8(DAT_0020f99c);
      iVar7 = 0x14;
      *puVar9 = (uVar4 | iVar11 << 0xc) << (iVar6 - 1U & 0xff) | uVar8 & 0xffc000ff;
      goto LAB_0020f8c8;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  thunk_FUN_00214da8(200);
  goto LAB_0020f6e2;
LAB_0020f8c8:
  if ((int)(*puVar9 << 0x18) < 0) {
    if (iVar7 == 0) {
LAB_0020f97e:
      uVar5 = 5;
    }
    else {
      FUN_0020d950(param_2,*puVar9 << 0x18,DAT_0020f988,DAT_0020f98c,0);
      FUN_0020f000(param_2,1);
      FUN_0020d69a(param_2,0,*(undefined1 *)(iVar10 + 0x78),0);
      FUN_0020d69a(param_2,0,*(undefined1 *)(iVar10 + 0x70),2);
      FUN_0020d69a(param_2,0,*(undefined1 *)(iVar10 + 0x74),1);
      uVar8 = puVar9[0x2e];
      iVar6 = FUN_0020f9a8(0x10000000);
      puVar9[0x2e] = uVar8 & 0xefffffff | 1 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[0x2e];
      FUN_0020f9a8(0xe0000000);
      puVar9[0x2e] = uVar8 & 0x1fffffff;
      FUN_0020f9a8(0x30000);
      uVar5 = 0;
    }
    return uVar5;
  }
  if (iVar7 == 0) goto LAB_0020f97e;
  iVar7 = iVar7 + -1;
  thunk_FUN_00214dc4(1);
  goto LAB_0020f8c8;
}


// ==== FUN_0020f9a8 @ 0020f9a8 ====

int FUN_0020f9a8(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xffff) == 0) {
      param_1 = param_1 >> 0x10;
      iVar1 = 0x11;
    }
    else {
      iVar1 = 1;
    }
    if ((param_1 & 0xff) == 0) {
      param_1 = param_1 >> 8;
      iVar1 = iVar1 + 8;
    }
    if ((param_1 & 0xf) == 0) {
      param_1 = param_1 >> 4;
      iVar1 = iVar1 + 4;
    }
    if ((param_1 & 3) == 0) {
      param_1 = param_1 >> 2;
      iVar1 = iVar1 + 2;
    }
    if (-1 < (int)(param_1 << 0x1f)) {
      return iVar1 + 1;
    }
  }
  return iVar1;
}


// ==== FUN_0020fa44 @ 0020fa44 ====

int FUN_0020fa44(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(DAT_0020fa94 + 0x20fa4c + DAT_0020fa98) + 0x5b204;
  while( true ) {
    if (*(int *)(iVar3 + 4) == 0) {
      return 0;
    }
    if ((*(int *)(iVar3 + 0xc) != 0) &&
       (iVar2 = FUN_00214ae4(param_1), iVar1 = DAT_0020fa9c, iVar2 == 0)) break;
    iVar3 = iVar3 + 0x10;
  }
  iVar2 = DAT_0020fa9c + 0x20fa76;
  iVar4 = DAT_0020faa0 + 0x20fa78;
  FUN_00214b30(iVar2,iVar3,0x10);
  FUN_00214b30(iVar4,*(undefined4 *)(iVar3 + 0xc),0x50);
  *(int *)(iVar1 + 0x20fa82) = iVar4;
  return iVar2;
}


// ==== thunk_FUN_0020fa44 @ 0020faa4 ====

int thunk_FUN_0020fa44(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(DAT_0020fa94 + 0x20fa4c + DAT_0020fa98) + 0x5b204;
  while( true ) {
    if (*(int *)(iVar3 + 4) == 0) {
      return 0;
    }
    if ((*(int *)(iVar3 + 0xc) != 0) &&
       (iVar2 = FUN_00214ae4(param_1), iVar1 = DAT_0020fa9c, iVar2 == 0)) break;
    iVar3 = iVar3 + 0x10;
  }
  iVar2 = DAT_0020fa9c + 0x20fa76;
  iVar4 = DAT_0020faa0 + 0x20fa78;
  FUN_00214b30(iVar2,iVar3,0x10);
  FUN_00214b30(iVar4,*(undefined4 *)(iVar3 + 0xc),0x50);
  *(int *)(iVar1 + 0x20fa82) = iVar4;
  return iVar2;
}


// ==== FUN_0020fe6c @ 0020fe6c ====

undefined4
FUN_0020fe6c(int param_1,int *param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 * *(int *)(param_1 + 4);
  iVar1 = FUN_00201154(param_1,param_2,uVar3 + param_4,CARRY4(uVar3,param_4),*param_5,*param_3,
                       param_2[2]);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0020fea0 @ 0020fea0 ====

undefined4
FUN_0020fea0(undefined4 *param_1,int *param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00201318(param_1,param_2[2],*param_2 * param_1[1] + param_4,
                       CARRY4(*param_2 * param_1[1],param_4),param_5,*param_3,param_2[2]);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_002127e8(DAT_0020fef4 + 0x20feda,DAT_0020fef8 + 0x20fee2,*param_1,param_2[2],param_3,param_5
                );
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_0020ffbc @ 0020ffbc ====

bool FUN_0020ffbc(void)

{
  int iVar1;
  
  iVar1 = FUN_002118a4();
  return iVar1 == 0xb003;
}


// ==== FUN_00210074 @ 00210074 ====

void FUN_00210074(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar6 = DAT_00210328 + 0x210080;
  piVar8 = *(int **)(iVar6 + DAT_0021032c);
  iVar9 = *piVar8;
  *(undefined4 *)(iVar9 + 0x5e208) = DAT_00210318;
  puVar11 = *(undefined4 **)(iVar6 + DAT_00210330);
  *(undefined4 *)(iVar9 + 0x5e20c) = *puVar11;
  local_20 = param_3;
  local_1c = param_4;
  uVar2 = thunk_FUN_0021afb0();
  uVar3 = DAT_0021031c;
  *(undefined4 *)(iVar9 + 0x5e210) = uVar2;
  iVar9 = *piVar8;
  *(undefined4 *)(iVar9 + 0x5e214) = uVar3;
  *(undefined4 *)(iVar9 + 0x5e218) = 0xe1000;
  uVar1 = FUN_002126a8();
  iVar4 = *piVar8;
  *(undefined1 *)(iVar9 + 0x5e21c) = uVar1;
  iVar9 = *(int *)(iVar4 + 0x5e238);
  *(int *)(iVar4 + 0x5e220) = iVar9;
  for (iVar5 = 0; iVar5 != iVar9; iVar5 = iVar5 + 1) {
    *(undefined4 *)(iVar4 + iVar5 * 4 + 0x5e224) = *(undefined4 *)(iVar5 * 0x18 + iVar4 + 0x5e248);
  }
  puVar10 = *(undefined4 **)(iVar6 + DAT_00210334);
  *(undefined4 *)(iVar4 + 0x5e308) = *puVar10;
  *(undefined4 *)(iVar4 + 0x5e374) = *(undefined4 *)(DAT_00210338 + 0x2100fc);
  *(undefined4 *)(iVar4 + 0x5e30c) = **(undefined4 **)(iVar6 + DAT_0021033c);
  *(undefined4 *)(iVar4 + 0x5e310) = **(undefined4 **)(iVar6 + DAT_00210340);
  *(undefined4 *)(iVar4 + 0x5e348) = DAT_00210320;
  uVar3 = FUN_00214e08(**(undefined4 **)(iVar6 + DAT_00210344));
  iVar9 = DAT_00210348;
  iVar5 = *piVar8;
  *(undefined4 *)(iVar4 + 0x5e314) = uVar3;
  *(int *)(iVar5 + 0x5e334) = iVar5 + 0x58a04;
  *(char *)(iVar5 + 0x5e21d) = (char)*(undefined4 *)(iVar5 + 0x58a00);
  *(undefined4 *)(iVar5 + 0x5e33c) = **(undefined4 **)(iVar6 + iVar9);
  *(undefined4 *)(iVar5 + 0x5e340) = **(undefined4 **)(iVar6 + DAT_0021034c);
  *(undefined4 *)(iVar5 + 0x5e344) = DAT_00210324;
  *(undefined4 *)(iVar5 + 0x5e34c) = **(undefined4 **)(iVar6 + DAT_00210350);
  *(undefined4 *)(iVar5 + 0x5e350) = **(undefined4 **)(iVar6 + DAT_00210354);
  iVar7 = DAT_0021035c + 0x21017e;
  *(undefined4 *)(iVar5 + 0x5e354) = **(undefined4 **)(iVar6 + DAT_00210358);
  local_1c = 0;
  FUN_002151dc(&local_20);
  FUN_002151f0(&local_1c);
  iVar4 = *piVar8;
  *(undefined4 *)(iVar4 + 0x5e2f8) = local_20;
  *(undefined4 *)(iVar4 + 0x5e2fc) = 0;
  *(undefined4 *)(iVar4 + 0x5e300) = local_1c;
  *(undefined4 *)(iVar4 + 0x5e304) = 0;
  iVar9 = DAT_00210360;
  *(undefined1 **)(iVar4 + 0x5e358) = &DAT_0012c000;
  *(undefined4 *)(iVar4 + 0x5e35c) = 0x4000;
  FUN_002127e8(iVar9 + 0x2101c2,iVar7);
  FUN_002127e8(DAT_00210364 + 0x2101d4,iVar7,*(undefined4 *)(*piVar8 + 0x5e35c));
  FUN_00214b30(*piVar8 + 0x5e360,DAT_00210368 + 0x2101e8,8);
  FUN_002127e8(DAT_0021036c + 0x2101fc,iVar7,*piVar8 + 0x5e360);
  FUN_002127e8(DAT_00210370 + 0x210210,iVar7,*(undefined1 *)(*piVar8 + 0x5e338));
  FUN_002127e8(DAT_00210374 + 0x210224,iVar7,*(undefined1 *)(*piVar8 + 0x5e339));
  FUN_002127e8(DAT_00210378 + 0x210234,iVar7,*puVar10);
  FUN_002127e8(DAT_0021037c + 0x210240,iVar7,*puVar11);
  FUN_002127e8(DAT_00210380 + 0x210250,iVar7,*(undefined4 *)(*piVar8 + 0x5e310),
               *(undefined4 *)(*piVar8 + 0x5e30c));
  FUN_002127e8(DAT_00210384 + 0x21026c,iVar7,*piVar8 + 0x5e210,*(undefined4 *)(*piVar8 + 0x5e210));
  FUN_002127e8(DAT_00210388 + 0x210280,iVar7,*(undefined4 *)(*piVar8 + 0x5e314));
  FUN_002127e8(DAT_0021038c + 0x210294,iVar7,*(undefined4 *)(*piVar8 + 0x5e33c),
               *(undefined4 *)(*piVar8 + 0x5e340));
  FUN_002127e8(DAT_00210390 + 0x2102ac,iVar7,*(undefined4 *)(*piVar8 + 0x5e344));
  FUN_002127e8(DAT_00210394 + 0x2102c0,iVar7,*(undefined4 *)(*piVar8 + 0x5e34c));
  FUN_002127e8(DAT_00210398 + 0x2102d4,iVar7,*(undefined4 *)(*piVar8 + 0x5e350));
  FUN_002127e8(DAT_0021039c + 0x2102e8,iVar7,*(undefined4 *)(*piVar8 + 0x5e354));
  iVar9 = *piVar8;
  FUN_002127e8(DAT_002103a0 + 0x210304,iVar7,*(undefined4 *)(iVar9 + 0x5e2f8),
               *(undefined4 *)(iVar9 + 0x5e2fc),*(undefined4 *)(iVar9 + 0x5e300),
               *(undefined4 *)(iVar9 + 0x5e304));
  return;
}


// ==== FUN_0021046c @ 0021046c ====

bool FUN_0021046c(void)

{
  return *DAT_00210478 != 0;
}


// ==== FUN_00210480 @ 00210480 ====

void FUN_00210480(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_24;
  undefined4 uStack_20;
  
  iVar6 = DAT_00210610 + 0x21048a;
  local_24 = param_2;
  uStack_20 = param_3;
  FUN_002072b4();
  FUN_0021707c();
  FUN_00209410();
  iVar2 = FUN_0021331c();
  if (iVar2 == 0) {
    iVar2 = FUN_00217038();
    if (iVar2 == 1) {
      uVar3 = 3;
    }
    else {
      iVar2 = FUN_00217038();
      if (iVar2 == 2) {
        uVar3 = 4;
      }
      else {
        iVar2 = FUN_00209450(2);
        if ((iVar2 != 0) && (iVar2 = FUN_002118d8(), iVar2 != 0)) {
          FUN_00213194();
        }
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 2;
  }
  puVar8 = *(undefined4 **)(iVar6 + DAT_00210614);
  *puVar8 = uVar3;
  uVar3 = FUN_00216fdc();
  *(undefined4 *)(DAT_00210618 + 0x2104e2) = uVar3;
  cVar1 = FUN_0020ffbc();
  iVar2 = FUN_0021324c();
  if (iVar2 != 0) {
    uVar3 = FUN_00214e08(0);
    FUN_0021326c();
    if (cVar1 == '\0') {
      do {
        uVar4 = FUN_00214e08(uVar3);
        if (29999 < uVar4) break;
        FUN_00211440(0x4a,&local_24,1,0xe);
        if (local_24 != 0) {
          FUN_00211468(0x4a,1,1,4);
        }
        iVar2 = FUN_0021187e();
      } while (iVar2 != 0);
      FUN_002131d4();
    }
  }
  FUN_00211440(0x4a,&local_24,1,0xe);
  if (local_24 != 0) {
    uVar3 = FUN_00214e08(0);
    FUN_0021321c();
    if (cVar1 == '\0') {
      FUN_00211468(0x4a,1,1,4);
      do {
        uVar4 = FUN_00214e08(uVar3);
        if (4999 < uVar4) break;
        iVar2 = FUN_0021187e();
      } while (iVar2 != 0);
      FUN_002131d4();
    }
    else {
      FUN_00211468(0x4a,1,1,4);
      *puVar8 = 1;
      FUN_002131b4();
      FUN_002131ec();
    }
  }
  FUN_00213168();
  FUN_0020944c();
  FUN_00209ed4();
  FUN_00201ce0();
  FUN_00212814();
  FUN_0021298c(**(undefined4 **)(iVar6 + DAT_0021061c));
  iVar2 = FUN_0020a42c();
  if (iVar2 == 0) {
    iVar5 = DAT_00210624 + 0x2105ba;
  }
  else {
    iVar5 = DAT_00210620 + 0x2105b4;
  }
  FUN_002127e8(DAT_00210628 + 0x2105c0,DAT_0021062c + 0x2105c2,iVar5,iVar2);
  piVar7 = *(int **)(iVar6 + DAT_00210630);
  iVar2 = *piVar7;
  uVar3 = FUN_00206384();
  *(undefined4 *)(iVar2 + 0x5e220) = uVar3;
  FUN_002063c8(*piVar7 + 0x5e224);
  FUN_0020758c(*piVar7 + 0x5e2a0);
  iVar2 = *piVar7;
  FUN_0020744c(iVar2 + 0x5e238,iVar2 + 0x5e2a0,iVar2 + 0x5e2e8);
  return;
}


// ==== FUN_00210798 @ 00210798 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210798(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_002127e8(DAT_002107b4 + 0x2107aa,param_1,param_2,param_3,param_4);
  iVar1 = FUN_002126a8();
  if (iVar1 == 0) {
    FUN_00215798(0,0xe1000);
    FUN_0021265c(1);
  }
  FUN_002127e8(_DAT_00210794 + 0x21078c);
  FUN_00213884();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ==== FUN_00210930 @ 00210930 ====

undefined2 FUN_00210930(void)

{
  return *(undefined2 *)(DAT_00210938 + 0x210936);
}


// ==== FUN_00210f94 @ 00210f94 ====

int FUN_00210f94(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = DAT_00210ff0;
  puVar2 = DAT_00210fec;
  puVar1 = DAT_00210fe8;
  uVar8 = *DAT_00210fe8;
  *DAT_00210fe8 = 0x1901;
  uVar6 = *puVar2;
  *puVar2 = uVar6 & 0xffffff | 0x7000000;
  uVar7 = *puVar3;
  *puVar3 = 0xff0000;
  piVar4 = DAT_00210ff4;
  *DAT_00210ff4 = 0x1000;
  *piVar4 = 0x1010;
  do {
  } while (*piVar4 << 0x1b < 0);
  uVar5 = *puVar3;
  *puVar1 = uVar8;
  *puVar2 = uVar6;
  *DAT_00210ff4 = 0;
  *puVar3 = uVar7;
  return ((uVar5 & 0xffff) * 26000 >> 8) << 3;
}


// ==== FUN_00210ff8 @ 00210ff8 ====

int FUN_00210ff8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = DAT_00211054;
  puVar2 = DAT_00211050;
  puVar1 = DAT_0021104c;
  uVar8 = *DAT_0021104c;
  *DAT_0021104c = 0x101;
  uVar6 = *puVar2;
  *puVar2 = uVar6 & 0xffffff | 0x7000000;
  uVar7 = *puVar3;
  *puVar3 = 0xff0000;
  piVar4 = DAT_00211058;
  *DAT_00211058 = 0x1000;
  *piVar4 = 0x1010;
  do {
  } while (*piVar4 << 0x1b < 0);
  uVar5 = *puVar3;
  *puVar1 = uVar8;
  *puVar2 = uVar6;
  *DAT_00211058 = 0;
  *puVar3 = uVar7;
  return ((uVar5 & 0xffff) * 26000 >> 8) << 3;
}


// ==== FUN_0021143c @ 0021143c ====

undefined4 FUN_0021143c(void)

{
  return 3;
}


// ==== FUN_00211440 @ 00211440 ====

void FUN_00211440(undefined4 param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *local_1c;
  int iStack_18;
  
  local_1c = param_2;
  iStack_18 = param_3;
  iVar1 = FUN_00212378(0,param_1,0,&local_1c,param_1);
  if (iVar1 == 0) {
    *param_2 = ((uint)local_1c & param_3 << (param_4 & 0xff)) >> (param_4 & 0xff);
  }
  return;
}


// ==== FUN_00211468 @ 00211468 ====

void FUN_00211468(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_1c;
  
  uVar2 = param_1;
  local_1c = param_2;
  iVar1 = FUN_00212378(0,param_1,0,&local_1c,param_1);
  if (iVar1 == 0) {
    FUN_00212378(1,param_1,local_1c & ~(param_3 << (param_4 & 0xff)) | param_2 << (param_4 & 0xff),
                 &local_1c,uVar2);
  }
  return;
}


// ==== FUN_002114a4 @ 002114a4 ====

void FUN_002114a4(void)

{
  return;
}


// ==== FUN_002114c2 @ 002114c2 ====

void FUN_002114c2(undefined4 param_1)

{
  FUN_002114a4();
  FUN_00211468(0x24,param_1,1,0);
  return;
}


// ==== FUN_0021153a @ 0021153a ====

void FUN_0021153a(undefined4 param_1)

{
  FUN_002114a4();
  FUN_00211468(0x26,param_1,3,0);
  return;
}


// ==== FUN_0021187e @ 0021187e ====

bool FUN_0021187e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00211440(0x142,&local_c,1,1,param_1);
  return local_c != 1;
}


// ==== FUN_002118a4 @ 002118a4 ====

undefined4 FUN_002118a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00211440(0,&local_c,1,5,param_1);
  uVar1 = 0xb004;
  if (local_c != 0) {
    uVar1 = 0xb003;
  }
  return uVar1;
}


// ==== FUN_002118cc @ 002118cc ====

undefined4 FUN_002118cc(void)

{
  return *(undefined4 *)(DAT_002118d4 + 0x2118d2);
}


// ==== FUN_002118d8 @ 002118d8 ====

undefined4 FUN_002118d8(void)

{
  return 1;
}


// ==== FUN_00211a28 @ 00211a28 ====

undefined4 FUN_00211a28(code *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00214d60();
  uVar2 = FUN_00214d90(0xff);
  do {
    iVar3 = FUN_00214d6c(uVar1,uVar2);
    if (iVar3 != 0) {
      FUN_002127e8(DAT_00211a74 + 0x211a52,0xfc);
      return 9;
    }
    uVar4 = *param_2;
    iVar3 = (*param_1)(uVar4);
  } while (iVar3 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar4;
    return 0;
  }
  return 0;
}


// ==== FUN_00212360 @ 00212360 ====

void FUN_00212360(void)

{
  int iVar1;
  
  iVar1 = DAT_00212370;
  do {
    iVar1 = iVar1 + 4;
  } while (iVar1 != DAT_00212374);
  return;
}


// ==== FUN_00212378 @ 00212378 ====

int FUN_00212378(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_1 & 0xfffffffe) == 0) {
    if ((param_2 & 0xffff0000) == 0) {
      if ((param_3 & 0xffff0000) == 0) {
        uVar1 = FUN_00214d60();
        iVar8 = DAT_00212514 + 0x2123a6;
        uVar2 = FUN_00214d90(0xff);
        iVar6 = DAT_00212518 + 0x2123b4;
        iVar5 = DAT_0021251c + 0x2123b8;
LAB_002123ba:
        do {
          iVar3 = FUN_00214d6c(uVar1,uVar2);
          if (iVar3 != 0) {
            iVar5 = 9;
            FUN_002127e8(DAT_00212520 + 0x2123d0,0x139);
            FUN_00212360();
LAB_00212436:
            FUN_002127e8(DAT_00212528 + 0x212442,0x1a4,iVar5);
            goto LAB_00212444;
          }
          if (-1 < (int)(*DAT_00212508 << 10)) {
            iVar5 = 7;
            FUN_002127e8(DAT_00212524 + 0x2123ec,0x142);
            goto LAB_00212436;
          }
          uVar7 = (*DAT_00212508 & 0x7ffff) >> 0x10;
          if (uVar7 == 4) {
            uVar4 = 0x14e;
            iVar3 = iVar6;
LAB_0021241e:
            FUN_002127e8(iVar3,uVar4);
            goto LAB_002123ba;
          }
          if (uVar7 == 6) {
            FUN_00214d5a(1,DAT_0021250c);
            uVar4 = 0x14b;
            iVar3 = iVar5;
            goto LAB_0021241e;
          }
          if (uVar7 == 2) {
            uVar4 = 0x151;
            iVar3 = iVar8;
            goto LAB_0021241e;
          }
        } while (uVar7 != 0);
        FUN_00214d5a((param_2 >> 1) << 0x10 | param_1 << 0x1f | param_3,DAT_00212510);
        if (param_1 == 0) {
          uVar1 = FUN_00214d60();
          uVar2 = FUN_00214d90(0xff);
          do {
            iVar5 = FUN_00214d6c(uVar1,uVar2);
            if (iVar5 != 0) {
              iVar6 = 9;
              FUN_002127e8(DAT_00212534 + 0x212498,0x167);
              FUN_00212360();
LAB_002124ee:
              iVar5 = iVar6 + 1;
              FUN_002127e8(DAT_00212540 + 0x2124fc,0x1b1,iVar6);
              goto LAB_00212444;
            }
            uVar7 = *DAT_00212508;
            if (-1 < (int)(uVar7 << 10)) {
              iVar6 = 7;
              FUN_002127e8(DAT_00212538 + 0x2124b4,0x170);
              goto LAB_002124ee;
            }
          } while ((uVar7 & 0x7ffff) >> 0x10 != 6);
          if (param_4 == (uint *)0x0) {
            iVar5 = 1;
            FUN_002127e8(DAT_0021253c + 0x2124e2,0x1b7);
            FUN_00214d5a(1,DAT_0021250c);
LAB_00212444:
            FUN_002127e8(DAT_0021252c + 0x212450,0x1c3,iVar5);
            FUN_002127e8(DAT_00212530 + 0x21245c,0x1c4);
            return iVar5;
          }
          *param_4 = uVar7 & 0xffff;
          FUN_00214d5a(1,DAT_0021250c);
        }
        iVar5 = 0;
      }
      else {
        iVar5 = 4;
      }
    }
    else {
      iVar5 = 3;
    }
  }
  else {
    iVar5 = 2;
  }
  return iVar5;
}


// ==== FUN_00212544 @ 00212544 ====

void FUN_00212544(undefined4 param_1,undefined4 param_2)

{
  FUN_00212378(0,param_1,0,param_2);
  return;
}


// ==== FUN_00212552 @ 00212552 ====

void FUN_00212552(undefined4 param_1,undefined4 param_2)

{
  FUN_00212378(1,param_1,param_2,0);
  return;
}


// ==== FUN_00212590 @ 00212590 ====

void FUN_00212590(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  if (*(int *)(DAT_002125cc + 0x212598) == 0) {
    piVar3 = *(int **)(DAT_002158a8 + 0x215888 + DAT_002158ac);
    do {
    } while ((*(uint *)(*piVar3 + 0x14) & 0x20) == 0);
    if (param_1 == 10) {
      *(undefined4 *)*piVar3 = 0xd;
    }
    *(int *)*piVar3 = param_1;
    return;
  }
  puVar1 = *(undefined4 **)(DAT_002125d0 + 0x2125a0 + DAT_002125d4);
  puVar2 = (undefined1 *)*puVar1;
  if (puVar2 < (undefined1 *)**(undefined4 **)(DAT_002125d0 + 0x2125a0 + DAT_002125d8)) {
    *puVar1 = puVar2 + 1;
    *puVar2 = (char)param_1;
    return;
  }
  *(int *)(DAT_002125dc + 0x2125be) = *(int *)(DAT_002125dc + 0x2125be) + 1;
  return;
}


// ==== FUN_002125e0 @ 002125e0 ====

void FUN_002125e0(uint param_1)

{
  uint extraout_r1;
  
  if (9 < param_1) {
    FUN_00200a00(param_1,10);
    FUN_002125e0();
    FUN_00200a98(param_1,10);
    param_1 = extraout_r1;
  }
  FUN_00212590(param_1 + 0x30 & 0xff);
  return;
}


// ==== FUN_0021260a @ 0021260a ====

void FUN_0021260a(char *param_1)

{
  while( true ) {
    if (*param_1 == '\0') break;
    if (*param_1 == '\n') {
      FUN_00212590(0xd);
    }
    FUN_00212590(*param_1);
    param_1 = param_1 + 1;
  }
  return;
}


// ==== FUN_0021262a @ 0021262a ====

void FUN_0021262a(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    param_2 = param_2 + -1;
  }
  if (((param_1 & 0xfffffff0) != 0) || (param_2 != 0)) {
    uVar2 = param_1 >> 4;
    param_1 = param_1 & 0xf;
    FUN_0021262a(uVar2);
  }
  if (param_1 < 10) {
    cVar1 = (char)param_1 + '0';
  }
  else {
    cVar1 = (char)param_1 + '7';
  }
  FUN_00212590(cVar1);
  return;
}


// ==== FUN_0021265c @ 0021265c ====

void FUN_0021265c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar1 = DAT_0021269c;
  *(uint *)(DAT_00212698 + 0x212666) = (uint)(param_1 == 0);
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x212672 + DAT_002126a0);
    puVar3 = *(undefined4 **)(iVar1 + 0x212672 + DAT_002126a4);
    puVar5 = (undefined1 *)*puVar3;
    for (puVar4 = (undefined1 *)*puVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      FUN_00212590(*puVar4);
    }
    *puVar3 = *puVar2;
  }
  return;
}


// ==== FUN_002126a8 @ 002126a8 ====

int FUN_002126a8(void)

{
  int iVar1;
  
  iVar1 = 1 - *(uint *)(DAT_002126b8 + 0x2126ae);
  if (1 < *(uint *)(DAT_002126b8 + 0x2126ae)) {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_002126bc @ 002126bc ====

void FUN_002126bc(char *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  
  FUN_00212590(0x5b);
  FUN_00214e08(0);
  iVar6 = 1;
  FUN_002125e0();
  FUN_00212590(0x5d);
  FUN_00212590(0x20);
  do {
    while( true ) {
      cVar2 = *param_1;
      if (cVar2 == '\0') {
        return;
      }
      pcVar7 = param_1 + 1;
      if (cVar2 != '\r') break;
      if (param_1[1] == '\n') {
        pcVar7 = param_1 + 2;
      }
LAB_002127d4:
      FUN_00212590(0xd);
      cVar2 = '\n';
      param_1 = pcVar7;
LAB_002127dc:
      FUN_00212590(cVar2);
    }
    if (cVar2 != '%') {
      param_1 = pcVar7;
      if (cVar2 == '\n') goto LAB_002127d4;
      goto LAB_002127dc;
    }
    bVar1 = param_1[1];
    pcVar7 = param_1 + 2;
    if (bVar1 == 99) {
      FUN_00212590((char)*param_2);
LAB_0021274c:
      param_2 = param_2 + 1;
    }
    else {
      if (99 < bVar1) {
        if (bVar1 == 0x73) {
          FUN_0021260a(*param_2);
        }
        else {
          if (bVar1 < 0x74) {
            if (bVar1 != 100) {
              if (bVar1 != 0x6c) goto LAB_002127c0;
              if ((param_1[2] == 'l') && (param_1[3] == 'x')) {
                piVar5 = param_2;
                if (iVar6 << 0x1f < 0) {
                  piVar5 = param_2 + 1;
                  iVar6 = iVar6 + 1;
                }
                iVar6 = iVar6 + 1;
                param_2 = piVar5 + 2;
                iVar3 = *piVar5;
                FUN_0021262a(piVar5[1],8);
                FUN_0021262a(iVar3,8);
                pcVar7 = param_1 + 4;
              }
              goto LAB_002127c6;
            }
            iVar3 = *param_2;
            if (iVar3 < 0) {
              iVar3 = -iVar3;
              FUN_00212590(0x2d);
            }
          }
          else {
            if (bVar1 != 0x75) {
              if (bVar1 == 0x78) {
                iVar3 = *param_2;
                uVar4 = 0;
                goto LAB_00212748;
              }
              goto LAB_002127c0;
            }
            iVar3 = *param_2;
          }
          FUN_002125e0(iVar3);
        }
        goto LAB_0021274c;
      }
      if (bVar1 == 0x42) {
        iVar3 = *param_2;
        uVar4 = 2;
LAB_00212748:
        FUN_0021262a(iVar3,uVar4);
        goto LAB_0021274c;
      }
      if (0x42 < bVar1) {
        if (bVar1 == 0x48) {
          iVar3 = *param_2;
          uVar4 = 4;
        }
        else {
          if (bVar1 != 0x58) goto LAB_002127c0;
          iVar3 = *param_2;
          uVar4 = 8;
        }
        goto LAB_00212748;
      }
      if (bVar1 != 0x25) {
LAB_002127c0:
        bVar1 = 0x20;
      }
      FUN_00212590(bVar1);
    }
LAB_002127c6:
    param_1 = pcVar7;
    iVar6 = iVar6 + 1;
  } while( true );
}


// ==== FUN_002127e8 @ 002127e8 ====

void FUN_002127e8(undefined4 param_1)

{
  FUN_002126bc(param_1);
  return;
}


// ==== FUN_00212802 @ 00212802 ====

void FUN_00212802(undefined4 param_1)

{
  FUN_002127e8(param_1);
  return;
}


// ==== FUN_00212814 @ 00212814 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00212814(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  
  iVar5 = DAT_0021293c;
  iVar3 = DAT_00212930;
  puVar7 = (undefined4 *)(DAT_00212938 + 0x212822);
  *puVar7 = &DAT_0012c000;
  if (_DAT_0012c000 == iVar3) {
    uVar2 = 0x4000;
    puVar7 = (undefined4 *)(DAT_00212940 + 0x212836);
  }
  else {
    FUN_002127e8(DAT_00212944 + 0x21283e,DAT_00212948 + 0x212840);
    uVar2 = 0x10000;
    *puVar7 = DAT_00212934;
    puVar7 = (undefined4 *)(DAT_0021294c + 0x212850);
  }
  *puVar7 = uVar2;
  piVar8 = (int *)(DAT_00212950 + 0x21285a);
  iVar9 = DAT_00212958 + 0x212860;
  FUN_002127e8(DAT_0021295c + 0x212868,iVar9,*piVar8,*(undefined4 *)(DAT_00212954 + 0x21285e));
  FUN_002127e8(DAT_00212960 + 0x212876,iVar9,*(undefined4 *)*piVar8);
  FUN_002127e8(DAT_00212964 + 0x212884,iVar9,*(undefined4 *)(*piVar8 + 4));
  FUN_002127e8(DAT_00212968 + 0x212892,iVar9,*(undefined4 *)(*piVar8 + 8));
  FUN_002127e8(DAT_0021296c + 0x2128a0,iVar9,*(undefined4 *)(*piVar8 + 0xc));
  iVar1 = DAT_00212978;
  if ((((**(int **)(iVar5 + 0x212828 + DAT_00212970) != 0) &&
       (piVar4 = (int *)*piVar8, *piVar4 == iVar3)) && (piVar4[3] == 0x10)) &&
     ((piVar4[1] == 0x40 && (piVar4[2] == 0x80)))) {
    FUN_002127e8(DAT_00212974 + 0x2128d0,iVar9);
    iVar5 = *piVar8;
    iVar9 = 0;
    iVar3 = *(int *)(iVar5 + 4);
    do {
      iVar6 = iVar5 + iVar3 + iVar9;
      iVar9 = iVar9 + 4;
      FUN_002127e8(iVar1 + 0x2128d8,*(undefined4 *)(iVar6 + 4));
    } while (iVar9 != 0xc);
    FUN_002127e8(DAT_0021297c + 0x2128f2);
    iVar3 = *(int *)(DAT_00212980 + 0x2128fa);
    FUN_00214b30(*(int *)(iVar3 + 8) + iVar3,*(int *)(iVar3 + 4) + iVar3,
                 *(undefined4 *)(iVar3 + 0xc),in_r3);
    return;
  }
  puVar7 = (undefined4 *)(DAT_00212984 + 0x212916);
  FUN_00214b20(*puVar7,0,*(undefined4 *)(DAT_00212988 + 0x212918));
  piVar8 = (int *)*puVar7;
  *piVar8 = iVar3;
  piVar8[1] = 0x40;
  piVar8[3] = 0x10;
  piVar8[2] = 0x80;
  return;
}


// ==== FUN_0021298c @ 0021298c ====

void FUN_0021298c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002129ac + 0x212994);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + *(int *)(iVar1 + 4)) = param_1;
    FUN_002127e8(DAT_002129b0 + 0x2129a4,DAT_002129b4 + 0x2129a6,param_1,param_1);
    return;
  }
  return;
}


// ==== FUN_002129b8 @ 002129b8 ====

int FUN_002129b8(short *param_1)

{
  int iVar1;
  
  if ((((ushort)(*param_1 - 3U) < 5) && ((ushort)(param_1[1] - 0x5ddU) < 0x1193)) &&
     (param_1[2] == 0)) {
    iVar1 = 1 - (uint)(ushort)param_1[3];
    if (1 < (ushort)param_1[3]) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}


// ==== FUN_002129e6 @ 002129e6 ====

bool FUN_002129e6(short *param_1)

{
  if ((((ushort)(*param_1 - 3U) < 5) && ((ushort)param_1[1] < 500)) &&
     ((ushort)(param_1[2] - 3U) < 6)) {
    return (ushort)(param_1[3] - 0x12dU) < 0x2773;
  }
  return false;
}


// ==== FUN_00212a1e @ 00212a1e ====

int FUN_00212a1e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 + -2;
  if (iVar1 < 1) {
    iVar1 = param_2 + 10;
    param_1 = param_1 + -1;
  }
  iVar2 = FUN_002008c0(iVar1 * 0x16f,0xc);
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 3;
  }
  iVar3 = FUN_002008c0(param_1,0xffffff9c);
  iVar4 = FUN_002008c0(param_1,400);
  return (((param_3 + iVar2 + -0xaf91e + (param_1 + -1) * 0x16d + iVar4 + (iVar1 >> 2) + iVar3) *
           0x18 + param_4) * 0x3c + param_5) * 0x3c + param_6;
}


// ==== FUN_00212a9a @ 00212a9a ====

uint FUN_00212a9a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00212544(param_1,&local_c,param_3,0,param_1);
  return local_c & 0xffff;
}


// ==== FUN_00212ab2 @ 00212ab2 ====

bool FUN_00212ab2(void)

{
  uint uVar1;
  
  uVar1 = FUN_00212a9a(0x803e);
  if (-1 < (int)(uVar1 << 0x10)) {
    return (uVar1 & 0xc) != 4;
  }
  return true;
}


// ==== FUN_00212ad0 @ 00212ad0 ====

undefined4 FUN_00212ad0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00212552(0x803c,1);
  uVar1 = FUN_00214e08(0);
  do {
    iVar2 = FUN_00212a9a(0x8000);
    if (-1 < iVar2 << 0x19) {
      return 1;
    }
    uVar3 = FUN_00214e08(uVar1);
  } while (uVar3 < 0x3e9);
  FUN_002127e8(DAT_00212b0c + 0x212b02);
  return 0;
}


// ==== FUN_00212b10 @ 00212b10 ====

bool FUN_00212b10(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00212a9a(0x803e);
  FUN_00212552(0x803e,uVar1 & 0x800c | 0x420);
  iVar2 = FUN_00212ad0();
  return iVar2 != 0;
}


// ==== FUN_00212b38 @ 00212b38 ====

void FUN_00212b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  FUN_00212552(0x8026,0x1a57);
  thunk_FUN_00214dc4(1);
  FUN_00212552(0x8026,0x2b68);
  thunk_FUN_00214dc4(1);
  FUN_00212552(0x8026,param_1);
  thunk_FUN_00214dc4(1,extraout_r1,extraout_r2,param_4);
  return;
}


// ==== FUN_00212b74 @ 00212b74 ====

void FUN_00212b74(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_00214e08(0);
  if (param_1 != 0) {
    FUN_00212b38(param_1);
  }
  FUN_00212552(0x182,0);
  uVar1 = FUN_00212a9a(0x108);
  FUN_00212552(0x108,uVar1 | 0x20);
  uVar1 = FUN_00212a9a(0x114);
  FUN_00212552(0x114,uVar1 | 0x100);
  do {
    iVar3 = FUN_00212a9a(0x186);
    if (iVar3 == 0) break;
    iVar3 = FUN_00212a9a(0x182);
  } while (iVar3 << 0x1c < 0);
  uVar4 = FUN_00212a9a(0x114);
  FUN_00212552(0x114,uVar4 & 0xfeff);
  uVar4 = FUN_00212a9a(0x108);
  FUN_00212552(0x108,uVar4 & 0xffdf);
  FUN_00212552(0x184,param_3);
  FUN_00212552(0x182,param_2 | 0x8000);
  thunk_FUN_00214dc4(1);
  do {
    iVar3 = FUN_00212a9a(0x182);
    if (-1 < iVar3 << 0x1c) goto LAB_00212c42;
    uVar4 = FUN_00214e08(uVar2);
  } while (uVar4 < 2);
  FUN_002127e8(DAT_00212c50 + 0x212c40);
LAB_00212c42:
  FUN_00212a9a(0x186);
  return;
}


// ==== FUN_00212c54 @ 00212c54 ====

uint FUN_00212c54(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  
  uVar2 = FUN_00212a9a(0x126);
  uVar6 = 0x24df;
  uVar5 = 0x24c0;
  FUN_00212552(0x126,uVar2 | 0xc0);
  do {
    uVar7 = (uVar6 + uVar5) / 2;
    if (uVar7 == uVar5) break;
    unaff_r7 = FUN_00212b74(uVar7,4,0);
    uVar1 = uVar7;
    if (unaff_r7 < 0x319) {
      uVar5 = uVar7;
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
  } while (uVar5 <= uVar6);
  if ((unaff_r7 - 0x319 & 0xffff) < 3) {
    return uVar7;
  }
  iVar3 = FUN_00212b74(uVar5,4,0);
  iVar4 = FUN_00212b74(uVar6,4,0);
  if ((int)(0x318U - iVar3 & 0xffff) < iVar4 + -0x318) {
    uVar6 = uVar5;
  }
  return uVar6;
}


// ==== FUN_00212ce2 @ 00212ce2 ====

void FUN_00212ce2(undefined2 *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = FUN_00212a9a(0x126);
  FUN_00212552(0x126,uVar3 & 0xff3f);
  thunk_FUN_00214dc4(1);
  uVar1 = FUN_00212b74(0,4,4);
  *param_1 = uVar1;
  uVar2 = FUN_00212a9a(0x126);
  FUN_00212552(0x126,uVar2 | 0x80);
  thunk_FUN_00214dc4(1);
  uVar1 = FUN_00212b74(0,4,4);
  param_1[1] = uVar1;
  uVar3 = FUN_00212a9a(0x126);
  FUN_00212552(0x126,uVar3 & 0xff3f);
  thunk_FUN_00214dc4(1);
  uVar1 = FUN_00212b74(0,0,0xf82);
  param_1[2] = uVar1;
  uVar1 = FUN_00212b74(0,1,0xf82);
  param_1[2] = uVar1;
  uVar2 = FUN_00212a9a(0x126);
  FUN_00212552(0x126,uVar2 | 0xc0);
  thunk_FUN_00214dc4(1);
  uVar1 = FUN_00212b74(0,4,4);
  param_1[3] = uVar1;
  return;
}


// ==== FUN_00212d98 @ 00212d98 ====

undefined4 FUN_00212d98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00212552(0x8036,0x586a,param_3,param_4,param_4);
  iVar1 = FUN_00212ad0();
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00212552(0x8036,0x9136);
    iVar1 = FUN_00212ad0();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00212dc4 @ 00212dc4 ====

bool FUN_00212dc4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00212a9a(0x803a);
  FUN_00212552(0x803a,uVar2 & 0xf7ff);
  iVar3 = FUN_00212ad0();
  if (iVar3 != 0) {
    uVar1 = FUN_00212a9a(0x803a);
    FUN_00212552(0x803a,uVar1 | 0x800);
    iVar3 = FUN_00212ad0();
    if (iVar3 != 0) {
      uVar2 = FUN_00212a9a(0x803a);
      FUN_00212552(0x803a,uVar2 & 0xf7ff);
      iVar3 = FUN_00212ad0();
      return iVar3 != 0;
    }
  }
  return false;
}


// ==== FUN_00212e26 @ 00212e26 ====

bool FUN_00212e26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00212552(0x8004,0,param_3,param_4,param_4);
  FUN_00212552(0x8006,0);
  FUN_00212552(0x8008,0);
  FUN_00212552(0x8024,2);
  FUN_00212552(0x8022,1);
  FUN_00212552(0x801e,1);
  FUN_00212552(0x8020,1);
  FUN_00212552(0x801c,0);
  FUN_00212552(0x801a,0);
  FUN_00212552(0x8018,0);
  FUN_00212552(0x802c,0x8000);
  FUN_00212552(0x802e,0x201);
  FUN_00212552(0x8030,0);
  FUN_00212552(0x8032,0x800);
  FUN_00212552(0x8038,0);
  FUN_00212552(0x803a,0);
  iVar1 = FUN_00212dc4();
  if ((iVar1 != 0) && (iVar1 = FUN_00212ad0(), iVar1 != 0)) {
    FUN_00212a9a(0x8002);
    FUN_00212552(0x8016,0x2a);
    FUN_00212552(0x8014,1);
    FUN_00212552(0x8010,1);
    FUN_00212552(0x8012,1);
    FUN_00212552(0x800e,0);
    FUN_00212552(0x800c,0);
    FUN_00212552(0x800a,0);
    iVar1 = FUN_00212ad0();
    return iVar1 != 0;
  }
  return false;
}


// ==== FUN_00212f3a @ 00212f3a ====

int FUN_00212f3a(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00212a9a(0x803e);
  uVar5 = uVar2 & 0xfff7 | 4;
  FUN_00212552(0x803e,uVar5);
  iVar3 = FUN_00212ad0();
  if (iVar3 != 0) {
    FUN_00212552(0x803e,uVar2 & 0xfff7 | 0xc);
    iVar3 = FUN_00212ad0();
    if (iVar3 != 0) {
      FUN_00212552(0x803e,uVar5);
      iVar3 = FUN_00212ad0();
      if (iVar3 != 0) {
        uVar1 = FUN_00212a9a(0x8030);
        FUN_00212552(0x8030,uVar1 | 0x80);
        iVar4 = FUN_00212ad0();
        iVar3 = 0;
        if (iVar4 != 0) {
          uVar2 = FUN_00212ab2();
          iVar3 = 1 - uVar2;
          if (1 < uVar2) {
            iVar3 = 0;
          }
        }
        return iVar3;
      }
    }
  }
  return 0;
}


// ==== FUN_00212fb4 @ 00212fb4 ====

undefined4 FUN_00212fb4(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  if (*(char *)(DAT_00213044 + 0x212fbc) != '\0') {
    uVar1 = FUN_00212a9a(0x142);
    FUN_00212552(0x142,uVar1 | 0x800);
    FUN_00212b38(3);
    thunk_FUN_00214dc4(1000);
  }
  FUN_00212ce2(&uStack_10);
  iVar2 = FUN_002129b8(&uStack_10);
  if (iVar2 == 0) {
    if (*(char *)(DAT_00213048 + 0x212ffa) != '\0') {
      uVar1 = FUN_00212a9a(0x142);
      FUN_00212552(0x142,uVar1 | 0xa00);
    }
    FUN_00212b38(0x240f);
    thunk_FUN_00214dc4(10);
    FUN_00212ce2(&uStack_10);
    iVar2 = FUN_002129e6(&uStack_10);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00212c54();
    uVar3 = uVar3 & 0x1f | 0x2400;
  }
  else {
    uVar3 = 0;
  }
  FUN_00212b38(uVar3);
  return 1;
}


// ==== FUN_0021304c @ 0021304c ====

bool FUN_0021304c(void)

{
  int iVar1;
  
  iVar1 = FUN_00212d98();
  if ((iVar1 != 0) && (iVar1 = FUN_00212b10(), iVar1 != 0)) {
    FUN_00212b38(3);
    FUN_00212552(0x8028,0xa357);
    FUN_00212552(0x802a,0x67d2);
    iVar1 = FUN_00212ad0();
    if (iVar1 != 0) {
      thunk_FUN_00214dc4(1000);
      iVar1 = FUN_00212fb4();
      if ((iVar1 != 0) && (iVar1 = FUN_00212e26(), iVar1 != 0)) {
        iVar1 = FUN_00212f3a();
        return iVar1 != 0;
      }
    }
  }
  return false;
}


// ==== FUN_002130ac @ 002130ac ====

void FUN_002130ac(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  cVar3 = '\0';
  iVar4 = DAT_00213154 + 0x2130be;
  iVar5 = DAT_00213158 + 0x2130c0;
  *(undefined1 *)(DAT_00213150 + 0x2130bc) = 1;
  do {
    iVar1 = FUN_00212fb4();
    if (iVar1 == 0) {
      FUN_00210798(iVar4,0x75,iVar5);
    }
    else {
      iVar1 = FUN_00212d98();
      if (iVar1 != 0) {
        FUN_00212552(0x8028,0xa357);
        FUN_00212552(0x802a,0x67d2);
        iVar1 = FUN_00212ad0();
        if (iVar1 != 0) {
          uVar2 = FUN_00212a9a(0x142);
          FUN_00212552(0x142,uVar2 & 0xf7ff);
          iVar1 = FUN_00212b10();
          if (((iVar1 != 0) && (iVar1 = FUN_00212e26(), iVar1 != 0)) &&
             (iVar1 = FUN_00212f3a(), iVar1 != 0)) break;
        }
      }
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 != '\x03');
  *(undefined1 *)(DAT_0021315c + 0x21310a) = 0;
  if (cVar3 != '\x03') {
    return;
  }
  FUN_00210798(DAT_00213160 + 0x213116,0x75,DAT_00213164 + 0x213118);
  return;
}


// ==== FUN_00213168 @ 00213168 ====

void FUN_00213168(void)

{
  uint uVar1;
  
  FUN_00212552(0x8000,0x430d);
  FUN_00212ad0();
  uVar1 = FUN_00212a9a(0x803a);
  FUN_00212552(0x803a,uVar1 & 0xfeff);
  return;
}


// ==== FUN_00213194 @ 00213194 ====

void FUN_00213194(void)

{
  ushort uVar1;
  
  uVar1 = FUN_00212a9a(0x802c);
  FUN_00212552(0x802c,uVar1 | 0x40);
  FUN_00212ad0();
  return;
}


// ==== FUN_002131b4 @ 002131b4 ====

void FUN_002131b4(void)

{
  uint uVar1;
  
  uVar1 = FUN_00212a9a(0x802c);
  FUN_00212552(0x802c,uVar1 & 0xffbf);
  FUN_00212ad0();
  return;
}


// ==== FUN_002131d4 @ 002131d4 ====

void FUN_002131d4(void)

{
  FUN_00212d98();
  FUN_00212552(0x8000,0x4309);
  FUN_00212ad0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ==== FUN_002131ec @ 002131ec ====

void FUN_002131ec(void)

{
  ushort uVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  uVar1 = FUN_00212a9a(0x8030);
  FUN_00212552(0x8030,uVar1 | 0x100);
  FUN_00212ad0();
  FUN_002127e8(DAT_00213218 + 0x213212,uVar1 | 0x100,extraout_r2,in_r3);
  return;
}


// ==== FUN_0021321c @ 0021321c ====

void FUN_0021321c(void)

{
  ushort uVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  uVar1 = FUN_00212a9a(0x8030);
  FUN_00212552(0x8030,uVar1 | 0x400);
  FUN_00212ad0();
  FUN_002127e8(DAT_00213248 + 0x213242,uVar1 | 0x400,extraout_r2,in_r3);
  return;
}


// ==== FUN_0021324c @ 0021324c ====

uint FUN_0021324c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00212a9a(0x8030);
  FUN_002127e8(DAT_00213268 + 0x213260,uVar1);
  return (uVar1 & 0xfff) >> 0xb;
}


// ==== FUN_0021326c @ 0021326c ====

void FUN_0021326c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00212a9a(0x8030);
  FUN_00212552(0x8030,uVar1 & 0xf7ff);
  FUN_00212ad0();
  return;
}


// ==== FUN_0021328c @ 0021328c ====

void FUN_0021328c(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (*(char *)(DAT_00213304 + 0x213294) != '\x01') {
    uVar4 = 1;
    *(char *)(DAT_00213304 + 0x213294) = '\x01';
    uVar1 = FUN_00212a9a(0x803a);
    if ((int)(uVar1 << 0x17) < 0) {
      if ((uVar1 & 0x7ff) >> 9 == 3) {
        FUN_00212dc4();
        puVar3 = (undefined1 *)(DAT_00213318 + 0x213302);
      }
      else {
        if ((uVar1 & 0x800) != 0) {
LAB_002132b8:
          FUN_00212dc4();
          iVar2 = FUN_00212a9a(0x802e);
          bVar5 = -1 < iVar2 << 0x18;
          if (bVar5) {
            iVar2 = DAT_00213314 + 0x2132f6;
          }
          else {
            FUN_002127e8(DAT_00213308 + 0x2132ce);
            iVar2 = DAT_0021330c + 0x2132d8;
          }
          *(bool *)iVar2 = bVar5;
          return;
        }
        iVar2 = FUN_002118cc();
        if (iVar2 == 0xb005) goto LAB_002132b8;
        FUN_00212dc4();
        puVar3 = (undefined1 *)(DAT_00213310 + 0x2132ee);
        uVar4 = 0;
      }
      *puVar3 = uVar4;
    }
  }
  return;
}


// ==== FUN_0021331c @ 0021331c ====

bool FUN_0021331c(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_28 [8];
  
  iVar13 = DAT_00213714 + 0x213332;
  FUN_00212552(0x108,0x3df);
  FUN_00212ce2(auStack_28);
  iVar4 = FUN_002129b8(auStack_28);
  if (iVar4 == 0) {
    iVar4 = FUN_002129e6(auStack_28);
    bVar1 = false;
    if (iVar4 == 0) {
      bVar1 = true;
      FUN_002127e8(DAT_00213718 + 0x213356);
    }
  }
  else {
    bVar1 = false;
  }
  iVar4 = FUN_00212ab2();
  if ((iVar4 != 0) || (bVar1)) {
LAB_002133a2:
    iVar4 = FUN_0021304c();
    if (iVar4 != 0) goto LAB_00213428;
  }
  else {
    uVar2 = FUN_00212a9a(0x8000);
    FUN_00212552(0x8000,uVar2 | 0x4320);
    iVar4 = FUN_00212ad0();
    if ((iVar4 != 0) && (iVar4 = FUN_00212d98(), iVar4 != 0)) {
      iVar4 = FUN_00212a9a(0x8028);
      if ((iVar4 == 0xa357) && (iVar4 = FUN_00212a9a(0x802a), iVar4 == 0x67d2)) {
        uVar5 = FUN_00212a9a(0x802c);
        if ((uVar5 & 0x1f00) == 0) {
          FUN_00212b10();
        }
        iVar4 = FUN_00212a9a(0x8026);
        if (iVar4 << 0x1a < 0) {
          uVar5 = FUN_00212c54();
          uVar5 = uVar5 & 0x1f | 0x2400;
        }
        else {
          uVar5 = FUN_00212a9a(0x8026);
          if ((uVar5 & 0x1f) != 0) {
            FUN_00212b38(3);
            FUN_00214da8(200);
          }
          uVar5 = 0;
        }
        FUN_00212b38(uVar5);
        uVar5 = FUN_00212a9a(0x8030);
        FUN_00212552(0x8030,uVar5 & 0xff7f);
        FUN_00212ad0();
        FUN_00212a9a(0x8030);
        goto LAB_00213428;
      }
      goto LAB_002133a2;
    }
  }
  FUN_002130ac();
LAB_00213428:
  uVar2 = FUN_00212a9a(0x8000);
  FUN_00212552(0x8000,uVar2 | 0x4320);
  FUN_00212ad0();
  uVar2 = FUN_00212a9a(0x130);
  FUN_00212552(0x130,uVar2 | 0x100);
  FUN_00212552(0x108,0x3ff);
  uVar5 = FUN_00212a9a(0x802c);
  uVar6 = FUN_00212a9a(0x802e);
  FUN_00212552(0x802c,uVar5 & 0x7fbf);
  FUN_00212552(0x802e,uVar6 & 0xffef);
  FUN_00212ad0();
  uVar2 = FUN_00212a9a(0x8030);
  iVar4 = FUN_00212a9a(0x8026);
  if (iVar4 << 0x1a < 0) {
    uVar2 = uVar2 & 0xffbf;
  }
  else {
    uVar2 = uVar2 | 0x40;
  }
  FUN_00212552(0x8030,uVar2);
  FUN_00212ad0();
  FUN_0021328c();
  uVar2 = FUN_00212a9a(0x8000);
  FUN_00212552(0x8000,uVar2 | 0x4320);
  FUN_00212ad0();
  iVar4 = FUN_00212a9a(0x8002);
  uVar5 = FUN_00212a9a(0x802c);
  uVar6 = FUN_00212a9a(0x802e);
  uVar7 = FUN_00212a9a(0x8030);
  uVar8 = FUN_00212a9a(0x8032);
  if (iVar4 << 0x1f < 0) {
    uVar2 = FUN_00212a9a(0x8000);
    FUN_00212552(0x8000,uVar2 | 0x4308);
    FUN_00212ad0();
    if ((uVar5 & 0x80) != 0) {
      uVar9 = FUN_00212a9a(0x800a);
      local_44 = FUN_00212a9a(0x800c);
      local_40 = FUN_00212a9a(0x800e);
      uVar10 = FUN_00212a9a(0x8010);
      uVar11 = FUN_00212a9a(0x8014);
      sVar3 = FUN_00212a9a(0x8016);
      uVar12 = FUN_00212a9a(0x800a);
      if (uVar12 < uVar9) {
        uVar9 = FUN_00212a9a(0x800a);
        local_44 = FUN_00212a9a(0x800c);
        local_40 = FUN_00212a9a(0x800e);
        uVar10 = FUN_00212a9a(0x8010);
        uVar11 = FUN_00212a9a(0x8014);
        sVar3 = FUN_00212a9a(0x8016);
      }
      uVar16 = (uVar8 & 0x7ff) >> 6;
      uVar14 = (uVar8 & 0x7ffffff) >> 0xb;
      uVar12 = FUN_00212a1e(sVar3 + 0x7b0,uVar11,uVar10,local_40,local_44,uVar9);
      uVar15 = (uVar6 & 0x7fff) >> 8;
      uVar9 = FUN_00212a1e(uVar15 + 0x7b0,uVar6 & 0xf,uVar14,uVar16,uVar8 & 0x3f,uVar7 & 0x3f);
      if ((uVar9 - 1 <= uVar12) && (uVar12 <= uVar9 + 4)) {
        FUN_00212552(0x802c,uVar5 & 0xff3f | 0x40);
        FUN_00212552(0x802e,uVar6 & 0xffff | 0x10);
        FUN_00212ad0();
        if (-1 < (int)(uVar6 << 0x10)) {
          **(undefined4 **)(iVar13 + DAT_0021371c) = 7;
        }
        return true;
      }
      if (uVar12 < uVar9) {
        FUN_00212552(0x8024,uVar15);
        uVar12 = FUN_00212a9a(0x8022);
        FUN_00212552(0x8022,uVar12 & 0xff00 | uVar6 & 0xf);
        uVar6 = FUN_00212a9a(0x801e);
        FUN_00212552(0x801e,uVar6 & 0xff00 | uVar14);
        uVar6 = FUN_00212a9a(0x801c);
        FUN_00212552(0x801c,uVar6 & 0xff00 | uVar16);
        FUN_00212552(0x801a,uVar8 & 0x3f);
        FUN_00212552(0x8018,uVar7 & 0x3f);
        FUN_00212552(0x8008,0x10);
        FUN_00212ad0();
        uVar2 = FUN_00212a9a(0x8004);
        FUN_00212552(0x8004,uVar2 | 5);
        FUN_00212ad0();
      }
    }
  }
  return (uVar5 & 0x30) == 0x10;
}


// ==== FUN_00213720 @ 00213720 ====

undefined4 FUN_00213720(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar1;
  undefined4 unaff_r6;
  undefined4 uVar2;
  undefined4 unaff_r7;
  int iVar3;
  undefined4 unaff_r9;
  
  if (*param_1 != 0x53535353) {
    FUN_00214b30(DAT_0021375c,param_3,0x40);
    FUN_00214b30(DAT_00213760,param_1,param_2);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = 0x80;
    param_1 = DAT_0021375c;
  }
  iVar1 = DAT_00218218 + 0x2181aa;
  if (param_4 == 0x80) {
    iVar3 = DAT_00218220 + 0x2181c2;
    FUN_002127e8(DAT_00218224 + 0x2181c8,iVar3,(char)*param_1,*(undefined1 *)((int)param_1 + 1),
                 *(undefined1 *)((int)param_1 + 2),*(undefined1 *)((int)param_1 + 3),param_3,
                 unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r9);
    uVar2 = *(undefined4 *)(iVar1 + DAT_00218228);
    FUN_0021aa40(param_1,param_2,uVar2);
    FUN_002127e8(DAT_0021822c + 0x2181e2,iVar3);
    param_4 = FUN_0021993a(*(undefined4 *)(iVar1 + DAT_00218230),0x14,uVar2,param_3);
    if (param_4 == 0) {
      FUN_002127e8(DAT_00218238 + 0x21820c);
      return 0;
    }
    iVar1 = DAT_00218234 + 0x2181fe;
  }
  else {
    iVar1 = DAT_0021821c + 0x2181b2;
  }
  FUN_002127e8(iVar1,param_4);
  return 0xffffffff;
}


// ==== FUN_00213884 @ 00213884 ====

undefined4 FUN_00213884(void)

{
  return 0;
}


// ==== FUN_00213888 @ 00213888 ====

undefined4 FUN_00213888(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_00214d5a(DAT_00213974,DAT_00213978,param_3,param_4,param_4);
  puVar1 = DAT_00213980;
  if (param_1 == 0) {
    if (param_2 != 0) {
      do {
      } while (-1 < *DAT_0021397c << 0xf);
    }
    FUN_00214d5a(*DAT_00213980 | 2,DAT_00213980);
    FUN_00214d5a(*puVar1 | 0x20,puVar1);
    FUN_00214d5a(*puVar1 & 0xffffffbf,puVar1);
    FUN_00214d5a(*DAT_00213984 | 1);
    FUN_00214d5a(*puVar1 & 0xfffffffe,puVar1);
    FUN_00214d5a(*puVar1 | 0x10,puVar1);
    FUN_00214d5a(*puVar1 & 0xfffffffb,puVar1);
    uVar2 = *puVar1 & 0xfffffff7;
  }
  else {
    FUN_00214d5a(*DAT_00213980 | 4,DAT_00213980);
    thunk_FUN_00214da8(1);
    FUN_00214d5a(*puVar1 | 8,puVar1);
    FUN_00214d5a(*puVar1 & 0xfffffffd,puVar1);
    FUN_00214d5a(*DAT_00213984 & 0xfffffffe);
    thunk_FUN_00214da8(1);
    FUN_00214d5a(*puVar1 | 0x40,puVar1);
    FUN_00214d5a(*puVar1 & 0xffffffdf,puVar1);
    FUN_00214d5a(*puVar1 & 0xffffffef,puVar1);
    uVar2 = *puVar1 | 1;
  }
  FUN_00214d5a(uVar2,puVar1);
  return 0;
}


// ==== FUN_00214a64 @ 00214a64 ====

byte * FUN_00214a64(byte *param_1,uint param_2)

{
  byte bVar1;
  
  do {
    bVar1 = *param_1;
    if (bVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return (byte *)0x0;
}


// ==== FUN_00214a7c @ 00214a7c ====

int FUN_00214a7c(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  do {
    do {
      pcVar5 = param_1;
      cVar1 = *pcVar5;
      param_1 = pcVar5 + 1;
    } while (cVar1 == ' ');
  } while (cVar1 == '\t');
  if (cVar1 == '-') {
    bVar2 = true;
    pcVar5 = param_1;
  }
  else {
    if (cVar1 == '+') {
      pcVar5 = param_1;
    }
    bVar2 = false;
  }
  pcVar5 = pcVar5 + -1;
  iVar4 = 0;
  iVar6 = DAT_00214ad0 + 0x214aae;
  while( true ) {
    pcVar5 = pcVar5 + 1;
    if ((*pcVar5 == '\0') || (iVar3 = FUN_00214a64(iVar6), iVar3 == 0)) break;
    iVar4 = iVar4 * 10 + (iVar3 - iVar6);
  }
  if (bVar2) {
    return -iVar4;
  }
  return iVar4;
}


// ==== FUN_00214ad4 @ 00214ad4 ====

int FUN_00214ad4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  return (int)pcVar2 - (int)param_1;
}


// ==== FUN_00214ae4 @ 00214ae4 ====

int FUN_00214ae4(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 0;
  do {
    pcVar1 = (char *)(param_1 + iVar2);
    cVar3 = *pcVar1 - *(char *)(param_2 + iVar2);
    if (cVar3 != '\0') break;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  return (int)cVar3;
}


// ==== FUN_00214b20 @ 00214b20 ====

void FUN_00214b20(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


// ==== FUN_00214b30 @ 00214b30 ====

void FUN_00214b30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}


// ==== FUN_00214b42 @ 00214b42 ====

int FUN_00214b42(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (param_3 - iVar4 < 1) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar4);
    pbVar2 = (byte *)(param_2 + iVar4);
    iVar4 = iVar4 + 1;
    iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
  } while (iVar3 == 0);
  return iVar3;
}


// ==== FUN_00214b60 @ 00214b60 ====

int FUN_00214b60(undefined1 param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = param_1;
  iVar2 = DAT_00214b94;
  FUN_00214b98[DAT_00214b94 + 4] = (code)0x60;
  *(undefined1 *)(iVar2 + 0x214b9e) = 0;
  *(undefined4 *)(iVar2 + 0x214b8c) = 100;
  *(undefined2 *)(iVar2 + 0x214b70) = 1;
  *(undefined1 *)(iVar2 + 0x214ba5) = 1;
  *(undefined4 *)(iVar2 + 0x214b80) = 1;
  uVar1 = FUN_00209218();
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


// ==== FUN_00214b98 @ 00214b98 ====

int FUN_00214b98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  iVar3 = DAT_00214bd8;
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT11((char)param_2,(char)param_1);
  iVar1 = DAT_00214bd8 + 0x214bae;
  FUN_00214bdc[DAT_00214bd8 + 2] = (code)0x60;
  *(undefined1 *)(iVar3 + 0x214be0) = 0;
  *(undefined4 *)(iVar3 + 0x214bce) = 100;
  *(undefined2 *)(iVar3 + 0x214bb2) = 1;
  *(undefined1 *)(iVar3 + 0x214be7) = 1;
  *(undefined4 *)(iVar3 + 0x214bc2) = 1;
  uStack_8 = param_3;
  uVar2 = FUN_002091b0(iVar1,&local_c,2,1,param_1);
  iVar3 = 1 - uVar2;
  if (1 < uVar2) {
    iVar3 = 0;
  }
  return iVar3;
}


// ==== FUN_00214bdc @ 00214bdc ====

void FUN_00214bdc(undefined4 param_1,undefined1 *param_2,int param_3,uint param_4)

{
  undefined4 uStack_14;
  
  uStack_14 = (uint)param_2 & 0xffffff;
  FUN_00214b60(param_1,(int)&uStack_14 + 3,param_3,0,param_1);
  *param_2 = (char)((int)(param_3 << (param_4 & 0xff) & uStack_14 >> 0x18) >> (param_4 & 0xff));
  return;
}


// ==== FUN_00214c02 @ 00214c02 ====

void FUN_00214c02(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_00214b60(param_1,&stack0xffffffe7,param_3,0,param_1,param_2 & 0xffffff);
  FUN_00214b98(param_1);
  return;
}


// ==== FUN_00214c98 @ 00214c98 ====

undefined4 FUN_00214c98(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uStack_14;
  
  uStack_14 = param_2 & 0xffffff;
  iVar1 = FUN_00214bdc(param_1 & 0xff,(int)&uStack_14 + 3,0x80,0,param_1);
  if (iVar1 == 0) {
    FUN_002127e8(DAT_00214ce8 + 0x214cb8);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00200a00(param_2 - 600000,0x30d4);
    if (iVar1 < 0x40) {
      bVar3 = uStack_14._3_1_ | (byte)iVar1;
    }
    else {
      bVar3 = uStack_14._3_1_ | 0x3f;
    }
    uVar2 = FUN_00214b98(param_1 & 0xff,bVar3);
  }
  return uVar2;
}


// ==== FUN_00214d5a @ 00214d5a ====

void FUN_00214d5a(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  DataSynchronizationBarrier(0xf);
  return;
}


// ==== FUN_00214d60 @ 00214d60 ====

undefined4 FUN_00214d60(void)

{
  return *DAT_00214d68;
}


// ==== FUN_00214d6c @ 00214d6c ====

bool FUN_00214d6c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00214d60();
  uVar2 = uVar1 - param_1;
  if (uVar1 < param_1) {
    uVar2 = uVar2 - 1;
  }
  return param_2 <= uVar2;
}


// ==== FUN_00214d90 @ 00214d90 ====

int FUN_00214d90(uint param_1)

{
  if (param_1 <= DAT_00214da4) {
    return param_1 * 0xd;
  }
  return -1;
}


// ==== FUN_00214da8 @ 00214da8 ====

void FUN_00214da8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00214d90();
  uVar2 = FUN_00214d60();
  do {
    iVar3 = FUN_00214d6c(uVar2,uVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_00214dc4 @ 00214dc4 ====

void FUN_00214dc4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00214e04 < param_1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00200a00(param_1 * 0x208 + 999,1000,param_3,DAT_00214e04,param_4);
    iVar1 = param_1 * 13000 + iVar1;
  }
  uVar2 = FUN_00214d60();
  do {
    iVar3 = FUN_00214d6c(uVar2,iVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_00214e08 @ 00214e08 ====

uint FUN_00214e08(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00200a00(*DAT_00214e78 + 12999,13000,param_3,DAT_00214e78,param_1,param_2,param_3);
  puVar2 = (uint *)(DAT_00214e7c + 0x214e24);
  if (uVar1 < *puVar2) {
    *(int *)(DAT_00214e84 + 0x214e44) =
         (uVar1 + *(int *)(DAT_00214e84 + 0x214e44) + 0x50a8e) - *puVar2;
  }
  else {
    *(int *)(DAT_00214e80 + 0x214e32) = (uVar1 + *(int *)(DAT_00214e80 + 0x214e32)) - *puVar2;
  }
  *(uint *)(DAT_00214e88 + 0x214e5e) = uVar1;
  uVar1 = *(uint *)(DAT_00214e8c + 0x214e64);
  if (uVar1 < param_1) {
    uVar1 = ~(param_1 - uVar1);
  }
  else {
    uVar1 = uVar1 - param_1;
  }
  return uVar1;
}


// ==== thunk_FUN_00214dc4 @ 00214e90 ====

void thunk_FUN_00214dc4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00214e04 < param_1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00200a00(param_1 * 0x208 + 999,1000,param_3,DAT_00214e04,param_4);
    iVar1 = param_1 * 13000 + iVar1;
  }
  uVar2 = FUN_00214d60();
  do {
    iVar3 = FUN_00214d6c(uVar2,iVar1);
  } while (iVar3 == 0);
  return;
}


// ==== thunk_FUN_00214da8 @ 00214e94 ====

void thunk_FUN_00214da8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00214d90();
  uVar2 = FUN_00214d60();
  do {
    iVar3 = FUN_00214d6c(uVar2,uVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_002151dc @ 002151dc ====

void FUN_002151dc(int *param_1)

{
  *param_1 = *(int *)(DAT_002151ec + 0x2151e2) + -0x200000;
  return;
}


// ==== FUN_002151f0 @ 002151f0 ====

void FUN_002151f0(int *param_1)

{
  *param_1 = *(int *)(DAT_00215200 + 0x2151f6) + 0x200000;
  return;
}


// ==== FUN_002156b4 @ 002156b4 ====

void FUN_002156b4(int param_1)

{
  uint uVar1;
  
  if (param_1 == DAT_002156f8) {
    uVar1 = *DAT_002156fc | 0x400000;
  }
  else if (param_1 == DAT_00215700) {
    uVar1 = *DAT_002156fc | 0x800000;
  }
  else if (param_1 == DAT_00215704) {
    uVar1 = *DAT_002156fc | 0x1000000;
  }
  else {
    if (param_1 != DAT_00215708) {
      return;
    }
    uVar1 = *DAT_002156fc | 0x2000000;
  }
  *DAT_002156fc = uVar1;
  return;
}


// ==== FUN_0021570c @ 0021570c ====

void FUN_0021570c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint extraout_r1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  
  if (param_2 < 0x1c201) {
    uVar4 = 0x10;
    uVar5 = 0;
  }
  else {
    uVar4 = 4;
    uVar5 = 2;
  }
  iVar3 = DAT_0021577c + 0x21573a;
  uVar1 = FUN_00200a00(param_1,param_2 * uVar4);
  FUN_00200a98(param_1,param_2 * uVar4);
  piVar2 = *(int **)(iVar3 + DAT_00215780);
  *(undefined2 *)(*piVar2 + 0x24) = uVar5;
  if ((uVar4 >> 1) * param_2 <= extraout_r1) {
    uVar1 = uVar1 + 1;
  }
  *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) | 0x80;
  *(uint *)*piVar2 = uVar1 & 0xff;
  *(uint *)(*piVar2 + 4) = (uVar1 & 0xffff) >> 8;
  *(undefined4 *)(*piVar2 + 0xc) = 3;
  return;
}


// ==== FUN_00215784 @ 00215784 ====

void FUN_00215784(undefined4 param_1)

{
  **(undefined4 **)(DAT_00215790 + 0x21578c + DAT_00215794) = param_1;
  return;
}


// ==== FUN_00215798 @ 00215798 ====

void FUN_00215798(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_00208490(DAT_0021585c,1);
  FUN_00208406(DAT_0021585c,1);
  FUN_00208490(DAT_00215860,1);
  FUN_00208406(DAT_00215860,0);
  FUN_00208422(DAT_00215860,1);
  FUN_0020843e(DAT_00215860,1);
  FUN_00208490(DAT_00215864,1);
  FUN_00208406(DAT_00215864,1);
  FUN_00208490(DAT_00215868,1);
  FUN_00208406(DAT_00215868,0);
  FUN_00208422(DAT_00215868,1);
  FUN_0020843e(DAT_00215868,1);
  iVar1 = DAT_00215878;
  if (param_1 == 0) {
    param_1 = DAT_0021586c;
  }
  FUN_00215784(DAT_00215870);
  FUN_002156b4(DAT_00215870);
  piVar3 = *(int **)(iVar1 + 0x21581c + DAT_0021587c);
  *(uint *)(*piVar3 + 8) = *(uint *)(*piVar3 + 8) | 7;
  *(undefined2 *)(*piVar3 + 0xc) = 3;
  FUN_0021570c(param_1,0x1c200);
  FUN_00215784(DAT_00215874);
  FUN_002156b4(DAT_00215874);
  uVar2 = *(uint *)(*piVar3 + 8) | 7;
  *(uint *)(*piVar3 + 8) = uVar2;
  *(undefined2 *)(*piVar3 + 0xc) = 3;
  FUN_0021570c(param_1,param_2,uVar2,param_4);
  return;
}


// ==== FUN_002158b0 @ 002158b0 ====

undefined4 FUN_002158b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_00215964;
  iVar1 = FUN_0021aa74(0x600);
  piVar3 = *(int **)(iVar2 + 0x2158c4 + DAT_00215968);
  *piVar3 = iVar1;
  if (iVar1 == 0) {
    iVar2 = DAT_00215990 + 0x215958;
    iVar1 = DAT_00215994 + 0x21595a;
  }
  else {
    FUN_0020a710(0);
    FUN_00214b20(*piVar3,0,0x600);
    iVar2 = FUN_00201144(param_1,2,3,*piVar3,2,param_2);
    if (iVar2 != 0) {
      FUN_002127e8(DAT_0021596c + 0x2158fa,DAT_00215970 + 0x2158fc,iVar2);
      FUN_0021aafc(*piVar3);
      return 0;
    }
    iVar1 = *piVar3;
    iVar2 = FUN_00214ad4(iVar1 + 0x108);
    if (iVar2 != 0) {
      iVar2 = FUN_00215af0(DAT_00215974 + 0x215924,iVar1 + 0x108,0x100);
      if (iVar2 != 0) {
        FUN_002127e8(DAT_00215980 + 0x215940,DAT_00215984 + 0x215942);
        return 0;
      }
      FUN_002127e8(DAT_00215978 + 0x215932,DAT_0021597c + 0x215934);
      return 1;
    }
    iVar2 = DAT_00215988 + 0x21594e;
    iVar1 = DAT_0021598c + 0x215950;
  }
  FUN_002127e8(iVar2,iVar1);
  return 0;
}


// ==== FUN_00215998 @ 00215998 ====

undefined4 FUN_00215998(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_00214b30(&iStack_20,DAT_002159e8 + 0x2159a8,0x10);
  iVar2 = 0;
  do {
    uVar1 = param_1 >> (iVar2 * -4 + 0x18U & 0xff);
    *(undefined1 *)(param_2 + iVar2) = *(undefined1 *)((int)&iStack_20 + ((uVar1 & 0xff) >> 4));
    iVar2 = iVar2 + 2;
    *(undefined1 *)(param_2 + iVar2 + -1) = *(undefined1 *)((int)&iStack_20 + (uVar1 & 0xf));
  } while (iVar2 != 8);
  return 8;
}


// ==== FUN_002159ec @ 002159ec ====

undefined4
FUN_002159ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int iVar2;
  int local_144;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [256];
  
  FUN_00214b20(auStack_140,0,0x20);
  FUN_00214b20(auStack_120,0,0x100);
  local_144 = 0;
  if (param_5 == 0x100) {
    iVar1 = FUN_0021b340(param_4,param_1,auStack_120);
    if (iVar1 == 0) {
      iVar1 = FUN_0021b31a(param_2,param_3,0x78,auStack_140);
      if (iVar1 == 0) {
        iVar1 = FUN_0021b420(auStack_140,0x20,auStack_120,0x100,0x20,0x800,&local_144);
        if (iVar1 == 0) {
          if (local_144 == 1) {
            FUN_002127e8(DAT_00215ae8 + 0x215ab4,DAT_00215aec + 0x215ab6);
            return 0;
          }
          iVar1 = DAT_00215ae0 + 0x215aaa;
          iVar2 = DAT_00215ae4 + 0x215aac;
        }
        else {
          iVar1 = DAT_00215ad8 + 0x215a9a;
          iVar2 = DAT_00215adc + 0x215a9c;
        }
      }
      else {
        iVar1 = DAT_00215ad0 + 0x215a76;
        iVar2 = DAT_00215ad4 + 0x215a78;
      }
    }
    else {
      iVar1 = DAT_00215ac8 + 0x215a56;
      iVar2 = DAT_00215acc + 0x215a58;
    }
    FUN_002127e8(iVar1,iVar2);
  }
  else {
    FUN_002127e8(DAT_00215ac0 + 0x215a3c,DAT_00215ac4 + 0x215a3e,param_5);
  }
  return 0xffffffff;
}


// ==== FUN_00215af0 @ 00215af0 ====

undefined4 FUN_00215af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)FUN_0021aa74(0x79);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0xffffffff;
    FUN_002127e8(DAT_00215b5c + 0x215b50,DAT_00215b60 + 0x215b52);
  }
  else {
    *puVar1 = 0x30;
    puVar1[1] = 0x78;
    uVar2 = FUN_0021afc0(0xd);
    iVar3 = FUN_00215998(uVar2,puVar1 + 2);
    uVar2 = FUN_0021afc0(0xc);
    iVar4 = FUN_00215998(uVar2,puVar1 + iVar3 + 2);
    iVar4 = iVar3 + 2 + iVar4;
    puVar1[iVar4] = 0;
    uVar2 = FUN_002159ec(param_1,puVar1,iVar4,param_2,param_3);
    FUN_0021aafc(puVar1);
  }
  return uVar2;
}


// ==== FUN_00215b64 @ 00215b64 ====

uint FUN_00215b64(uint *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  puVar2 = DAT_00215c00;
  uVar7 = param_1[1];
  uVar9 = *param_1 & 0xf;
  if (uVar9 == 0) {
    uVar7 = *(uint *)(DAT_00215c0c + 0x215b78);
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar1 = *DAT_00215c00;
  *DAT_00215c00 = (char)uVar9;
  puVar3 = DAT_00215c08;
  puVar6 = (undefined4 *)(*(int *)(uVar7 + 0x18) + *(int *)(uVar7 + 0x10));
  uVar8 = (uint)*DAT_00215c04;
  uVar5 = uVar8;
  puVar10 = puVar6;
  if (uVar9 == 0) {
    while (uVar5 != 0) {
      if ((int)uVar5 < 4) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        uVar5 = uVar5 - 1;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      else {
        *puVar10 = *puVar3;
        uVar5 = uVar5 - 4;
        puVar6 = puVar10 + 1;
        puVar10 = puVar10 + 1;
      }
    }
  }
  else {
    iVar4 = (uVar9 - 1) * 0x10;
    *(undefined4 **)(iVar4 + 0x11200208) = puVar6;
    *(uint *)(iVar4 + 0x1120020c) = uVar8;
    *(ushort *)(iVar4 + 0x11200204) = (ushort)(uVar9 << 4) | 0x601;
    do {
    } while ((int)((uint)*(ushort *)(iVar4 + 0x11200204) << 0x1f) < 0);
  }
  *(uint *)(uVar7 + 0x18) = uVar8 + *(int *)(uVar7 + 0x18);
  *puVar2 = uVar1;
  return uVar8;
}


// ==== FUN_00215c10 @ 00215c10 ====

int FUN_00215c10(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(DAT_00215c48 + 0x215c1c) + 0x20) <= iVar1) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(DAT_00215c48 + 0x215c1c) + 0x1c);
    uVar2 = *(uint *)(iVar3 + iVar1 * 0x1c);
    if (((uVar2 & 0xf) == param_1) && ((uVar2 & 0x80) == param_2)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar3 + iVar1 * 0x1c;
}


// ==== FUN_00215c4c @ 00215c4c ====

void FUN_00215c4c(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  ushort uVar4;
  ushort *puVar5;
  
  puVar2 = DAT_00215c90;
  uVar1 = *DAT_00215c90;
  *DAT_00215c90 = (char)param_1;
  if (param_1 == 0) {
    uVar4 = *DAT_00215c94 | 0x100;
    puVar5 = DAT_00215c94;
  }
  else {
    piVar3 = (int *)FUN_00215c10();
    if (*piVar3 << 0x18 < 0) {
      uVar4 = *DAT_00215c94 | 8;
      puVar5 = DAT_00215c94;
    }
    else {
      uVar4 = *DAT_00215c98 | 0x10;
      puVar5 = DAT_00215c98;
    }
  }
  *puVar5 = uVar4;
  *puVar5 = uVar4;
  *puVar2 = uVar1;
  return;
}


// ==== FUN_00215c9c @ 00215c9c ====

uint FUN_00215c9c(uint *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = DAT_00215d1c;
  uVar5 = param_1[3];
  uVar7 = *param_1 & 0xf;
  if (uVar7 == 0) {
    uVar5 = *(uint *)(DAT_00215d20 + 0x215cb2);
  }
  if (uVar5 == 0) {
    return 0;
  }
  uVar1 = *DAT_00215d1c;
  *DAT_00215d1c = (char)uVar7;
  uVar6 = *(int *)(uVar5 + 0x18) - param_1[5];
  if (param_1[4] <= uVar6) {
    uVar6 = param_1[4];
  }
  if ((int)uVar6 < 0) {
    FUN_002127e8(DAT_00215d24 + 0x215ce0);
  }
  else if (uVar6 == 0) goto LAB_00215ce6;
  puVar3 = (undefined1 *)(*(int *)(uVar5 + 0x10) + param_1[5]);
  for (puVar4 = puVar3; 0 < (int)(puVar3 + (uVar6 - (int)puVar4)); puVar4 = puVar4 + 1) {
    *(undefined1 *)((uVar7 + 0x4480008) * 4) = *puVar4;
  }
LAB_00215ce6:
  param_1[6] = uVar6;
  param_1[5] = uVar6 + param_1[5];
  *puVar2 = uVar1;
  return uVar6;
}


// ==== FUN_00215d28 @ 00215d28 ====

void FUN_00215d28(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar4 = DAT_00215d88;
  iVar7 = DAT_00215d94 + 0x215d3a;
  iVar8 = *(int *)(*(int *)(DAT_00215d90 + 0x215d34) + 0x1c);
  uVar3 = *DAT_00215d88;
  *DAT_00215d88 = 0;
  puVar5 = DAT_00215d8c;
  uVar2 = *DAT_00215d8c;
  if ((uVar2 & 2) == 0) {
    iVar6 = FUN_00215c9c(iVar8);
    if (iVar6 < 0x40) {
      uVar1 = 10;
      *(undefined4 *)(*(int *)(DAT_00215d98 + 0x215d6c) + 0x18) = 0;
      iVar6 = DAT_00215d9c;
      *(undefined4 *)(iVar8 + 0x14) = 0;
      **(undefined4 **)(iVar7 + iVar6) = 0;
    }
    else {
      uVar1 = 2;
    }
    *puVar5 = uVar2 | uVar1;
    *puVar4 = uVar3;
  }
  return;
}


// ==== FUN_00215da0 @ 00215da0 ====

void FUN_00215da0(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_r3;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = DAT_00215e38;
  uVar8 = 1;
  *DAT_00215e38 = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 0x6e) = 3;
  iVar7 = *(int *)(DAT_00215e48 + 0x215dbc);
  *(undefined1 *)(iVar7 + 0x14) = 0;
  FUN_00215c4c(0,0,3,iVar7,in_r3);
  do {
    uVar10 = uVar8 & 0xff;
    uVar8 = uVar8 + 1;
    FUN_00215c4c(uVar10,0);
    FUN_00215c4c(uVar10,0x80);
  } while (uVar8 != 4);
  if ((int)((uint)*DAT_00215e3c << 0x1b) < 0) {
    FUN_002127e8(DAT_00215e4c + 0x215de8);
    FUN_00216c7c();
  }
  else {
    FUN_002127e8(DAT_00215e58 + 0x215e06);
  }
  puVar3 = DAT_00215e54;
  puVar2 = DAT_00215e44;
  puVar1 = DAT_00215e40;
  iVar7 = 1;
  piVar6 = (int *)(DAT_00215e50 + 0x215dfa);
  while (iVar7 < *(int *)(*piVar6 + 0x20)) {
    *puVar1 = (char)iVar7;
    iVar4 = iVar7 * 0x1c;
    iVar7 = iVar7 + 1;
    iVar9 = *(int *)(*piVar6 + 0x1c);
    iVar5 = iVar9 + iVar4;
    if (*(int *)(iVar9 + iVar4) << 0x18 < 0) {
      *puVar3 = *(undefined4 *)(iVar5 + 8);
    }
    else {
      *puVar2 = *(undefined4 *)(iVar5 + 0x10);
    }
  }
  return;
}


// ==== FUN_00215e5c @ 00215e5c ====

void FUN_00215e5c(int param_1,byte *param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = param_4 - *(int *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    if ((int)param_3 <= (int)uVar1) {
      uVar1 = param_3;
    }
    if ((int)(uint)*param_2 <= (int)uVar1) {
      uVar1 = (uint)*param_2;
    }
    FUN_00214b30(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10),param_2,uVar1);
    *(uint *)(param_1 + 0x18) = uVar1 + *(int *)(param_1 + 0x18);
  }
  return;
}


// ==== FUN_00215e8c @ 00215e8c ====

void FUN_00215e8c(uint param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ushort uVar17;
  int *piVar18;
  int iVar19;
  byte bVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint local_44;
  
  iVar22 = DAT_00216170 + 0x215e9e;
  if ((param_3 != 0) && (param_3 << 0x1d < 0)) {
    **(undefined4 **)(iVar22 + DAT_00216174) = 1;
    FUN_00215da0();
  }
  iVar15 = DAT_00216178;
  puVar5 = DAT_0021616c;
  puVar4 = DAT_00216168;
  local_44 = param_1;
  if (-1 < (int)(param_1 << 0x1f)) goto LAB_00216350;
  uVar1 = *DAT_00216168;
  *DAT_00216168 = 0;
  piVar21 = *(int **)(iVar22 + iVar15);
  uVar14 = (uint)*puVar5;
  if ((*puVar5 & 4) != 0) {
    uVar14 = uVar14 & 0xfffffffb;
    *puVar5 = (ushort)uVar14;
    *piVar21 = 0;
  }
  if ((int)(uVar14 << 0x1b) < 0) {
    *puVar5 = (ushort)uVar14 | 0x80;
    *piVar21 = 0;
  }
  iVar15 = *piVar21;
  if (iVar15 == 1) {
    uVar2 = *puVar4;
    uVar6 = *(undefined4 *)(*(int *)(DAT_0021649c + 0x21631a) + 0x1c);
    *puVar4 = 0;
    uVar17 = *puVar5;
    if ((int)((uint)uVar17 << 0x1f) < 0) {
      iVar22 = FUN_00215b64(uVar6);
      if (iVar22 < 0x41) {
        *piVar21 = 0;
        uVar17 = uVar17 | 0x48;
      }
      else {
        uVar17 = uVar17 | 0x40;
      }
      *puVar5 = uVar17;
      *puVar4 = uVar2;
    }
    goto LAB_00216344;
  }
  if (iVar15 != 0) {
    if (iVar15 == 2) {
      FUN_00215d28();
    }
    goto LAB_00216344;
  }
  piVar16 = *(int **)(iVar22 + DAT_0021617c);
  if (*piVar16 != 0) {
    DAT_11200000 = *(undefined1 *)(*(int *)(DAT_00216180 + 0x215f1a) + 0x14);
    *piVar16 = 0;
  }
  uVar6 = *(undefined4 *)(*(int *)(DAT_00216184 + 0x215f2c) + 0x1c);
  uVar2 = *puVar4;
  *puVar4 = 0;
  if (-1 < (int)((uint)*puVar5 << 0x1f)) goto LAB_00216344;
  piVar18 = (int *)(DAT_00216188 + 0x215f46);
  iVar15 = *piVar18;
  *(undefined4 *)(iVar15 + 0x18) = 0;
  FUN_00215b64(uVar6);
  FUN_00214b30(iVar15 + 8,*(undefined4 *)(iVar15 + 0x10),8);
  bVar10 = *(byte *)(iVar15 + 8) & 0x60;
  if ((*(byte *)(iVar15 + 8) & 0x60) != 0) {
    if (bVar10 != 0x20) {
      if (bVar10 == 0x40) {
        FUN_002127e8(DAT_00216498 + 0x21630a);
      }
      goto LAB_00216410;
    }
    iVar7 = *piVar18;
    switch(*(undefined1 *)(iVar7 + 9)) {
    case 0x20:
      *piVar21 = 1;
      FUN_00216c54();
      break;
    case 0x21:
      FUN_00214b30(*(undefined4 *)(iVar7 + 0x10),DAT_00216478 + 0x216268,7);
      *(undefined4 *)(iVar7 + 0x18) = 7;
      *piVar21 = 2;
      break;
    case 0x22:
      **(uint **)(iVar22 + DAT_0021647c) = (uint)*(ushort *)(iVar7 + 10);
      break;
    case 0x23:
      break;
    default:
      cVar13 = -1;
      goto LAB_00216288;
    }
    cVar13 = '\0';
LAB_00216288:
    if (cVar13 == '\0') goto LAB_00216410;
    FUN_002127e8(DAT_00216480 + 0x216296);
    FUN_002127e8(DAT_00216484 + 0x2162a0,*(undefined1 *)(iVar15 + 8));
    FUN_002127e8(DAT_00216488 + 0x2162aa,*(undefined1 *)(iVar15 + 9));
    FUN_002127e8(DAT_0021648c + 0x2162ba,*(undefined2 *)(iVar15 + 10));
    FUN_002127e8(DAT_00216490 + 0x2162ca,*(undefined2 *)(iVar15 + 0xc));
    uVar2 = *(undefined1 *)(iVar15 + 0xe);
    uVar12 = *(undefined1 *)(iVar15 + 0xf);
    iVar22 = DAT_00216494 + 0x2162d6;
    goto LAB_002162d4;
  }
  iVar19 = *piVar18;
  iVar7 = *(int *)(iVar19 + 4);
  puVar11 = *(undefined1 **)(iVar19 + 0x10);
  if (iVar7 == 0) goto switchD_00215f94_caseD_1;
  bVar10 = *(byte *)(iVar19 + 8);
  bVar20 = bVar10 & 0x60;
  if ((bVar10 & 0x60) != 0) goto switchD_00215f94_caseD_1;
  cVar13 = *(char *)(iVar19 + 9);
  if ((bVar10 & 0x80) == 0) {
    if (cVar13 == '\x05') {
      *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(iVar19 + 10);
      *piVar16 = 1;
    }
    else {
      if (cVar13 != '\t') {
        if (cVar13 == '\x01') {
          if ((bVar10 & 0x1f) == 2) {
            FUN_002127e8(DAT_00216458 + 0x2161d8,*(byte *)(iVar19 + 0xc) & 0xf,
                         *(byte *)(iVar19 + 0xc) & 0x80);
            goto LAB_002161e8;
          }
          FUN_002127e8(DAT_0021645c + 0x2161e2);
        }
        goto switchD_00215f94_caseD_1;
      }
      bVar10 = *(byte *)(iVar19 + 10);
      *(byte *)(iVar7 + 0x17) = bVar20;
      *(byte *)(iVar7 + 0x16) = bVar20;
      *(byte *)(iVar7 + 0x15) = bVar10 & 0x7f;
      FUN_00216cd8();
    }
    goto LAB_002161e8;
  }
  *piVar21 = 2;
  switch(cVar13) {
  case '\0':
    *(undefined4 *)(iVar19 + 0x18) = 2;
    puVar11[1] = 0;
    *puVar11 = 0;
    if ((*(byte *)(iVar19 + 8) & 0x1f) == 0) {
      *puVar11 = 1;
    }
    else if ((*(byte *)(iVar19 + 8) & 0x1f) == 3) {
      *(undefined4 *)(iVar19 + 0x18) = 0;
    }
    goto LAB_0021602c;
  case '\x06':
    uVar3 = *(undefined2 *)(iVar19 + 0xe);
    uVar14 = (uint)(byte)*(ushort *)(iVar19 + 10);
    if ((puVar11 != (undefined1 *)0x0) && (0xfe < *(uint *)(iVar19 + 0x14))) {
      *(undefined4 *)(iVar19 + 0x18) = 0;
      switch(*(ushort *)(iVar19 + 10) >> 8) {
      case 1:
        puVar11 = *(undefined1 **)(iVar7 + 4);
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 0x12;
          goto LAB_00216026;
        }
        break;
      case 2:
        if (uVar14 != 0) {
          uVar14 = uVar14 - 1;
        }
        if (((int)uVar14 < *(int *)(iVar7 + 0xc)) &&
           (iVar22 = uVar14 * 0xc + *(int *)(iVar7 + 0x10), iVar22 != 0)) {
          iVar7 = *(int *)(iVar22 + 4);
          FUN_00215e5c(iVar19,iVar7,9,uVar3);
          for (iVar24 = 0; iVar24 < (int)(uint)*(byte *)(iVar7 + 4); iVar24 = iVar24 + 1) {
            piVar16 = *(int **)(*(int *)(iVar22 + 8) + iVar24 * 4);
            if (piVar16 == (int *)0x0) goto switchD_00215f94_caseD_1;
            for (iVar25 = 0; iVar25 < *piVar16; iVar25 = iVar25 + 1) {
              iVar23 = piVar16[1] + iVar25 * 0x1c;
              if ((iVar23 == 0) || (iVar8 = *(int *)(piVar16[1] + iVar25 * 0x1c), iVar8 == 0))
              goto switchD_00215f94_caseD_1;
              FUN_00215e5c(iVar19,iVar8,9,uVar3);
              if (*(int *)(iVar23 + 4) != 0) {
                FUN_00215e5c(iVar19,*(int *)(iVar23 + 4),5,uVar3);
              }
              if (*(int *)(iVar23 + 8) != 0) {
                FUN_00215e5c(iVar19,*(int *)(iVar23 + 8),4,uVar3);
              }
              if (*(int *)(iVar23 + 0xc) != 0) {
                FUN_00215e5c(iVar19,*(int *)(iVar23 + 0xc),5,uVar3);
              }
              if (*(int *)(iVar23 + 0x10) != 0) {
                FUN_00215e5c(iVar19,*(int *)(iVar23 + 0x10),5,uVar3);
              }
              for (iVar8 = 0; iVar8 < *(int *)(iVar23 + 0x14); iVar8 = iVar8 + 1) {
                iVar9 = *(int *)(*(int *)(iVar23 + 0x18) + iVar8 * 4);
                if (iVar9 == 0) goto switchD_00215f94_caseD_1;
                FUN_00215e5c(iVar19,iVar9,8,uVar3);
              }
            }
          }
          goto LAB_0021602c;
        }
        break;
      case 3:
        puVar11 = *(undefined1 **)(**(int **)(iVar22 + DAT_0021618c) + uVar14 * 4);
        uVar12 = *puVar11;
LAB_00216026:
        FUN_00215e5c(iVar19,puVar11,uVar12,uVar3);
        goto LAB_0021602c;
      case 6:
        puVar11 = *(undefined1 **)(iVar7 + 8);
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 9;
          goto LAB_00216026;
        }
      }
    }
  default:
switchD_00215f94_caseD_1:
    bVar20 = 0xff;
    break;
  case '\b':
    *(undefined4 *)(iVar19 + 0x18) = 1;
    uVar12 = *(undefined1 *)(iVar7 + 0x15);
    goto LAB_00216164;
  case '\n':
    *(undefined4 *)(iVar19 + 0x18) = 1;
    uVar12 = *(undefined1 *)(iVar7 + 0x17);
LAB_00216164:
    *puVar11 = uVar12;
LAB_0021602c:
    bVar20 = 0;
  }
LAB_002161e8:
  if (bVar20 == 0) {
LAB_00216410:
    iVar22 = *piVar21;
    if (iVar22 == 1) {
      uVar17 = *puVar5 | 0x40;
LAB_0021642c:
      *puVar5 = uVar17;
    }
    else {
      if (iVar22 == 0) {
        uVar17 = *puVar5 | 0x48;
        goto LAB_0021642c;
      }
      if (iVar22 == 2) {
        *puVar5 = *puVar5 | 0x40;
        FUN_00215d28();
      }
    }
    *puVar4 = uVar2;
  }
  else {
    FUN_002127e8(DAT_00216460 + 0x2161f6);
    FUN_002127e8(DAT_00216464 + 0x216200,*(undefined1 *)(iVar15 + 8));
    FUN_002127e8(DAT_00216468 + 0x21620a,*(undefined1 *)(iVar15 + 9));
    FUN_002127e8(DAT_0021646c + 0x21621a,*(undefined2 *)(iVar15 + 10));
    FUN_002127e8(DAT_00216470 + 0x21622a,*(undefined2 *)(iVar15 + 0xc));
    uVar2 = *(undefined1 *)(iVar15 + 0xe);
    uVar12 = *(undefined1 *)(iVar15 + 0xf);
    iVar22 = DAT_00216474 + 0x216236;
LAB_002162d4:
    FUN_002127e8(iVar22,CONCAT11(uVar12,uVar2));
    uVar2 = *puVar4;
    *puVar4 = 0;
    FUN_00215c4c(0,0);
    *puVar5 = *puVar5 | 0x20;
    *piVar21 = 0;
    *puVar4 = uVar2;
  }
LAB_00216344:
  *puVar4 = uVar1;
  local_44 = param_1 & 0xfe;
LAB_00216350:
  puVar4 = DAT_00216450;
  if (local_44 != 0) {
    uVar14 = 1;
    do {
      if (((int)local_44 >> (uVar14 & 0xff)) << 0x1f < 0) {
        iVar22 = FUN_00215c10(uVar14,0x80);
        uVar1 = *puVar4;
        *puVar4 = (char)uVar14;
        puVar5 = DAT_002164a0;
        uVar17 = *DAT_002164a0;
        if ((uVar17 & 0x21) == 0) {
          iVar15 = FUN_00215c9c();
          if (iVar15 != 0) {
            *puVar5 = uVar17 | 1;
          }
          if (*(int *)(*(int *)(iVar22 + 0xc) + 0x18) == *(int *)(iVar22 + 0x14)) {
            *(undefined4 *)(*(int *)(iVar22 + 0xc) + 0x18) = 0;
            *(undefined4 *)(iVar22 + 0x14) = 0;
            *(undefined4 *)(iVar22 + 0x18) = 0;
          }
          *puVar4 = uVar1;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 3);
  }
  puVar5 = DAT_00216454;
  puVar4 = DAT_00216450;
  if (param_2 != 0) {
    uVar14 = 1;
    do {
      if ((param_2 >> (uVar14 & 0xff)) << 0x1f < 0) {
        FUN_00215c10(uVar14,0);
        uVar1 = *puVar4;
        *puVar4 = (char)uVar14;
        uVar17 = *puVar5;
        if ((-1 < (int)((uint)uVar17 << 0x19)) && ((int)((uint)uVar17 << 0x1f) < 0)) {
          FUN_00215b64();
          *puVar5 = uVar17 & 0xfffe;
          *puVar4 = uVar1;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 3);
  }
  return;
}


// ==== FUN_002164a4 @ 002164a4 ====

void FUN_002164a4(uint *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar3 = DAT_002164d8;
  uVar5 = *param_1;
  uVar1 = *DAT_002164d8;
  *DAT_002164d8 = (char)(uVar5 & 0xf);
  puVar4 = DAT_002164dc;
  if ((uVar5 & 0xf) != 0) {
    if ((int)(*param_1 << 0x18) < 0) {
      uVar2 = *DAT_002164dc;
      if ((int)((uint)uVar2 << 0x1f) < 0) {
        return;
      }
      FUN_00215c9c();
      *puVar4 = uVar2 | 1;
    }
    *puVar3 = uVar1;
  }
  return;
}


// ==== FUN_002164e0 @ 002164e0 ====

ushort FUN_002164e0(uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  
  pbVar2 = DAT_00216504;
  bVar1 = *DAT_00216504;
  *DAT_00216504 = (byte)*param_1 & 0xf;
  uVar3 = 0;
  if ((*param_1 & 0x80) != 0) {
    uVar3 = *DAT_00216508;
  }
  *pbVar2 = bVar1;
  return uVar3 & 1;
}


// ==== FUN_0021650c @ 0021650c ====

void FUN_0021650c(undefined4 param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar2 = DAT_0021664c;
  iVar4 = DAT_00216670 + 0x216514;
  if (param_2 == 0) {
    return;
  }
  uVar1 = *DAT_0021664c;
  *DAT_0021664c = (char)param_2;
  piVar5 = *(int **)(iVar4 + DAT_00216674);
  if ((*param_3 & 0x80) == 0) {
    *DAT_00216650 = *DAT_00216650 | 0x90;
    *DAT_00216654 = (short)((uint)(*piVar5 << 0xd) >> 0x10);
    uVar7 = param_3[2];
    *DAT_00216658 = (short)uVar7;
    puVar6 = DAT_0021665c;
    if (uVar7 == 0x100) {
      uVar3 = 5;
    }
    else if ((int)uVar7 < 0x101) {
      if (uVar7 == 0x20) {
        uVar3 = 2;
      }
      else if ((int)uVar7 < 0x21) {
        if (uVar7 == 8) {
          *DAT_0021665c = 0;
          goto LAB_00216642;
        }
        if (uVar7 != 0x10) goto LAB_00216642;
        uVar3 = 1;
      }
      else if (uVar7 == 0x40) {
        uVar3 = 3;
      }
      else {
        if (uVar7 != 0x80) goto LAB_00216642;
        uVar3 = 4;
      }
    }
    else if (uVar7 == 0x800) {
      uVar3 = 8;
    }
    else if ((int)uVar7 < 0x801) {
      if (uVar7 == 0x200) {
        uVar3 = 6;
      }
      else {
        if (uVar7 != 0x400) goto LAB_00216642;
        uVar3 = 7;
      }
    }
    else {
      if ((uVar7 != 0xc00) && (uVar7 != 0x1000)) goto LAB_00216642;
      uVar3 = 9;
    }
  }
  else {
    *DAT_00216660 = *DAT_00216660 | 0x48;
    *DAT_00216664 = (short)((uint)(*piVar5 << 0xd) >> 0x10);
    uVar7 = param_3[4];
    *DAT_00216668 = (short)uVar7;
    puVar6 = DAT_0021666c;
    if (uVar7 == 0x100) {
      uVar3 = 5;
    }
    else if ((int)uVar7 < 0x101) {
      if (uVar7 == 0x20) {
        uVar3 = 2;
      }
      else if ((int)uVar7 < 0x21) {
        if (uVar7 == 8) {
          uVar3 = 0;
        }
        else {
          if (uVar7 != 0x10) goto LAB_00216642;
          uVar3 = 1;
        }
      }
      else if (uVar7 == 0x40) {
        uVar3 = 3;
      }
      else {
        if (uVar7 != 0x80) goto LAB_00216642;
        uVar3 = 4;
      }
    }
    else if (uVar7 == 0x800) {
      uVar3 = 8;
    }
    else if ((int)uVar7 < 0x801) {
      if (uVar7 == 0x200) {
        uVar3 = 6;
      }
      else {
        if (uVar7 != 0x400) goto LAB_00216642;
        uVar3 = 7;
      }
    }
    else {
      if ((uVar7 != 0xc00) && (uVar7 != 0x1000)) goto LAB_00216642;
      uVar3 = 9;
    }
  }
  *puVar6 = uVar3;
LAB_00216642:
  *piVar5 = uVar7 + *piVar5;
  *puVar2 = uVar1;
  return;
}


// ==== FUN_00216698 @ 00216698 ====

void FUN_00216698(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  FUN_00216804();
  puVar1 = DAT_002166c8;
  *DAT_002166c8 = 0xffff;
  puVar1[1] = 0xffff;
  *(undefined1 *)(puVar1 + 4) = 0xff;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(DAT_002166cc + 0x2166b6) = param_1;
  uVar2 = FUN_002168f4(param_1,uVar2);
  *(undefined4 *)(DAT_002166d0 + 0x2166c0) = uVar2;
  FUN_00215da0();
  return;
}


// ==== FUN_00216804 @ 00216804 ====

void FUN_00216804(void)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = DAT_00216880;
  *DAT_00216880 = *DAT_00216880 & 0xef;
  pbVar1[0x4e] = pbVar1[0x4e] & 0xfb;
  pbVar1[0x51] = pbVar1[0x51] & 0xfe;
  pbVar1[0x4d] = pbVar1[0x4d] & 0xfb;
  pbVar2 = DAT_00216884;
  *DAT_00216884 = *DAT_00216884 & 0xfc;
  pbVar2[0x47] = pbVar2[0x47] & 0xb;
  pbVar2[0x48] = pbVar2[0x48] & 0xc3;
  pbVar1[0x4d] = pbVar1[0x4d] & 0x45;
  pbVar1[-3] = pbVar1[-3] & 0x7f;
  pbVar1[-3] = pbVar1[-3] | 0x10;
  thunk_FUN_00214da8(800);
  return;
}


// ==== FUN_002168a8 @ 002168a8 ====

void FUN_002168a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_00214ad4(param_1);
    if (iVar1 <= iVar2) {
      return;
    }
    if (*(byte *)(param_1 + iVar2) == 0) break;
    *(ushort *)(param_2 + iVar2 * 2) = (ushort)*(byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
  }
  return;
}


// ==== FUN_002168f4 @ 002168f4 ====

undefined4 * FUN_002168f4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0021693c;
  if (((*param_2 & 0xf) != 0) && (iVar1 = DAT_00216940, (int)(*param_2 << 0x18) < 0)) {
    iVar1 = DAT_00216938;
  }
  puVar2 = *(undefined4 **)(DAT_00216934 + 0x216904 + iVar1);
  FUN_00214b20(puVar2,0,0x41c);
  *puVar2 = param_2;
  puVar2[1] = param_1;
  puVar2[4] = puVar2 + 7;
  puVar2[5] = 0x400;
  return puVar2;
}


// ==== FUN_00216944 @ 00216944 ====

undefined4 FUN_00216944(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  
  iVar6 = DAT_00216ba8;
  iVar1 = DAT_00216ba4;
  iVar11 = 0;
  iVar13 = DAT_00216b98 + 0x21695a;
  iVar3 = DAT_00216ba0 + 0x216966;
  **(undefined4 **)(iVar13 + DAT_00216b9c) = 0;
  puVar15 = (undefined4 *)(iVar1 + 0x216974);
  puVar14 = (undefined4 *)(iVar6 + 0x216978);
  **(undefined4 **)(iVar13 + DAT_00216bac) = 0;
  **(undefined4 **)(iVar13 + DAT_00216bb0) = 0;
  **(undefined4 **)(iVar13 + DAT_00216bb4) = 0x200;
  puVar8 = *(undefined4 **)(iVar13 + DAT_00216bb8);
  *puVar8 = 0;
  FUN_0020150c(iVar3,0x400,0x200,puVar8,param_1,param_2);
  FUN_00201558(DAT_00216bbc + 0x21699a,0x400);
  iVar3 = DAT_00216bc0;
  puVar5 = (undefined1 *)(DAT_00216bc0 + 0x2169a6);
  iVar4 = DAT_00216bc4 + 0x2169a8;
  *(undefined1 *)(DAT_00216bc0 + 0x2169a7) = 3;
  *puVar5 = 0x12;
  FUN_002168a8(iVar4,iVar3 + 0x2169a8);
  iVar3 = DAT_00216bc8;
  iVar4 = DAT_00216bcc + 0x2169bc;
  *(undefined1 *)(DAT_00216bc8 + 0x2169ba) = 0x22;
  *(undefined1 *)(iVar3 + 0x2169bb) = 3;
  FUN_002168a8(iVar4);
  iVar3 = DAT_00216bd0;
  iVar4 = DAT_00216bd4 + 0x2169d4;
  *(undefined1 *)(DAT_00216bd0 + 0x2169d2) = 0x34;
  *(undefined1 *)(iVar3 + 0x2169d3) = 3;
  FUN_002168a8(iVar4);
  iVar3 = DAT_00216bd8;
  iVar4 = DAT_00216bdc + 0x2169ec;
  *(undefined1 *)(DAT_00216bd8 + 0x2169ea) = 0x2e;
  *(undefined1 *)(iVar3 + 0x2169eb) = 3;
  FUN_002168a8(iVar4);
  iVar3 = DAT_00216be0;
  iVar4 = DAT_00216be4 + 0x216a02;
  *(undefined1 *)(DAT_00216be0 + 0x216a01) = 3;
  *(undefined1 *)(iVar3 + 0x216a00) = 0x40;
  FUN_002168a8(iVar4);
  iVar3 = DAT_00216bec;
  iVar12 = DAT_00216bec + 0x216a1c;
  **(int **)(iVar13 + DAT_00216be8) = DAT_00216bf0 + 0x216a1e;
  FUN_00214b20(iVar12,0,0x28);
  iVar4 = DAT_00216bf4;
  *(undefined4 *)(iVar3 + 0x216a28) = 1;
  *(int *)(iVar3 + 0x216a20) = iVar4 + 0x216a32;
  iVar4 = DAT_00216bf8;
  *(undefined4 **)(iVar3 + 0x216a2c) = puVar15;
  *(undefined4 *)(iVar3 + 0x216a3c) = 1;
  *(int *)(iVar3 + 0x216a24) = iVar4 + 0x216a40;
  *(undefined1 *)(iVar3 + 0x216a34) = 0;
  *(undefined4 **)(iVar3 + 0x216a38) = puVar14;
  *(undefined1 *)(iVar3 + 0x216a40) = 0x40;
  FUN_00214b20(puVar15,0,0xc);
  iVar3 = DAT_00216bfc;
  *puVar15 = 2;
  iVar2 = DAT_00216c04;
  iVar4 = DAT_00216c00;
  *(int *)(iVar1 + 0x216978) = iVar3 + 0x216a60;
  iVar3 = DAT_00216c08;
  puVar8 = (undefined4 *)(iVar4 + 0x216a6a);
  puVar17 = (undefined4 *)(iVar2 + 0x216a6e);
  *(undefined4 **)(iVar1 + 0x21697c) = puVar8;
  puVar15 = (undefined4 *)(iVar3 + 0x216a76);
  *puVar8 = puVar17;
  *(undefined4 **)(iVar4 + 0x216a6e) = puVar15;
  FUN_00214b20(puVar17,0,8);
  iVar1 = DAT_00216c0c;
  piVar16 = (int *)(DAT_00216c0c + 0x216a94);
  *puVar17 = 1;
  puVar17[1] = piVar16;
  FUN_00214b20(piVar16,0,0x1c);
  iVar3 = DAT_00216c10;
  *(undefined4 *)(iVar1 + 0x216aa8) = 2;
  iVar4 = DAT_00216c14;
  iVar3 = iVar3 + 0x216ab2;
  *piVar16 = iVar3;
  *(int *)(iVar1 + 0x216aac) = iVar4 + 0x216ab8;
  iVar1 = DAT_00216c18;
  FUN_00214b20(puVar15,0,8);
  piVar16 = (int *)(iVar1 + 0x216ad2);
  *puVar15 = 1;
  puVar15[1] = piVar16;
  FUN_00214b20(piVar16,0,0x1c);
  *piVar16 = iVar3 + 9;
  *(int *)(iVar1 + 0x216ad6) = DAT_00216c1c + 0x216afa;
  *(int *)(iVar1 + 0x216ada) = DAT_00216c20 + 0x216b02;
  *(undefined4 *)(iVar1 + 0x216ade) = *(undefined4 *)(iVar13 + DAT_00216c24);
  uVar9 = *(undefined4 *)(iVar13 + DAT_00216c28);
  *(undefined4 *)(iVar1 + 0x216ae6) = 1;
  iVar3 = DAT_00216c2c;
  *(undefined4 *)(iVar1 + 0x216ae2) = uVar9;
  iVar4 = DAT_00216c34;
  *(int *)(iVar1 + 0x216aea) = DAT_00216c30 + 0x216b26;
  FUN_00214b20(puVar14,0,0x1c);
  *puVar14 = 0;
  *(undefined4 *)(iVar6 + 0x216980) = 0x40;
  *(undefined4 *)(iVar6 + 0x216988) = 0x40;
  iVar1 = DAT_00216c38;
  FUN_0021650c(iVar12,0,puVar14);
  do {
    puVar8 = puVar14 + 7;
    FUN_00214b20(puVar8,0,0x1c);
    iVar6 = iVar3 + 0x216b20 + iVar11;
    uVar10 = (uint)*(byte *)(iVar6 + 2);
    uVar7 = (uint)*(ushort *)(iVar6 + 4);
    puVar14[7] = uVar10;
    puVar14[9] = uVar7;
    puVar14[0xb] = uVar7;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar9 = FUN_002168f4(iVar1 + 0x216b4a,puVar8);
      puVar14[10] = uVar9;
    }
    else {
      uVar9 = FUN_002168f4(iVar4 + 0x216b48,puVar8);
      puVar14[8] = uVar9;
    }
    iVar11 = iVar11 + 8;
    puVar14 = puVar8;
  } while (iVar11 != 0x18);
  FUN_00216698(DAT_00216c3c + 0x216b8c);
  return 0;
}


// ==== FUN_00216c54 @ 00216c54 ====

void FUN_00216c54(undefined4 param_1)

{
  **(undefined4 **)(DAT_00216c60 + 0x216c5c + DAT_00216c64) = param_1;
  return;
}


// ==== FUN_00216c68 @ 00216c68 ====

undefined4 FUN_00216c68(void)

{
  return **(undefined4 **)(DAT_00216c74 + 0x216c70 + DAT_00216c78);
}


// ==== FUN_00216c7c @ 00216c7c ====

void FUN_00216c7c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar1 = DAT_00216cc0;
  *(undefined1 *)(DAT_00216cbc + 0x216c9e) = 1;
  *(int *)(DAT_00216cc4 + 0x216caa) = DAT_00216cc8 + 0x216c94;
  *(int *)(DAT_00216ccc + 0x216cb4) = DAT_00216cd0 + 0x216c9e;
  iVar4 = 0;
  puVar5 = (uint *)(DAT_00216cd4 + 0x216ca6);
  do {
    iVar2 = iVar1 + 0x216c8e + iVar4;
    iVar4 = iVar4 + 8;
    uVar3 = (uint)*(ushort *)(iVar2 + 4);
    puVar5[7] = (uint)*(byte *)(iVar2 + 2);
    puVar5[9] = uVar3;
    puVar5[0xb] = uVar3;
    puVar5 = puVar5 + 7;
  } while (iVar4 != 0x18);
  return;
}


// ==== FUN_00216cd8 @ 00216cd8 ====

void FUN_00216cd8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00216d14;
  iVar2 = DAT_00216d14 + 0x216ce6;
  iVar4 = 0;
  iVar5 = DAT_00216d18 + 0x216cf0;
  **(undefined4 **)(DAT_00216d0c + 0x216ce0 + DAT_00216d10) = 1;
  *(undefined4 *)(iVar3 + 0x216d06) = 4;
  do {
    puVar1 = (uint *)(iVar4 + iVar5);
    iVar3 = iVar5 + iVar4;
    iVar4 = iVar4 + 0x1c;
    FUN_0021650c(iVar2,*puVar1 & 0xffffff7f,iVar3);
  } while (iVar4 != 0x70);
  return;
}


// ==== FUN_00216d1c @ 00216d1c ====

void FUN_00216d1c(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  byte bVar7;
  byte bVar8;
  uint uVar6;
  byte bVar9;
  
  puVar5 = DAT_00216d84;
  uVar2 = *DAT_00216d84;
  *DAT_00216d84 = (ushort)(byte)uVar2;
  uVar3 = puVar5[1];
  puVar5[1] = (ushort)(byte)uVar3;
  uVar4 = puVar5[4];
  *(byte *)(puVar5 + 4) = (byte)uVar4;
  uVar6 = CONCAT13((byte)uVar4,CONCAT12((byte)uVar3,CONCAT11((byte)uVar2,param_2))) & 0xf7ffffff;
  bVar7 = (byte)(uVar6 >> 8);
  bVar8 = (byte)(uVar6 >> 0x10);
  bVar9 = (byte)(uVar6 >> 0x18);
  bVar1 = bVar7 | bVar8 | bVar9;
  if (bVar1 != 0) {
    FUN_00215e8c(bVar7,bVar8,bVar9,bVar1,param_1,uVar6,param_3);
  }
  return;
}


// ==== FUN_00216d88 @ 00216d88 ====

int FUN_00216d88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_r3;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  FUN_00216d1c();
  iVar2 = FUN_00216c68();
  iVar1 = DAT_00216e00;
  if ((iVar2 != 0) && (puVar6 = (uint *)(DAT_00216df8 + 0x216d9c), *puVar6 != 0)) {
    iVar2 = *(int *)(DAT_00216dfc + 0x216dec);
    iVar7 = DAT_00216e00 + 0x216de2;
    while (uVar5 = *puVar6, uVar5 != 0) {
      if (iVar2 == 0) {
LAB_00216dbe:
        FUN_002127e8(DAT_00216e04 + 0x216dc4);
        break;
      }
      uVar4 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x18);
      if ((int)uVar4 < 1) goto LAB_00216dbe;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      iVar3 = FUN_002015a4(puVar6,*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x10),uVar4);
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + iVar3;
      if (iVar3 == 0) break;
      if (*(int *)((int)&DAT_00216df8 + iVar1 + 2) == 0) {
        FUN_002164a4(iVar7);
      }
    }
  }
  iVar1 = DAT_002168ec;
  iVar2 = *(int *)((int)&DAT_002168f0 + DAT_002168ec);
  iVar7 = *(int *)(iVar2 + 0x18);
  if (iVar7 != 0) {
    FUN_002015d8(DAT_002168f0 + 0x2168de,*(undefined4 *)(iVar2 + 0x10),iVar7,iVar2,in_r3,unaff_r4,
                 unaff_r5,unaff_lr);
    *(undefined4 *)(*(int *)((int)&DAT_002168f0 + iVar1) + 0x18) = 0;
  }
  return iVar7;
}


// ==== FUN_00216e08 @ 00216e08 ====

void FUN_00216e08(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00214e08(0);
  piVar5 = (int *)(DAT_00216e4c + 0x216e1a);
  iVar4 = (int)&DAT_00216e50 + DAT_00216e48;
  while ((*piVar5 != 0 || (iVar3 = FUN_002164e0(iVar4), iVar3 != 0))) {
    FUN_00216d88();
    uVar2 = FUN_00214e08(uVar1);
    if (300 < uVar2) {
      FUN_002127e8(DAT_00216e50 + 0x216e3a);
      return;
    }
  }
  return;
}


// ==== thunk_FUN_00216e08 @ 00216e54 ====

void thunk_FUN_00216e08(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00214e08(0);
  piVar5 = (int *)(DAT_00216e4c + 0x216e1a);
  iVar4 = (int)&DAT_00216e50 + DAT_00216e48;
  while ((*piVar5 != 0 || (iVar3 = FUN_002164e0(iVar4), iVar3 != 0))) {
    FUN_00216d88();
    uVar2 = FUN_00214e08(uVar1);
    if (300 < uVar2) {
      FUN_002127e8(DAT_00216e50 + 0x216e3a);
      return;
    }
  }
  return;
}


// ==== FUN_00216eb8 @ 00216eb8 ====

void FUN_00216eb8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00216f20;
  iVar4 = DAT_00216f18 + 0x216ed0;
  iVar5 = DAT_00216f1c + 0x216ed2;
  puVar3 = (uint *)(DAT_00216f20 + 0x216ed4);
  while (0 < param_1) {
    if (param_1 < 0x201) {
      iVar2 = param_2 + param_1;
      FUN_002015d8(iVar4,param_2,param_1);
      param_1 = 0;
    }
    else {
      iVar2 = param_2 + 0x200;
      FUN_002015d8(iVar5,param_2,0x200);
      param_1 = param_1 + -0x200;
    }
    param_2 = iVar2;
    if ((*(uint *)(iVar1 + 0x216ed8) <= *puVar3) || (param_3 != 0)) {
      FUN_00216d88();
    }
  }
  return;
}


// ==== FUN_00216fa8 @ 00216fa8 ====

undefined4 FUN_00216fa8(void)

{
  if (*(int *)(DAT_00216fc4 + 0x216fae) == 0) {
    *(int *)(DAT_00216fc4 + 0x216fae) = *DAT_00216fc0;
  }
  return *(undefined4 *)(DAT_00216fc8 + 0x216fbc);
}


// ==== FUN_00216fdc @ 00216fdc ====

undefined4 FUN_00216fdc(void)

{
  uint uVar1;
  
  uVar1 = FUN_00216fa8();
  if ((int)(uVar1 << 1) < 0) {
    FUN_002127e8(DAT_00217028 + 0x216fec);
    return 3;
  }
  if ((int)(uVar1 << 0x1f) < 0) {
    FUN_002127e8(DAT_0021702c + 0x216ffc);
    return 4;
  }
  if ((uVar1 & 2) != 0) {
    FUN_002127e8(DAT_00217030 + 0x21700e);
    return 5;
  }
  if ((int)uVar1 < 0) {
    FUN_002127e8(DAT_00217034 + 0x21701e);
    return 6;
  }
  return 0;
}


// ==== FUN_00217038 @ 00217038 ====

undefined4 FUN_00217038(void)

{
  uint uVar1;
  
  uVar1 = FUN_00216fa8();
  if ((DAT_0021706c & uVar1) == 0) {
    return 0;
  }
  if (*(int *)(DAT_00217070 + 0x21704a) << 0x1b < 0) {
    FUN_002127e8(DAT_00217074 + 0x217054);
    return 2;
  }
  FUN_002127e8(DAT_00217078 + 0x217060);
  return 1;
}


// ==== FUN_0021707c @ 0021707c ====

void FUN_0021707c(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_r3;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  
  puVar1 = DAT_002171c8;
  puVar8 = (uint *)(DAT_002171d4 + 0x21708a);
  iVar9 = DAT_002171d8 + 0x21708c;
  *puVar8 = *DAT_002171c8;
  uVar3 = FUN_00216fa8();
  puVar6 = *(uint **)(iVar9 + DAT_002171dc);
  if (((int)uVar3 < 0) && ((int)(*puVar8 << 0x1b) < 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((uVar3 & 0x40000000) != 0) {
      uVar5 = 2;
    }
  }
  *puVar6 = uVar5;
  if ((int)(uVar3 << 2) < 0) {
    *puVar6 = *puVar6 | 4;
  }
  uVar5 = uVar3 << 0x1f;
  if ((int)uVar5 < 0) {
    uVar5 = *puVar6 | 8;
    *puVar6 = uVar5;
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    uVar5 = *puVar6 | 0x10;
    *puVar6 = uVar5;
  }
  if ((int)(uVar3 << 0xd) < 0) {
    uVar5 = *puVar6 | 0x20;
    *puVar6 = uVar5;
  }
  if ((int)(uVar3 << 0xc) < 0) {
    uVar5 = *puVar6 | 0x40;
    *puVar6 = uVar5;
  }
  if ((int)(uVar3 << 3) < 0) {
    uVar5 = *puVar6 | 0x80;
    *puVar6 = uVar5;
  }
  puVar8 = DAT_002171cc;
  FUN_002127e8(DAT_002171e0 + 0x2170fc,*puVar6,uVar5,puVar6,in_r3);
  *puVar1 = *puVar1 & 0xffffffb0 | 0x22000010;
  uVar3 = *puVar8;
  puVar7 = (undefined4 *)(DAT_002171e4 + 0x21711c);
  uVar5 = uVar3 & 3;
  *puVar7 = 0;
  iVar4 = FUN_00216fa8();
  iVar9 = DAT_002171fc;
  if (iVar4 == 0) {
    if (uVar5 == 3) {
      *puVar7 = 4;
      iVar9 = iVar9 + 0x21716a;
    }
    else {
      iVar9 = DAT_00217200 + 0x217170;
    }
  }
  else {
    FUN_002127e8(DAT_002171e8 + 0x21712c);
    iVar2 = DAT_002171f4;
    iVar4 = DAT_002171f0;
    iVar9 = DAT_002171ec;
    if (uVar5 == 1) {
      *puVar7 = 2;
      iVar9 = iVar2 + 0x217156;
    }
    else if (uVar5 == 0) {
      *puVar7 = 1;
      iVar9 = iVar4 + 0x21714c;
    }
    else if (uVar5 == 2) {
      *puVar7 = 3;
      iVar9 = iVar9 + 0x217142;
    }
    else {
      iVar9 = DAT_002171f8 + 0x21715c;
    }
  }
  FUN_002127e8(iVar9);
  uVar3 = uVar3 & 0xfffffff8;
  if (*(int *)(DAT_00217204 + 0x21717c) == 4) {
    uVar3 = uVar3 | 4;
  }
  *puVar8 = uVar3;
  iVar9 = FUN_00217038();
  if (iVar9 == 2) {
    iVar9 = DAT_00217208 + 0x217194;
  }
  else {
    iVar9 = FUN_00217038();
    if (iVar9 == 1) {
      iVar9 = DAT_0021720c + 0x2171a2;
    }
    else {
      iVar9 = DAT_00217210 + 0x2171a8;
    }
  }
  FUN_002127e8(iVar9);
  *(undefined4 *)(DAT_00217214 + 0x2171b4) = 0x5000;
  puVar7 = DAT_002171d0;
  *DAT_002171d0 = 0x5008;
  puVar7[0xf] = puVar7[0xf] | 0x59000002;
  return;
}


// ==== FUN_00217298 @ 00217298 ====

undefined4 FUN_00217298(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_002172c0 + 0x2172aa;
  FUN_002176c0(iVar1,DAT_002172c4 + 0x2172ae,DAT_002172c8 + 0x2172b0,0x20);
  FUN_0021772a(iVar1,param_1,param_2);
  return 0;
}


// ==== FUN_002172cc @ 002172cc ====

undefined4 FUN_002172cc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c = *param_2;
    FUN_00217734(DAT_002172f8 + 0x2172e4,param_1,&local_c,param_1,param_1);
    uVar1 = 0;
    *param_2 = local_c;
  }
  return uVar1;
}


// ==== thunk_FUN_0021afb0 @ 00217364 ====

uint thunk_FUN_0021afb0(void)

{
  return *DAT_0021afbc & 1;
}


// ==== FUN_00217368 @ 00217368 ====

void FUN_00217368(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (1 < param_2)) {
    uVar3 = 0;
    puVar2 = (undefined1 *)(param_2 + param_1);
    do {
      uVar1 = *(undefined1 *)(param_1 + uVar3);
      *(undefined1 *)(param_1 + uVar3) = puVar2[-1];
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + -1;
      *puVar2 = uVar1;
    } while (uVar3 < param_2 >> 1);
  }
  return;
}


// ==== FUN_0021738c @ 0021738c ====

undefined4 FUN_0021738c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_140 [8];
  uint local_120 [64];
  
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)local_140 + iVar4) = *(undefined4 *)(param_1 + iVar4 + 8);
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x20);
  iVar5 = 0;
  iVar4 = param_2;
  do {
    *(uint *)(iVar5 + (int)local_120) =
         (uint)*(byte *)(iVar4 + 3) | (uint)*(byte *)(param_2 + iVar5) << 0x18 |
         (uint)*(byte *)(iVar4 + 1) << 0x10 | (uint)*(byte *)(iVar4 + 2) << 8;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar5 != 0x40);
  iVar4 = 0;
  puVar6 = local_120;
  do {
    uVar8 = puVar6[0xe];
    piVar1 = (int *)((int)local_120 + iVar4);
    iVar4 = iVar4 + 4;
    uVar3 = puVar6[1];
    puVar6[0x10] = ((uVar3 >> 7 | uVar3 << 0x19) ^ (uVar3 >> 0x12 | uVar3 << 0xe) ^ uVar3 >> 3) +
                   *piVar1 + puVar6[9] +
                   ((uVar8 >> 0x11 | uVar8 << 0xf) ^ (uVar8 >> 0x13 | uVar8 << 0xd) ^ uVar8 >> 10);
    puVar6 = puVar6 + 1;
  } while (iVar4 != 0xc0);
  iVar4 = 0;
  do {
    uVar9 = local_140[5];
    uVar7 = local_140[2];
    uVar8 = local_140[0];
    local_140[5] = local_140[4];
    local_140[2] = local_140[1];
    uVar3 = local_140[6];
    piVar1 = (int *)(iVar4 + DAT_002174c0 + 0x21742a);
    piVar2 = (int *)((int)local_120 + iVar4);
    iVar4 = iVar4 + 4;
    iVar5 = local_140[7] +
            ((uVar3 ^ uVar9) & local_140[5] ^ uVar3) +
            ((local_140[5] >> 6 | local_140[5] << 0x1a) ^
             (local_140[5] >> 0xb | local_140[5] << 0x15) ^
            (local_140[5] >> 0x19 | local_140[5] << 7)) + *piVar1 + *piVar2;
    local_140[4] = local_140[3] + iVar5;
    local_140[0] = ((local_140[2] | uVar8) & uVar7 | local_140[2] & uVar8) +
                   ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
                   (uVar8 >> 0x16 | uVar8 << 10)) + iVar5;
    local_140[6] = uVar9;
    local_140[1] = uVar8;
    local_140[3] = uVar7;
    local_140[7] = uVar3;
  } while (iVar4 != 0x100);
  iVar4 = 0;
  do {
    piVar1 = (int *)((int)local_140 + iVar4);
    iVar5 = param_1 + iVar4;
    iVar4 = iVar4 + 4;
    *(int *)(iVar5 + 8) = *piVar1 + *(int *)(iVar5 + 8);
  } while (iVar4 != 0x20);
  return 0;
}


// ==== FUN_002174c4 @ 002174c4 ====

undefined4 FUN_002174c4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = DAT_002174fc;
    param_1[10] = 0;
    param_1[2] = uVar1;
    param_1[3] = DAT_00217500;
    param_1[4] = DAT_00217504;
    param_1[5] = DAT_00217508;
    param_1[6] = DAT_0021750c;
    param_1[7] = DAT_00217510;
    param_1[8] = DAT_00217514;
    param_1[9] = DAT_00217518;
    return 0;
  }
  return 0xffffffff;
}


// ==== FUN_0021751c @ 0021751c ====

int FUN_0021751c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    return -1;
  }
  if (param_2 != 0) {
    if (param_1[10] < 0x41) {
      param_1[0xb] = param_3;
      while( true ) {
        while( true ) {
          if (param_3 == 0) {
            return 0;
          }
          uVar1 = param_1[10];
          if ((uVar1 == 0) && (0x3f < param_3)) break;
          uVar3 = 0x40 - uVar1;
          if (param_3 < 0x40 - uVar1) {
            uVar3 = param_3;
          }
          FUN_00214b30(uVar1 + 0x30 + (int)param_1,param_2,uVar3);
          uVar1 = param_1[10];
          param_2 = param_2 + uVar3;
          param_3 = param_3 - uVar3;
          param_1[10] = uVar1 + uVar3;
          if (uVar1 + uVar3 == 0x40) {
            param_1[0xb] = 0x40;
            iVar2 = FUN_0021738c(param_1,param_1 + 0xc);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar1 = *param_1;
            param_1[10] = 0;
            *param_1 = uVar1 + 0x200;
            param_1[1] = param_1[1] + (uint)(0xfffffdff < uVar1);
          }
        }
        iVar2 = FUN_0021738c(param_1,param_2);
        if (iVar2 != 0) break;
        uVar1 = param_1[0xb];
        uVar3 = *param_1;
        param_2 = param_2 + uVar1;
        param_3 = param_3 - uVar1;
        *param_1 = uVar3 + uVar1 * 8;
        param_1[1] = param_1[1] + (uint)CARRY4(uVar3,uVar1 * 8);
      }
    }
    else {
      iVar2 = -3;
    }
    return iVar2;
  }
  return -2;
}


// ==== FUN_002175cc @ 002175cc ====

undefined4 FUN_002175cc(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0xfffffffd;
  }
  uVar1 = param_1[10];
  if (0x3f < uVar1) {
    return 0xfffffffc;
  }
  uVar2 = *param_1;
  *param_1 = uVar2 + uVar1 * 8;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar2,uVar1 * 8);
  param_1[10] = uVar1 + 1;
  *(undefined1 *)((int)param_1 + uVar1 + 0x30) = 0x80;
  if (0x38 < uVar1 + 1) {
    while (uVar1 = param_1[10], uVar1 < 0x40) {
      param_1[10] = uVar1 + 1;
      *(undefined1 *)((int)param_1 + uVar1 + 0x30) = 0;
    }
    param_1[0xb] = 0x40;
    FUN_0021738c(param_1,param_1 + 0xc,0,0x40,param_4);
    param_1[10] = 0;
  }
  while (uVar1 = param_1[10], uVar1 < 0x38) {
    param_1[10] = uVar1 + 1;
    *(undefined1 *)((int)param_1 + uVar1 + 0x30) = 0;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  *(char *)((int)param_1 + 0x6f) = (char)uVar2;
  *(char *)((int)param_1 + 0x6b) = (char)uVar1;
  *(char *)(param_1 + 0x1a) = (char)(uVar1 >> 0x18);
  *(char *)((int)param_1 + 0x69) = (char)(uVar1 >> 0x10);
  *(char *)((int)param_1 + 0x6a) = (char)(uVar1 >> 8);
  *(char *)(param_1 + 0x1b) = (char)(uVar2 >> 0x18);
  *(char *)((int)param_1 + 0x6d) = (char)(uVar2 >> 0x10);
  *(char *)((int)param_1 + 0x6e) = (char)(uVar2 >> 8);
  param_1[0xb] = 0x40;
  FUN_0021738c(param_1,param_1 + 0xc,uVar2 >> 8,0x40,param_4);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *param_2 = *(undefined1 *)((int)param_1 + 0xb);
    param_2[1] = (char)*(undefined2 *)((int)param_1 + 10);
    param_2[2] = (char)(param_1[2] >> 8);
    param_2[3] = (char)param_1[2];
    param_2 = param_2 + 4;
    param_1 = param_1 + 1;
  } while (iVar3 != 8);
  return 0;
}


// ==== FUN_002176c0 @ 002176c0 ====

undefined4 FUN_002176c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x70) = param_2;
  iVar3 = param_4;
  uVar1 = FUN_0021aa74(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  iVar2 = FUN_0021aa74(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  FUN_00214b30(*(undefined4 *)(param_1 + 0x74),param_3,param_4);
  FUN_00214b20(*(int *)(param_1 + 0x74) + param_4,0,
               *(int *)(*(int *)(param_1 + 0x70) + 0x10) - param_4,*(int *)(param_1 + 0x70),iVar3);
  iVar3 = 0;
  while( true ) {
    if ((int)(*(undefined4 **)(param_1 + 0x70))[4] <= iVar3) break;
    *(byte *)(iVar3 + iVar2) = *(byte *)(*(int *)(param_1 + 0x74) + iVar3) ^ 0x36;
    iVar3 = iVar3 + 1;
  }
  (*(code *)**(undefined4 **)(param_1 + 0x70))(param_1);
  (**(code **)(*(int *)(param_1 + 0x70) + 4))
            (param_1,iVar2,*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  FUN_0021aafc(iVar2);
  return 0;
}


// ==== FUN_0021772a @ 0021772a ====

void FUN_0021772a(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x70) + 4))();
  return;
}


// ==== FUN_00217734 @ 00217734 ====

undefined4 FUN_00217734(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_0021aa74(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  uVar2 = FUN_0021aa74(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0xc));
  (**(code **)(*(int *)(param_1 + 0x70) + 8))(param_1,uVar2);
  iVar3 = 0;
  while( true ) {
    if ((int)(*(undefined4 **)(param_1 + 0x70))[4] <= iVar3) break;
    *(byte *)(iVar3 + iVar1) = *(byte *)(*(int *)(param_1 + 0x74) + iVar3) ^ 0x5c;
    iVar3 = iVar3 + 1;
  }
  (*(code *)**(undefined4 **)(param_1 + 0x70))(param_1);
  (**(code **)(*(int *)(param_1 + 0x70) + 4))
            (param_1,iVar1,*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  (**(code **)(*(int *)(param_1 + 0x70) + 4))
            (param_1,uVar2,*(undefined4 *)(*(int *)(param_1 + 0x70) + 0xc));
  (**(code **)(*(int *)(param_1 + 0x70) + 8))(param_1,iVar1);
  for (uVar4 = 0; ((int)uVar4 < *(int *)(*(int *)(param_1 + 0x70) + 0xc) && (uVar4 < *param_3));
      uVar4 = uVar4 + 1) {
    *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)(uVar4 + iVar1);
  }
  *param_3 = uVar4;
  FUN_0021aafc(uVar2);
  FUN_0021aafc(iVar1);
  return 0;
}


// ==== FUN_002177ce @ 002177ce ====

void FUN_002177ce(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3 * 4; iVar1 = iVar1 + 4) {
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_2 + iVar1);
  }
  return;
}


// ==== FUN_002177e2 @ 002177e2 ====

uint FUN_002177e2(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_3 < 0x20) {
    iVar1 = param_4 * 4;
    iVar2 = 0;
    uVar3 = 0;
    while( true ) {
      param_4 = param_4 - 1;
      iVar2 = iVar2 + -4;
      if (param_4 == 0xffffffff) break;
      uVar4 = *(uint *)(param_2 + iVar1 + iVar2);
      *(uint *)(param_1 + iVar1 + iVar2) = uVar3 | uVar4 >> (param_3 & 0xff);
      uVar3 = (~(-1 << (param_3 & 0xff)) & uVar4) << (0x20 - param_3 & 0xff);
    }
    return uVar3;
  }
  iVar1 = 0;
  uVar3 = 0;
  param_2 = param_2 + (param_3 >> 5) * 4;
  while (uVar3 != param_4) {
    uVar4 = uVar3 + (param_3 >> 5);
    uVar3 = uVar3 + 1;
    bVar5 = param_4 <= uVar4;
    if (bVar5) {
      *(undefined4 *)(param_1 + iVar1) = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + iVar1);
    }
    if (!bVar5) {
      *(uint *)(param_1 + iVar1) = uVar4;
    }
    iVar1 = iVar1 + 4;
  }
  param_3 = param_3 & 0x1f;
  uVar4 = *(uint *)(param_2 + -4) >> param_3;
  if (param_3 != 0) {
    uVar3 = FUN_002177e2(param_1,param_1,param_3,uVar3);
    uVar4 = uVar4 | uVar3;
  }
  return uVar4;
}


// ==== FUN_00217862 @ 00217862 ====

uint FUN_00217862(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_3 < 0x20) {
    uVar2 = 0;
    for (iVar1 = 0; iVar1 != param_4 * 4; iVar1 = iVar1 + 4) {
      uVar3 = *(uint *)(param_2 + iVar1);
      *(uint *)(param_1 + iVar1) = uVar2 | uVar3 << (param_3 & 0xff);
      uVar2 = (uVar3 & ~(0xffffffffU >> (param_3 & 0xff))) >> (0x20 - param_3 & 0xff);
    }
  }
  else {
    uVar3 = param_3 >> 5;
    iVar1 = 0;
    uVar2 = param_4;
    while (bVar5 = uVar2 != 0, uVar2 = uVar2 - 1, bVar5) {
      iVar4 = param_1 + param_4 * 4 + iVar1;
      if (uVar2 < uVar3) {
        *(undefined4 *)(iVar4 + -4) = 0;
      }
      else {
        *(undefined4 *)(iVar4 + -4) =
             *(undefined4 *)(param_2 + (uVar3 * 0x3fffffff + param_4) * 4 + iVar1 + -4);
      }
      iVar1 = iVar1 + -4;
    }
    uVar2 = *(int *)(param_2 + (param_4 - uVar3) * 4) << (param_3 & 0x1f);
    if ((param_3 & 0x1f) != 0) {
      uVar3 = FUN_00217862(param_1,param_1);
      uVar2 = uVar2 | uVar3;
    }
  }
  return uVar2;
}


// ==== FUN_002178f2 @ 002178f2 ====

/* WARNING: Removing unreachable block (ram,0x00217b68) */
/* WARNING: Removing unreachable block (ram,0x00217c42) */

undefined4
FUN_002178f2(undefined4 param_1,int param_2,int param_3,uint *param_4,int param_5,
            undefined4 *param_6,uint *param_7)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r2_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_6c;
  int local_68;
  int local_64;
  uint local_28;
  
  iVar6 = 0;
  do {
    *(undefined4 *)(param_5 + iVar6) = 0;
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x200);
  iVar16 = 0;
  iVar6 = param_5;
  do {
    iVar7 = 0;
    uVar11 = 0;
    do {
      lVar2 = (ulonglong)*(uint *)(param_2 + iVar7) * (ulonglong)*(uint *)(param_3 + iVar16) +
              (ulonglong)*(uint *)(iVar6 + iVar7) + (ulonglong)uVar11;
      uVar11 = (uint)((ulonglong)lVar2 >> 0x20);
      *(int *)(iVar6 + iVar7) = (int)lVar2;
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0x100);
    iVar16 = iVar16 + 4;
    *(uint *)(iVar6 + 0x100) = uVar11;
    iVar6 = iVar6 + 4;
  } while (iVar16 != 0x100);
  iVar6 = 0;
  while (iVar6 + -4 != -0x204) {
    *(undefined4 *)((int)param_6 + iVar6 + 0x1fc) = 0;
    iVar6 = iVar6 + -4;
  }
  iVar6 = 0;
  while (iVar6 + -4 != -0x204) {
    *(undefined4 *)((int)param_7 + iVar6 + 0x1fc) = 0;
    iVar6 = iVar6 + -4;
  }
  iVar6 = 0x40;
  do {
    iVar16 = iVar6;
    if (iVar16 == 0) break;
    iVar6 = iVar16 + -1;
  } while (param_4[iVar16 + -1] == 0);
  iVar6 = 0x80;
  do {
    local_68 = iVar6;
    if (local_68 == 0) {
      local_68 = 0;
      break;
    }
    iVar6 = local_68 + -1;
  } while (*(int *)(param_5 + (local_68 + -1) * 4) == 0);
  iVar6 = local_68 - iVar16;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      uVar13 = *param_4;
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar12 = 0;
        uVar11 = 0x80000000;
        do {
          if ((uVar11 & uVar13) != 0) break;
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 >> 1;
        } while (uVar12 != 0x20);
        uVar11 = FUN_00217862(param_6,param_5,uVar12,0x80);
        iVar6 = uVar13 << (uVar12 & 0xff);
        iVar16 = 0x80;
        puVar10 = param_6 + 0x7f;
        while (bVar18 = iVar16 != 0, iVar16 = iVar16 + -1, bVar18) {
          uVar8 = *puVar10;
          uVar3 = FUN_00200ac8(uVar8,uVar11,iVar6,0);
          *puVar10 = uVar3;
          FUN_00200ac8(uVar8,uVar11,iVar6,0);
          uVar11 = extraout_r2;
          puVar10 = puVar10 + -1;
        }
        uVar11 = uVar11 >> (uVar12 & 0xff);
      }
      *param_7 = uVar11;
    }
    else if (iVar6 < 0) {
LAB_00217a26:
      FUN_002177ce(param_7,param_5,0x80);
    }
    else if (iVar6 == 0) {
      if (iVar16 != 0) {
        iVar7 = 0;
        do {
          uVar11 = *(uint *)(param_5 + iVar16 * 4 + iVar7 * -4 + -4);
          iVar14 = -1 - iVar7;
          if (param_4[iVar16 + iVar14] < uVar11) goto LAB_00217a7a;
          iVar7 = iVar7 + 1;
          if (uVar11 < param_4[iVar16 + iVar14]) goto LAB_00217a26;
        } while (iVar7 != iVar16);
      }
      iVar6 = 0;
      do {
        iVar16 = iVar6 + 4;
        *(undefined4 *)((int)param_6 + iVar6 + 4) = 0;
        iVar6 = iVar16;
      } while (iVar16 != 0x1fc);
      *param_6 = 1;
    }
    else {
LAB_00217a7a:
      iVar7 = iVar16 + 0x3fffffff;
      local_6c = 0;
      uVar11 = 0x80000000;
      do {
        if ((uVar11 & param_4[iVar7]) != 0) break;
        uVar11 = uVar11 >> 1;
        local_6c = local_6c + 1;
      } while (local_6c != 0x20);
      FUN_00217862(param_4,param_4,local_6c,iVar16);
      iVar15 = 4;
      local_28 = FUN_00217862(param_7,param_5,local_6c,local_68);
      iVar14 = iVar7 * 4 + 4;
      puVar17 = param_7 + local_68;
      do {
        uVar13 = puVar17[-1];
        iVar15 = iVar15 + -4;
        uVar12 = param_4[iVar7];
        uVar19 = FUN_00200ac8(uVar13,local_28,uVar12,0);
        uVar11 = (uint)uVar19;
        if ((int)((ulonglong)uVar19 >> 0x20) == 0) {
          uVar9 = uVar11;
          if (uVar11 != 0) {
            FUN_00200ac8(uVar13,local_28,uVar12,0);
            uVar4 = extraout_r2_00;
            goto LAB_00217b56;
          }
        }
        else {
          uVar4 = uVar13 + uVar12;
          if (CARRY4(uVar13,uVar12)) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar11 = 0xffffffff;
LAB_00217b56:
            uVar9 = uVar11;
            if (CONCAT44(uVar4,puVar17[-2]) <
                (ulonglong)uVar11 * (ulonglong)param_4[iVar16 + 0x3ffffffe]) {
              uVar9 = uVar11 - 1;
              if ((!CARRY4(uVar4,uVar12)) &&
                 (CONCAT44(uVar4 + uVar12,puVar17[-2]) <
                  (ulonglong)uVar9 * (ulonglong)param_4[iVar16 + 0x3ffffffe])) {
                uVar9 = uVar11 - 2;
              }
            }
          }
        }
        if (uVar9 != 0) {
          uVar11 = 0;
          for (iVar5 = 0; iVar5 != iVar14; iVar5 = iVar5 + 4) {
            uVar12 = *(int *)((int)puVar17 + iVar5 + iVar16 * -4) - uVar11;
            lVar2 = (ulonglong)uVar9 * (ulonglong)*(uint *)((int)param_4 + iVar5);
            uVar13 = (uint)lVar2;
            uVar4 = uVar12 - uVar13;
            uVar11 = (uint)(~uVar11 < uVar12);
            if (~uVar13 < uVar4) {
              uVar11 = uVar11 + 1;
            }
            *(uint *)((int)puVar17 + iVar5 + iVar16 * -4) = uVar4;
            uVar11 = uVar11 + (int)((ulonglong)lVar2 >> 0x20);
          }
          local_28 = local_28 - uVar11;
        }
        *(uint *)((int)param_6 + iVar15 + iVar6 * 4) = uVar9;
        if (local_28 != 0) {
          *(uint *)((int)param_6 + iVar15 + iVar6 * 4) = uVar9 - 1;
          iVar5 = 0;
          uVar11 = 0;
          while (iVar5 != iVar14) {
            uVar13 = *(int *)((int)puVar17 + iVar5 + iVar16 * -4) + uVar11;
            *(uint *)((int)puVar17 + iVar5 + iVar16 * -4) = uVar13;
            uVar11 = (uint)(uVar13 < uVar11);
            uVar13 = *(int *)((int)param_4 + iVar5) + uVar13;
            *(uint *)((int)puVar17 + iVar5 + iVar16 * -4) = uVar13;
            puVar1 = (uint *)((int)param_4 + iVar5);
            iVar5 = iVar5 + 4;
            if (uVar13 < *puVar1) {
              uVar11 = uVar11 + 1;
            }
          }
        }
        local_28 = puVar17[-1];
        puVar17 = puVar17 + -1;
        local_64 = iVar16;
      } while (iVar15 != iVar6 * -4);
      for (; local_64 < local_68; local_64 = local_64 + 1) {
        param_7[local_64] = 0;
      }
      FUN_002177e2(param_7,param_7,local_6c,iVar16);
      FUN_002177e2(param_4,param_4,local_6c,iVar16);
    }
  }
  FUN_002177ce(param_1,param_7,0x40);
  return 0;
}


// ==== FUN_00217c5e @ 00217c5e ====

undefined4 FUN_00217c5e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0021aa74(0x100);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0021aa74(0x200);
    if (iVar2 == 0) {
      FUN_0021aafc(iVar1,0x100);
      uVar3 = 0xfffffffe;
    }
    else {
      iVar4 = FUN_0021aa74(0x200);
      if (iVar4 == 0) {
        FUN_0021aafc(iVar1,0x100);
        FUN_0021aafc(iVar2,0x200);
        uVar3 = 0xfffffffd;
      }
      else {
        iVar5 = FUN_0021aa74(0x200);
        if (iVar5 == 0) {
          FUN_0021aafc(iVar1,0x100);
          FUN_0021aafc(iVar2,0x200);
          FUN_0021aafc(iVar4,0x200);
          uVar3 = 0xfffffffc;
        }
        else {
          iVar6 = 0xf;
          FUN_002178f2(iVar1,param_1,param_1,param_2,iVar2,iVar4,iVar5);
          do {
            FUN_002178f2(iVar1,iVar1,iVar1,param_2,iVar2,iVar4,iVar5);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          FUN_002178f2(iVar1,iVar1,param_1,param_2,iVar2,iVar4,iVar5);
          FUN_00214b30(param_3,iVar1,0x100);
          FUN_0021aafc(iVar1,0x100);
          FUN_0021aafc(iVar2,0x200);
          FUN_0021aafc(iVar4,0x200);
          FUN_0021aafc(iVar5,0x200);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


// ==== FUN_00217d66 @ 00217d66 ====

int FUN_00217d66(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_b0 [32];
  undefined1 auStack_90 [112];
  
  if ((param_1 == 0) || (param_3 == (undefined1 *)0x0)) {
    iVar2 = -2;
  }
  else {
    iVar4 = 0;
LAB_00217d82:
    iVar5 = param_4;
    if (iVar5 != 0) {
      local_b0[3] = (undefined1)iVar4;
      local_b0[0] = (undefined1)((uint)iVar4 >> 0x18);
      local_b0[1] = (undefined1)((uint)iVar4 >> 0x10);
      local_b0[2] = (undefined1)((uint)iVar4 >> 8);
      iVar2 = FUN_002174c4(auStack_90);
      iVar4 = iVar4 + 1;
      if (((iVar2 != 0) || (iVar2 = FUN_0021751c(auStack_90,param_1,param_2), iVar2 != 0)) ||
         (iVar2 = FUN_0021751c(auStack_90,local_b0,4), iVar2 != 0)) goto LAB_00217dea;
      iVar2 = FUN_002175cc(auStack_90,local_b0);
      iVar3 = 0;
      puVar6 = param_3;
      if (iVar2 != 0) goto LAB_00217dea;
      do {
        puVar1 = local_b0 + iVar3;
        iVar3 = iVar3 + 1;
        param_3 = puVar6 + 1;
        *puVar6 = *puVar1;
        param_4 = iVar5 - iVar3;
        if (iVar3 == 0x20) break;
        puVar6 = param_3;
      } while (param_4 != 0);
      goto LAB_00217d82;
    }
    iVar2 = 0;
LAB_00217dea:
    FUN_00214b20(local_b0,0,0x20);
    FUN_00214b20(auStack_90,0,0x70);
  }
  return iVar2;
}


// ==== FUN_00217e10 @ 00217e10 ====

int FUN_00217e10(int param_1,undefined4 param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                ,undefined4 *param_7)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_90 [112];
  
  pbVar1 = (byte *)FUN_0021aa74(0x100);
  if (pbVar1 == (byte *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar2 = FUN_0021aa74(0x100);
    if (iVar2 == 0) {
      FUN_0021aafc(pbVar1,0x100);
      iVar3 = -2;
    }
    else {
      iVar4 = FUN_0021aa74(0x100);
      if (iVar4 == 0) {
        FUN_0021aafc(pbVar1,0x100);
        FUN_0021aafc(iVar2,0x100);
        iVar3 = -3;
      }
      else {
        iVar5 = FUN_0021aa74(0x100);
        if (iVar5 == 0) {
          FUN_0021aafc(pbVar1,0x100);
          FUN_0021aafc(iVar2,0x100);
          FUN_0021aafc(iVar4,0x100);
          iVar3 = -4;
        }
        else if ((param_1 == 0) || (param_7 == (undefined4 *)0x0)) {
          FUN_0021aafc(pbVar1,0x100);
          FUN_0021aafc(iVar2,0x100);
          FUN_0021aafc(iVar4,0x100);
          FUN_0021aafc(iVar5,0x100);
          iVar3 = -5;
        }
        else {
          *param_7 = 0;
          uVar7 = (uint)((param_6 & 7) != 0) + (param_6 >> 3);
          if (uVar7 < 0x101) {
            if (((uVar7 < param_5) || (uVar7 < param_5 + 0x22)) || (param_4 != uVar7)) {
              FUN_0021aafc(pbVar1,0x100);
              FUN_0021aafc(iVar2,0x100);
              FUN_0021aafc(iVar4,0x100);
              FUN_0021aafc(iVar5,0x100);
              iVar3 = -8;
            }
            else {
              if (param_3[param_4 - 1] == 0xbc) {
                uVar7 = param_4 - 0x21;
                FUN_00214b30(pbVar1,param_3,uVar7);
                FUN_00214b30(iVar4,param_3 + uVar7,0x20);
                uVar9 = 0xff >> ((param_4 * 8 + 1) - param_6 & 0xff);
                if (((uint)*param_3 & ~uVar9) == 0) {
                  iVar3 = FUN_00217d66(iVar4,0x20,iVar5,uVar7);
                  uVar8 = 0;
                  if (iVar3 == 0) {
                    for (; uVar8 < uVar7; uVar8 = uVar8 + 1) {
                      pbVar1[uVar8] = pbVar1[uVar8] ^ *(byte *)(uVar8 + iVar5);
                    }
                    *pbVar1 = *pbVar1 & (byte)uVar9;
                    for (uVar7 = 0; uVar7 < (param_4 - 0x22) - param_5; uVar7 = uVar7 + 1) {
                      if (pbVar1[uVar7] != 0) {
                        iVar3 = -0xb;
                        goto LAB_00218080;
                      }
                    }
                    if (pbVar1[uVar7] == 1) {
                      iVar3 = FUN_002174c4(auStack_90);
                      if (iVar3 == 0) {
                        FUN_00214b20(iVar5,0,8);
                        iVar3 = FUN_0021751c(auStack_90,iVar5,8);
                        if (((iVar3 == 0) &&
                            (iVar3 = FUN_0021751c(auStack_90,param_1,param_2), iVar3 == 0)) &&
                           ((iVar3 = FUN_0021751c(auStack_90,pbVar1 + uVar7 + 1,param_5), iVar3 == 0
                            && ((iVar3 = FUN_002175cc(auStack_90,iVar5), iVar3 == 0 &&
                                (iVar6 = FUN_00214b42(iVar5,iVar4,0x20), iVar6 == 0)))))) {
                          *param_7 = 1;
                        }
                      }
                    }
                    else {
                      iVar3 = -0xc;
                    }
                  }
                }
                else {
                  iVar3 = -10;
                }
              }
              else {
                iVar3 = -9;
              }
LAB_00218080:
              FUN_00214b20(pbVar1,0,param_4);
              FUN_00214b20(iVar5,0,param_4);
              FUN_00214b20(iVar2,0,param_4);
              FUN_00214b20(iVar4,0,param_4);
              FUN_0021aafc(pbVar1,0x100);
              FUN_0021aafc(iVar2,0x100);
              FUN_0021aafc(iVar4,0x100);
              FUN_0021aafc(iVar5,0x100);
            }
          }
          else {
            FUN_0021aafc(pbVar1,0x100);
            FUN_0021aafc(iVar2,0x100);
            FUN_0021aafc(iVar4,0x100);
            FUN_0021aafc(iVar5,0x100);
            iVar3 = -6;
          }
        }
      }
    }
  }
  return iVar3;
}


// ==== FUN_002180ec @ 002180ec ====

undefined4 FUN_002180ec(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00218174 + 0x2180fe + DAT_00218178);
  FUN_00214b20(piVar3,0,0x5c);
  *piVar3 = param_2;
  iVar1 = FUN_00218276(piVar3 + 5,0x10,param_1,param_2 << 1);
  if (iVar1 == 0) {
    iVar1 = FUN_00218276(piVar3 + 8,0x10,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = DAT_0021818c + 0x218156;
      FUN_002127e8(DAT_00218190 + 0x21815c,iVar1,*piVar3 << 3);
      FUN_002127e8(DAT_00218194 + 0x21816a,iVar1,param_4 << 2);
      return 0;
    }
    iVar1 = DAT_00218184 + 0x218140;
    iVar2 = DAT_00218188 + 0x218142;
  }
  else {
    iVar1 = DAT_0021817c + 0x218124;
    iVar2 = DAT_00218180 + 0x218126;
  }
  FUN_002127e8(iVar1,iVar2);
  return 0x3007;
}


// ==== FUN_0021823c @ 0021823c ====

undefined4 FUN_0021823c(uint *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_3 - 0x30;
  if (9 < (uVar2 & 0xff)) {
    uVar2 = 0xff;
  }
  *param_1 = uVar2;
  if ((param_3 - 0x41U & 0xff) < 6) {
    *param_1 = param_3 - 0x37;
  }
  if ((param_3 - 0x61U & 0xff) < 6) {
    *param_1 = param_3 - 0x57;
  }
  if (*param_1 < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


// ==== FUN_00218276 @ 00218276 ====

int FUN_00218276(int *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_30;
  undefined1 auStack_2c [12];
  
  if (0xe < param_2 - 2U) {
    return 2;
  }
  FUN_0021aafe(auStack_2c);
  if (param_2 == 0x10) {
    iVar2 = param_4 * 4 + 0x1f;
    if (iVar2 < 0) {
      iVar2 = param_4 * 4 + 0x3e;
    }
    iVar2 = FUN_00218450(param_1,iVar2 >> 5);
    if ((iVar2 != 0) || (iVar1 = FUN_002184f0(param_1,0), iVar2 = iVar1, iVar1 != 0))
    goto LAB_00218386;
    iVar4 = param_4 + -1;
    while( true ) {
      uVar3 = (param_4 + -1) - iVar4;
      if (iVar4 < 0) break;
      if ((iVar4 == 0) && (*param_3 == '-')) {
        *param_1 = -1;
        iVar2 = iVar1;
        goto LAB_00218386;
      }
      iVar2 = FUN_0021823c(&local_30,0x10,param_3[iVar4]);
      if (iVar2 != 0) goto LAB_00218386;
      iVar2 = (int)uVar3 >> 3;
      iVar4 = iVar4 + -1;
      *(uint *)(param_1[2] + iVar2 * 4) =
           *(uint *)(param_1[2] + iVar2 * 4) | local_30 << ((uVar3 & 7) << 2);
    }
  }
  else {
    iVar2 = FUN_002184f0(param_1,0);
    if (iVar2 != 0) goto LAB_00218386;
    for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
      if ((iVar1 == 0) && (*param_3 == '-')) {
        *param_1 = -1;
      }
      else {
        iVar2 = FUN_0021823c(&local_30,param_2,param_3[iVar1]);
        if ((iVar2 != 0) || (iVar2 = FUN_0021946c(auStack_2c,param_1,param_2), iVar2 != 0))
        goto LAB_00218386;
        if (*param_1 == 1) {
          iVar2 = FUN_002189d4();
        }
        else {
          iVar2 = FUN_00218a00(param_1,auStack_2c,local_30);
        }
        if (iVar2 != 0) goto LAB_00218386;
      }
    }
  }
  iVar2 = 0;
LAB_00218386:
  FUN_0021ab0a(auStack_2c);
  return iVar2;
}


// ==== FUN_0021839c @ 0021839c ====

int FUN_0021839c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  for (iVar4 = 0; (iVar4 < param_3 && (*(char *)(param_2 + iVar4) == '\0')); iVar4 = iVar4 + 1) {
  }
  iVar1 = (param_3 - iVar4) + 3;
  if (iVar1 < 0) {
    iVar1 = (param_3 - iVar4) + 6;
  }
  iVar1 = FUN_00218450(param_1,iVar1 >> 2);
  if ((iVar1 == 0) && (iVar1 = FUN_002184f0(param_1,0), iVar1 == 0)) {
    for (iVar3 = param_3 + -1; uVar2 = (param_3 + -1) - iVar3, iVar4 <= iVar3; iVar3 = iVar3 + -1) {
      iVar5 = (int)uVar2 >> 2;
      *(uint *)(*(int *)(param_1 + 8) + iVar5 * 4) =
           *(uint *)(*(int *)(param_1 + 8) + iVar5 * 4) |
           (uint)*(byte *)(param_2 + iVar3) << ((uVar2 & 3) << 3);
    }
  }
  return iVar1;
}


// ==== FUN_0021840a @ 0021840a ====

undefined4 FUN_0021840a(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_0021855e();
  if (iVar1 <= param_3) {
    puVar3 = (undefined1 *)(param_3 + param_2);
    FUN_00214b20(param_2,0,param_3);
    for (uVar2 = 0; 0 < (int)(iVar1 - uVar2); uVar2 = uVar2 + 1) {
      puVar3 = puVar3 + -1;
      *puVar3 = (char)(*(uint *)(*(int *)(param_1 + 8) + ((int)uVar2 >> 2) * 4) >>
                      ((uVar2 & 3) << 3));
    }
    return 0;
  }
  return 4;
}


// ==== FUN_00218450 @ 00218450 ====

undefined4 FUN_00218450(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) < param_2) {
    iVar1 = FUN_0021aa74(param_2 << 2);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00214b20(iVar1,0,param_2 << 2);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00214b30(iVar1,*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
      FUN_00214b20(*(undefined4 *)(param_1 + 8),0,*(int *)(param_1 + 4) << 2);
      FUN_0021aafc(*(undefined4 *)(param_1 + 8));
    }
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = iVar1;
  }
  return 0;
}


// ==== FUN_0021849e @ 0021849e ====

int FUN_0021849e(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar1 = param_2[1] + -1;
  iVar2 = iVar1 * 4;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    param_3 = *(int *)(param_2[2] + iVar2);
    iVar2 = iVar2 + -4;
    if (param_3 != 0) break;
  }
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar2 = FUN_00218450(param_1,iVar1 + 1,param_3,uVar3,param_4);
  if (iVar2 == 0) {
    FUN_00214b20(param_1[2],0,param_1[1] << 2);
    FUN_00214b30(param_1[2],param_2[2],(iVar1 + 1) * 4);
  }
  return iVar2;
}


// ==== FUN_002184f0 @ 002184f0 ====

int FUN_002184f0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00218450(param_1,1);
  if (iVar1 == 0) {
    FUN_00214b20(param_1[2],0,param_1[1] << 2);
    if ((int)param_2 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    *(uint *)param_1[2] = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    *param_1 = uVar2;
  }
  return iVar1;
}


// ==== FUN_00218528 @ 00218528 ====

int FUN_00218528(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_1 + 4) + -1;
  iVar3 = iVar4 * 4;
  while ((0 < iVar4 &&
         (piVar1 = (int *)(*(int *)(param_1 + 8) + iVar3), iVar3 = iVar3 + -4, *piVar1 == 0))) {
    iVar4 = iVar4 + -1;
  }
  uVar2 = 0x1f;
  do {
    if ((int)((*(uint *)(*(int *)(param_1 + 8) + iVar4 * 4) >> (uVar2 & 0xff)) << 0x1f) < 0) break;
    bVar5 = uVar2 != 0;
    uVar2 = uVar2 - 1;
  } while (bVar5);
  return uVar2 + iVar4 * 0x20 + 1;
}


// ==== FUN_0021855e @ 0021855e ====

int FUN_0021855e(void)

{
  int iVar1;
  
  iVar1 = FUN_00218528();
  return iVar1 + 7 >> 3;
}


// ==== FUN_0021856a @ 0021856a ====

int FUN_0021856a(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = param_2 + 0x1f;
  }
  uVar6 = param_2 & 0x1f;
  iVar1 = FUN_00218528();
  iVar5 = (int)uVar4 >> 5;
  iVar1 = iVar1 + param_2;
  if (*(int *)(param_1 + 4) * 0x20 < iVar1) {
    iVar3 = iVar1 + 0x1f;
    if (iVar3 < 0) {
      iVar3 = iVar1 + 0x3e;
    }
    iVar1 = FUN_00218450(param_1,iVar3 >> 5);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (0 < iVar5) {
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = iVar1 << 2;
    while( true ) {
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + -4;
      if (iVar1 < iVar5) break;
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3) =
           *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 + iVar5 * -4);
    }
    iVar3 = iVar1 * 4;
    for (; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3) = 0;
      iVar3 = iVar3 + -4;
    }
  }
  if (uVar6 != 0) {
    iVar1 = iVar5 << 2;
    uVar4 = 0;
    for (; iVar5 < *(int *)(param_1 + 4); iVar5 = iVar5 + 1) {
      uVar2 = *(uint *)(*(int *)(param_1 + 8) + iVar1);
      *(uint *)(*(int *)(param_1 + 8) + iVar1) = uVar2 << uVar6;
      *(uint *)(*(int *)(param_1 + 8) + iVar1) = uVar4 | *(uint *)(*(int *)(param_1 + 8) + iVar1);
      iVar1 = iVar1 + 4;
      uVar4 = uVar2 >> (0x20 - uVar6 & 0xff);
    }
  }
  return 0;
}


// ==== FUN_00218610 @ 00218610 ====

undefined4 FUN_00218610(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = param_2 + 0x1f;
  }
  param_2 = param_2 & 0x1f;
  iVar2 = (int)uVar1 >> 5;
  if (0 < iVar2) {
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 4) - iVar2; iVar3 = iVar3 + 1) {
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 8) + (iVar3 + iVar2) * 4);
    }
    iVar2 = iVar3 << 2;
    for (; iVar3 < *(int *)(param_1 + 4); iVar3 = iVar3 + 1) {
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 4;
    }
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = 0;
    iVar3 = iVar2 << 2;
    while( true ) {
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -4;
      if (iVar2 < 0) break;
      uVar4 = *(uint *)(*(int *)(param_1 + 8) + iVar3);
      *(uint *)(*(int *)(param_1 + 8) + iVar3) = uVar4 >> param_2;
      *(uint *)(*(int *)(param_1 + 8) + iVar3) = uVar1 | *(uint *)(*(int *)(param_1 + 8) + iVar3);
      uVar1 = uVar4 << (0x20 - param_2 & 0xff);
    }
  }
  return 0;
}


// ==== FUN_0021868a @ 0021868a ====

uint FUN_0021868a(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = *(int *)(param_1 + 4) - 1;
  iVar3 = uVar4 * 4;
  while ((-1 < (int)uVar4 &&
         (piVar1 = (int *)(*(int *)(param_1 + 8) + iVar3), iVar3 = iVar3 + -4, *piVar1 == 0))) {
    uVar4 = uVar4 - 1;
  }
  iVar3 = *(int *)(param_2 + 4) + -1;
  iVar5 = iVar3 * 4;
  while( true ) {
    if (iVar3 < 0) {
      return ~uVar4 >> 0x1f;
    }
    piVar1 = (int *)(*(int *)(param_2 + 8) + iVar5);
    iVar5 = iVar5 + -4;
    if (*piVar1 != 0) break;
    iVar3 = iVar3 + -1;
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 <= iVar3) {
      if ((int)uVar4 < iVar3) {
        return 0xffffffff;
      }
      iVar3 = uVar4 << 2;
      while( true ) {
        if ((int)uVar4 < 0) {
          return 0;
        }
        uVar6 = *(uint *)(*(int *)(param_1 + 8) + iVar3);
        uVar2 = *(uint *)(*(int *)(param_2 + 8) + iVar3);
        if (uVar2 < uVar6) break;
        iVar3 = iVar3 + -4;
        if (uVar6 < uVar2) {
          return 0xffffffff;
        }
        uVar4 = uVar4 - 1;
      }
    }
    return 1;
  }
  return 0xffffffff;
}


// ==== FUN_002186f2 @ 002186f2 ====

int FUN_002186f2(int *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1[1] + -1;
  iVar3 = iVar4 * 4;
  while ((-1 < iVar4 && (piVar1 = (int *)(param_1[2] + iVar3), iVar3 = iVar3 + -4, *piVar1 == 0))) {
    iVar4 = iVar4 + -1;
  }
  iVar3 = param_2[1] + -1;
  iVar5 = iVar3 * 4;
  do {
    if (iVar3 < 0) {
      if (iVar4 < 0) {
        return 0;
      }
LAB_00218730:
      return *param_1;
    }
    piVar1 = (int *)(param_2[2] + iVar5);
    iVar5 = iVar5 + -4;
    if (*piVar1 != 0) {
      iVar5 = *param_1;
      if (iVar4 < 0) goto LAB_00218728;
      if (iVar4 <= iVar3) {
        if (iVar3 <= iVar4) {
          if ((0 < iVar5) && (*param_2 < 0)) {
            return 1;
          }
          if ((0 < *param_2) && (iVar5 < 0)) {
            return -1;
          }
          iVar3 = iVar4 << 2;
          while( true ) {
            if (iVar4 < 0) {
              return 0;
            }
            puVar2 = (uint *)(param_1[2] + iVar3);
            uVar6 = *(uint *)(param_2[2] + iVar3);
            if (uVar6 < *puVar2) {
              return iVar5;
            }
            iVar3 = iVar3 + -4;
            if (*puVar2 < uVar6) break;
            iVar4 = iVar4 + -1;
          }
        }
LAB_00218728:
        return -iVar5;
      }
      goto LAB_00218730;
    }
    iVar3 = iVar3 + -1;
  } while( true );
}


// ==== FUN_0021877a @ 0021877a ====

void FUN_0021877a(undefined4 param_1,uint param_2)

{
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  
  local_c = &local_18;
  local_18 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if ((int)param_2 < 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = 1;
  }
  local_10 = 1;
  FUN_002186f2(param_1,&local_14);
  return;
}


// ==== FUN_002187a6 @ 002187a6 ====

int FUN_002187a6(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  if (((param_1 == param_3) || (bVar13 = param_1 == param_2, param_2 = param_3, bVar13)) ||
     (iVar2 = FUN_0021849e(), iVar2 == 0)) {
    *param_1 = 1;
    iVar11 = param_2[1] + -1;
    iVar2 = iVar11 * 4;
    while ((-1 < iVar11 && (piVar1 = (int *)(param_2[2] + iVar2), iVar2 = iVar2 + -4, *piVar1 == 0))
          ) {
      iVar11 = iVar11 + -1;
    }
    iVar2 = FUN_00218450(param_1,iVar11 + 1);
    if (iVar2 == 0) {
      iVar6 = 0;
      puVar3 = (uint *)param_2[2];
      puVar8 = (uint *)param_1[2];
      uVar10 = 0;
      while( true ) {
        puVar4 = puVar3 + 1;
        puVar9 = puVar8 + 1;
        if (iVar11 < iVar6) break;
        iVar6 = iVar6 + 1;
        uVar12 = uVar10 + *puVar8;
        *puVar8 = uVar12;
        uVar7 = *puVar3;
        *puVar8 = uVar7 + uVar12;
        uVar7 = (uint)(uVar7 + uVar12 < *puVar3);
        bVar13 = uVar12 < uVar10;
        puVar3 = puVar4;
        puVar8 = puVar9;
        uVar10 = uVar7;
        if (bVar13) {
          uVar10 = uVar7 + 1;
        }
      }
      iVar11 = iVar6 << 2;
      for (; uVar10 != 0; uVar10 = (uint)(uVar7 + uVar10 < uVar10)) {
        if ((int)param_1[1] <= iVar6) {
          iVar5 = FUN_00218450(param_1,iVar6 + 1);
          if (iVar5 != 0) {
            return iVar5;
          }
          puVar8 = (uint *)(param_1[2] + iVar11);
        }
        uVar7 = *puVar8;
        iVar11 = iVar11 + 4;
        *puVar8 = uVar7 + uVar10;
        iVar6 = iVar6 + 1;
      }
    }
  }
  return iVar2;
}


// ==== FUN_00218870 @ 00218870 ====

void FUN_00218870(uint param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar5 = 0;
  uVar4 = 0;
  puVar1 = param_3;
  while (iVar5 < (int)param_1) {
    uVar8 = *puVar1;
    uVar6 = uVar8 - uVar4;
    *puVar1 = uVar6;
    uVar7 = *(uint *)(param_2 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    uVar3 = (uint)(uVar6 < uVar7);
    if (uVar8 < uVar4) {
      uVar3 = uVar3 + 1;
    }
    *puVar1 = uVar6 - uVar7;
    uVar4 = uVar3;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_3 + (param_1 & ~((int)param_1 >> 0x1f));
  while (uVar4 != 0) {
    uVar3 = *puVar1;
    bVar9 = uVar4 <= uVar3;
    uVar3 = uVar3 - uVar4;
    if (bVar9) {
      uVar4 = 0;
    }
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
    puVar1 = puVar2;
    if (!bVar9) {
      uVar4 = 1;
    }
  }
  return;
}


// ==== FUN_002188d8 @ 002188d8 ====

int FUN_002188d8(undefined4 ****param_1,undefined4 ****param_2,undefined4 ****param_3,
                undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 ***pppuStack_24;
  undefined4 ***local_20;
  undefined4 local_1c;
  
  pppuStack_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  iVar2 = FUN_0021868a(param_2,param_3,param_3,param_4,param_1);
  if (iVar2 < 0) {
    iVar2 = 5;
  }
  else {
    FUN_0021aafe(&pppuStack_24);
    if (((param_1 != param_3) ||
        (iVar2 = FUN_0021849e(&pppuStack_24,param_1), param_3 = &pppuStack_24, iVar2 == 0)) &&
       ((param_1 == param_2 || (iVar2 = FUN_0021849e(param_1,param_2), iVar2 == 0)))) {
      *param_1 = (undefined4 ***)0x1;
      iVar3 = (int)param_3[1] + -1;
      iVar2 = iVar3 * 4;
      while ((-1 < iVar3 &&
             (piVar1 = (int *)((int)param_3[2] + iVar2), iVar2 = iVar2 + -4, *piVar1 == 0))) {
        iVar3 = iVar3 + -1;
      }
      iVar2 = 0;
      FUN_00218870(iVar3 + 1,param_3[2],param_1[2]);
    }
    FUN_0021ab0a(&pppuStack_24);
  }
  return iVar2;
}


// ==== FUN_00218952 @ 00218952 ====

void FUN_00218952(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 * *param_3 < 0) {
    iVar1 = FUN_0021868a(param_2,param_3,param_3,iVar2 * *param_3,param_4);
    if (iVar1 < 0) {
      iVar1 = FUN_002188d8(param_1,param_3,param_2);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = -iVar2;
      goto LAB_0021898e;
    }
    iVar1 = FUN_002188d8(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_002187a6();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_0021898e:
  *param_1 = iVar2;
  return;
}


// ==== FUN_00218992 @ 00218992 ====

void FUN_00218992(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 * *param_3 < 1) {
    iVar1 = FUN_002187a6();
  }
  else {
    iVar1 = FUN_0021868a(param_2,param_3,param_3,iVar2 * *param_3,param_4);
    if (iVar1 < 0) {
      iVar1 = FUN_002188d8(param_1,param_3,param_2);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = -iVar2;
      goto LAB_002189d0;
    }
    iVar1 = FUN_002188d8(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_002189d0:
  *param_1 = iVar2;
  return;
}


// ==== FUN_002189d4 @ 002189d4 ====

void FUN_002189d4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  
  local_c = &local_18;
  local_18 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if ((int)param_3 < 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = 1;
  }
  local_10 = 1;
  FUN_00218952(param_1,param_2,&local_14);
  return;
}


// ==== FUN_00218a00 @ 00218a00 ====

void FUN_00218a00(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  
  local_c = &local_18;
  local_18 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if ((int)param_3 < 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = 1;
  }
  local_10 = 1;
  FUN_00218992(param_1,param_2,&local_14);
  return;
}


// ==== FUN_00218a2c @ 00218a2c ====

void FUN_00218a2c(uint param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = param_4 >> 0x10;
  uVar3 = 0;
  uVar4 = param_4 & 0xffff;
  while (0xf < (int)param_1) {
    param_1 = param_1 - 0x10;
    uVar5 = *param_2 & 0xffff;
    uVar9 = *param_2 >> 0x10;
    uVar6 = uVar4 * uVar9;
    uVar10 = uVar2 * uVar5;
    uVar7 = uVar6 * 0x10000;
    uVar11 = uVar10 * 0x10000;
    iVar8 = uVar2 * uVar9 + (uVar6 >> 0x10) + (uVar10 >> 0x10);
    uVar5 = uVar4 * uVar5 + uVar11;
    if (uVar5 < uVar11) {
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar5 + uVar7;
    uVar6 = uVar9 + uVar3;
    uVar10 = *param_3;
    *param_3 = uVar6 + uVar10;
    uVar11 = iVar8 + (uint)CARRY4(uVar5,uVar7) + (uint)CARRY4(uVar9,uVar3) +
             (uint)CARRY4(uVar6,uVar10);
    uVar10 = param_2[1] >> 0x10;
    uVar3 = param_2[1] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[1];
    param_3[1] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[2] >> 0x10;
    uVar3 = param_2[2] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[2];
    param_3[2] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[3] >> 0x10;
    uVar3 = param_2[3] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[3];
    param_3[3] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[4] >> 0x10;
    uVar3 = param_2[4] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[4];
    param_3[4] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[5] >> 0x10;
    uVar3 = param_2[5] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[5];
    param_3[5] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[6] >> 0x10;
    uVar3 = param_2[6] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[6];
    param_3[6] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[7] >> 0x10;
    uVar3 = param_2[7] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[7];
    param_3[7] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[8] >> 0x10;
    uVar3 = param_2[8] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[8];
    param_3[8] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[9] >> 0x10;
    uVar3 = param_2[9] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[9];
    param_3[9] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[10] >> 0x10;
    uVar3 = param_2[10] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[10];
    param_3[10] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[0xb] >> 0x10;
    uVar3 = param_2[0xb] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[0xb];
    param_3[0xb] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[0xc] >> 0x10;
    uVar3 = param_2[0xc] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[0xc];
    param_3[0xc] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[0xd] >> 0x10;
    uVar3 = param_2[0xd] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[0xd];
    param_3[0xd] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[0xe] >> 0x10;
    uVar3 = param_2[0xe] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[0xe];
    param_3[0xe] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[0xf] >> 0x10;
    uVar6 = param_2[0xf] & 0xffff;
    uVar7 = uVar4 * uVar10;
    uVar3 = uVar2 * uVar6;
    uVar9 = uVar7 * 0x10000;
    uVar5 = uVar3 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar7 >> 0x10) + (uVar3 >> 0x10);
    uVar3 = uVar4 * uVar6 + uVar5;
    if (uVar3 < uVar5) {
      iVar8 = iVar8 + 1;
    }
    uVar6 = uVar3 + uVar9;
    uVar7 = uVar11 + uVar6;
    uVar5 = param_3[0xf];
    param_3[0xf] = uVar7 + uVar5;
    uVar3 = iVar8 + (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar11,uVar6) +
            (uint)CARRY4(uVar7,uVar5);
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 0x10;
  }
  uVar4 = param_4 & 0xffff;
  while (7 < (int)param_1) {
    param_1 = param_1 - 8;
    uVar5 = *param_2 & 0xffff;
    uVar9 = *param_2 >> 0x10;
    uVar6 = uVar4 * uVar9;
    uVar10 = uVar2 * uVar5;
    uVar7 = uVar6 * 0x10000;
    uVar11 = uVar10 * 0x10000;
    iVar8 = uVar2 * uVar9 + (uVar6 >> 0x10) + (uVar10 >> 0x10);
    uVar5 = uVar4 * uVar5 + uVar11;
    if (uVar5 < uVar11) {
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar5 + uVar7;
    uVar6 = uVar9 + uVar3;
    uVar10 = *param_3;
    *param_3 = uVar6 + uVar10;
    uVar11 = iVar8 + (uint)CARRY4(uVar5,uVar7) + (uint)CARRY4(uVar9,uVar3) +
             (uint)CARRY4(uVar6,uVar10);
    uVar10 = param_2[1] >> 0x10;
    uVar3 = param_2[1] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[1];
    param_3[1] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[2] >> 0x10;
    uVar3 = param_2[2] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[2];
    param_3[2] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[3] >> 0x10;
    uVar3 = param_2[3] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[3];
    param_3[3] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[4] >> 0x10;
    uVar3 = param_2[4] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[4];
    param_3[4] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[5] >> 0x10;
    uVar3 = param_2[5] & 0xffff;
    uVar5 = uVar4 * uVar10;
    uVar7 = uVar2 * uVar3;
    uVar6 = uVar5 * 0x10000;
    uVar9 = uVar7 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar5 >> 0x10) + (uVar7 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar9;
    if (uVar3 < uVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar3 + uVar6;
    uVar9 = uVar11 + uVar7;
    uVar5 = param_3[5];
    param_3[5] = uVar9 + uVar5;
    uVar7 = iVar8 + (uint)CARRY4(uVar3,uVar6) + (uint)CARRY4(uVar11,uVar7) +
            (uint)CARRY4(uVar9,uVar5);
    uVar11 = param_2[6] >> 0x10;
    uVar3 = param_2[6] & 0xffff;
    uVar9 = uVar4 * uVar11;
    uVar5 = uVar2 * uVar3;
    uVar10 = uVar9 * 0x10000;
    uVar6 = uVar5 * 0x10000;
    iVar8 = uVar2 * uVar11 + (uVar9 >> 0x10) + (uVar5 >> 0x10);
    uVar3 = uVar4 * uVar3 + uVar6;
    if (uVar3 < uVar6) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = uVar3 + uVar10;
    uVar6 = uVar7 + uVar5;
    uVar9 = param_3[6];
    param_3[6] = uVar6 + uVar9;
    uVar11 = iVar8 + (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar7,uVar5) +
             (uint)CARRY4(uVar6,uVar9);
    uVar10 = param_2[7] >> 0x10;
    uVar6 = param_2[7] & 0xffff;
    uVar7 = uVar4 * uVar10;
    uVar3 = uVar2 * uVar6;
    uVar9 = uVar7 * 0x10000;
    uVar5 = uVar3 * 0x10000;
    iVar8 = uVar2 * uVar10 + (uVar7 >> 0x10) + (uVar3 >> 0x10);
    uVar3 = uVar4 * uVar6 + uVar5;
    if (uVar3 < uVar5) {
      iVar8 = iVar8 + 1;
    }
    uVar6 = uVar3 + uVar9;
    uVar7 = uVar11 + uVar6;
    uVar5 = param_3[7];
    param_3[7] = uVar7 + uVar5;
    uVar3 = iVar8 + (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar11,uVar6) +
            (uint)CARRY4(uVar7,uVar5);
    param_2 = param_2 + 8;
    param_3 = param_3 + 8;
  }
  uVar4 = param_1;
  puVar1 = param_3;
  while (0 < (int)uVar4) {
    uVar4 = uVar4 - 1;
    uVar5 = *param_2 & 0xffff;
    uVar9 = *param_2 >> 0x10;
    uVar10 = (param_4 & 0xffff) * uVar9;
    uVar6 = uVar2 * uVar5;
    uVar11 = uVar10 * 0x10000;
    uVar7 = uVar6 * 0x10000;
    iVar8 = uVar2 * uVar9 + (uVar10 >> 0x10) + (uVar6 >> 0x10);
    uVar5 = (param_4 & 0xffff) * uVar5 + uVar7;
    if (uVar5 < uVar7) {
      iVar8 = iVar8 + 1;
    }
    uVar7 = uVar5 + uVar11;
    uVar9 = uVar7 + uVar3;
    uVar6 = *puVar1;
    *puVar1 = uVar9 + uVar6;
    uVar3 = iVar8 + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar7,uVar3) +
            (uint)CARRY4(uVar9,uVar6);
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_3 + (param_1 & ~((int)param_1 >> 0x1f));
  do {
    uVar2 = *puVar1;
    *puVar1 = uVar2 + uVar3;
    uVar3 = (uint)(uVar2 + uVar3 < uVar3);
    puVar1 = puVar1 + 1;
  } while (uVar3 != 0);
  return;
}


// ==== FUN_00219380 @ 00219380 ====

int FUN_00219380(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38 [3];
  int local_2c [3];
  
  FUN_0021aafe(local_38);
  FUN_0021aafe(local_2c);
  if (param_1 == param_2) {
    iVar3 = FUN_0021849e(local_38,param_1);
    if (iVar3 != 0) goto LAB_00219458;
    param_2 = local_38;
  }
  if ((param_1 != param_3) ||
     (iVar3 = FUN_0021849e(local_2c,param_1), param_3 = local_2c, iVar3 == 0)) {
    iVar6 = param_2[1] + -1;
    iVar3 = iVar6 * 4;
    while ((-1 < iVar6 && (piVar1 = (int *)(param_2[2] + iVar3), iVar3 = iVar3 + -4, *piVar1 == 0)))
    {
      iVar6 = iVar6 + -1;
    }
    iVar5 = param_3[1] + -1;
    iVar3 = iVar5 * 4;
    while ((-1 < iVar5 && (piVar1 = (int *)(param_3[2] + iVar3), iVar3 = iVar3 + -4, *piVar1 == 0)))
    {
      iVar5 = iVar5 + -1;
    }
    iVar3 = FUN_00218450(param_1,iVar6 + iVar5 + 2);
    if ((iVar3 == 0) && (iVar3 = FUN_002184f0(param_1,0), iVar3 == 0)) {
      iVar7 = iVar5 << 2;
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        puVar2 = (undefined4 *)(param_3[2] + iVar7);
        iVar4 = param_1[2] + iVar7;
        iVar7 = iVar7 + -4;
        FUN_00218a2c(iVar6 + 1,param_2[2],iVar4,*puVar2);
      }
      *param_1 = *param_3 * *param_2;
    }
  }
LAB_00219458:
  FUN_0021ab0a(local_2c);
  FUN_0021ab0a(local_38);
  return iVar3;
}


// ==== FUN_0021946c @ 0021946c ====

void FUN_0021946c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  local_c = &local_18;
  local_14 = 1;
  local_10 = 1;
  local_18 = param_3;
  FUN_00219380(param_1,param_2,&local_14);
  return;
}


// ==== FUN_00219488 @ 00219488 ====

int FUN_00219488(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_9c;
  int local_80;
  int local_68;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined1 auStack_44 [8];
  int local_3c;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  undefined1 auStack_2c [8];
  undefined4 *local_24;
  
  iVar1 = FUN_0021877a(param_4,0);
  if (iVar1 == 0) {
    return 6;
  }
  FUN_0021aafe(&local_5c);
  FUN_0021aafe(&local_50);
  FUN_0021aafe(auStack_44);
  FUN_0021aafe(auStack_38);
  FUN_0021aafe(auStack_2c);
  iVar1 = FUN_0021868a(param_3,param_4);
  if (iVar1 < 0) {
    if (((param_1 == (int *)0x0) || (iVar1 = FUN_002184f0(param_1,0), iVar1 == 0)) &&
       ((param_2 == (int *)0x0 || (iVar1 = FUN_0021849e(param_2,param_3), iVar1 == 0)))) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0021849e(&local_5c,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_0021849e(&local_50,param_4), iVar1 == 0)) {
      local_50 = 1;
      local_5c = 1;
      iVar1 = FUN_00218450(auStack_44,param_3[1] + 2);
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_002184f0(auStack_44,0), iVar1 == 0 &&
           (iVar1 = FUN_00218450(auStack_38,2), iVar1 == 0)) &&
          (iVar2 = FUN_00218450(auStack_2c,3), iVar1 = iVar2, iVar2 == 0)))) {
        uVar3 = FUN_00218528(&local_50);
        uVar3 = DAT_002197ec & uVar3;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        if (uVar3 == 0x1f) {
          local_80 = 0;
        }
        else {
          local_80 = 0x1f - uVar3;
          iVar1 = FUN_0021856a(&local_5c,local_80);
          if ((iVar1 != 0) || (iVar1 = FUN_0021856a(&local_50,local_80), iVar1 != 0))
          goto LAB_0021983e;
        }
        local_9c = local_58 + -1;
        iVar8 = local_4c + -1;
        iVar1 = (local_9c - iVar8) * 0x20;
        iVar11 = (local_9c - iVar8) * 4;
        FUN_0021856a(&local_50,iVar1);
        while (iVar4 = FUN_002186f2(&local_5c,&local_50), -1 < iVar4) {
          *(int *)(local_3c + iVar11) = *(int *)(local_3c + iVar11) + 1;
          FUN_00218992(&local_5c,&local_5c,&local_50);
        }
        FUN_00218610(&local_50,iVar1);
        iVar4 = iVar8 * 4;
        iVar9 = (local_9c - local_4c) * 4;
        local_68 = (local_58 - local_4c) * 0x20;
        iVar11 = (local_58 + 0x3ffffffe) * 4;
        for (; iVar1 = local_54, iVar8 < local_9c; local_9c = local_9c + -1) {
          uVar3 = *(uint *)(local_54 + iVar11 + 4);
          uVar10 = *(uint *)(local_48 + iVar4);
          if (uVar3 < uVar10) {
            uVar12 = uVar10 >> 0x10;
            iVar5 = FUN_00200a00(uVar3,uVar12);
            uVar7 = *(uint *)(iVar1 + iVar11);
            uVar13 = uVar7 >> 0x10 | (uVar3 - uVar12 * iVar5) * 0x10000;
            uVar3 = (uVar10 & 0xffff) * iVar5;
            do {
              if (uVar3 <= uVar13) break;
              uVar13 = uVar13 + uVar10;
              iVar5 = iVar5 + -1;
            } while (uVar10 <= uVar13);
            iVar1 = uVar13 - uVar3;
            uVar3 = FUN_00200a00(iVar1,uVar12);
            uVar7 = uVar7 & 0xffff | (iVar1 - uVar12 * uVar3) * 0x10000;
            uVar12 = (uVar10 & 0xffff) * uVar3;
            do {
              if (uVar12 <= uVar7) break;
              uVar7 = uVar7 + uVar10;
              uVar3 = uVar3 - 1;
            } while (uVar10 <= uVar7);
            *(uint *)(local_3c + iVar9) = uVar3 | iVar5 << 0x10;
          }
          else {
            *(undefined4 *)(local_3c + iVar9) = 0xffffffff;
          }
          *(int *)(local_3c + iVar9) = *(int *)(local_3c + iVar9) + 1;
          do {
            *(int *)(local_3c + iVar9) = *(int *)(local_3c + iVar9) + -1;
            iVar1 = FUN_002184f0(auStack_38,0);
            if (iVar1 != 0) goto LAB_0021983e;
            uVar6 = 0;
            if (0 < iVar8) {
              uVar6 = *(undefined4 *)(local_48 + iVar4 + -4);
            }
            *local_30 = uVar6;
            local_30[1] = *(undefined4 *)(local_48 + iVar4);
            iVar1 = FUN_0021946c(auStack_38,auStack_38,*(undefined4 *)(local_3c + iVar9));
            if ((iVar1 != 0) || (iVar1 = FUN_002184f0(auStack_2c), iVar1 != 0)) goto LAB_0021983e;
            uVar6 = 0;
            if (1 < local_9c) {
              uVar6 = *(undefined4 *)(local_54 + iVar11 + -4);
            }
            *local_24 = uVar6;
            if (local_9c < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(local_54 + iVar11);
            }
            local_24[1] = uVar6;
            local_24[2] = *(undefined4 *)(local_54 + iVar11 + 4);
            iVar1 = FUN_002186f2(auStack_38,auStack_2c);
          } while (0 < iVar1);
          iVar1 = FUN_0021946c(auStack_38,&local_50,*(undefined4 *)(local_3c + iVar9));
          if (iVar1 != 0) goto LAB_0021983e;
          local_68 = local_68 + -0x20;
          iVar1 = FUN_0021856a(auStack_38,local_68);
          if ((iVar1 != 0) || (iVar1 = FUN_00218992(&local_5c,&local_5c,auStack_38), iVar1 != 0))
          goto LAB_0021983e;
          iVar1 = FUN_0021877a(&local_5c);
          if (iVar1 < 0) {
            iVar1 = FUN_0021849e(auStack_38,&local_50);
            if (((iVar1 != 0) || (iVar1 = FUN_0021856a(auStack_38,local_68), iVar1 != 0)) ||
               (iVar1 = FUN_00218952(&local_5c,&local_5c,auStack_38), iVar1 != 0))
            goto LAB_0021983e;
            *(int *)(local_3c + iVar9) = *(int *)(local_3c + iVar9) + -1;
          }
          iVar9 = iVar9 + -4;
          iVar11 = iVar11 + -4;
        }
        if (param_1 != (int *)0x0) {
          FUN_0021849e(param_1,auStack_44);
          *param_1 = *param_4 * *param_3;
        }
        iVar1 = iVar2;
        if (param_2 != (int *)0x0) {
          FUN_00218610(&local_5c,local_80);
          FUN_0021849e(param_2,&local_5c);
          *param_2 = *param_3;
          iVar8 = FUN_0021877a(param_2,0);
          if (iVar8 == 0) {
            *param_2 = 1;
          }
        }
      }
    }
  }
LAB_0021983e:
  FUN_0021ab0a(&local_5c);
  FUN_0021ab0a(&local_50);
  FUN_0021ab0a(auStack_44);
  FUN_0021ab0a(auStack_38);
  FUN_0021ab0a(auStack_2c);
  return iVar1;
}


// ==== FUN_00219868 @ 00219868 ====

int FUN_00219868(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0021877a(param_3,0);
  if (iVar1 < 0) {
    return 5;
  }
  iVar1 = FUN_00219488(0,param_1,param_2,param_3);
  if (iVar1 == 0) {
    while (iVar1 = FUN_0021877a(param_1,0), iVar1 < 0) {
      iVar1 = FUN_00218952(param_1,param_1,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    while (iVar1 = FUN_002186f2(param_1,param_3), -1 < iVar1) {
      iVar1 = FUN_00218992(param_1,param_1,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_002198ca @ 002198ca ====

undefined4
FUN_002198ca(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar3 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_0021aafe(&uStack_24);
  iVar1 = FUN_0021839c(&uStack_24,param_2,0x80);
  if (iVar1 == 0) {
    iVar1 = FUN_002186f2(&uStack_24,param_1 + 5);
    if (-1 < iVar1) {
      FUN_0021ab0a(&uStack_24);
      return 1;
    }
    uVar2 = *param_1;
    iVar1 = FUN_0021ab2e(&uStack_24,param_1 + 8,param_1 + 5,param_1 + 0xe,puVar3);
    if (iVar1 == 0) {
      iVar1 = FUN_0021840a(&uStack_24,param_3,uVar2);
    }
  }
  FUN_0021ab0a(&uStack_24);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}


// ==== FUN_0021993a @ 0021993a ====

int FUN_0021993a(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char acStack_419 [1029];
  
  iVar4 = *param_1;
  if (iVar4 - 0x10U < 0x3f1) {
    iVar2 = FUN_002198ca(param_1,param_4,acStack_419 + 1);
    if (iVar2 == 0) {
      if ((acStack_419[1] == '\0') && (acStack_419[2] == '\x01')) {
        pcVar3 = acStack_419 + 2;
        while( true ) {
          pcVar1 = pcVar3 + 1;
          if (*pcVar1 == '\0') break;
          if ((acStack_419 + iVar4 <= pcVar3 + 1) || (pcVar3 = pcVar3 + 1, *pcVar1 != -1))
          goto LAB_002199a0;
        }
        if (acStack_419 + (iVar4 - (int)(pcVar3 + 2)) + 1 == param_2) {
          iVar4 = FUN_00214b42(pcVar3 + 2,param_3,param_2);
          if (iVar4 == 0) {
            return 0;
          }
          return 7;
        }
      }
LAB_002199a0:
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// ==== FUN_002199a8 @ 002199a8 ====

uint FUN_002199a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + param_1;
  return (uint)*(byte *)(iVar1 + 1) << 0x10 | (uint)*(byte *)(param_1 + param_2) << 0x18 |
         (uint)*(byte *)(iVar1 + 3) | (uint)*(byte *)(iVar1 + 2) << 8;
}


// ==== FUN_002199c0 @ 002199c0 ====

void FUN_002199c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint local_60 [16];
  
  iVar13 = 0;
  do {
    uVar1 = FUN_002199a8(param_2,iVar13);
    *(undefined4 *)((int)local_60 + iVar13) = uVar1;
    iVar13 = iVar13 + 4;
  } while (iVar13 != 0x40);
  uVar11 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar3 = DAT_00219d68 + *(int *)(param_1 + 0x18) + local_60[0] + (uVar2 >> 0x1b | uVar2 << 5) +
          ((uVar11 ^ uVar8) & uVar5 ^ uVar11);
  uVar24 = uVar5 >> 2 | uVar5 << 0x1e;
  uVar28 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar6 = ((uVar24 ^ uVar8) & uVar2 ^ uVar8) + DAT_00219d68 + uVar11 + local_60[1] +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar23 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar9 = ((uVar28 ^ uVar24) & uVar3 ^ uVar24) + DAT_00219d68 + uVar8 + local_60[2] +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_00219d68 + local_60[3] + ((uVar23 ^ uVar28) & uVar6 ^ uVar28) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar24 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar28 + DAT_00219d68 + local_60[4] + ((uVar3 ^ uVar23) & uVar9 ^ uVar23) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar28 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar23 + DAT_00219d68 + local_60[5] + ((uVar24 ^ uVar3) & uVar6 ^ uVar3) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar23 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar3 + DAT_00219d68 + local_60[6] + ((uVar28 ^ uVar24) & uVar9 ^ uVar24) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_00219d68 + local_60[7] + ((uVar23 ^ uVar28) & uVar6 ^ uVar28) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar24 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar28 + DAT_00219d68 + local_60[8] + ((uVar3 ^ uVar23) & uVar9 ^ uVar23) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar28 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar14 = uVar23 + DAT_00219d68 + local_60[9] + ((uVar24 ^ uVar3) & uVar6 ^ uVar3) +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar23 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar6 = uVar3 + DAT_00219d68 + local_60[10] + ((uVar28 ^ uVar24) & uVar9 ^ uVar24) +
          (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar3 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar9 = uVar24 + DAT_00219d68 + local_60[0xb] + ((uVar23 ^ uVar28) & uVar14 ^ uVar28) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar24 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar28 + DAT_00219d68 + local_60[0xc] + ((uVar3 ^ uVar23) & uVar6 ^ uVar23) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar28 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar23 + DAT_00219d68 + local_60[0xd] + ((uVar24 ^ uVar3) & uVar9 ^ uVar3) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar23 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar14 = uVar3 + DAT_00219d68 + local_60[0xe] + ((uVar28 ^ uVar24) & uVar6 ^ uVar24) +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar3 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar6 = local_60[2] ^ local_60[0] ^ local_60[8] ^ local_60[0xd];
  uVar4 = uVar24 + DAT_00219d68 + local_60[0xf] + ((uVar23 ^ uVar28) & uVar9 ^ uVar28) +
          (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar24 = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar9 = local_60[3] ^ local_60[1] ^ local_60[9] ^ local_60[0xe];
  uVar7 = uVar28 + DAT_00219d68 + uVar24 + ((uVar3 ^ uVar23) & uVar14 ^ uVar23) +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar28 = uVar9 >> 0x1f | uVar9 << 1;
  uVar9 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar14 = local_60[4] ^ local_60[2] ^ local_60[10] ^ local_60[0xf];
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar10 = uVar23 + DAT_00219d68 + uVar28 + ((uVar6 ^ uVar3) & uVar4 ^ uVar3) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar23 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar12 = uVar3 + DAT_00219d68 + uVar14 + ((uVar9 ^ uVar6) & uVar7 ^ uVar6) +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar4 = local_60[5] ^ local_60[3] ^ local_60[0xb] ^ uVar24;
  uVar3 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar15 = local_60[6] ^ local_60[4] ^ local_60[0xc] ^ uVar28;
  uVar25 = uVar6 + DAT_00219d68 + uVar4 + ((uVar23 ^ uVar9) & uVar10 ^ uVar9) +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar6 = uVar15 >> 0x1f | uVar15 << 1;
  uVar15 = DAT_00219d6c + uVar6 + uVar9 + (uVar3 ^ uVar23 ^ uVar12) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar10 = local_60[7] ^ local_60[5] ^ local_60[0xd] ^ uVar14;
  uVar9 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar25 = uVar23 + DAT_00219d6c + uVar10 + (uVar7 ^ uVar3 ^ uVar25) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar23 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar12 = local_60[8] ^ local_60[6] ^ local_60[0xe] ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar18 = DAT_00219d6c + uVar12 + uVar3 + (uVar9 ^ uVar7 ^ uVar15) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar3 = local_60[9] ^ local_60[7] ^ local_60[0xf] ^ uVar6;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar15 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar21 = DAT_00219d6c + uVar3 + uVar7 + (uVar23 ^ uVar9 ^ uVar25) +
           (uVar18 >> 0x1b | uVar18 * 0x20);
  uVar7 = local_60[10] ^ local_60[8] ^ uVar24 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar25 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar26 = uVar9 + DAT_00219d6c + uVar7 + (uVar15 ^ uVar23 ^ uVar18) +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar9 = local_60[0xb] ^ local_60[9] ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar18 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar16 = uVar23 + DAT_0021a344 + uVar9 + (uVar25 ^ uVar15 ^ uVar21) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar23 = local_60[0xc] ^ local_60[10] ^ uVar14 ^ uVar3;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar21 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar20 = uVar15 + DAT_0021a344 + uVar23 + (uVar18 ^ uVar25 ^ uVar26) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar15 = local_60[0xd] ^ local_60[0xb] ^ uVar4 ^ uVar7;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar19 = uVar25 + DAT_0021a344 + uVar15 + (uVar21 ^ uVar18 ^ uVar16) +
           (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = local_60[0xe] ^ local_60[0xc] ^ uVar6 ^ uVar9;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar26 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar22 = uVar18 + DAT_0021a344 + uVar16 + (uVar25 ^ uVar21 ^ uVar20) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar18 = local_60[0xf] ^ local_60[0xd] ^ uVar10 ^ uVar23;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar27 = uVar21 + DAT_0021a344 + uVar18 + (uVar26 ^ uVar25 ^ uVar19) +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar21 = uVar24 ^ local_60[0xe] ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar17 = uVar25 + DAT_0021a344 + uVar21 + (uVar20 ^ uVar26 ^ uVar22) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar25 = uVar28 ^ local_60[0xf] ^ uVar3 ^ uVar16;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar26 + DAT_0021a344 + uVar25 + (uVar19 ^ uVar20 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar24 = uVar14 ^ uVar24 ^ uVar7 ^ uVar18;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar20 + DAT_0021a344 + uVar24 + (uVar22 ^ uVar19 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar20 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar19 + DAT_0021a344 + uVar28 + (uVar26 ^ uVar22 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar6 ^ uVar14 ^ uVar23 ^ uVar25;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = uVar22 + DAT_0021a344 + uVar14 + (uVar20 ^ uVar26 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar4 ^ uVar10 ^ uVar15 ^ uVar24;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar17 = uVar26 + DAT_0021a344 + uVar4 + (uVar19 ^ uVar20 ^ uVar27) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar6 = uVar6 ^ uVar12 ^ uVar16 ^ uVar28;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar10 ^ uVar3 ^ uVar18 ^ uVar14;
  uVar10 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  uVar27 = uVar20 + DAT_0021a344 + uVar6 + (uVar22 ^ uVar19 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar20 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar12 = uVar12 ^ uVar7 ^ uVar21 ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar17 = uVar19 + DAT_0021a344 + uVar26 + (uVar10 ^ uVar22 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar22 + DAT_0021a344 + uVar12 + (uVar20 ^ uVar10 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar3 = uVar3 ^ uVar9 ^ uVar25 ^ uVar6;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = uVar10 + DAT_0021a344 + uVar3 + (uVar19 ^ uVar20 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar7 ^ uVar23 ^ uVar24 ^ uVar26;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar20 + DAT_0021a348 + uVar7 + (uVar29 >> 0x1b | uVar29 * 0x20) +
           (uVar27 & uVar22 | (uVar27 | uVar22) & uVar19);
  uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar20 = uVar16 ^ uVar23 ^ uVar14 ^ uVar3;
  uVar23 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar20 = uVar20 >> 0x1f | uVar20 << 1;
  uVar29 = uVar19 + DAT_0021a348 + uVar9 + (uVar29 & uVar10 | (uVar29 | uVar10) & uVar22) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar27 = uVar22 + DAT_0021a348 + uVar20 + (uVar29 >> 0x1b | uVar29 * 0x20) +
           (uVar17 & uVar23 | (uVar17 | uVar23) & uVar10);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar15 = uVar18 ^ uVar15 ^ uVar4 ^ uVar7;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar16 = uVar21 ^ uVar16 ^ uVar6 ^ uVar9;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar17 = uVar10 + DAT_0021a348 + uVar15 + (uVar29 & uVar19 | (uVar29 | uVar19) & uVar23) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar10 = uVar25 ^ uVar18 ^ uVar26 ^ uVar20;
  uVar30 = uVar23 + DAT_0021a348 + uVar16 + (uVar17 >> 0x1b | uVar17 * 0x20) +
           (uVar27 & uVar22 | (uVar27 | uVar22) & uVar19);
  uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar19 + DAT_0021a348 + uVar10 + (uVar17 & uVar23 | (uVar17 | uVar23) & uVar22) +
           (uVar30 >> 0x1b | uVar30 * 0x20);
  uVar21 = uVar24 ^ uVar21 ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar29 = ((uVar30 | uVar18) & uVar23 | uVar30 & uVar18) +
           DAT_0021a348 + uVar21 + uVar22 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar19 = uVar30 >> 2 | uVar30 * 0x40000000;
  uVar25 = uVar28 ^ uVar25 ^ uVar3 ^ uVar16;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar27 = ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19) + uVar23 + DAT_0021a348 + uVar25 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar24 = uVar14 ^ uVar24 ^ uVar7 ^ uVar10;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar17 = ((uVar29 | uVar22) & uVar19 | uVar29 & uVar22) +
           uVar18 + DAT_0021a348 + uVar24 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar23 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar18 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar29 = ((uVar27 | uVar23) & uVar22 | uVar27 & uVar23) + uVar19 + DAT_0021a348 + uVar28 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar6 ^ uVar14 ^ uVar20 ^ uVar25;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar27 = ((uVar17 | uVar18) & uVar23 | uVar17 & uVar18) +
           uVar22 + DAT_0021a348 + uVar14 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar4 = uVar26 ^ uVar4 ^ uVar15 ^ uVar24;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar17 = ((uVar29 | uVar19) & uVar18 | uVar29 & uVar19) + uVar23 + DAT_0021a348 + uVar4 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar23 = uVar12 ^ uVar6 ^ uVar16 ^ uVar28;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar29 = ((uVar27 | uVar22) & uVar19 | uVar27 & uVar22) +
           uVar18 + DAT_0021a6dc + uVar23 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar18 = uVar3 ^ uVar26 ^ uVar10 ^ uVar14;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar12 = uVar7 ^ uVar12 ^ uVar21 ^ uVar4;
  uVar17 = uVar19 + DAT_0021a6dc + uVar18 + (uVar17 & uVar6 | (uVar17 | uVar6) & uVar22) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar27 = ((uVar29 | uVar26) & uVar6 | uVar29 & uVar26) +
           uVar22 + DAT_0021a6dc + uVar12 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar19 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar3 = uVar9 ^ uVar3 ^ uVar25 ^ uVar23;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = ((uVar17 | uVar19) & uVar26 | uVar17 & uVar19) + DAT_0021a6dc + uVar3 + uVar6 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar20 ^ uVar7 ^ uVar24 ^ uVar18;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar17 = ((uVar27 | uVar22) & uVar19 | uVar27 & uVar22) +
           DAT_0021a6dc + uVar6 + uVar26 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar26 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar27 = (uVar29 & uVar7 | (uVar29 | uVar7) & uVar22) + uVar19 + DAT_0021a6dc + uVar9 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar20 = uVar16 ^ uVar20 ^ uVar14 ^ uVar3;
  uVar20 = uVar20 >> 0x1f | uVar20 << 1;
  uVar29 = ((uVar17 | uVar26) & uVar7 | uVar17 & uVar26) +
           uVar22 + DAT_0021a6dc + uVar20 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar15 = uVar10 ^ uVar15 ^ uVar4 ^ uVar6;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar17 = (uVar27 & uVar19 | (uVar27 | uVar19) & uVar26) + uVar7 + DAT_0021a6dc + uVar15 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar16 = uVar21 ^ uVar16 ^ uVar23 ^ uVar9;
  uVar7 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar27 = DAT_0021a6e0 + uVar16 + uVar26 + (uVar22 ^ uVar19 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar10 = uVar25 ^ uVar10 ^ uVar18 ^ uVar20;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar21 = uVar24 ^ uVar21 ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar17 = uVar19 + DAT_0021a6e0 + uVar10 + (uVar7 ^ uVar22 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar29 = uVar22 + DAT_0021a6e0 + uVar21 + (uVar26 ^ uVar7 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar22 = uVar28 ^ uVar25 ^ uVar3 ^ uVar16;
  uVar25 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar27 = DAT_0021a6e0 + uVar22 + uVar7 + (uVar19 ^ uVar26 ^ uVar17) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar7 = uVar14 ^ uVar24 ^ uVar6 ^ uVar10;
  uVar24 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar26 + DAT_0021a6e0 + uVar7 + (uVar25 ^ uVar19 ^ uVar29) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar26 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar14 = uVar23 ^ uVar14 ^ uVar20 ^ uVar22;
  uVar27 = DAT_0021a6e0 + uVar28 + uVar19 + (uVar24 ^ uVar25 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar4 = uVar18 ^ uVar4 ^ uVar15 ^ uVar7;
  uVar17 = uVar25 + DAT_0021a6e0 + uVar14 + (uVar26 ^ uVar24 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar25 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar24 + DAT_0021a6e0 + uVar4 + (uVar19 ^ uVar26 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar23 = uVar12 ^ uVar23 ^ uVar16 ^ uVar28;
  uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar29 = DAT_0021a6e0 + uVar23 + uVar26 + (uVar25 ^ uVar19 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar26 = uVar3 ^ uVar18 ^ uVar10 ^ uVar14;
  uVar18 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  uVar17 = uVar19 + DAT_0021a6e0 + uVar26 + (uVar24 ^ uVar25 ^ uVar27) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar12 = uVar6 ^ uVar12 ^ uVar21 ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar19 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar27 = uVar25 + DAT_0021a924 + uVar12 + (uVar18 ^ uVar24 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar3 = uVar9 ^ uVar3 ^ uVar22 ^ uVar23;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar25 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar24 + DAT_0021a924 + uVar3 + (uVar19 ^ uVar18 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar20 ^ uVar6 ^ uVar7 ^ uVar26;
  uVar24 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar18 + DAT_0021a924 + uVar6 + (uVar25 ^ uVar19 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar19 = uVar19 + DAT_0021a924 + uVar9 + (uVar24 ^ uVar25 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar14 = uVar16 ^ uVar20 ^ uVar14 ^ uVar3;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar20 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar25 = uVar25 + DAT_0021a924 + uVar14 + (uVar18 ^ uVar24 ^ uVar27) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar6 = uVar10 ^ uVar15 ^ uVar4 ^ uVar6;
  uVar4 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar19 = uVar24 + DAT_0021a924 + uVar6 + (uVar20 ^ uVar18 ^ uVar19) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar9 = uVar23 ^ uVar21 ^ uVar16 ^ uVar9;
  uVar24 = uVar9 >> 0x1f | uVar9 << 1;
  uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar15 = uVar18 + DAT_0021a924 + uVar24 + (uVar4 ^ uVar20 ^ uVar25) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar14 = uVar26 ^ uVar22 ^ uVar10 ^ uVar14;
  uVar9 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar6 = uVar7 ^ uVar21 ^ uVar12 ^ uVar6;
  uVar7 = uVar20 + DAT_0021a924 + (uVar14 >> 0x1f | uVar14 << 1) + (uVar23 ^ uVar4 ^ uVar19) +
          (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar6 = uVar4 + DAT_0021a924 + (uVar6 >> 0x1f | uVar6 << 1) + (uVar9 ^ uVar23 ^ uVar15) +
          (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar24 = uVar28 ^ uVar22 ^ uVar3 ^ uVar24;
  *(uint *)(param_1 + 8) =
       uVar23 + DAT_0021a924 + uVar2 + (uVar24 >> 0x1f | uVar24 << 1) + (uVar14 ^ uVar9 ^ uVar7) +
       (uVar6 >> 0x1b | uVar6 * 0x20);
  *(uint *)(param_1 + 0x10) = uVar8 + (uVar7 >> 2 | uVar7 * 0x40000000);
  *(uint *)(param_1 + 0xc) = uVar6 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar14 + uVar11;
  *(uint *)(param_1 + 0x18) = uVar9 + *(int *)(param_1 + 0x18);
  return;
}


// ==== FUN_0021a928 @ 0021a928 ====

void FUN_0021a928(undefined4 param_1,int param_2,int param_3)

{
  *(char *)(param_2 + param_3) = (char)((uint)param_1 >> 0x18);
  param_3 = param_3 + param_2;
  *(char *)(param_3 + 3) = (char)param_1;
  *(char *)(param_3 + 1) = (char)((uint)param_1 >> 0x10);
  *(char *)(param_3 + 2) = (char)((uint)param_1 >> 8);
  return;
}


// ==== FUN_0021a93c @ 0021a93c ====

void FUN_0021a93c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = DAT_0021a95c;
  param_1[2] = DAT_0021a95c;
  param_1[3] = iVar1 + -0x77777778;
  iVar1 = DAT_0021a960;
  param_1[4] = DAT_0021a960;
  param_1[5] = iVar1 + 0x77777778;
  param_1[6] = DAT_0021a964;
  return;
}


// ==== FUN_0021a968 @ 0021a968 ====

void FUN_0021a968(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < (int)param_3) {
    uVar2 = *param_1 & 0x3f;
    uVar1 = *param_1 + param_3;
    *param_1 = uVar1;
    if (uVar1 < param_3) {
      param_1[1] = param_1[1] + 1;
    }
    if ((uVar2 != 0) && (iVar3 = 0x40 - uVar2, iVar3 <= (int)param_3)) {
      FUN_00214b30((int)param_1 + uVar2 + 0x1c,param_2,iVar3);
      param_3 = param_3 - iVar3;
      FUN_002199c0(param_1,param_1 + 7);
      param_2 = param_2 + iVar3;
      uVar2 = 0;
    }
    param_2 = param_2 + param_3;
    for (; 0x3f < (int)param_3; param_3 = param_3 - 0x40) {
      FUN_002199c0(param_1);
    }
    if (0 < (int)param_3) {
      FUN_00214b30((int)param_1 + uVar2 + 0x1c,param_2 - param_3,param_3);
      return;
    }
  }
  return;
}


// ==== FUN_0021a9dc @ 0021a9dc ====

void FUN_0021a9dc(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar3 = *param_1;
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_0021a928(uVar3 >> 0x1d | param_1[1] << 3,&puStack_20,0);
  FUN_0021a928(uVar3 << 3,&puStack_20,4);
  uVar3 = *param_1 & 0x3f;
  if (uVar3 < 0x38) {
    iVar1 = 0x38 - uVar3;
  }
  else {
    iVar1 = 0x78 - uVar3;
  }
  FUN_0021a968(param_1,DAT_0021aa3c + 0x21aa10,iVar1);
  FUN_0021a968(param_1,&puStack_20,8);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    FUN_0021a928(*(undefined4 *)((int)param_1 + iVar1 + 8),param_2,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x14);
  return;
}


// ==== FUN_0021aa40 @ 0021aa40 ====

void FUN_0021aa40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_74 [96];
  
  FUN_0021a93c(auStack_74);
  FUN_0021a968(auStack_74,param_1,param_2);
  FUN_0021a9dc(auStack_74,param_3);
  FUN_00214b20(auStack_74,0,0x5c);
  return;
}


// ==== FUN_0021aa74 @ 0021aa74 ====

int FUN_0021aa74(uint param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_0021aad4 + 0x21aa7e;
  if (param_1 == 0) {
    iVar1 = DAT_0021aad8 + 0x21aa86;
    iVar3 = DAT_0021aadc + 0x21aa88;
  }
  else {
    param_3 = *(uint **)(iVar4 + DAT_0021aae0);
    uVar2 = *param_3;
    if (uVar2 < param_1) {
      iVar1 = DAT_0021aae4 + 0x21aa9a;
      iVar3 = DAT_0021aae8 + 0x21aa9c;
    }
    else {
      param_3 = (uint *)**(int **)(iVar4 + DAT_0021aaec);
      if (param_1 + (int)param_3 <= uVar2) {
        piVar5 = *(int **)(iVar4 + DAT_0021aaf8);
        **(int **)(iVar4 + DAT_0021aaec) = (param_1 + 3 & 0xfffffffc) + (int)param_3;
        return (int)param_3 + *piVar5 + 0x74368;
      }
      iVar1 = DAT_0021aaf0 + 0x21aab6;
      iVar3 = DAT_0021aaf4 + 0x21aab8;
    }
  }
  FUN_00212802(iVar1,iVar3,param_3,iVar4,param_4);
  return 0;
}


// ==== FUN_0021aafc @ 0021aafc ====

void FUN_0021aafc(void)

{
  return;
}


// ==== FUN_0021aafe @ 0021aafe ====

void FUN_0021aafe(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_0021ab0a @ 0021ab0a ====

void FUN_0021ab0a(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00214b20(param_1[2],0,param_1[1] << 2);
    FUN_0021aafc(param_1[2]);
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_0021ab2e @ 0021ab2e ====

int FUN_0021ab2e(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_33c;
  undefined1 auStack_338 [12];
  undefined1 auStack_32c [12];
  undefined1 auStack_320 [12];
  undefined1 auStack_314 [372];
  undefined1 auStack_1a0 [12];
  undefined1 auStack_194 [372];
  
  iVar1 = FUN_0021877a(param_3,0);
  if ((iVar1 < 0) || (-1 < **(int **)(param_3 + 8) << 0x1f)) {
    return 2;
  }
  FUN_0021ae12(&local_33c,param_3);
  FUN_0021aafe(auStack_338);
  FUN_0021aafe(auStack_32c);
  FUN_00214b20(auStack_320,0,0x300);
  iVar4 = *(int *)(param_3 + 4) + 1;
  iVar1 = FUN_00218450(param_1,iVar4);
  if (iVar1 == 0) {
    iVar1 = FUN_00218450(auStack_314,iVar4);
    if ((((iVar1 == 0) && (iVar1 = FUN_00218450(auStack_32c,iVar4 * 2), iVar1 == 0)) &&
        (iVar1 = FUN_002184f0(auStack_338,1), iVar1 == 0)) &&
       ((iVar1 = FUN_0021856a(auStack_338,*(int *)(param_3 + 4) << 6), iVar1 == 0 &&
        (iVar1 = FUN_00219868(auStack_338,auStack_338,param_3), iVar1 == 0)))) {
      if (param_4 != 0) {
        FUN_00214b30(param_4,auStack_338,0xc);
      }
      iVar1 = FUN_002186f2(param_1,param_3);
      if (iVar1 < 0) {
        FUN_0021849e(auStack_314,param_1);
      }
      else {
        FUN_00219868(auStack_314,param_1,param_3);
      }
      FUN_0021ae40(auStack_314,auStack_338,param_3,local_33c,auStack_32c);
      iVar1 = FUN_0021849e(param_1,auStack_338);
      if (iVar1 == 0) {
        FUN_0021af04(param_1,param_3,local_33c,auStack_32c);
        iVar1 = FUN_00218450(auStack_1a0,*(int *)(param_3 + 4) + 1);
        if ((iVar1 == 0) && (iVar1 = FUN_0021849e(auStack_1a0,auStack_314), iVar1 == 0)) {
          iVar1 = 5;
          do {
            FUN_0021ae40(auStack_1a0,auStack_1a0,param_3,local_33c,auStack_32c);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puVar2 = auStack_194;
          do {
            iVar1 = FUN_00218450(puVar2,*(int *)(param_3 + 4) + 1);
            if ((iVar1 != 0) || (iVar1 = FUN_0021849e(puVar2,puVar2 + -0xc), iVar1 != 0))
            goto LAB_0021add4;
            puVar6 = puVar2 + 0xc;
            FUN_0021ae40(puVar2,auStack_314,param_3,local_33c,auStack_32c);
            puVar2 = puVar6;
          } while (puVar6 != &stack0xffffffe0);
          uVar7 = 0;
          uVar8 = 0;
          iVar4 = 0;
          iVar9 = *(int *)(param_2 + 4);
          iVar10 = 0;
LAB_0021ace2:
          iVar5 = iVar9;
          if (uVar8 == 0) {
            iVar5 = iVar9 + -1;
            if (iVar9 == 0) goto code_r0x0021acf2;
            uVar8 = 0x20;
          }
          uVar8 = uVar8 - 1;
          uVar3 = *(uint *)(*(int *)(param_2 + 8) + iVar5 * 4) >> (uVar8 & 0xff) & 1;
          iVar9 = iVar5;
          if (uVar3 == 0) goto code_r0x0021ad18;
          goto LAB_0021ad3e;
        }
      }
    }
  }
LAB_0021add4:
  puVar2 = auStack_1a0;
  do {
    puVar6 = puVar2 + 0xc;
    FUN_0021ab0a(puVar2);
    puVar2 = puVar6;
  } while (puVar6 != &stack0xffffffe0);
  puVar2 = auStack_32c;
  if (param_4 == 0) {
    FUN_0021ab0a(auStack_314);
    FUN_0021ab0a(puVar2);
    puVar2 = auStack_338;
  }
  else {
    FUN_0021ab0a(auStack_314);
  }
  FUN_0021ab0a(puVar2);
  return iVar1;
code_r0x0021acf2:
  for (iVar4 = 0; iVar4 < iVar10; iVar4 = iVar4 + 1) {
    FUN_0021ae40(param_1,param_1,param_3,local_33c,auStack_32c);
    if ((int)(uVar7 << 0x1a) < 0) {
      FUN_0021ae40(param_1,auStack_314,param_3,local_33c,auStack_32c);
    }
    uVar7 = uVar7 << 1;
  }
  FUN_0021af04(param_1,param_3,local_33c,auStack_32c);
  goto LAB_0021add4;
code_r0x0021ad18:
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_0021ae40(param_1,param_1,param_3,local_33c,auStack_32c);
    }
    else {
LAB_0021ad3e:
      uVar7 = uVar3 << (5U - iVar10 & 0xff) | uVar7;
      if (iVar10 + 1 == 6) {
        iVar4 = 6;
        do {
          FUN_0021ae40(param_1,param_1,param_3,local_33c,auStack_32c);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_0021ae40(param_1,auStack_320 + uVar7 * 0xc,param_3,local_33c,auStack_32c);
        iVar4 = 1;
        uVar7 = 0;
        iVar10 = 0;
      }
      else {
        iVar4 = 2;
        iVar10 = iVar10 + 1;
      }
    }
  }
  goto LAB_0021ace2;
}


// ==== FUN_0021ae12 @ 0021ae12 ====

void FUN_0021ae12(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)(param_2 + 8);
  iVar2 = iVar1 + (iVar1 + 2U & 4) * 2;
  iVar2 = iVar2 * (2 - iVar1 * iVar2);
  iVar2 = iVar2 * (2 - iVar1 * iVar2);
  *param_1 = (iVar2 * iVar1 + -2) * iVar2;
  return;
}


// ==== FUN_0021ae40 @ 0021ae40 ====

void FUN_0021ae40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  FUN_00214b20(*(undefined4 *)(param_5 + 8),0,*(int *)(param_5 + 4) << 2);
  piVar2 = *(int **)(param_5 + 8);
  uVar7 = *(uint *)(param_3 + 4);
  uVar5 = *(uint *)(param_2 + 4);
  if ((int)uVar7 < (int)*(uint *)(param_2 + 4)) {
    uVar5 = uVar7;
  }
  piVar8 = piVar2;
  for (; iVar9 < (int)uVar7; iVar9 = iVar9 + 1) {
    iVar10 = *(int *)(*(int *)(param_1 + 8) + iVar9 * 4);
    iVar3 = **(int **)(param_2 + 8);
    iVar6 = *piVar8;
    FUN_00218a2c(uVar5,*(int **)(param_2 + 8),piVar8,iVar10);
    FUN_00218a2c(uVar7,*(undefined4 *)(param_3 + 8),piVar8,param_4 * (iVar3 * iVar10 + iVar6));
    *piVar8 = iVar10;
    (piVar8 + 1)[uVar7 + 1] = 0;
    piVar8 = piVar8 + 1;
  }
  FUN_00214b30(*(undefined4 *)(param_1 + 8),piVar2 + (uVar7 & ~((int)uVar7 >> 0x1f)),(uVar7 + 1) * 4
              );
  iVar9 = FUN_0021868a(param_1,param_3);
  if (iVar9 < 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_5 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar4 = *(undefined4 *)(param_1 + 8);
  }
  FUN_00218870(uVar7,uVar1,uVar4);
  return;
}


// ==== FUN_0021af04 @ 0021af04 ====

void FUN_0021af04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  local_14 = &local_20;
  local_20 = 1;
  local_1c = 1;
  local_18 = 1;
  FUN_0021ae40(param_1,&local_1c,param_2,param_3,param_4);
  return;
}


// ==== FUN_0021afb0 @ 0021afb0 ====

uint FUN_0021afb0(void)

{
  return *DAT_0021afbc & 1;
}


// ==== FUN_0021afc0 @ 0021afc0 ====

undefined4 FUN_0021afc0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 0x29) {
    return **(undefined4 **)(*(int *)(DAT_0021aff0 + 0x21afcc + DAT_0021aff4) + param_1 * 4);
  }
  FUN_002127e8(DAT_0021aff8 + 0x21afde,param_1,param_3,DAT_0021aff0 + 0x21afcc,param_4);
  FUN_002127e8(DAT_0021affc + 0x21afe8,0x29);
  return 0xffffffff;
}


// ==== FUN_0021b000 @ 0021b000 ====

void FUN_0021b000(void)

{
  return;
}


// ==== FUN_0021b004 @ 0021b004 ====

undefined4 FUN_0021b004(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 8) & 0x3f) != 0) {
    uVar1 = FUN_00214ad4(DAT_0021b09c + 0x21b018);
    FUN_0021b000(param_1,uVar1);
    return 0xfffffffe;
  }
  iVar3 = DAT_0021b0a0 + 0x21b02e;
  uVar1 = FUN_00214ad4(iVar3);
  iVar2 = FUN_00214b42(param_1,iVar3,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_00214ad4(iVar3);
    FUN_0021b000(param_1,uVar1);
    return 0xfffffffd;
  }
  if (*(int *)(param_1 + 8) == 0x240) {
    if (*(char *)(param_1 + 0xc) != '\x01') {
      return 0xfffffffb;
    }
    if (*(byte *)(param_1 + 0xd) < 2) {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        *(uint *)(DAT_0021b0a4 + 0x21b07a) =
             (uint)CONCAT11(*(undefined1 *)(param_1 + 0xf),*(undefined1 *)(param_1 + 0x10));
        return 0;
      }
      return 0xfffffff9;
    }
    return 0xfffffffa;
  }
  return 0xfffffffc;
}


// ==== FUN_0021b0a8 @ 0021b0a8 ====

undefined2 FUN_0021b0a8(void)

{
  return *(undefined2 *)(DAT_0021b0b0 + 0x21b0ae);
}


// ==== FUN_0021b0b4 @ 0021b0b4 ====

undefined4 FUN_0021b0b4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_44;
  undefined1 auStack_40 [32];
  
  if (param_1 == (int *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0021aa74(0x100);
    if (iVar1 == 0) {
      uVar5 = 0xfffffffe;
    }
    else {
      iVar2 = FUN_0021aa74(0x240);
      iVar3 = FUN_0021aa74(0x100);
      if (iVar3 == 0) {
        FUN_0021aafc(iVar1,0x100);
        uVar5 = 0xfffffffd;
        FUN_0021aafc(iVar2,0x240);
      }
      else {
        FUN_00214b30(iVar3,param_2,0x100);
        iVar6 = *param_1;
        FUN_00214b30(iVar2,iVar6,0x240);
        iVar4 = FUN_0021b004(iVar2);
        if (iVar4 == 0) {
          uVar5 = FUN_00214e08();
          FUN_00214b20(iVar6 + 0x13c,0,0x100);
          iVar4 = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 8);
          iVar4 = FUN_0021ba68(iVar6,iVar4,iVar4 + 0x48U & 0xffffffc0,auStack_40);
          if (iVar4 == 0) {
            FUN_00214e08(uVar5);
            uVar5 = FUN_00214e08(0);
            FUN_00217368(iVar2 + 0x13c,0x100);
            FUN_00217368(iVar3,0x100);
            FUN_00217c5e(iVar2 + 0x13c,iVar3,iVar1);
            FUN_00217368(iVar1,0x100);
            FUN_00214e08(uVar5);
            local_44 = -7;
            uVar5 = FUN_00214e08(0);
            iVar4 = FUN_00217e10(auStack_40,0x20,iVar1,0x100,0x20,0x800,&local_44);
            if (iVar4 == 0) {
              FUN_00214e08(uVar5);
              if (local_44 == 1) {
                uVar5 = FUN_00214e08(0);
                iVar4 = FUN_0021b93c(*(int *)(iVar2 + 8) + iVar6,iVar6,*(undefined4 *)(iVar2 + 0x18)
                                     ,iVar2 + 0x1c);
                if (iVar4 == 0) {
                  FUN_00214e08(uVar5);
                  FUN_0021aafc(iVar1,0x100);
                  FUN_0021aafc(iVar2,0x240);
                  FUN_0021aafc(iVar3,0x100);
                  uVar5 = 0;
                }
                else {
                  FUN_0021aafc(iVar1,0x100);
                  uVar5 = 0xfffffff6;
                  FUN_0021aafc(iVar2,0x240);
                  FUN_0021aafc(iVar3,0x100);
                }
              }
              else {
                FUN_0021aafc(iVar1,0x100);
                uVar5 = 0xfffffff7;
                FUN_0021aafc(iVar2,0x240);
                FUN_0021aafc(iVar3,0x100);
              }
            }
            else {
              FUN_0021aafc(iVar1,0x100);
              uVar5 = 0xfffffff8;
              FUN_0021aafc(iVar2,0x240);
              FUN_0021aafc(iVar3,0x100);
            }
          }
          else {
            FUN_0021aafc(iVar1,0x100);
            uVar5 = 0xfffffffb;
            FUN_0021aafc(iVar2,0x240);
            FUN_0021aafc(iVar3,0x100);
          }
        }
        else {
          FUN_0021aafc(iVar1,0x100);
          uVar5 = 0xfffffffc;
          FUN_0021aafc(iVar2,0x240);
          FUN_0021aafc(iVar3,0x100);
        }
      }
    }
  }
  return uVar5;
}


// ==== FUN_0021b2ea @ 0021b2ea ====

undefined4 FUN_0021b2ea(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(*param_1 + 0x23c) != param_2) && (*(int *)(*param_1 + 0x23c) != -1)) {
    return 0xfffffff5;
  }
  FUN_0021b904();
  uVar1 = FUN_0021b0b4(param_1,param_3);
  thunk_FUN_0021b844();
  return uVar1;
}


// ==== FUN_0021b31a @ 0021b31a ====

undefined4 FUN_0021b31a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  FUN_0021b904();
  uVar1 = FUN_0021ba68(param_1,param_2,param_3,param_4,uVar1);
  thunk_FUN_0021b844();
  return uVar1;
}


// ==== FUN_0021b340 @ 0021b340 ====

undefined4 FUN_0021b340(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_002127e8(DAT_0021b408 + 0x21b358,DAT_0021b40c + 0x21b35a);
    return 0xffffffff;
  }
  iVar1 = FUN_0021aa74(0x100);
  if (iVar1 == 0) {
    FUN_002127e8(DAT_0021b410 + 0x21b378,DAT_0021b414 + 0x21b37a);
    return 0xfffffffe;
  }
  iVar2 = FUN_0021aa74(0x100);
  if (iVar2 == 0) {
    FUN_0021aafc(iVar1,0x100);
    FUN_002127e8(DAT_0021b418 + 0x21b3a2,DAT_0021b41c + 0x21b3a4);
    return 0xfffffffd;
  }
  FUN_00214b30(iVar1,param_1,0x100);
  FUN_00214b30(iVar2,param_2,0x100);
  FUN_00217368(iVar1,0x100);
  FUN_00217368(iVar2,0x100);
  uVar3 = FUN_00217c5e(iVar1,iVar2,param_3);
  FUN_00217368(param_3,0x100);
  FUN_0021aafc(iVar1,0x100);
  FUN_0021aafc(iVar2,0x100);
  return uVar3;
}


// ==== FUN_0021b420 @ 0021b420 ====

undefined4
FUN_0021b420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  FUN_0021b904();
  uVar1 = FUN_00217e10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  thunk_FUN_0021b844();
  return uVar1;
}


// ==== FUN_0021b784 @ 0021b784 ====

undefined4 FUN_0021b784(byte *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  *DAT_0021b830 = 1;
  puVar2 = DAT_0021b834;
  if (((*DAT_0021b834 & 1) == 0) && (*DAT_0021b834 = 1, -1 < (int)(*puVar2 << 0x1f))) {
    FUN_002127e8(DAT_0021b83c + 0x21b7b4);
    return 0xfffffffd;
  }
  puVar3 = DAT_0021b840;
  FUN_00214b20(param_1,0,param_2);
  uVar6 = 0;
  do {
    while (-1 < (int)*puVar2) {
      thunk_FUN_00214da8(1);
    }
    uVar5 = *puVar3;
    iVar4 = 0x10;
    do {
      if ((int)((uVar5 ^ uVar5 >> 1) << 0x1f) < 0) {
        uVar1 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        *param_1 = (byte)((uVar5 & 1) << uVar1) | *param_1;
        if (7 < (int)uVar6) {
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          if (param_2 == 0) {
            *DAT_0021b838 = 1;
            return 0;
          }
          uVar6 = 0;
        }
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 >> 2;
    } while (iVar4 != 0);
  } while( true );
}


// ==== FUN_0021b844 @ 0021b844 ====

void FUN_0021b844(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0021b858;
  uVar2 = *DAT_0021b858;
  *DAT_0021b858 = uVar2 & 0xfffffff0;
  *puVar1 = uVar2 & 0xfffffff0 | 0xf;
  return;
}


// ==== FUN_0021b85c @ 0021b85c ====

undefined4 FUN_0021b85c(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = DAT_0021b8ac;
  puVar3 = DAT_0021b8a8;
  *DAT_0021b8ac = 3;
  *puVar3 = 3;
  puVar3 = DAT_0021b8b0 + -0x200;
  *DAT_0021b8b0 = param_1;
  piVar2 = DAT_0021b8b4;
  *puVar3 = 0;
  do {
    iVar4 = *piVar2;
  } while (iVar4 == 0);
  if (-1 < iVar4 << 0x1e) {
    do {
    } while (-1 < *DAT_0021b8b8 << 0x1f);
    *puVar1 = 3;
    return 0;
  }
  if (-1 < iVar4 << 0x1f) {
    do {
    } while (*DAT_0021b8b4 == 0);
  }
  *puVar1 = 3;
  return 0xffffffff;
}


// ==== FUN_0021b8bc @ 0021b8bc ====

void FUN_0021b8bc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(&DAT_10210c00 + iVar1 + param_1 * 4) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  return;
}


// ==== FUN_0021b8d4 @ 0021b8d4 ====

void FUN_0021b8d4(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = param_2 + 0x10;
  iVar1 = param_1 * 4 - (int)param_2;
  do {
    *(uint *)(param_2 + (int)(&DAT_10210c00 + iVar1)) =
         (uint)param_2[2] << 0x10 | (uint)param_2[3] << 0x18 | (uint)*param_2 |
         (uint)param_2[1] << 8;
    param_2 = param_2 + 4;
  } while (param_2 != pbVar2);
  return;
}


// ==== FUN_0021b904 @ 0021b904 ====

void FUN_0021b904(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0021b844();
  puVar2 = DAT_0021b934;
  puVar1 = DAT_0021b930;
  uVar3 = *DAT_0021b930;
  uVar4 = *DAT_0021b934;
  *DAT_0021b934 = uVar4 & 0xffffffe0;
  *puVar1 = uVar3 | 0x10000;
  *puVar2 = uVar4 & 0xffffffe0 | 0x1f;
  *puVar1 = *puVar1 | 0x2000;
  return;
}


// ==== thunk_FUN_0021b844 @ 0021b938 ====

void thunk_FUN_0021b844(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0021b858;
  uVar2 = *DAT_0021b858;
  *DAT_0021b858 = uVar2 & 0xfffffff0;
  *puVar1 = uVar2 & 0xfffffff0 | 0xf;
  return;
}


// ==== FUN_0021b93c @ 0021b93c ====

undefined4 FUN_0021b93c(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  byte abStack_30 [16];
  
  iVar5 = DAT_0021ba60;
  FUN_00214b30(auStack_40,DAT_0021ba60 + 0x21b950,0x10);
  FUN_00214b30(abStack_30,iVar5 + 0x21b960,0x10);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && ((param_3 & 0xf) == 0)) {
    FUN_0021b8d4(0x12,auStack_40);
    puVar1 = DAT_0021ba50;
    FUN_0021b8d4(0x16,param_4);
    piVar4 = DAT_0021ba64;
    piVar2 = DAT_0021ba54;
    *DAT_0021ba54 = 0x12;
    *piVar4 = 1;
    *puVar1 = 0x16;
    *DAT_0021ba58 = 0x1a;
    iVar5 = FUN_0021b85c(0x78);
    if (iVar5 == 0) {
      if (param_4 != -0x10) {
        iVar5 = 0;
        do {
          abStack_30[iVar5] = abStack_30[iVar5] ^ *(byte *)(param_4 + iVar5 + 0x10);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x10);
      }
      FUN_0021b8d4(0x12,abStack_30);
      *piVar4 = param_1;
      *piVar2 = param_2;
      puVar3 = DAT_0021ba5c;
      *puVar1 = param_3 >> 4;
      *puVar3 = 0x12;
      puVar3[1] = 0x1a;
      puVar3[2] = 0x1a;
      iVar5 = FUN_0021b85c(0x7e);
      if (iVar5 != 0) {
        FUN_0021b8bc(0x12);
        FUN_0021b8bc(0x16);
        FUN_0021b8bc(0x1a);
        FUN_00214b20(abStack_30,0,0x10);
        return 0xfffffffe;
      }
      FUN_0021b8bc(0x12);
      FUN_0021b8bc(0x16);
      FUN_0021b8bc(0x1a);
      FUN_00214b20(abStack_30,0,0x10);
      return 0;
    }
  }
  return 0xffffffff;
}


// ==== FUN_0021ba68 @ 0021ba68 ====

undefined4 FUN_0021ba68(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    uVar6 = 0xffffffff;
  }
  else if (param_4 == (undefined1 *)0x0) {
    uVar6 = 0xfffffffe;
  }
  else if (param_3 < param_2) {
    uVar6 = 0xfffffffd;
  }
  else {
    uVar9 = param_2 + 0x48 >> 6;
    uVar8 = uVar9 * 0x40;
    if (param_3 < uVar8) {
      uVar6 = 0xfffffffc;
    }
    else {
      FUN_00214b20(param_2 + 1 + param_1,0,(-9 - param_2) + uVar8,param_4,param_1,0,param_3);
      *(undefined1 *)(param_1 + param_2) = 0x80;
      *(byte *)(param_1 + (uVar8 - 8)) = (byte)(param_2 >> 0x1d);
      iVar5 = param_1 + (uVar8 - 8);
      iVar7 = (param_2 & 0x1fe0) * 0x800 + param_2 * 0x8000000 + ((param_2 & 0x1fffffff) >> 0x15) +
              ((param_2 & 0x1fffffff) >> 5 & 0xff00);
      *(char *)(iVar5 + 4) = (char)iVar7;
      *(char *)(iVar5 + 5) = (char)((uint)iVar7 >> 8);
      *(char *)(iVar5 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(iVar5 + 7) = (char)((uint)iVar7 >> 0x18);
      puVar3 = DAT_0021bb64;
      piVar1 = DAT_0021bb60;
      *(undefined1 *)(iVar5 + 1) = 0;
      *(undefined1 *)(iVar5 + 2) = 0;
      *(undefined1 *)(iVar5 + 3) = 0;
      *piVar1 = param_1;
      piVar1[1] = uVar9;
      piVar1[2] = 0;
      *puVar3 = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      iVar5 = FUN_0021b85c(0x41);
      puVar2 = DAT_0021bb68;
      if (iVar5 == 0) {
        do {
          puVar4 = puVar3 + 1;
          uVar6 = *puVar3;
          *param_4 = (char)uVar6;
          param_4[1] = (char)((uint)uVar6 >> 8);
          param_4[2] = (char)((uint)uVar6 >> 0x10);
          param_4[3] = (char)((uint)uVar6 >> 0x18);
          puVar3 = puVar4;
          param_4 = param_4 + 4;
        } while (puVar4 != puVar2);
        uVar6 = 0;
      }
      else {
        uVar6 = 0xfffffffb;
      }
    }
  }
  return uVar6;
}


