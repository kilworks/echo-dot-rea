// preloader.code.bin  functions=414

// ==== FUN_002015c0 @ 002015c0 ====

uint FUN_002015c0(uint param_1,uint param_2)

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
    FUN_00202588();
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


// ==== FUN_00201700 @ 00201700 ====

uint FUN_00201700(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    FUN_00202588();
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


// ==== FUN_00201798 @ 00201798 ====

void FUN_00201798(void)

{
  FUN_00201700();
  return;
}


// ==== FUN_002017c8 @ 002017c8 ====

ulonglong FUN_002017c8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 == 0 && param_4 == 0) {
    FUN_00202588();
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
    uVar3 = FUN_00201798(param_1,param_3);
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


// ==== FUN_00201914 @ 00201914 ====

uint FUN_00201914(int param_1)

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


// ==== FUN_00201934 @ 00201934 ====

void FUN_00201934(void)

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
  
  FUN_002134e8(DAT_00201af0 + 0x20193e);
  iVar2 = FUN_0020ca3c(auStack_118);
  iVar5 = DAT_00201af4 + 0x20194e;
  if (iVar2 != 0) {
    FUN_002134e8(DAT_00201af8 + 0x201956);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_002134e8(DAT_00201afc + 0x201964,local_110,local_10e,local_10c);
  if (local_114 == 0) {
    bVar1 = true;
    local_114 = 1;
    iVar2 = DAT_00201b00 + 0x20197e;
  }
  else {
    uVar3 = FUN_00201914(auStack_118);
    if (local_10a != uVar3) {
      FUN_002134e8(DAT_00201b04 + 0x201990);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = DAT_00201b08 + 0x20199a;
    bVar1 = false;
  }
  FUN_002134e8(iVar2);
  uVar6 = (uint)local_110;
  uVar3 = FUN_0021213c();
  if (uVar3 < uVar6) {
    FUN_002134e8(DAT_00201b0c + 0x2019ae);
    uVar4 = FUN_0021213c();
    FUN_002134e8(DAT_00201b10 + 0x2019c2,local_110,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_0021213c();
  if (local_110 < uVar3) {
    bVar1 = true;
    FUN_002134e8(DAT_00201b14 + 0x2019da);
    local_110 = FUN_0021213c();
  }
  uVar6 = (uint)local_10e;
  uVar3 = FUN_0021bda8();
  if (uVar3 < uVar6) {
    FUN_002134e8(DAT_00201b18 + 0x2019f4);
    uVar4 = FUN_0021bda8();
    FUN_002134e8(DAT_00201b1c + 0x201a08,local_10e,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_0021bda8();
  if (local_10e < uVar3) {
    bVar1 = true;
    FUN_002134e8(DAT_00201b20 + 0x201a20);
    local_10e = FUN_0021bda8();
  }
  uVar6 = (uint)local_10c;
  uVar3 = FUN_00211630();
  if (uVar3 < uVar6) {
    FUN_002134e8(DAT_00201b24 + 0x201a3a);
    uVar4 = FUN_00211630();
    FUN_002134e8(DAT_00201b28 + 0x201a4e,local_10c,uVar4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = FUN_00211630();
  if (local_10c < uVar3) {
    bVar1 = true;
    FUN_002134e8(DAT_00201b2c + 0x201a66);
    local_10c = FUN_00211630();
  }
  FUN_002134e8(DAT_00201b30 + 0x201a74);
  if (bVar1) {
    local_11c = 0;
    FUN_002134e8(DAT_00201b34 + 0x201a82);
    local_10a = FUN_00201914(auStack_118);
    iVar2 = FUN_0020c934(&local_11c);
    if (iVar2 == 0) {
      iVar2 = FUN_0020cb30(auStack_118,local_11c);
      if (iVar2 == 0) {
        FUN_002134e8(DAT_00201b40 + 0x201ab8);
        FUN_002134e8(DAT_00201b44 + 0x201ac2,local_110,local_10e,local_10c);
        goto LAB_00201ac8;
      }
      iVar2 = DAT_00201b3c + 0x201aae;
    }
    else {
      iVar2 = DAT_00201b38 + 0x201a9e;
    }
    FUN_002134e8(iVar2);
  }
LAB_00201ac8:
  iVar2 = **(int **)(iVar5 + DAT_00201b48);
  *(ushort *)(iVar2 + 0x5e36c) = local_110;
  *(ushort *)(iVar2 + 0x5e370) = local_10c;
  *(ushort *)(iVar2 + 0x5e36e) = local_10e;
  return;
}


// ==== FUN_00201b4c @ 00201b4c ====

undefined4 FUN_00201b4c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24 [2];
  int local_1c [2];
  
  local_24[0] = param_1;
  local_1c[0] = param_2;
  iVar1 = FUN_00201e28(1);
  if (iVar1 == 0) {
    iVar3 = 1;
    iVar1 = DAT_00201bac + 0x201b68;
  }
  else {
    iVar3 = DAT_00201bb0 + 0x201b6e;
    iVar2 = thunk_FUN_00210744(iVar3);
    if (iVar2 == 0) {
      iVar1 = DAT_00201bb4 + 0x201b7e;
    }
    else {
      iVar3 = FUN_00210b6c(iVar1,iVar2,local_24,0,local_1c);
      if ((iVar3 == 0) && (param_2 == local_1c[0])) {
        return 1;
      }
      iVar1 = DAT_00201bb8 + 0x201b9e;
    }
  }
  FUN_002134e8(iVar1,iVar3);
  return 0;
}


// ==== FUN_00201e04 @ 00201e04 ====

undefined4 FUN_00201e04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00201e24;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(iVar2 + 0x201e0e);
  if (iVar1 == 0) {
    *(int *)(iVar2 + 0x201e0e) = param_1;
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


// ==== FUN_00201e28 @ 00201e28 ====

int * FUN_00201e28(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(DAT_00201e40 + 0x201e2e); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[7]) {
  }
  return piVar1;
}


// ==== FUN_00201e44 @ 00201e44 ====

void FUN_00201e44(int param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}


// ==== FUN_00201e54 @ 00201e54 ====

undefined4
FUN_00201e54(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6,
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
    local_44 = **(int **)(DAT_00202010 + 0x201e68 + DAT_00202014) + 0x48800;
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
      uVar4 = FUN_002017c8(uVar8 & param_3,0,uVar7,0);
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
      FUN_00215830(param_6,local_44 + uVar2,uVar9);
      bVar11 = CARRY4(param_3,uVar9);
      param_3 = param_3 + uVar9;
      param_6 = param_6 + uVar9;
      param_4 = param_4 + iVar10 + (uint)bVar11;
      param_5 = param_5 - uVar9;
    }
    if (uVar7 <= param_5) {
      uVar8 = uVar8 & param_3;
      iVar10 = FUN_002017c8(uVar3 - uVar8,-(uint)(uVar3 < uVar8));
      if (iVar10 != 0) {
        uVar4 = FUN_002017c8(uVar8,0,uVar7,0);
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
        uVar4 = FUN_002017c8(uVar3,0,uVar7,0);
        iVar10 = (**(code **)(param_1 + 0x20))(param_1,uVar4,1,local_44,param_7);
        if (iVar10 != 0) {
          return 0xffffffff;
        }
        FUN_00215830(param_6,local_44,uVar8);
        return 0;
      }
    }
  }
  return 0;
}


// ==== FUN_00202018 @ 00202018 ====

undefined4
FUN_00202018(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,int param_6,
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
    iVar10 = **(int **)(DAT_00202204 + 0x20202e + DAT_00202208) + 0x48800;
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
      uVar3 = FUN_002017c8(uVar9 & param_3,0);
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
      FUN_00215830(uVar6 + iVar10,param_6,local_58);
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
      iVar4 = FUN_002017c8(uVar7 - uVar9,-(uint)(uVar7 < uVar9));
      if (iVar4 != 0) {
        uVar3 = FUN_002017c8(uVar9,0,uVar8,0);
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
        uVar3 = FUN_002017c8(uVar7,0,uVar8,0);
        iVar4 = (**(code **)(param_1 + 0x20))(param_1,uVar3,1,iVar10,param_7);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        FUN_00215830(iVar10,param_6,uVar9);
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


// ==== FUN_0020220c @ 0020220c ====

undefined4 FUN_0020220c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00211498(DAT_0020224c + 0x20221e,0x2f,DAT_00202250 + 0x202220,param_4,param_4);
  }
  iVar2 = DAT_00202254;
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[4] = iVar2 + 0x202230;
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


// ==== FUN_00202258 @ 00202258 ====

undefined4 FUN_00202258(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00211498(DAT_00202298 + 0x20226a,0x45,DAT_0020229c + 0x20226c,param_4,param_4);
  }
  iVar2 = DAT_002022a0;
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[4] = iVar2 + 0x20227c;
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


// ==== FUN_002022a4 @ 002022a4 ====

uint FUN_002022a4(uint *param_1,int param_2,uint param_3)

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


// ==== FUN_002022d8 @ 002022d8 ====

void FUN_002022d8(int *param_1,int param_2,int param_3)

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


// ==== FUN_00202588 @ 00202588 ====

void FUN_00202588(void)

{
  FUN_00211498(DAT_00202598 + 0x202592,0x29,DAT_0020259c + 0x202594);
  return;
}


// ==== FUN_002029e0 @ 002029e0 ====

void FUN_002029e0(int param_1,int param_2,int param_3,int param_4)

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
  FUN_00215820(&local_20,0,0x10);
  FUN_002070c8(&local_20);
  uVar1 = DAT_00202a78;
  iVar3 = DAT_00202a80 + 0x202a02;
  FUN_002134e8(DAT_00202a84 + 0x202a0a,iVar3,local_20 + iStack_1c + local_18 + local_14);
  iVar2 = DAT_00202a8c;
  FUN_002134e8(DAT_00202a88 + 0x202a1a,iVar3,uVar1);
  FUN_002134e8(DAT_00202a90 + 0x202a2a,iVar3,0x200);
  piVar4 = *(int **)(iVar2 + 0x202a2c + DAT_00202a94);
  iVar2 = DAT_00202a98 + 0x202a3c;
  *piVar4 = DAT_00202a7c;
  FUN_002134e8(iVar2,iVar3);
  FUN_002134e8(DAT_00202a9c + 0x202a4e,iVar3,*piVar4 + 0x178780);
  FUN_002134e8(DAT_00202aa0 + 0x202a62,iVar3,*piVar4 + 0x178880);
  FUN_00215820(*piVar4,0,uVar1);
  return;
}


// ==== FUN_00202aa4 @ 00202aa4 ====

undefined4 FUN_00202aa4(void)

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
  
  piVar15 = DAT_00202d40;
  iVar22 = DAT_00202db8 + 0x202ab6;
  puVar5 = (undefined4 *)(DAT_00202d34 + -0x1fc);
  puVar7 = (undefined4 *)(DAT_00202d38 + -0x1fc);
  *(undefined4 *)(DAT_00202d3c + -0x200) = 0;
  *puVar5 = 0;
  *puVar7 = 0;
  piVar3 = DAT_00202d4c;
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
  iVar6 = FUN_0021116c();
  if (iVar6 == 0) {
    iVar6 = 0;
    do {
      iVar14 = iVar6 * 0x1010101;
      piVar15 = DAT_00202d40;
      do {
        piVar3 = DAT_00202d4c;
        *piVar15 = iVar14;
        piVar15[0x2c00] = iVar14;
        piVar13 = piVar15 + 1;
        piVar15[0x82800] = iVar14;
        puVar7 = DAT_00202dd4;
        puVar5 = DAT_00202dd0;
        piVar15 = piVar13;
      } while (piVar13 != piVar3);
      *DAT_00202d98 = 0x55000000;
      puVar11 = DAT_00202dd8;
      puVar8 = DAT_00202da0;
      puVar18 = DAT_00202d9c;
      *puVar5 = 0x55000000;
      *puVar7 = 0x55000000;
      puVar19 = DAT_00202ddc;
      puVar4 = DAT_00202da4;
      uVar9 = ~(~(((*puVar11 | *puVar18 | *puVar8) & 0xaa000000) >> 0xc) << 0xc);
      *puVar11 = uVar9;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      puVar18 = DAT_00202da8;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      puVar8 = DAT_00202dac;
      *DAT_00202dac = *DAT_00202dac | 0xc0000000;
      do {
      } while (((DAT_00202db0[0x2c00] | *DAT_00202db0 | *puVar19) & 0x400) == 0);
      iVar14 = 400;
      do {
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar27 = *DAT_00202de0;
      uVar25 = *DAT_00202de4;
      uVar26 = *DAT_00202db4;
      *puVar4 = *puVar4 & 0x3fffffff;
      *puVar18 = *puVar18 & 0x3fffffff;
      bVar21 = (byte)iVar6;
      *puVar8 = *puVar8 & 0x3fffffff;
      iVar14 = DAT_00203154;
      uVar9 = 0;
      do {
        if ((1 << (uVar9 & 0xff) & (uVar25 | uVar27 | uVar26)) == 0) {
          if (local_1e0[uVar9 + 0x20] == 0x10) {
            local_1e0[uVar9 + 0x20] = bVar21;
            local_1a0[uVar9] = bVar21;
          }
          else {
            if (local_100[uVar9] != '\0') goto LAB_00202de8;
            local_1a0[uVar9] = bVar21;
          }
        }
        else {
LAB_00202de8:
          if (local_1a0[uVar9] != 0x10) {
            local_100[uVar9] = '\x01';
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x10);
    FUN_002134e8(DAT_00203150 + 0x202e12);
    iVar6 = 0;
    do {
      iVar24 = iVar6 + 1;
      FUN_002134e8(iVar14 + 0x202e18,iVar6,local_1e0[iVar6 + 0x20],local_1a0[iVar6]);
      iVar6 = iVar24;
    } while (iVar24 != 0x20);
    FUN_002134e8(DAT_00203158 + 0x202e34,0x80);
    puVar5 = DAT_0020310c;
    do {
      puVar7 = DAT_00203110;
      *puVar5 = 0;
      puVar5[0x2c00] = 0;
      puVar16 = puVar5 + 1;
      puVar5[0x82800] = 0;
      puVar5 = puVar16;
    } while (puVar16 != puVar7);
    iVar6 = 0;
    do {
      piVar15 = DAT_00203114;
      iVar14 = iVar6 * 0x1010101;
      *DAT_00203114 = iVar14;
      piVar15[0x2c00] = iVar14;
      *DAT_00203118 = iVar14;
      puVar5 = DAT_00203120;
      *DAT_0020311c = 0x55000000;
      puVar7 = DAT_00203124;
      *puVar5 = 0x55000000;
      puVar18 = DAT_00203128;
      *puVar7 = 0x55000000;
      puVar4 = DAT_00203128;
      uVar9 = ~(~(((*DAT_0020312c | *puVar18 | *DAT_00203130) & 0xaa000000) >> 0xc) << 0xc);
      *DAT_00203128 = uVar9;
      puVar4[0x2c00] = uVar9;
      *DAT_00203130 = uVar9;
      puVar18 = DAT_00203134;
      *DAT_00203134 = *DAT_00203134 | 0xc0000000;
      puVar18[0x2c00] = puVar18[0x2c00] | 0xc0000000;
      *puVar8 = *puVar8 | 0xc0000000;
      puVar18 = DAT_00203134;
      do {
      } while (((*DAT_0020313c | *DAT_00203138 | *DAT_00203140) & 0x400) == 0);
      iVar14 = 400;
      do {
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      uVar27 = *DAT_00203144;
      uVar26 = *DAT_00203148;
      uVar9 = *DAT_0020314c;
      bVar21 = (byte)iVar6;
      *DAT_00203134 = *DAT_00203134 & 0x3fffffff;
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
            if (local_140[uVar25] != '\0') goto LAB_00202f70;
            local_160[uVar25] = bVar21;
          }
        }
        else {
LAB_00202f70:
          if (local_160[uVar25] != 0x80) {
            local_140[uVar25] = '\x01';
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x80);
    iVar14 = DAT_0020315c + 0x202f94;
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
      FUN_002134e8(iVar14,iVar6,iVar10,iVar6,uVar27,uVar9,iVar10,uVar25,uVar26);
      iVar24 = DAT_00203164;
      iVar6 = iVar23;
    } while (iVar23 != 0x18);
    FUN_002134e8(DAT_00203160 + 0x202fda);
    iVar6 = 0;
    do {
      iVar14 = iVar6 + 1;
      FUN_002134e8(iVar24 + 0x202fe0,iVar6,local_180[iVar6],local_160[iVar6],uVar27,uVar9,iVar10,
                   uVar25,uVar26);
      iVar6 = iVar14;
    } while (iVar14 != 0x20);
    uVar25 = 0;
    uVar27 = 0;
    uVar26 = 0;
    iVar6 = DAT_00203168 + 0x202ffe;
    iVar14 = DAT_0020316c + 0x20300a;
    iVar24 = DAT_00203170 + 0x203014;
    uVar9 = 0;
    do {
      bVar21 = local_1e0[uVar9 + 0x20];
      if ((bVar21 != 0) || (local_180[uVar9] != 0)) {
        FUN_002134e8(iVar6,uVar9,bVar21,local_180[uVar9]);
      }
      uVar28 = (uint)(byte)((local_1a0[uVar9] + 1) - bVar21);
      uVar17 = (local_160[uVar9] + 1) - (uint)local_180[uVar9] & 0xff;
      if (uVar28 < uVar17) {
        if ((int)uVar27 < (int)(uVar17 - uVar28)) {
          uVar27 = uVar17 - uVar28 & 0xff;
          FUN_002134e8(iVar14,uVar9,uVar27);
        }
        uVar17 = (uVar28 + uVar17) - 1;
        if ((int)uVar25 < (int)uVar17) {
          uVar25 = uVar17 & 0xff;
        }
      }
      uVar17 = uVar9 + 1;
      if ((uVar17 & 7) == 0) {
        iVar10 = (int)(uVar27 + 1) >> 1;
        FUN_002134e8(iVar24,uVar9 >> 3,iVar10);
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
      puVar8 = DAT_00203404;
      puVar18 = DAT_002033fc;
      uVar9 = uVar17;
    } while (uVar17 != 0x20);
    *DAT_00203400 = uVar26;
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
    iVar6 = *(int *)(iVar22 + DAT_00203470);
    do {
      uVar25 = uVar9 >> 1;
      uVar26 = uVar9 & 1;
      iVar14 = local_120[uVar9];
      uVar9 = uVar9 + 1;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_00203408 + uVar26) * 4) = iVar14;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_0020340c + uVar26) * 4) = iVar14;
      *(int *)(((short)(ushort)*(byte *)(iVar6 + uVar25) * 2 + DAT_00203410 + uVar26) * 4) = iVar14;
    } while (uVar9 != 8);
    iVar22 = *(int *)(iVar22 + DAT_00203474);
    puVar18 = DAT_0020342c;
    do {
      puVar4 = DAT_0020344c;
      puVar8 = puVar18 + 0x2c00;
      puVar11 = puVar18 + 0x82800;
      uVar9 = (uint)*(byte *)((int)puVar18 + DAT_00203440 + iVar22) +
              ((*puVar8 | *puVar11 | *puVar18) & 0xff) |
              ((uint)*(byte *)((int)puVar18 + DAT_00203478 + iVar22) +
              ((*puVar8 | *puVar11 | *puVar18) >> 0x18)) * 0x1000000 |
              ((uint)*(byte *)((int)puVar18 + DAT_00203444 + iVar22) +
              (((*puVar11 | *puVar8 | *puVar18) & 0xffff) >> 8)) * 0x100 |
              ((uint)*(byte *)((int)puVar18 + DAT_00203448 + iVar22) +
              (((*puVar8 | *puVar11 | *puVar18) & 0xffffff) >> 0x10)) * 0x10000;
      puVar19 = puVar18 + 1;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      *puVar11 = uVar9;
      puVar11 = DAT_00203450;
      puVar8 = DAT_0020342c;
      puVar18 = puVar19;
    } while (puVar19 != puVar4);
    FUN_002134e8(DAT_0020347c + 0x203320);
    puVar19 = DAT_00203424;
    puVar18 = DAT_0020341c;
    FUN_002134e8(DAT_00203480 + 0x203338,*puVar11 | *puVar8 | *DAT_00203454);
    puVar8 = DAT_00203428;
    FUN_002134e8(DAT_00203484 + 0x20334e,*DAT_00203418 | *DAT_00203414 | *puVar18);
    FUN_002134e8(DAT_00203488 + 0x203372,*puVar19 | puVar4[-6] | *puVar8);
    FUN_002134e8(DAT_0020348c + 0x203386,*DAT_0020345c | *DAT_00203458 | puVar18[2]);
    FUN_002134e8(DAT_00203490 + 0x20339e,puVar19[2] | puVar4[-4] | puVar8[2]);
    FUN_002134e8(DAT_00203494 + 0x2033b4,*DAT_00203464 | *DAT_00203460 | puVar18[4]);
    FUN_002134e8(DAT_00203498 + 0x2033cc,puVar19[4] | puVar4[-2] | puVar8[4]);
    FUN_002134e8(DAT_0020349c + 0x2033e2,*DAT_0020346c | *DAT_00203468 | puVar18[6]);
    FUN_002134e8(DAT_002034a0 + 0x2033f4,puVar19[-0x80] | puVar4[-0x86] | puVar8[-0x80]);
  }
  else {
    iVar22 = 0;
    do {
      puVar11 = DAT_002036f8;
      puVar5 = DAT_00203664;
      *DAT_00203660 = 0x55000000;
      *puVar5 = 0x55000000;
      puVar8 = DAT_00203670;
      puVar18 = DAT_0020366c;
      *DAT_00203668 = 0x55000000;
      puVar4 = DAT_00203674;
      uVar9 = ~(~(((*puVar11 | *puVar18 | *puVar8) & 0xaa000000) >> 0xc) << 0xc);
      *puVar11 = uVar9;
      *puVar18 = uVar9;
      *puVar8 = uVar9;
      puVar18 = DAT_00203678;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      puVar8 = DAT_0020367c;
      *DAT_0020367c = *DAT_0020367c | 0xc0000000;
      do {
      } while (-1 < (int)((*DAT_00203684 | *DAT_00203680 | *DAT_00203688) << 0x15));
      iVar6 = 400;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar9 = *DAT_0020368c | *DAT_002036fc | *DAT_00203690;
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
        puVar5 = DAT_00203694;
        iVar6 = iVar14;
      } while (iVar14 != 0x20);
      do {
        uVar12 = *(undefined4 *)(DAT_00203698 + (int)local_120 + (int)puVar5);
        *puVar5 = uVar12;
        puVar5[0x2c00] = uVar12;
        puVar7 = puVar5 + 1;
        puVar5[0x82800] = uVar12;
        puVar5 = puVar7;
      } while (puVar7 != DAT_0020369c);
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
      piVar3 = DAT_00203980;
      piVar15 = DAT_0020397c;
      iVar6 = iVar22 * 0x1010101;
      *DAT_00203984 = iVar6;
      *piVar15 = iVar6;
      *piVar3 = iVar6;
      puVar18 = DAT_0020398c;
      uVar9 = ~(~(((*DAT_00203988 | piVar15[10] | piVar3[10]) & 0xff000000) >> 0xc) << 0xc);
      *DAT_00203988 = uVar9;
      piVar15[10] = uVar9;
      piVar3[10] = uVar9;
      puVar8 = DAT_00203990;
      *puVar4 = *puVar4 | 0xc0000000;
      *puVar18 = *puVar18 | 0xc0000000;
      *puVar8 = *puVar8 | 0xc0000000;
      puVar8 = DAT_00203990;
      puVar18 = DAT_0020398c;
      do {
      } while (-1 < (int)((*DAT_00203998 | *DAT_00203994 | *DAT_0020399c) << 0x15));
      iVar6 = 400;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar25 = *DAT_002039a4 | *DAT_002039a0 | *DAT_002039a8;
      *puVar4 = *puVar4 & 0x3fffffff;
      *puVar18 = *puVar18 & 0x3fffffff;
      *puVar8 = *puVar8 & 0x3fffffff;
      piVar3 = DAT_00203980;
      piVar15 = DAT_0020397c;
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
            if (iVar22 != 0x7f) goto LAB_00203834;
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
LAB_00203834:
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
    *DAT_00203984 = iVar22;
    *piVar15 = iVar22;
    *piVar3 = iVar22;
    uVar9 = 0;
    pbVar20 = (byte *)(local_e0 + 5);
    do {
      iVar22 = DAT_002039ac;
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
      *(int *)(DAT_002039ac + uVar9) = iVar6;
      *(int *)(iVar22 + 0xb000 + uVar9) = iVar6;
      *(int *)(DAT_002039b0 + uVar9) = iVar6;
      uVar9 = uVar9 + 4;
      pbVar20 = pbVar20 + 0x18;
    } while (uVar9 != 0x20);
  }
  return 0;
}


// ==== FUN_00203a0c @ 00203a0c ====

uint FUN_00203a0c(uint param_1)

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
  
  puVar1 = DAT_00203afc;
  *DAT_00203afc = 0x55000000;
  puVar2 = DAT_00203b00;
  puVar1[0x2c00] = 0x55000000;
  puVar7 = DAT_00203b28;
  puVar6 = DAT_00203b18;
  puVar11 = puVar2 + -0xe;
  *DAT_00203b04 = 0x55000000;
  puVar5 = DAT_00203b10;
  puVar4 = DAT_00203b0c;
  puVar3 = DAT_00203b08;
  puVar12 = DAT_00203b08 + -0xe;
  param_1 = param_1 | (*puVar2 | *DAT_00203b08 | *DAT_00203b0c) & 0xaa000000;
  *puVar2 = param_1;
  *puVar3 = param_1;
  *puVar4 = param_1;
  *puVar11 = *puVar11 | 0x80000000;
  *puVar12 = *puVar12 | 0x80000000;
  puVar3 = DAT_00203b14;
  *DAT_00203b14 = *DAT_00203b14 | 0x80000000;
  puVar8 = DAT_00203b28;
  puVar4 = DAT_00203b18;
  puVar2 = DAT_00203b10;
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
  uVar10 = *DAT_00203b20;
  uVar14 = *DAT_00203b1c;
  uVar13 = *DAT_00203b24;
  *puVar11 = *puVar11 & 0xbfffffff;
  *puVar12 = *puVar12 & 0xbfffffff;
  *puVar3 = *puVar3 & 0xbfffffff;
  return uVar10 | uVar14 | uVar13;
}


// ==== FUN_00203b2c @ 00203b2c ====

void FUN_00203b2c(void)

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
  
  iVar28 = DAT_00203e68 + 0x203b46;
  iVar14 = DAT_00203e70;
  if ((int)(*DAT_00203e18 | DAT_00203e18[0x2c00] | *DAT_00203e1c) < 0) {
    iVar14 = DAT_00203e6c;
  }
  iVar18 = *(int *)(iVar28 + iVar14);
  iVar14 = FUN_00207050();
  puVar12 = DAT_00203e60;
  puVar11 = DAT_00203e5c;
  puVar1 = DAT_00203e58;
  puVar10 = DAT_00203e54;
  puVar8 = DAT_00203e30;
  puVar7 = DAT_00203e2c;
  puVar26 = DAT_00203e28;
  puVar22 = DAT_00203e24;
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
  *DAT_00203e20 = 0;
  puVar9 = DAT_00203e34;
  *puVar10 = 0;
  puVar10 = DAT_00203e38;
  *puVar1 = 0;
  puVar1 = DAT_00203e3c;
  *puVar11 = 0;
  *puVar12 = 0;
  *puVar7 = 0;
  *puVar8 = 0;
  *puVar22 = 0;
  *puVar26 = 0;
  puVar26 = DAT_00203e44;
  puVar22 = DAT_00203e40;
  *puVar9 = 0;
  *puVar26 = 0;
  *puVar22 = 0;
  puVar9[1] = 0;
  *puVar10 = 0;
  *puVar1 = 0;
  uVar20 = 0xf;
  do {
    puVar7 = DAT_00203e50;
    puVar26 = DAT_00203e4c;
    puVar22 = DAT_00203e48;
    uVar17 = uVar20 << 8 | uVar20 << 4 | uVar20 | uVar20 << 0xc |
             (*DAT_00203e50 | *DAT_00203e4c | *DAT_00203e48) & 0xffff0000;
    *DAT_00203e4c = uVar17;
    *puVar22 = uVar17;
    *puVar7 = uVar17;
    uVar17 = FUN_00203a0c(0xfff);
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
    puVar26 = DAT_00203e58;
    puVar22 = DAT_00203e54;
    uVar17 = uVar20 << 8 | uVar20 << 4 | uVar20 | uVar20 << 0xc;
    *DAT_00203e20 = uVar17;
    *puVar22 = uVar17;
    *puVar26 = uVar17;
    puVar26 = DAT_00203e60;
    puVar8 = DAT_00203e30;
    puVar7 = DAT_00203e2c;
    uVar17 = uVar20 << 0x10 | uVar20 << 0x14 | uVar20 << 0x18 | uVar20 << 0x1c | uVar17;
    *DAT_00203e5c = uVar17;
    puVar22 = DAT_00203e24;
    *puVar26 = uVar17;
    puVar10 = DAT_00203e34;
    puVar26 = DAT_00203e28;
    *puVar7 = uVar17;
    *puVar8 = uVar17;
    puVar8 = DAT_00203e44;
    *puVar22 = uVar17;
    puVar7 = DAT_00203e40;
    *puVar26 = uVar17;
    puVar1 = DAT_00203e64;
    *puVar10 = uVar17;
    puVar26 = DAT_00203e3c;
    puVar22 = DAT_00203e38;
    *puVar8 = uVar17;
    *puVar7 = uVar17;
    *puVar1 = uVar17;
    *puVar22 = uVar17;
    *puVar26 = uVar17;
    uVar17 = FUN_00203a0c(0xfff);
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
LAB_00203e8e:
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
        goto LAB_00203e8e;
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
  puVar24 = *(undefined4 **)(iVar28 + DAT_002041f8);
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
LAB_00203f3a:
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
        goto LAB_00203f3a;
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
      FUN_00207050();
      puVar7 = DAT_00204204;
      iVar14 = DAT_00204200;
      puVar26 = DAT_00204180;
      puVar22 = DAT_0020417c;
      iVar16 = 0;
      uVar15 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(iVar28 + DAT_002041fc) + iVar16);
        iVar27 = iVar16 + 4;
        iVar16 = iVar16 + 1;
        uVar15 = uVar15 | local_1a8[iVar27] << ((*pbVar2 & 0x3f) << 2);
      } while (iVar16 != 4);
      iVar27 = 0;
      *DAT_00204204 = uVar15;
      *puVar22 = uVar15;
      *puVar26 = uVar15;
      iVar16 = DAT_00204208;
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
        puVar10 = DAT_00204184;
        puVar8 = DAT_00204180;
        iVar14 = iVar18;
      } while (iVar18 != 0x10);
      iVar14 = 0;
      uVar15 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(iVar28 + DAT_0020420c) + iVar14);
        puVar1 = local_1a8 + iVar14;
        iVar14 = iVar14 + 1;
        uVar15 = uVar15 | *puVar1 << ((*pbVar2 & 0x3f) << 2);
      } while (iVar14 != 4);
      *DAT_00204184 = uVar15;
      puVar10[0x2c00] = uVar15;
      *DAT_00204188 = uVar15;
      **(uint **)(iVar28 + DAT_00204210) = uVar15;
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


// ==== FUN_00204214 @ 00204214 ====

int FUN_00204214(void)

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
  
  puVar2 = DAT_00204430;
  puVar1 = DAT_0020442c;
  iVar21 = DAT_00204450 + 0x204226;
  puVar18 = *(undefined4 **)(iVar21 + DAT_00204454);
  *puVar18 = 0;
  uVar16 = *puVar1;
  uVar10 = *puVar2;
  *puVar2 = *puVar2 & 0xfffffcff | ((*puVar1 & 0x3f) >> 4) << 8;
  puVar11 = *(undefined4 **)(iVar21 + DAT_00204458);
  *puVar11 = 1;
  iVar7 = FUN_002065ec();
  if (-1 < iVar7) {
    *puVar11 = 0;
    puVar20 = *(undefined4 **)(iVar21 + DAT_0020445c);
    puVar12 = *(undefined4 **)(iVar21 + DAT_00204460);
    *puVar20 = *puVar12;
    puVar19 = *(undefined4 **)(iVar21 + DAT_00204464);
    puVar13 = *(undefined4 **)(iVar21 + DAT_00204468);
    *puVar19 = *puVar13;
    iVar7 = FUN_00205748();
    if ((-1 < iVar7) && (iVar7 = FUN_00202aa4(), -1 < iVar7)) {
      puVar14 = *(uint **)(iVar21 + DAT_0020446c);
      *puVar14 = *DAT_00204438 | *DAT_00204434 | *DAT_0020443c;
      puVar4 = DAT_00204444;
      puVar3 = DAT_00204440;
      if ((*puVar1 & 0x20000) != 0) {
        *puVar18 = 1;
        uVar15 = (*puVar1 & 0xff) >> 6;
        *puVar2 = *puVar2 & 0xfffffcff | uVar15 << 8;
        *puVar1 = *puVar1 & 0xffffffcf | uVar15 << 4;
        *puVar3 = *puVar3 | 8;
        *puVar4 = *puVar4 | 8;
        *puVar11 = 1;
        iVar8 = FUN_002065ec();
        iVar6 = DAT_00204474;
        iVar7 = DAT_00204470;
        if (iVar8 < 0) {
          return iVar8;
        }
        *puVar11 = 0;
        puVar11 = *(undefined4 **)(iVar21 + iVar7);
        puVar12 = (undefined4 *)*puVar12;
        *puVar11 = puVar12;
        puVar9 = *(undefined4 **)(iVar21 + DAT_00204478);
        *puVar9 = *puVar13;
        FUN_002134e8(iVar6 + 0x204324,*puVar12);
        FUN_002134e8(DAT_0020447c + 0x20434c,*(undefined4 *)*puVar9);
        iVar7 = FUN_00205748();
        if (iVar7 < 0) {
          return iVar7;
        }
        iVar7 = FUN_00202aa4();
        if (iVar7 < 0) {
          return iVar7;
        }
        puVar17 = *(uint **)(iVar21 + DAT_00204480);
        *puVar17 = *DAT_00204434 | DAT_00204434[0x2c00] | *DAT_0020443c;
        FUN_00205dd4(*puVar11,1);
        FUN_00205e34(*puVar9,4);
        puVar5 = DAT_00204448;
        *DAT_00204448 = *puVar17;
        puVar5[0x2c00] = *puVar17;
        *DAT_0020444c = *puVar17;
        *puVar3 = *puVar3 & 0xfffffff7;
        *puVar4 = *puVar4 & 0xfffffff7;
      }
      *puVar18 = 0;
      *puVar1 = uVar16;
      *puVar2 = uVar10;
      FUN_00205948(*puVar20,1);
      FUN_002059f0(*puVar19,4);
      iVar7 = DAT_00204484;
      puVar3 = DAT_00204434;
      *DAT_00204434 = *puVar14;
      puVar3[0x2c00] = *puVar14;
      *DAT_0020443c = *puVar14;
      FUN_002134e8(iVar7 + 0x2043f2,*puVar1,*puVar2);
      iVar7 = FUN_00203b2c();
      if (-1 < iVar7) {
        FUN_00205948(*puVar20,1);
        FUN_002059f0(*puVar19,4);
      }
    }
  }
  return iVar7;
}


// ==== FUN_00204488 @ 00204488 ====

undefined4 FUN_00204488(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_10004000 + param_1) = param_2;
  *(undefined4 *)(&DAT_1000f000 + param_1) = param_2;
  *(undefined4 *)(param_1 + 0x1020e000) = param_2;
  return 0;
}


// ==== FUN_002044a6 @ 002044a6 ====

undefined4 FUN_002044a6(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(&DAT_1000f000 + param_1) | *(uint *)(&DAT_10004000 + param_1) |
             *(uint *)(param_1 + 0x1020e000);
  return 0;
}


// ==== FUN_002044cc @ 002044cc ====

void FUN_002044cc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint local_c;
  
  local_c = param_2;
  if (param_1 == 1) {
    FUN_002044a6(4,&local_c,param_3,param_4,1);
    local_c = local_c | 0x4000000;
    FUN_00204488(4);
    FUN_00215aa8(2);
    do {
      FUN_002044a6(0x3b8,&local_c);
    } while (-1 < (int)(local_c << 0xf));
  }
  else {
    FUN_002044a6(4,&local_c,param_3,param_4,param_1);
    local_c = local_c & 0xfbffffff;
    FUN_00204488(4);
    FUN_00215aa8(2);
    do {
      FUN_002044a6(0x3b8,&local_c);
    } while ((int)(local_c << 0xf) < 0);
  }
  return;
}


// ==== FUN_00204530 @ 00204530 ====

undefined4 FUN_00204530(void)

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
  
  iVar93 = DAT_00204ae0;
  local_9c = 0;
  iVar86 = FUN_00207050();
  if (iVar86 != 3) {
    return 0xffffffff;
  }
  bVar6 = FUN_002044a6(0xe4,&local_a4);
  FUN_002044a6(0x88,&local_9c);
  bVar7 = FUN_002044a6(0x63c,&local_a8);
  uVar3 = local_a8;
  local_a8 = local_a8 & 0xfffffff9;
  bVar8 = FUN_00204488(0x63c);
  bVar9 = FUN_002044a6(0xfc,&local_a0);
  bVar10 = FUN_00204488(0xfc,local_a0 & 0x8fffffff);
  bVar11 = FUN_002044a6(0x44,&local_a8);
  uVar4 = local_a8;
  local_a8 = local_a8 & 0xbfffffff;
  bVar12 = FUN_00204488(0x44);
  puVar91 = (uint *)**(int **)(iVar93 + 0x204546 + DAT_00204ae4);
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
  bVar13 = FUN_002044a6(0xd8,&local_a8);
  local_a8 = local_a8 | 0xf000;
  bVar95 = true;
  bVar14 = FUN_00204488(0xd8);
  bVar15 = FUN_002044a6(0x1dc,&local_a8);
  uVar87 = local_a8;
  local_a8 = local_a8 & 0xff00ffff | 0x4000000;
  bVar16 = FUN_00204488(0x1dc);
  bVar17 = FUN_002044a6(0x1e0,&local_a8);
  uVar5 = local_a8;
  local_a8 = local_a8 | 0x40000000;
  bVar18 = FUN_00204488(0x1e0);
  bVar18 = bVar18 | bVar17 | bVar16 | bVar15 | bVar14 | bVar13 | bVar12 | bVar11 | bVar10 | bVar9 | 
                                                  bVar8 | bVar7 | bVar6;
  do {
    bVar6 = FUN_002044a6(0x1b0,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar7 = FUN_00204488(0x1b0);
    bVar8 = FUN_002044a6(0x1ac,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar9 = FUN_00204488(0x1ac);
    bVar10 = FUN_002044a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xffffffe0;
    bVar11 = FUN_00204488(0x1a8);
    bVar12 = FUN_002044a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xe0ffffff;
    bVar13 = FUN_00204488(0x1a8);
    bVar14 = FUN_002044a6(0x1a8,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar15 = FUN_00204488(0x1a8);
    bVar16 = FUN_002044a6(0x1ac,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar17 = FUN_00204488(0x1ac);
    bVar19 = FUN_002044a6(0x1b0,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar20 = FUN_00204488(0x1b0);
    bVar21 = FUN_002044a6(0x1bc,&local_a8);
    local_a8 = local_a8 & 0xffe0ffff;
    bVar22 = FUN_00204488(0x1bc);
    bVar23 = FUN_002044a6(0x1b4,&local_a8);
    local_a8 = local_a8 & 0xffffe0ff;
    bVar24 = FUN_00204488(0x1b4);
    bVar25 = FUN_002044a6(0x1c0,&local_a8);
    local_a8 = local_a8 & 0xffe0ffff;
    bVar26 = FUN_00204488(0x1c0);
    bVar27 = FUN_002044a6(0x80,&local_a8);
    local_a8 = local_a8 | 0x2000;
    bVar28 = FUN_00204488(0x80);
    uVar88 = DAT_00204adc;
    if (bVar95) {
      uVar88 = DAT_00204ad8;
    }
    bVar29 = FUN_00204488(0x88,uVar88);
    bVar30 = FUN_002044a6(0x4c,&local_a8);
    local_a8 = local_a8 | 4;
    bVar31 = FUN_00204488(0x4c);
    FUN_002044a6(0x4c,&local_a8);
    bVar32 = FUN_002044a6(0x1e4,&local_a8);
    local_a8 = local_a8 | 1;
    bVar33 = FUN_00204488(0x1e4);
    FUN_00215aa8(1);
    local_a8 = local_a8 & 0xfffffffe;
    bVar34 = FUN_00204488(0x1e4);
    bVar35 = FUN_002044a6(0x4c,&local_a8);
    local_a8 = local_a8 & 0xfffffffb;
    bVar36 = FUN_00204488(0x4c);
    FUN_00215aa8(1);
    bVar37 = FUN_002044a6(0xe4,&local_a8);
    local_a8 = local_a8 & 0xfffffffb | 8;
    bVar38 = FUN_00204488(0xe4);
    FUN_002044a6(0x50,&local_a8);
    if (bVar95) {
      uVar88 = 0x55555555;
    }
    else {
      uVar88 = 0x1010101;
    }
    bVar39 = FUN_00204488(0x50,uVar88);
    uVar94 = 0;
    bVar39 = bVar39 | bVar38 | bVar37 | bVar36 | bVar35 | bVar34 | bVar33 | bVar32 | bVar31 | bVar30
                                                                                              | 
                                                  bVar29 | bVar28 | bVar27 | bVar26 | bVar25 | 
                                                  bVar24 | bVar23 | bVar22 | bVar21 | bVar20 | 
                                                  bVar19 | bVar17 | bVar16 | bVar15 | bVar14 | 
                                                  bVar13 | bVar12 | bVar11 | bVar10 | bVar9 | bVar8 
                                                  | bVar7 | bVar6 | bVar18;
    FUN_002044a6(0x50,&local_a8);
    FUN_00215aa8(1);
    do {
      bVar6 = FUN_002044a6(0xc,&local_a8);
      local_a8 = (uVar94 & 0xf) << 0x18 | local_a8 & 0xf0ffffff;
      bVar7 = FUN_00204488(0xc);
      bVar8 = FUN_002044a6(0x4c,&local_a8);
      local_a8 = local_a8 | 2;
      bVar9 = FUN_00204488(0x4c);
      FUN_00215aa8(1);
      local_a8 = local_a8 & 0xfffffffd;
      bVar10 = FUN_00204488(0x4c);
      FUN_00215aa8(1);
      bVar11 = FUN_002044a6(0x380,&local_a8);
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
                goto LAB_00205410;
              }
            }
            else if (cVar41 == -1) {
              local_8c[iVar93] = cVar40;
            }
            else {
              bVar2 = true;
LAB_00205410:
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
          if (iVar93 != 4) goto LAB_00204a34;
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
              goto LAB_00205390;
            }
          }
          else if (cVar41 == -1) {
            local_8c[uVar92] = cVar40;
          }
          else {
            pcVar98 = (char *)0x1;
LAB_00205390:
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
LAB_00204a34:
      uVar94 = uVar94 + 1;
      FUN_00215aa8(1);
    } while (uVar94 != 0x10);
    bVar6 = FUN_002044a6(0xc,&local_a8);
    local_a8 = local_a8 & 0xf0ffffff;
    bVar7 = FUN_00204488(0xc);
    bVar39 = bVar7 | bVar6 | bVar39;
    uVar94 = 0;
    do {
      bVar6 = FUN_002044a6(0x1b0,&local_a8);
      uVar92 = uVar94 << 8;
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar7 = FUN_00204488(0x1b0);
      bVar8 = FUN_002044a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar9 = FUN_00204488(0x1ac);
      bVar10 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffffe0 | uVar94;
      bVar11 = FUN_00204488(0x1a8);
      bVar12 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xe0ffffff | uVar94 << 0x18;
      bVar13 = FUN_00204488(0x1a8);
      bVar14 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar15 = FUN_00204488(0x1a8);
      bVar16 = FUN_002044a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar17 = FUN_00204488(0x1ac);
      bVar18 = FUN_002044a6(0x1b0,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar19 = FUN_00204488(0x1b0);
      bVar20 = FUN_002044a6(0x1bc,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | uVar94 << 0x10;
      bVar21 = FUN_00204488(0x1bc);
      bVar22 = FUN_002044a6(0x1b4,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | uVar92;
      bVar23 = FUN_00204488(0x1b4);
      bVar24 = FUN_002044a6(0x1c0,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | uVar94 << 0x10;
      bVar25 = FUN_00204488(0x1c0);
      bVar26 = FUN_002044a6(0x4c,&local_a8);
      local_a8 = local_a8 | 2;
      bVar27 = FUN_00204488(0x4c);
      FUN_00215aa8(10);
      local_a8 = local_a8 & 0xfffffffd;
      bVar28 = FUN_00204488(0x4c);
      FUN_00215aa8(10);
      bVar29 = FUN_002044a6(0x380,&local_a8);
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
                goto LAB_0020552c;
              }
            }
            else if (cVar41 == -1) {
              local_74[iVar93] = cVar40;
            }
            else {
              bVar2 = true;
LAB_0020552c:
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
          if (iVar93 != 4) goto LAB_00204af6;
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
              goto LAB_0020549c;
            }
          }
          else if (cVar41 == -1) {
            local_74[uVar92] = cVar40;
          }
          else {
            pcVar98 = (char *)0x1;
LAB_0020549c:
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
LAB_00204af6:
      uVar94 = uVar94 + 1;
      FUN_00215aa8(10);
    } while (uVar94 != 0x20);
    bVar6 = FUN_002044a6(0x80,&local_a8);
    local_a8 = local_a8 & 0xffffdfff;
    bVar7 = FUN_00204488(0x80);
    bVar39 = bVar7 | bVar6 | bVar39;
    if (!bVar95) {
      bVar6 = FUN_002044a6(0xd8,&local_a8);
      local_a8 = local_a8 & 0xffff0fff;
      bVar7 = FUN_00204488(0xd8);
      bVar39 = bVar39 | bVar7 | bVar6;
    }
    FUN_00215aa8(10);
    bVar6 = FUN_002044a6(0xe4,&local_a8);
    local_a8 = local_a8 & 0xfffffff7 | 4;
    bVar18 = FUN_00204488(0xe4);
    bVar18 = bVar18 | bVar6 | bVar39;
    if (!bVar95) break;
    bVar95 = false;
  } while( true );
  cVar40 = FUN_002044a6(0x80,&local_a8);
  local_a8 = local_a8 | 0x2000;
  cVar41 = FUN_00204488(0x80);
  cVar42 = FUN_00204488(0x88,DAT_00204fdc);
  cVar43 = FUN_002044a6(0x4c,&local_a8);
  local_a8 = local_a8 | 4;
  cVar44 = FUN_00204488(0x4c);
  cVar45 = FUN_002044a6(0x1e4,&local_a8);
  local_a8 = local_a8 | 1;
  cVar46 = FUN_00204488(0x1e4);
  FUN_00215aa8(1);
  local_a8 = local_a8 & 0xfffffffe;
  cVar47 = FUN_00204488(0x1e4);
  cVar48 = FUN_002044a6(0x4c,&local_a8);
  local_a8 = local_a8 & 0xfffffffb;
  cVar49 = FUN_00204488(0x4c);
  cVar50 = FUN_002044a6(0x80,&local_a8);
  local_a8 = local_a8 & 0xffffdfff;
  cVar51 = FUN_00204488(0x80);
  cVar52 = FUN_002044a6(0xe4,&local_a8);
  local_a8 = local_a8 & 0xfffffffb;
  cVar53 = FUN_00204488(0xe4);
  bVar6 = 0xf1;
  iVar93 = 0;
  do {
    iVar86 = (int)acStack_44[iVar93] - (int)acStack_50[iVar93];
    iVar90 = (int)local_2c[iVar93] - (int)local_38[iVar93];
    if (iVar86 < iVar90) {
      if (0 < iVar86) {
        iVar86 = (iVar86 - iVar90) - (iVar86 - iVar90 >> 0x1f);
        goto LAB_00204fd6;
      }
      bVar7 = -(local_38[iVar93] + (char)(iVar90 >> 1));
LAB_00204fe6:
      local_98[iVar93] = bVar7;
    }
    else {
      if (0 < iVar90) {
        iVar86 = iVar86 - iVar90;
LAB_00204fd6:
        bVar7 = (byte)(iVar86 >> 1);
        goto LAB_00204fe6;
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
      cVar54 = FUN_00204488(0x1dc,uVar87);
      cVar55 = FUN_00204488(0x1e0,uVar5);
      cVar56 = FUN_002044a6(0x1b0,&local_a8);
      local_a8 = (int)local_5c[0] | local_a8 & 0xffffffe0;
      cVar57 = FUN_00204488(0x1b0);
      cVar58 = FUN_002044a6(0x1ac,&local_a8);
      local_a8 = (int)local_5c[1] | local_a8 & 0xffffffe0;
      cVar59 = FUN_00204488(0x1ac);
      cVar60 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = (int)local_5c[2] | local_a8 & 0xffffffe0;
      cVar61 = FUN_00204488(0x1a8);
      cVar62 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xe0ffffff | (int)local_5c[3] << 0x18;
      cVar63 = FUN_00204488(0x1a8);
      cVar64 = FUN_002044a6(0x1a8,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[4] << 8;
      cVar65 = FUN_00204488(0x1a8);
      cVar66 = FUN_002044a6(0x1ac,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[5] << 8;
      cVar67 = FUN_00204488(0x1ac);
      cVar68 = FUN_002044a6(0x1b0,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[6] << 8;
      cVar69 = FUN_00204488(0x1b0);
      cVar70 = FUN_002044a6(0x1bc,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | (int)local_5c[7] << 0x10;
      cVar71 = FUN_00204488(0x1bc);
      cVar72 = FUN_002044a6(0x1b4,&local_a8);
      local_a8 = local_a8 & 0xffffe0ff | (int)local_5c[8] << 8;
      cVar73 = FUN_00204488(0x1b4);
      cVar74 = FUN_002044a6(0x1c0,&local_a8);
      local_a8 = local_a8 & 0xffe0ffff | (int)local_5c[9] << 0x10;
      cVar75 = FUN_00204488(0x1c0);
      uVar87 = FUN_00201700(iVar86 + 5,10);
      if (0xe < uVar87) {
        uVar87 = 0xf;
      }
      cVar76 = FUN_002044a6(0x1b8,&local_a8);
      local_a8 = local_a8 & 0xffffe0e0 | uVar87 | uVar87 << 8;
      cVar77 = FUN_00204488(0x1b8);
      cVar78 = FUN_002044a6(0xc,&local_a8);
      local_a8 = local_a8 & 0xfffffff | uVar87 << 0x1c;
      cVar79 = FUN_00204488(0xc);
      FUN_002044cc(1);
      FUN_002134e8(DAT_0020560c + 0x2052a2,0);
      cVar80 = FUN_002044a6(0xc,&local_a8);
      local_a8 = (bVar6 & 0xf) << 0x18 | local_a8 & 0xf0ffffff;
      cVar81 = FUN_00204488(0xc);
      FUN_002044cc(0);
      *(byte *)(DAT_00205610 + 0x2052da) = bVar6;
      cVar82 = FUN_00204488(0xfc,local_a0);
      cVar83 = FUN_00204488(0x44,uVar4);
      cVar84 = FUN_00204488(0x63c,uVar3);
      cVar85 = FUN_00204488(0xe4,local_a4);
      FUN_00204488(0x88,local_9c);
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


// ==== FUN_00205614 @ 00205614 ====

undefined4 FUN_00205614(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20 [4];
  
  local_20[0] = *(int *)(DAT_0020565c + 0x205622);
  local_20[1] = *(undefined4 *)(DAT_0020565c + 0x205626);
  local_20[2] = *(undefined4 *)(DAT_0020565c + 0x20562a);
  local_20[3] = *(undefined4 *)(DAT_0020565c + 0x20562e);
  iVar3 = 0;
  do {
    iVar1 = *(int *)((int)local_20 + iVar3);
    for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
    }
    for (iVar2 = 0; iVar2 != param_2; iVar2 = iVar2 + 1) {
      if (*(int *)(param_1 + iVar2 * 4) != iVar1) {
        return 0xffffffff;
      }
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x10);
  return 0;
}


// ==== FUN_00205678 @ 00205678 ====

void FUN_00205678(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0021577c(*param_1);
    uVar4 = FUN_0021577c(*param_1);
    puVar3 = DAT_002056f0;
    puVar2 = DAT_002056ec;
    puVar1 = DAT_002056e8;
    uVar5 = (uVar4 & 0x1f) << 0x10;
    uVar4 = ((uVar4 & 0x1f) - 4) * 0x100;
    *DAT_002056e8 = (*DAT_002056f0 | *DAT_002056e8 | *DAT_002056ec) & 0xffe0e0ff | uVar5 | uVar4;
    *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xffe0e0ff | uVar5 | uVar4;
    *puVar3 = uVar4 | uVar5 | (*puVar2 | *puVar1 | *puVar3) & 0xffe0e0ff;
  }
  return;
}


// ==== FUN_00205748 @ 00205748 ====

int FUN_00205748(void)

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
  
  iVar12 = DAT_002058b0;
  iVar5 = DAT_002058ac;
  iVar14 = DAT_002058a8;
  puVar11 = (undefined4 *)(DAT_002058a8 + 0x205760);
  *(undefined4 *)(DAT_002058a4 + 0x20575a) = 0;
  local_3c = *puVar11;
  uStack_38 = *(undefined4 *)(iVar14 + 0x205764);
  uStack_34 = *(undefined4 *)(iVar14 + 0x205768);
  uStack_30 = *(undefined4 *)(iVar14 + 0x20576c);
  iVar12 = iVar12 + 0x20576a;
  local_2c = *(undefined4 *)(iVar14 + 0x205770);
  uStack_28 = *(undefined4 *)(iVar14 + 0x205774);
  uStack_24 = *(undefined4 *)(iVar14 + 0x205778);
  bVar1 = false;
  puVar11 = (undefined4 *)(DAT_002058b4 + 0x205778);
  do {
    puVar4 = DAT_002058a0;
    puVar3 = DAT_0020589c;
    puVar2 = DAT_00205898;
    iVar14 = *(int *)(iVar12 + DAT_002058b8);
    if (bVar1) {
      iVar8 = (((*DAT_0020589c | *DAT_00205898 | *DAT_002058a0) & 0x7fffffff) >> 0x1c) - 1;
      FUN_002134e8(iVar5 + 0x205766,iVar8);
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
    FUN_00205d3c(0,*(undefined4 *)(iVar12 + DAT_002058bc),&local_3c);
    iVar8 = *(int *)(iVar12 + DAT_002058c0);
    piVar6 = (int *)(iVar14 + -4);
    do {
      piVar9 = piVar6;
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar8 + iVar10 * 4) == 0) {
        iVar14 = -1;
        goto LAB_0020586e;
      }
      piVar6 = piVar9 + 1;
    } while ((*piVar6 != 1) || (piVar9[2] != 1));
    iVar14 = FUN_0021577c();
    puVar13 = *(undefined4 **)(iVar12 + DAT_002058c4);
    iVar7 = FUN_0021577c(*puVar13);
    if (iVar7 < iVar14) {
      *puVar13 = *(undefined4 *)(iVar8 + iVar10 * 4);
    }
    iVar14 = 0;
LAB_0020586e:
    if (*(char *)**(undefined4 **)(iVar12 + DAT_002058c4) != '0') {
      FUN_00205678(*(undefined4 **)(iVar12 + DAT_002058c4),1);
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


// ==== FUN_00205910 @ 00205910 ====

int FUN_00205910(uint param_1)

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


// ==== FUN_0020592c @ 0020592c ====

uint FUN_0020592c(uint param_1)

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


// ==== FUN_00205948 @ 00205948 ====

void FUN_00205948(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = FUN_0021577c(*param_1);
  puVar3 = DAT_002059e4;
  puVar2 = DAT_002059e0;
  puVar1 = DAT_002059dc;
  uVar7 = uVar6 & 3;
  uVar6 = ((uVar6 & 0x1f) >> 2) << 0x18;
  *DAT_002059dc = (*DAT_002059dc | *DAT_002059e0 | *DAT_002059e4) & 0xf8ffffff | uVar6;
  *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xf8ffffff | uVar6;
  puVar5 = DAT_002059ec;
  puVar4 = DAT_002059e8;
  *puVar3 = uVar6 | (*puVar2 | *puVar1 | *puVar3) & 0xf8ffffff;
  uVar6 = uVar7 << 4;
  *puVar4 = (*puVar4 | *puVar5 | puVar3[0x11]) & 0xffffffcc | uVar7 | uVar6;
  *puVar5 = (*puVar4 | *puVar5 | puVar3[0x11]) & 0xffffffcc | uVar7 | uVar6;
  puVar3[0x11] = uVar6 | uVar7 | (*puVar5 | *puVar4 | puVar3[0x11]) & 0xffffffcc;
  return;
}


// ==== FUN_002059f0 @ 002059f0 ====

void FUN_002059f0(undefined4 *param_1,int param_2)

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
  
  puVar3 = DAT_00205b74;
  puVar2 = DAT_00205b70;
  puVar1 = DAT_00205b6c;
  if (param_2 == 4) {
    uVar9 = *DAT_00205b6c;
    uVar10 = *DAT_00205b70;
    uVar8 = *DAT_00205b74;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar1 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar2 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar3 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    return;
  }
  uVar4 = FUN_0021577c(*param_1);
  uVar4 = uVar4 & 0x7f;
  uVar5 = uVar4 << 8;
  uVar6 = uVar4 << 0x10;
  uVar7 = uVar4 << 0x18;
  *puVar1 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar2 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar3 = uVar7 | uVar6 | uVar5 | uVar4 | (*puVar1 | *puVar2 | *puVar3) & 0x80000000;
  return;
}


// ==== FUN_00205b78 @ 00205b78 ====

void FUN_00205b78(void)

{
  return;
}


// ==== FUN_00205d3c @ 00205d3c ====

void FUN_00205d3c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00205dc8 + 0x205d4e;
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
      piVar3 = *(int **)(iVar6 + DAT_00205dcc);
      iVar2 = *piVar3;
      iVar1 = (*(code *)param_3[3])();
      pcVar4 = (code *)param_3[4];
      *piVar3 = iVar1 + iVar2;
      (*pcVar4)();
    }
    else {
      FUN_00205d3c(param_1 + -1,param_2,param_3);
    }
  }
  (*(code *)param_3[5])
            (param_1,*(undefined4 *)(iVar6 + DAT_00205dcc),*(undefined4 *)(iVar6 + DAT_00205dd0),
             (code *)param_3[5],iVar2,piVar3);
  (*(code *)param_3[6])(param_1);
  return;
}


// ==== FUN_00205dd4 @ 00205dd4 ====

void FUN_00205dd4(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = FUN_0021577c(*param_1);
  puVar3 = DAT_00205e30;
  puVar2 = DAT_00205e2c;
  puVar1 = DAT_00205e28;
  uVar4 = (uVar4 & 3) << 6 | (uVar4 & 3) << 2;
  *DAT_00205e28 = (*DAT_00205e28 | *DAT_00205e2c | *DAT_00205e30) & 0xffffff33 | uVar4;
  *puVar2 = (*puVar1 | *puVar2 | *puVar3) & 0xffffff33 | uVar4;
  *puVar3 = uVar4 | (*puVar2 | *puVar1 | *puVar3) & 0xffffff33;
  return;
}


// ==== FUN_00205e34 @ 00205e34 ====

void FUN_00205e34(undefined4 *param_1,int param_2)

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
  
  puVar3 = DAT_00205fb8;
  puVar2 = DAT_00205fb4;
  puVar1 = DAT_00205fb0;
  if (param_2 == 4) {
    uVar9 = *DAT_00205fb0;
    uVar10 = *DAT_00205fb4;
    uVar8 = *DAT_00205fb8;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar1 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar2 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    uVar9 = *puVar1;
    uVar10 = *puVar2;
    uVar8 = *puVar3;
    uVar4 = FUN_0021577c(*param_1);
    uVar5 = FUN_0021577c(param_1[1]);
    uVar6 = FUN_0021577c(param_1[2]);
    uVar7 = FUN_0021577c(param_1[3]);
    *puVar3 = uVar4 & 0x7f | (uVar10 | uVar9 | uVar8) & 0x80000000 | (uVar5 & 0x7f) << 8 |
              (uVar6 & 0x7f) << 0x10 | (uVar7 & 0x7f) << 0x18;
    return;
  }
  uVar4 = FUN_0021577c(*param_1);
  uVar4 = uVar4 & 0x7f;
  uVar5 = uVar4 << 8;
  uVar6 = uVar4 << 0x10;
  uVar7 = uVar4 << 0x18;
  *puVar1 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar2 = (*puVar2 | *puVar1 | *puVar3) & 0x80000000 | uVar4 | uVar5 | uVar6 | uVar7;
  *puVar3 = uVar7 | uVar6 | uVar5 | uVar4 | (*puVar1 | *puVar2 | *puVar3) & 0x80000000;
  return;
}


// ==== FUN_00205fbc @ 00205fbc ====

void FUN_00205fbc(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  
  puVar2 = DAT_002061f8;
  puVar1 = DAT_002061f4;
  *DAT_002061f4 = *DAT_002061f4 | 0x200;
  *puVar2 = *puVar2 | 0x200;
  puVar9 = DAT_002061fc;
  *DAT_002061fc = *DAT_002061fc | 0x200;
  *puVar1 = *puVar1 & 0xfffffdff;
  *puVar2 = *puVar2 & 0xfffffdff;
  *puVar9 = *puVar9 & 0xfffffdff;
  puVar8 = DAT_00206224;
  puVar7 = DAT_00206220;
  puVar2 = DAT_00206204;
  puVar1 = DAT_00206200;
  DataSynchronizationBarrier(0xf);
  puVar9 = puVar9 + -0x78;
  *DAT_00206200 = *DAT_00206204 | *DAT_00206200 | 0x4000000 | *puVar9;
  *puVar2 = *puVar2 | *puVar1 | 0x4000000 | *puVar9;
  puVar3 = DAT_00206208;
  *puVar9 = *puVar2 | *puVar1 | 0x4000000 | *puVar9;
  puVar6 = DAT_00206214;
  puVar5 = DAT_00206210;
  puVar4 = DAT_0020620c;
  do {
  } while (-1 < (int)((*puVar8 | *puVar7 | *puVar3) << 0xf));
  *DAT_0020620c = *DAT_0020620c | *DAT_00206210 | 0x10000000 | *DAT_00206214;
  *puVar5 = *puVar4 | *puVar5 | 0x10000000 | *puVar6;
  puVar3 = DAT_00206218;
  *puVar6 = *puVar4 | *puVar5 | 0x10000000 | *puVar6;
  puVar4 = DAT_0020621c;
  *puVar3 = *puVar3 | *DAT_0020621c | 0x2000000 | puVar6[1];
  *puVar4 = *puVar3 | *puVar4 | 0x2000000 | puVar6[1];
  puVar6[1] = *puVar3 | *puVar4 | 0x2000000 | puVar6[1];
  puVar5 = DAT_00206214;
  puVar4 = DAT_00206210;
  puVar3 = DAT_0020620c;
  iVar10 = 1000;
  do {
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *DAT_0020620c = (*DAT_00206210 | *DAT_0020620c | *DAT_00206214) & 0xefffffff;
  *puVar4 = (*puVar4 | *puVar3 | *puVar5) & 0xefffffff;
  puVar6 = DAT_00206218;
  *puVar5 = (*puVar4 | *puVar3 | *puVar5) & 0xefffffff;
  puVar3 = DAT_0020621c;
  *puVar6 = (*DAT_0020621c | *puVar6 | puVar5[1]) & 0xfdffffff;
  *puVar3 = (*puVar3 | *puVar6 | puVar5[1]) & 0xfdffffff;
  puVar5[1] = (*puVar3 | *puVar6 | puVar5[1]) & 0xfdffffff;
  *puVar1 = (*puVar1 | *puVar2 | *puVar9) & 0xfbffffff;
  *puVar2 = (*puVar1 | *puVar2 | *puVar9) & 0xfbffffff;
  *puVar9 = (*puVar2 | *puVar1 | *puVar9) & 0xfbffffff;
  DataSynchronizationBarrier(0xf);
  for (iVar10 = 0; iVar10 != param_2; iVar10 = iVar10 + 1) {
  }
  return;
}


// ==== FUN_00206228 @ 00206228 ====

undefined4 FUN_00206228(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = DAT_002062d4;
  puVar1 = DAT_002062d0;
  if ((*DAT_002062cc & 1) == 0) {
    iVar5 = 0x3c4;
  }
  else {
    iVar5 = 0x3c0;
  }
  FUN_00205fbc();
  puVar3 = DAT_002062e0;
  if (param_3 != (uint *)0x0) {
    *param_3 = *DAT_002062dc | *DAT_002062d8 | *DAT_002062e4;
    param_3[1] = *puVar1 | *puVar2 | *puVar3;
  }
  if ((*(uint *)(&DAT_1000f000 + iVar5) | *(uint *)(&DAT_10004000 + iVar5) |
      *(uint *)(iVar5 + 0x1020e000)) != 0x2020202) {
    return 0xffffffff;
  }
  FUN_00205fbc(param_1,param_2,param_3);
  uVar4 = 0;
  if ((*puVar2 | *puVar1 | *puVar3) != 0x2020202) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


// ==== FUN_002062e8 @ 002062e8 ====

undefined4 FUN_002062e8(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  puVar1 = DAT_00206374;
  FUN_00205fbc();
  puVar6 = DAT_00206388;
  puVar5 = DAT_00206384;
  puVar4 = DAT_00206380;
  puVar3 = DAT_0020637c;
  puVar2 = DAT_00206378;
  if (param_3 != (uint *)0x0) {
    *param_3 = *DAT_00206378 | *puVar1 | *DAT_00206380;
    param_3[1] = *puVar6 | *puVar3 | *puVar5;
  }
  if ((*puVar2 | *puVar1 | *puVar4) == 0x4040404) {
    FUN_00205fbc(param_1,param_2,param_3);
    uVar7 = 0;
    if ((DAT_00206374[0x2c00] | *DAT_00206374 | *DAT_00206380) != 0x4040404) {
      uVar7 = 0xffffffff;
    }
    return uVar7;
  }
  return 0xffffffff;
}


// ==== FUN_0020638c @ 0020638c ====

void FUN_0020638c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  
  iVar9 = FUN_00207050();
  if (((iVar9 == 2) || (iVar9 = FUN_00207050(), iVar9 == 3)) || (iVar9 = FUN_00207050(), iVar9 != 4)
     ) {
    FUN_002062e8(param_1,1,param_3);
  }
  else {
    FUN_00206228(param_1,1,param_3);
  }
  puVar2 = DAT_002065bc;
  puVar1 = DAT_002065b8;
  *DAT_002065b8 = *DAT_002065b8 | 0x200;
  *puVar2 = *puVar2 | 0x200;
  puVar10 = DAT_002065c0;
  *DAT_002065c0 = *DAT_002065c0 | 0x200;
  *puVar1 = *puVar1 & 0xfffffdff;
  *puVar2 = *puVar2 & 0xfffffdff;
  *puVar10 = *puVar10 & 0xfffffdff;
  puVar8 = DAT_002065e8;
  puVar7 = DAT_002065e4;
  puVar3 = DAT_002065cc;
  puVar2 = DAT_002065c8;
  puVar1 = DAT_002065c4;
  DataSynchronizationBarrier(0xf);
  puVar10 = puVar10 + -0x78;
  *DAT_002065c4 = *DAT_002065c8 | *DAT_002065c4 | 0x4000000 | *puVar10;
  *puVar2 = *puVar2 | *puVar1 | 0x4000000 | *puVar10;
  *puVar10 = *puVar2 | *puVar1 | 0x4000000 | *puVar10;
  puVar6 = DAT_002065d8;
  puVar5 = DAT_002065d4;
  puVar4 = DAT_002065d0;
  do {
  } while (-1 < (int)((*puVar7 | *puVar8 | *puVar3) << 0xf));
  *DAT_002065d0 = *DAT_002065d0 | *DAT_002065d4 | 0x10000000 | *DAT_002065d8;
  *puVar5 = *puVar4 | *puVar5 | 0x10000000 | *puVar6;
  puVar3 = DAT_002065dc;
  *puVar6 = *puVar5 | *puVar4 | 0x10000000 | *puVar6;
  puVar4 = DAT_002065e0;
  *puVar3 = *puVar3 | *DAT_002065e0 | 0x2000000 | puVar6[1];
  *puVar4 = *puVar3 | *puVar4 | 0x2000000 | puVar6[1];
  puVar6[1] = *puVar4 | *puVar3 | 0x2000000 | puVar6[1];
  puVar5 = DAT_002065d8;
  puVar4 = DAT_002065d4;
  puVar3 = DAT_002065d0;
  iVar9 = 1000;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *DAT_002065d0 = (*DAT_002065d4 | *DAT_002065d0 | *DAT_002065d8) & 0xefffffff;
  *puVar4 = (*puVar4 | *puVar3 | *puVar5) & 0xefffffff;
  puVar6 = DAT_002065dc;
  *puVar5 = (*puVar4 | *puVar3 | *puVar5) & 0xefffffff;
  puVar3 = DAT_002065e0;
  *puVar6 = (*DAT_002065e0 | *puVar6 | puVar5[1]) & 0xfdffffff;
  *puVar3 = (*puVar3 | *puVar6 | puVar5[1]) & 0xfdffffff;
  puVar5[1] = (*puVar3 | *puVar6 | puVar5[1]) & 0xfdffffff;
  *puVar1 = (*puVar1 | *puVar2 | *puVar10) & 0xfbffffff;
  *puVar2 = (*puVar1 | *puVar2 | *puVar10) & 0xfbffffff;
  *puVar10 = (*puVar2 | *puVar1 | *puVar10) & 0xfbffffff;
  DataSynchronizationBarrier(0xf);
  return;
}


// ==== FUN_002065ec @ 002065ec ====

undefined4 FUN_002065ec(void)

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
  
  iVar17 = DAT_0020690c + 0x2065fe;
  local_3c = *(undefined4 *)(DAT_00206908 + 0x2065fc);
  uStack_38 = *(undefined4 *)(DAT_00206908 + 0x206600);
  uStack_34 = *(undefined4 *)(DAT_00206908 + 0x206604);
  uStack_30 = *(undefined4 *)(DAT_00206908 + 0x206608);
  iVar15 = 0;
  local_2c = *(undefined4 *)(DAT_00206908 + 0x20660c);
  uStack_28 = *(undefined4 *)(DAT_00206908 + 0x206610);
  uStack_24 = *(undefined4 *)(DAT_00206908 + 0x206614);
  *(undefined4 *)(DAT_00206910 + 0x206612) = 0;
  *(undefined4 *)(DAT_00206914 + 0x206618) = 0;
  iVar12 = DAT_00206918 + 0x20661e;
  do {
    *(undefined4 *)(iVar15 + iVar12) = 0;
    puVar4 = DAT_00206920;
    puVar1 = DAT_002068f8;
    iVar15 = iVar15 + 4;
  } while (iVar15 != 0x80);
  FUN_00215820(DAT_0020691c + 0x206634,0,0x200);
  iVar15 = 0;
  FUN_00215820(DAT_00206924 + 0x206642,0,0xc);
  iVar12 = 0;
  FUN_00215820(DAT_00206928 + 0x206650,0,0xc);
  puVar3 = DAT_00206904;
  puVar2 = DAT_002068fc;
  iVar20 = 0;
  *DAT_002068fc = *DAT_002068fc | 0x10000000;
  puVar2[0x2c00] = puVar2[0x2c00] | 0x10000000;
  *DAT_00206900 = *DAT_00206900 | 0x10000000;
  *puVar4 = *puVar4 | 0x100;
  *puVar3 = *puVar3 | 0x100;
  *puVar1 = *puVar1 | 0x100;
  FUN_00205d3c(1,*(undefined4 *)(iVar17 + DAT_0020692c),&local_3c);
  iVar13 = DAT_00206930 + 0x2066b0;
  do {
    uVar11 = *(undefined4 *)(iVar13 + iVar20 * 4);
    iVar5 = FUN_00205910(uVar11);
    if (iVar12 + 1 < iVar5) {
      iVar6 = FUN_0020592c(uVar11);
      iVar6 = iVar6 + iVar5 / 2;
LAB_00206724:
      unaff_r4 = iVar20;
      iVar12 = iVar5;
      iVar15 = iVar6;
    }
    else if ((iVar5 != 0) && (iVar10 = iVar5 + 1, iVar12 <= iVar10)) {
      iVar6 = FUN_0020592c(uVar11);
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
      if (iVar16 < iVar14) goto LAB_00206724;
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 != 0x20);
  piVar19 = *(int **)(iVar17 + DAT_00206934);
  puVar18 = *(undefined4 **)(iVar17 + DAT_00206938);
  if (*piVar19 == 1) {
    puVar21 = *(undefined4 **)(iVar17 + DAT_0020693c);
    uVar7 = FUN_0021577c(*(undefined4 *)*puVar21);
    uVar8 = FUN_0021577c(puVar18[unaff_r4]);
    if (((uVar8 ^ uVar7) & 0x1f) != 0) {
      uVar11 = FUN_0021577c(*(undefined4 *)*puVar21);
      uVar9 = FUN_0021577c(puVar18[unaff_r4]);
      FUN_002134e8(DAT_00206940 + 0x206782,uVar11,uVar9);
      iVar12 = FUN_0021577c(*(undefined4 *)*puVar21);
      iVar15 = FUN_0021577c(*puVar18);
      unaff_r4 = iVar12 - iVar15;
    }
  }
  FUN_00205b78(DAT_00206944 + 0x2067a2,*piVar19,unaff_r4,puVar18[unaff_r4]);
  iVar12 = FUN_00205910(*(undefined4 *)(DAT_00206948 + 0x2067ae + unaff_r4 * 4));
  iVar15 = FUN_00207050();
  if ((iVar15 == 4) && (10 < iVar12)) {
    iVar12 = 10;
  }
  else if (iVar12 == 0) {
    FUN_00205b78(DAT_002069ac + 0x206976);
    uVar11 = 0xffffffff;
    goto LAB_0020697c;
  }
  iVar15 = FUN_0020592c(*(undefined4 *)(DAT_0020694c + 0x2067da + unaff_r4 * 4));
  uVar11 = puVar18[unaff_r4];
  puVar21 = *(undefined4 **)(iVar17 + DAT_00206950);
  *puVar21 = puVar18 + unaff_r4;
  piVar19 = *(int **)(iVar17 + DAT_00206954);
  iVar13 = *(int *)(iVar17 + DAT_00206958);
  iVar20 = DAT_0020695c + 0x20680c;
  *piVar19 = iVar13 + (iVar15 + iVar12 / 2) * 4;
  FUN_00205b78(iVar20,uVar11);
  FUN_00205b78(iVar20,*(undefined4 *)*piVar19);
  FUN_00205948(*puVar21,1);
  iVar5 = DAT_00206960 + 0x206838;
  iVar15 = DAT_00206964 + 0x20683c;
  iVar20 = DAT_00206968 + 0x206840;
  iVar12 = 0;
  do {
    iVar6 = FUN_0021577c(*(undefined4 *)*puVar21);
    iVar6 = FUN_0020592c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    iVar10 = FUN_0021577c(*(undefined4 *)*puVar21);
    iVar10 = FUN_00205910(*(undefined4 *)(iVar5 + (iVar12 + iVar10 * 4) * 4));
    iVar14 = *(int *)(iVar17 + DAT_0020696c);
    uVar9 = *(undefined4 *)(iVar13 + (iVar6 + iVar10 / 2) * 4);
    *(undefined4 *)(iVar14 + iVar12 * 4) = uVar9;
    iVar6 = FUN_0021577c(*(undefined4 *)*puVar21);
    iVar6 = FUN_0020592c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    uVar11 = *(undefined4 *)(iVar13 + iVar6 * 4);
    iVar6 = FUN_0021577c(*(undefined4 *)*puVar21);
    iVar6 = FUN_0020592c(*(undefined4 *)(iVar5 + (iVar12 + iVar6 * 4) * 4));
    iVar10 = FUN_0021577c(*(undefined4 *)*puVar21);
    iVar10 = FUN_00205910(*(undefined4 *)(iVar5 + (iVar12 + iVar10 * 4) * 4));
    iVar16 = iVar12 + 1;
    FUN_00205b78(iVar15,iVar20,iVar12,uVar9,uVar11,*(undefined4 *)(iVar13 + (iVar10 + iVar6) * 4));
    iVar12 = iVar16;
  } while (iVar16 != 4);
  *piVar19 = iVar14;
  FUN_002059f0(iVar14,4);
  uVar11 = 0;
LAB_0020697c:
  puVar1 = DAT_002069a4;
  *puVar4 = *puVar4 & 0xfffffeff;
  *puVar1 = *puVar1 & 0xfffffeff;
  *DAT_002069a8 = *DAT_002069a8 & 0xfffffeff;
  return uVar11;
}


// ==== FUN_00206f54 @ 00206f54 ====

uint FUN_00206f54(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = DAT_00207028;
  puVar4 = DAT_00207024;
  puVar3 = DAT_00207020;
  puVar2 = DAT_0020701c;
  puVar1 = DAT_00207018;
  uVar7 = *DAT_0020701c | *DAT_00207018 | *DAT_00207020;
  *DAT_00207024 = DAT_00207028;
  puVar4[0x2c00] = uVar5;
  *DAT_0020702c = uVar5;
  puVar4 = DAT_00207034;
  uVar5 = DAT_00207030;
  *DAT_00207034 = DAT_00207030;
  puVar4[0x2c00] = uVar5;
  *DAT_00207038 = uVar5;
  *puVar1 = *puVar1 & 0xfffffffd;
  *puVar2 = *puVar2 & 0xfffffffd;
  *puVar3 = *puVar3 & 0xfffffffd;
  puVar4 = DAT_0020703c;
  *DAT_0020703c = param_1;
  puVar4[0x2c00] = param_1;
  *DAT_00207040 = param_1;
  *puVar1 = *puVar1 | 2;
  *puVar2 = *puVar2 | 2;
  *puVar3 = *puVar3 | 2;
  FUN_00215aa8(1000);
  iVar6 = DAT_0020704c;
  *puVar1 = *puVar1 & 0xfffffffd;
  *puVar2 = *puVar2 & 0xfffffffd;
  *puVar3 = *puVar3 & 0xfffffffd;
  uVar8 = ((DAT_00207044[0x2c00] | *DAT_00207044 | *DAT_00207048) & 0xfffffff) >> 0x14;
  FUN_002134e8(iVar6 + 0x206fde,uVar8);
  *puVar1 = uVar7;
  *puVar2 = uVar7;
  *puVar3 = uVar7;
  return uVar8;
}


// ==== FUN_00207050 @ 00207050 ====

uint FUN_00207050(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00207074 + 0x207058;
  uVar1 = **(uint **)(iVar2 + DAT_00207078);
  if ((uVar1 == 0) && (0 < **(int **)(iVar2 + DAT_0020707c))) {
    uVar1 = *(uint *)(*(int *)(iVar2 + DAT_00207080) + 4) & 0xf;
  }
  return uVar1;
}


// ==== FUN_00207084 @ 00207084 ====

undefined4 FUN_00207084(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int iVar2;
  
  iVar2 = DAT_002070b8 + 0x20708e;
  if (0 < **(int **)(iVar2 + DAT_002070bc)) {
    if ((*(uint *)(*(int *)(iVar2 + DAT_002070c4) + 0x28) & 0x20000) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  FUN_002134e8(DAT_002070c0 + 0x20709c,0,**(int **)(iVar2 + DAT_002070bc),iVar2,in_r3);
  return 0xffffffff;
}


// ==== FUN_002070c8 @ 002070c8 ====

undefined4 FUN_002070c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00207110 + 0x2070d6;
  if (0 < **(int **)(iVar3 + DAT_00207114)) {
    iVar1 = FUN_00207084();
    iVar4 = DAT_00207118 + 0x2070ea;
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      *(undefined4 *)(param_1 + iVar2 * 4) =
           *(undefined4 *)(*(int *)(iVar3 + DAT_0020711c) + iVar2 * 4 + 0x6c);
      FUN_002134e8(iVar4,iVar2);
    }
  }
  return 0;
}


// ==== FUN_00207158 @ 00207158 ====

void FUN_00207158(undefined4 param_1)

{
  FUN_00212168(0x21e,param_1,0x7f,0);
  FUN_00212168(0x220,param_1,0x7f,0);
  return;
}


// ==== FUN_0020717c @ 0020717c ====

void FUN_0020717c(undefined4 param_1)

{
  FUN_00212168(0x554,**(int **)(DAT_002071b4 + 0x207184 + DAT_002071b8) == 4,3,4);
  FUN_00212168(0x554,param_1,0xf,8);
  return;
}


// ==== FUN_002071bc @ 002071bc ====

void FUN_002071bc(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_00212140(0x21e,&local_14,0x7f,0,param_1);
  FUN_00212140(0x220,&local_10,0x7f,0);
  FUN_00212140(0x554,&local_c,0xf,8);
  FUN_002134e8(DAT_00207200 + 0x2071fa,local_14,local_10,local_c);
  return;
}


// ==== FUN_00207fb4 @ 00207fb4 ====

void FUN_00207fb4(void)

{
  return;
}


// ==== FUN_00207fb8 @ 00207fb8 ====

undefined8
FUN_00207fb8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
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
  
  if ((DAT_00208134 & param_3) != 0) {
    FUN_002134e8(DAT_00208138 + 0x207fde);
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
  iVar1 = DAT_0020813c + 0x208006;
  iVar4 = DAT_00208140 + 0x20800a;
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
    FUN_002134e8(iVar4,uVar10,uVar7,uVar8,uVar3,uVar5,param_7,param_8,local_40,uStack_3c,uVar12,
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
    FUN_002134e8(iVar1,uVar10,bVar13,puVar9[6] <= uVar12,!bVar14,bVar15,uVar16,uVar17,uVar18,uVar19,
                 uVar20,uVar21,uVar6);
    if ((((bVar13) && (puVar9[6] <= uVar12)) && (!bVar14)) && (bVar15)) {
      uVar11 = uVar10;
      local_40 = uVar2;
      uStack_3c = uVar7;
    }
    puVar9 = puVar9 + 6;
  }
  if (uVar11 == 0xffffffff) {
    FUN_002134e8(DAT_00208144 + 0x2080dc);
    iVar1 = 0;
    iVar4 = 0;
  }
  else {
    uVar12 = param_1[uVar11 * 6 + 4];
    param_1[uVar11 * 6 + 4] = uVar12 - param_3;
    param_1[uVar11 * 6 + 5] = (param_1[uVar11 * 6 + 5] - param_4) - (uint)(uVar12 < param_3);
    FUN_002134e8(DAT_00208148 + 0x20811e);
    iVar1 = param_1[uVar11 * 6 + 4] + param_1[uVar11 * 6 + 2];
    iVar4 = param_1[uVar11 * 6 + 5] +
            param_1[uVar11 * 6 + 3] + (uint)CARRY4(param_1[uVar11 * 6 + 4],param_1[uVar11 * 6 + 2]);
  }
  return CONCAT44(iVar4,iVar1);
}


// ==== FUN_0020814c @ 0020814c ====

void FUN_0020814c(int *param_1,uint *param_2,int *param_3)

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
  FUN_002134e8(DAT_00208280 + 0x20818e,uVar4,0,1,param_1,param_2);
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  uVar6 = 0;
  FUN_00215820(param_1,0,0x68);
  uVar8 = 0;
  piVar3 = param_1;
  uVar4 = 0;
  puVar2 = param_2;
  do {
    puVar5 = puVar2 + 4;
    if (*param_2 <= uVar4) {
LAB_00208240:
      FUN_002134e8(DAT_00208284 + 0x20824e,puVar5,local_28,uStack_24,0,1);
      iVar1 = DAT_00208288;
      uVar4 = uStack_24;
      if (uStack_24 == 1) {
        uVar4 = local_28;
      }
      if (uVar4 != 0) {
        param_3[2] = local_28;
        param_3[3] = uStack_24 - 1;
        FUN_002134e8(iVar1 + 0x208274,extraout_r1,*param_3,param_3[1],local_28,uStack_24 - 1);
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
      goto LAB_00208240;
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


// ==== FUN_0020828c @ 0020828c ====

void FUN_0020828c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *local_28 [4];
  
  local_28[0] = param_1;
  local_28[1] = (uint *)param_2;
  local_28[2] = (uint *)param_3;
  local_28[3] = (uint *)param_4;
  uVar1 = FUN_00207084();
  *param_1 = uVar1;
  FUN_002070c8(local_28);
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


// ==== FUN_0020837c @ 0020837c ====

undefined4 FUN_0020837c(uint param_1,uint param_2)

{
  if ((param_1 < 0x9b) && (param_2 < 2)) {
    if (param_2 == 0) {
      *(int *)(*(int *)(DAT_002083bc + 0x20839a) + (param_1 & 0xfffffff0) + 8) =
           1 << (param_1 & 0xf);
    }
    else {
      *(int *)((param_1 & 0xfffffff0) + *(int *)(DAT_002083c0 + 0x2083a8) + 4) =
           1 << (param_1 & 0xf);
    }
    return 0;
  }
  return 0xfffffffe;
}


// ==== FUN_002083c4 @ 002083c4 ====

uint FUN_002083c4(uint param_1,uint param_2)

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
    if (param_1 == *(byte *)(iVar1 * 3 + DAT_002088d4 + 0x2083e2)) {
      iVar1 = DAT_002088d4 + 0x2083e2 + iVar1 * 3;
      if (param_2 != 0) {
        uVar4 = *(byte *)(iVar1 + 2) - 2;
        iVar1 = *(int *)(DAT_002088dc + 0x208412) + (*(byte *)(iVar1 + 1) + 0xd9) * 0x10;
        goto LAB_002088c0;
      }
      iVar2 = (uint)*(byte *)(iVar1 + 1) * 0x10 + 0xd98;
      iVar5 = 3;
      uVar4 = *(byte *)(iVar1 + 2) - 2;
      iVar1 = *(int *)(DAT_002088d8 + 0x208400);
      goto LAB_002088ac;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  if (param_1 == 0x7f) {
    if (param_2 == 0) {
      uVar3 = 0x6000;
      iVar1 = *(int *)(DAT_002088e0 + 0x208432);
LAB_00208454:
      *(undefined4 *)(iVar1 + 0xc48) = uVar3;
      return param_2;
    }
    uVar3 = 0x4000;
    iVar1 = *(int *)(DAT_002088e4 + 0x208440);
  }
  else if (param_1 == 0x80) {
    if (param_2 == 0) {
      uVar3 = 0x600;
      iVar1 = *(int *)(DAT_002088e8 + 0x208454);
      goto LAB_00208454;
    }
    uVar3 = 0x400;
    iVar1 = *(int *)(DAT_002088ec + 0x208466);
  }
  else if (param_1 == 0x81) {
    if (param_2 == 0) {
      uVar3 = 0x60;
      iVar1 = *(int *)(DAT_002088f0 + 0x20847c);
      goto LAB_00208454;
    }
    uVar3 = 0x40;
    iVar1 = *(int *)(DAT_002088f4 + 0x208488);
  }
  else {
    if (param_1 != 0x82) {
      if (param_1 == 0x83) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_00208904 + 0x2084c4) + 0xc54) = 4;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208900 + 0x2084b4) + 0xc58) = 6;
        return 0;
      }
      if (param_1 == 0x84) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_0020890c + 0x2084ee) + 0xc14) = 0x400;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208908 + 0x2084dc) + 0xc18) = 0x600;
        return 0;
      }
      if (param_1 == 0x85) {
        if (param_2 != 0) {
          *(undefined4 *)(*(int *)(DAT_00208914 + 0x208518) + 0xc04) = 0x400;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208910 + 0x208506) + 0xc08) = 0x600;
        return 0;
      }
      if (param_1 == 0x86) {
        if (param_2 == 0) {
          uVar3 = 0x6000;
          iVar1 = *(int *)(DAT_00208918 + 0x20852e);
LAB_0020854c:
          *(undefined4 *)(iVar1 + 0xc38) = uVar3;
          return param_2;
        }
        uVar3 = 0x4000;
        iVar1 = *(int *)(DAT_0020891c + 0x20853a);
      }
      else if (param_1 == 0x87) {
        if (param_2 == 0) {
          uVar3 = 0x600;
          iVar1 = *(int *)(DAT_00208920 + 0x20854c);
          goto LAB_0020854c;
        }
        uVar3 = 0x400;
        iVar1 = *(int *)(DAT_00208924 + 0x20855c);
      }
      else if (param_1 == 0x88) {
        if (param_2 == 0) {
          uVar3 = 0x60;
          iVar1 = *(int *)(DAT_00208928 + 0x208570);
          goto LAB_0020854c;
        }
        uVar3 = 0x40;
        iVar1 = *(int *)(DAT_0020892c + 0x20857a);
      }
      else {
        if (param_1 != 0x89) {
          if (param_1 == 0x79) {
            if (param_2 != 0) {
              *(undefined4 *)(*(int *)(DAT_0020893c + 0x2085b6) + 0xc84) = 0x400;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208938 + 0x2085a6) + 0xc88) = 0x600;
            return 0;
          }
          if (param_1 == 0x7a) {
            if (param_2 != 0) {
              *(undefined4 *)(*(int *)(DAT_00208944 + 0x2085dc) + 0xc74) = 0x400;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208940 + 0x2085cc) + 0xc78) = 0x600;
            return 0;
          }
          if (param_1 == 0x7b) {
            if (param_2 == 0) {
              uVar3 = 6;
              iVar1 = *(int *)(DAT_00208948 + 0x2085f0);
LAB_0020860a:
              *(undefined4 *)(iVar1 + 0xca8) = uVar3;
              return param_2;
            }
            uVar3 = 4;
            iVar1 = *(int *)(DAT_0020894c + 0x2085fa);
          }
          else if (param_1 == 0x7c) {
            if (param_2 == 0) {
              uVar3 = 0x60;
              iVar1 = *(int *)(DAT_00208950 + 0x20860a);
              goto LAB_0020860a;
            }
            uVar3 = 0x40;
            iVar1 = *(int *)(DAT_00208954 + 0x208618);
          }
          else if (param_1 == 0x7d) {
            if (param_2 == 0) {
              uVar3 = 0x600;
              iVar1 = *(int *)(DAT_00208958 + 0x20862e);
              goto LAB_0020860a;
            }
            uVar3 = 0x400;
            iVar1 = *(int *)(DAT_0020895c + 0x20863a);
          }
          else {
            if (param_1 != 0x7e) {
              if (param_1 == 0x55) {
                if (param_2 != 0) {
                  *(undefined4 *)(*(int *)(DAT_0020896c + 0x20867a) + 0xce4) = 0x400;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208968 + 0x20866a) + 0xce8) = 0x600;
                return 0;
              }
              if (param_1 == 0x56) {
                if (param_2 != 0) {
                  *(undefined4 *)(*(int *)(DAT_00208974 + 0x2086a0) + 0xcd4) = 0x400;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208970 + 0x208690) + 0xcd8) = 0x600;
                return 0;
              }
              if (param_1 == 0x57) {
                if (param_2 == 0) {
                  uVar3 = 6;
                  iVar1 = *(int *)(DAT_00208978 + 0x2086b4);
LAB_00208708:
                  *(undefined4 *)(iVar1 + 0xd08) = uVar3;
                  return param_2;
                }
                uVar3 = 4;
                iVar1 = *(int *)(DAT_0020897c + 0x2086be);
              }
              else if (param_1 == 0x58) {
                if (param_2 == 0) {
                  uVar3 = 0x60;
                  iVar1 = *(int *)(DAT_00208980 + 0x2086ce);
                  goto LAB_00208708;
                }
                uVar3 = 0x40;
                iVar1 = *(int *)(DAT_00208984 + 0x2086d8);
              }
              else if (param_1 == 0x59) {
                if (param_2 == 0) {
                  uVar3 = 0x600;
                  iVar1 = *(int *)(DAT_00208988 + 0x2086ea);
                  goto LAB_00208708;
                }
                uVar3 = 0x400;
                iVar1 = *(int *)(DAT_0020898c + 0x2086f6);
              }
              else {
                if (param_1 != 0x5a) {
                  if (param_1 == 0x8f) {
                    if (param_2 == 0) {
                      uVar3 = 0x6000;
                      iVar1 = *(int *)(DAT_00208998 + 0x20872e);
LAB_00208782:
                      *(undefined4 *)(iVar1 + 0xf48) = uVar3;
                      return param_2;
                    }
                    uVar3 = 0x4000;
                    iVar1 = *(int *)(DAT_0020899c + 0x20873a);
                  }
                  else if (param_1 == 0x90) {
                    if (param_2 == 0) {
                      uVar3 = 0x600;
                      iVar1 = *(int *)(DAT_002089a0 + 0x20874c);
                      goto LAB_00208782;
                    }
                    uVar3 = 0x400;
                    iVar1 = *(int *)(DAT_002089a4 + 0x208758);
                  }
                  else if (param_1 == 0x91) {
                    if (param_2 == 0) {
                      uVar3 = 0x60;
                      iVar1 = *(int *)(DAT_002089a8 + 0x208768);
                      goto LAB_00208782;
                    }
                    uVar3 = 0x40;
                    iVar1 = *(int *)(DAT_002089ac + 0x208772);
                  }
                  else {
                    if (param_1 != 0x92) {
                      if (param_1 == 0x93) {
                        if (param_2 == 0) {
                          uVar3 = 6;
                          iVar1 = *(int *)(DAT_002089b8 + 0x2087a4);
LAB_00208882:
                          *(undefined4 *)(iVar1 + 0xf58) = uVar3;
                          return param_2;
                        }
                        uVar3 = 4;
                        iVar1 = *(int *)(DAT_002089bc + 0x2087ae);
LAB_00208890:
                        *(undefined4 *)(iVar1 + 0xf54) = uVar3;
                        return 0;
                      }
                      if (param_1 == 0x94) {
                        if (param_2 != 0) {
                          *(undefined4 *)(*(int *)(DAT_002089c4 + 0x2087d0) + 0xf14) = 0x400;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_002089c0 + 0x2087c0) + 0xf18) = 0x600;
                        return 0;
                      }
                      if (param_1 == 0x95) {
                        if (param_2 != 0) {
                          *(undefined4 *)(*(int *)(DAT_002089cc + 0x2087f6) + 0xf04) = 0x400;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_002089c8 + 0x2087e6) + 0xf08) = 0x600;
                        return 0;
                      }
                      if (param_1 == 0x96) {
                        if (param_2 == 0) {
                          uVar3 = 0x6000;
                          iVar1 = *(int *)(DAT_002089d0 + 0x20880c);
LAB_00208860:
                          *(undefined4 *)(iVar1 + 0xf38) = uVar3;
                          return param_2;
                        }
                        uVar3 = 0x4000;
                        iVar1 = *(int *)(DAT_002089d4 + 0x208818);
                      }
                      else if (param_1 == 0x97) {
                        if (param_2 == 0) {
                          uVar3 = 0x600;
                          iVar1 = *(int *)(DAT_002089d8 + 0x20882a);
                          goto LAB_00208860;
                        }
                        uVar3 = 0x400;
                        iVar1 = *(int *)(DAT_002089dc + 0x208836);
                      }
                      else if (param_1 == 0x98) {
                        if (param_2 == 0) {
                          uVar3 = 0x60;
                          iVar1 = *(int *)(DAT_002089e0 + 0x208846);
                          goto LAB_00208860;
                        }
                        uVar3 = 0x40;
                        iVar1 = *(int *)(DAT_002089e4 + 0x208850);
                      }
                      else {
                        if (param_1 != 0x99) {
                          if (param_1 != 0x9a) {
                            uVar4 = param_1 & 0xf;
                            if (param_2 != 0) {
                              iVar1 = *(int *)(DAT_002089fc + 0x2088bc) +
                                      ((param_1 >> 4) + 0x10) * 0x10;
LAB_002088c0:
                              *(int *)(iVar1 + 4) = 1 << (uVar4 & 0xff);
                              return 0;
                            }
                            iVar2 = (param_1 >> 4) * 0x10 + 0x108;
                            iVar5 = 1;
                            iVar1 = *(int *)(DAT_002089f8 + 0x2088ac);
LAB_002088ac:
                            *(int *)(iVar1 + iVar2) = iVar5 << (uVar4 & 0xff);
                            return param_2;
                          }
                          if (param_2 == 0) {
                            uVar3 = 0x60;
                            iVar1 = *(int *)(DAT_002089f0 + 0x208882);
                            goto LAB_00208882;
                          }
                          uVar3 = 0x40;
                          iVar1 = *(int *)(DAT_002089f4 + 0x208890);
                          goto LAB_00208890;
                        }
                        if (param_2 == 0) {
                          uVar3 = 6;
                          iVar1 = *(int *)(DAT_002089e8 + 0x208860);
                          goto LAB_00208860;
                        }
                        uVar3 = 4;
                        iVar1 = *(int *)(DAT_002089ec + 0x20886e);
                      }
                      *(undefined4 *)(iVar1 + 0xf34) = uVar3;
                      return 0;
                    }
                    if (param_2 == 0) {
                      uVar3 = 6;
                      iVar1 = *(int *)(DAT_002089b0 + 0x208782);
                      goto LAB_00208782;
                    }
                    uVar3 = 4;
                    iVar1 = *(int *)(DAT_002089b4 + 0x208790);
                  }
                  *(undefined4 *)(iVar1 + 0xf44) = uVar3;
                  return 0;
                }
                if (param_2 == 0) {
                  uVar3 = 0x6000;
                  iVar1 = *(int *)(DAT_00208990 + 0x208708);
                  goto LAB_00208708;
                }
                uVar3 = 0x4000;
                iVar1 = *(int *)(DAT_00208994 + 0x208718);
              }
              *(undefined4 *)(iVar1 + 0xd04) = uVar3;
              return 0;
            }
            if (param_2 == 0) {
              uVar3 = 0x6000;
              iVar1 = *(int *)(DAT_00208960 + 0x20864c);
              goto LAB_0020860a;
            }
            uVar3 = 0x4000;
            iVar1 = *(int *)(DAT_00208964 + 0x208658);
          }
          *(undefined4 *)(iVar1 + 0xca4) = uVar3;
          return 0;
        }
        if (param_2 == 0) {
          uVar3 = 6;
          iVar1 = *(int *)(DAT_00208930 + 0x20858a);
          goto LAB_0020854c;
        }
        uVar3 = 4;
        iVar1 = *(int *)(DAT_00208934 + 0x208594);
      }
      *(undefined4 *)(iVar1 + 0xc34) = uVar3;
      return 0;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(DAT_002088f8 + 0x208498);
      uVar3 = 6;
      goto LAB_00208454;
    }
    uVar3 = 4;
    iVar1 = *(int *)(DAT_002088fc + 0x2084a4);
  }
  *(undefined4 *)(iVar1 + 0xc44) = uVar3;
  return 0;
}


// ==== FUN_00208a00 @ 00208a00 ====

undefined4 FUN_00208a00(uint param_1,uint param_2)

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
    if (param_1 == *(byte *)(iVar2 * 3 + DAT_00208ef8 + 0x208a1a)) {
      iVar2 = DAT_00208ef8 + 0x208a1a + iVar2 * 3;
      if (param_2 == 0) {
        *(int *)(*(int *)(DAT_00208efc + 0x208a34) + (*(byte *)(iVar2 + 1) + 0xd9) * 0x10 + 4) =
             1 << *(sbyte *)(iVar2 + 2);
        return 0;
      }
      *(int *)(*(int *)(DAT_00208f00 + 0x208a52) + (uint)*(byte *)(iVar2 + 1) * 0x10 + 0xd98) =
           1 << *(sbyte *)(iVar2 + 2);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  if (param_1 == 0x7f) {
    uVar3 = 0x1000;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208f08 + 0x208a7e);
LAB_00208a98:
      *(undefined4 *)(*piVar1 + 0xc44) = uVar3;
      return 0;
    }
    piVar1 = (int *)(DAT_00208f04 + 0x208a76);
    uVar4 = uVar3;
  }
  else if (param_1 == 0x80) {
    uVar3 = 0x100;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208f10 + 0x208a9a);
      goto LAB_00208a98;
    }
    piVar1 = (int *)(DAT_00208f0c + 0x208a92);
    uVar4 = uVar3;
  }
  else {
    if (param_1 != 0x81) {
      if (param_1 == 0x82) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208f1c + 0x208ad2) + 0xc48) = 1;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208f20 + 0x208ae2) + 0xc44) = 1;
        return 0;
      }
      if (param_1 == 0x83) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208f24 + 0x208af8) + 0xc58) = 1;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208f28 + 0x208b08) + 0xc54) = 1;
        return 0;
      }
      if (param_1 == 0x84) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208f2c + 0x208b22) + 0xc18) = 0x100;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208f30 + 0x208b30) + 0xc14) = 0x100;
        return 0;
      }
      if (param_1 == 0x85) {
        if (param_2 == 1) {
          *(undefined4 *)(*(int *)(DAT_00208f34 + 0x208b48) + 0xc08) = 0x100;
          return 0;
        }
        *(undefined4 *)(*(int *)(DAT_00208f38 + 0x208b54) + 0xc04) = 0x100;
        return 0;
      }
      if (param_1 == 0x86) {
        uVar3 = 0x1000;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208f40 + 0x208b72);
LAB_00208b88:
          *(undefined4 *)(*piVar1 + 0xc34) = uVar3;
          return 0;
        }
        piVar1 = (int *)(DAT_00208f3c + 0x208b6c);
        uVar4 = uVar3;
      }
      else if (param_1 == 0x87) {
        uVar3 = 0x100;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208f48 + 0x208b8a);
          goto LAB_00208b88;
        }
        piVar1 = (int *)(DAT_00208f44 + 0x208b84);
        uVar4 = uVar3;
      }
      else {
        if (param_1 != 0x88) {
          if (param_1 == 0x89) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208f54 + 0x208bbc) + 0xc38) = 1;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208f58 + 0x208bca) + 0xc34) = 1;
            return 0;
          }
          if (param_1 == 0x79) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208f5c + 0x208be2) + 0xc88) = 0x100;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208f60 + 0x208bee) + 0xc84) = 0x100;
            return 0;
          }
          if (param_1 == 0x7a) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208f64 + 0x208c06) + 0xc78) = 0x100;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208f68 + 0x208c12) + 0xc74) = 0x100;
            return 0;
          }
          if (param_1 == 0x7b) {
            if (param_2 == 1) {
              *(undefined4 *)(*(int *)(DAT_00208f6c + 0x208c26) + 0xca8) = 1;
              return 0;
            }
            *(undefined4 *)(*(int *)(DAT_00208f70 + 0x208c34) + 0xca4) = 1;
            return 0;
          }
          if (param_1 == 0x7c) {
            uVar3 = 0x10;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208f78 + 0x208c52);
LAB_00208c68:
              *(undefined4 *)(*piVar1 + 0xca4) = uVar3;
              return 0;
            }
            piVar1 = (int *)(DAT_00208f74 + 0x208c4c);
            uVar4 = uVar3;
          }
          else if (param_1 == 0x7d) {
            uVar3 = 0x100;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208f80 + 0x208c6a);
              goto LAB_00208c68;
            }
            piVar1 = (int *)(DAT_00208f7c + 0x208c64);
            uVar4 = uVar3;
          }
          else {
            if (param_1 != 0x7e) {
              if (param_1 == 0x55) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_00208f8c + 0x208ca0) + 0xce8) = 0x100;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208f90 + 0x208cac) + 0xce4) = 0x100;
                return 0;
              }
              if (param_1 == 0x56) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_00208f94 + 0x208cc4) + 0xcd8) = 0x100;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208f98 + 0x208cd0) + 0xcd4) = 0x100;
                return 0;
              }
              if (param_1 == 0x57) {
                if (param_2 == 1) {
                  *(undefined4 *)(*(int *)(DAT_00208f9c + 0x208ce4) + 0xd08) = 1;
                  return 0;
                }
                *(undefined4 *)(*(int *)(DAT_00208fa0 + 0x208cf2) + 0xd04) = 1;
                return 0;
              }
              if (param_1 == 0x58) {
                uVar3 = 0x10;
                if (param_2 != 0) {
                  piVar1 = (int *)(DAT_00208fa8 + 0x208d0c);
LAB_00208d22:
                  *(undefined4 *)(*piVar1 + 0xd04) = uVar3;
                  return 0;
                }
                piVar1 = (int *)(DAT_00208fa4 + 0x208d06);
                uVar4 = uVar3;
              }
              else if (param_1 == 0x59) {
                uVar3 = 0x100;
                if (param_2 != 1) {
                  piVar1 = (int *)(DAT_00208fb0 + 0x208d24);
                  goto LAB_00208d22;
                }
                piVar1 = (int *)(DAT_00208fac + 0x208d1e);
                uVar4 = uVar3;
              }
              else {
                if (param_1 != 0x5a) {
                  if (param_1 == 0x8f) {
                    uVar3 = 0x1000;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_00208fc0 + 0x208d60);
LAB_00208d76:
                      *(undefined4 *)(*piVar1 + 0xf44) = uVar3;
                      return 0;
                    }
                    piVar1 = (int *)(DAT_00208fbc + 0x208d5a);
                  }
                  else if (param_1 == 0x90) {
                    uVar3 = 0x100;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_00208fc8 + 0x208d78);
                      goto LAB_00208d76;
                    }
                    piVar1 = (int *)(DAT_00208fc4 + 0x208d72);
                  }
                  else if (param_1 == 0x91) {
                    uVar3 = 0x10;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_00208fd0 + 0x208d96);
                      goto LAB_00208d76;
                    }
                    piVar1 = (int *)(DAT_00208fcc + 0x208d90);
                    uVar3 = 0x10;
                  }
                  else {
                    if (param_1 != 0x92) {
                      if (param_1 == 0x93) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_00208fdc + 0x208dc4) + 0xf58) = 6;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_00208fe0 + 0x208dd2) + 0xf54) = 4;
                        return 0;
                      }
                      if (param_1 == 0x94) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_00208fe4 + 0x208dea) + 0xf18) = 0x100;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_00208fe8 + 0x208df6) + 0xf14) = 0x100;
                        return 0;
                      }
                      if (param_1 == 0x95) {
                        if (param_2 == 1) {
                          *(undefined4 *)(*(int *)(DAT_00208fec + 0x208e0e) + 0xf08) = 0x100;
                          return 0;
                        }
                        *(undefined4 *)(*(int *)(DAT_00208ff0 + 0x208e1a) + 0xf04) = 0x100;
                        return 0;
                      }
                      if (param_1 == 0x96) {
                        uVar3 = 0x1000;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_00208ff8 + 0x208e38);
                          goto LAB_00208e4e;
                        }
                        piVar1 = (int *)(DAT_00208ff4 + 0x208e32);
                        uVar4 = uVar3;
                      }
                      else if (param_1 == 0x97) {
                        uVar3 = 0x100;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_00209000 + 0x208e50);
LAB_00208e4e:
                          *(undefined4 *)(*piVar1 + 0xf34) = uVar3;
                          return 0;
                        }
                        piVar1 = (int *)(DAT_00208ffc + 0x208e4a);
                        uVar4 = uVar3;
                      }
                      else {
                        if (param_1 != 0x98) {
                          if (param_1 == 0x99) {
                            if (param_2 == 1) {
                              *(undefined4 *)(*(int *)(DAT_0020900c + 0x208e82) + 0xf38) = 1;
                              return 0;
                            }
                            *(undefined4 *)(*(int *)(DAT_00209010 + 0x208e90) + 0xf34) = 1;
                            return 0;
                          }
                          if (param_1 != 0x9a) {
                            if (param_2 == 0) {
                              *(int *)(*(int *)(DAT_0020901c + 0x208ed0) +
                                      (param_1 >> 4) * 0x10 + 0x208) = 1 << (param_1 & 0xf);
                              return 0;
                            }
                            *(int *)(*(int *)(DAT_00209020 + 0x208ee0) +
                                     ((param_1 >> 4) + 0x20) * 0x10 + 4) = 1 << (param_1 & 0xf);
                            return 0;
                          }
                          if (param_2 == 1) {
                            *(undefined4 *)(*(int *)(DAT_00209014 + 0x208ea8) + 0xf58) = 0x10;
                            return 0;
                          }
                          *(undefined4 *)(*(int *)(DAT_00209018 + 0x208eb4) + 0xf54) = 0x10;
                          return 0;
                        }
                        uVar3 = 0x10;
                        uVar4 = 0x10;
                        if (param_2 != 1) {
                          piVar1 = (int *)(DAT_00209008 + 0x208e74);
                          goto LAB_00208e4e;
                        }
                        piVar1 = (int *)(DAT_00209004 + 0x208e68);
                      }
                      *(undefined4 *)(*piVar1 + 0xf38) = uVar4;
                      return 0;
                    }
                    uVar3 = 1;
                    if (param_2 != 1) {
                      piVar1 = (int *)(DAT_00208fd8 + 0x208db4);
                      goto LAB_00208d76;
                    }
                    piVar1 = (int *)(DAT_00208fd4 + 0x208da8);
                  }
                  *(undefined4 *)(*piVar1 + 0xf48) = uVar3;
                  return 0;
                }
                uVar3 = 0x1000;
                uVar4 = 0x1000;
                if (param_2 != 1) {
                  piVar1 = (int *)(DAT_00208fb8 + 0x208d48);
                  goto LAB_00208d22;
                }
                piVar1 = (int *)(DAT_00208fb4 + 0x208d3c);
              }
              *(undefined4 *)(*piVar1 + 0xd08) = uVar4;
              return 0;
            }
            uVar3 = 0x1000;
            uVar4 = 0x1000;
            if (param_2 != 1) {
              piVar1 = (int *)(DAT_00208f88 + 0x208c8e);
              goto LAB_00208c68;
            }
            piVar1 = (int *)(DAT_00208f84 + 0x208c82);
          }
          *(undefined4 *)(*piVar1 + 0xca8) = uVar4;
          return 0;
        }
        uVar3 = 0x10;
        uVar4 = 0x10;
        if (param_2 != 1) {
          piVar1 = (int *)(DAT_00208f50 + 0x208bae);
          goto LAB_00208b88;
        }
        piVar1 = (int *)(DAT_00208f4c + 0x208ba2);
      }
      *(undefined4 *)(*piVar1 + 0xc38) = uVar4;
      return 0;
    }
    uVar3 = 0x10;
    uVar4 = 0x10;
    if (param_2 != 1) {
      piVar1 = (int *)(DAT_00208f18 + 0x208ac2);
      goto LAB_00208a98;
    }
    piVar1 = (int *)(DAT_00208f14 + 0x208ab4);
  }
  *(undefined4 *)(*piVar1 + 0xc48) = uVar4;
  return 0;
}


// ==== FUN_002090a8 @ 002090a8 ====

undefined4 FUN_002090a8(uint param_1,uint param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  if ((param_1 < 0x9b) && (param_2 < 8)) {
    iVar1 = FUN_00201700(param_1,5);
    iVar2 = *(int *)(DAT_002090f8 + 0x2090c6);
    iVar1 = (iVar1 + 0x60) * 0x10;
    FUN_00201798(param_1,5);
    *(uint *)(iVar2 + iVar1) =
         *(uint *)(iVar2 + iVar1) & ~(7 << (extraout_r1 * 3 & 0xffU)) |
         param_2 << (extraout_r1 * 3 & 0xffU);
    return 0;
  }
  return 0xfffffffe;
}


// ==== FUN_002090fc @ 002090fc ====

void FUN_002090fc(uint *param_1)

{
  *param_1 = *param_1 & 0x7fffffff;
  return;
}


// ==== FUN_00209106 @ 00209106 ====

void FUN_00209106(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002090fc(&local_c);
  FUN_0020837c(local_c,param_2);
  return;
}


// ==== FUN_00209122 @ 00209122 ====

void FUN_00209122(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002090fc(&local_c);
  FUN_002083c4(local_c,param_2);
  return;
}


// ==== FUN_0020913e @ 0020913e ====

void FUN_0020913e(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002090fc(&local_c);
  FUN_00208a00(local_c,param_2);
  return;
}


// ==== FUN_00209190 @ 00209190 ====

void FUN_00209190(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  FUN_002090fc(&local_c);
  FUN_002090a8(local_c,param_2);
  return;
}


// ==== FUN_002091ae @ 002091ae ====

undefined4 FUN_002091ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00217bb8(param_2,param_1,0,param_1,param_4);
  thunk_FUN_00217b08();
  return 0;
}


// ==== FUN_002091c4 @ 002091c4 ====

undefined4 FUN_002091c4(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00215b08(0);
  do {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      thunk_FUN_00217ccc();
    }
    else {
      uVar2 = FUN_00215b08(uVar1);
      if (param_3 < uVar2) {
        FUN_002134e8(DAT_00209220 + 0x2091f2,DAT_00209224 + 0x2091f4);
        return 0xffffffff;
      }
    }
    uVar2 = FUN_00217c7c();
    if (uVar2 != 0) {
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      FUN_00217b58(uVar2,param_1);
      param_2 = param_2 - uVar2;
      param_1 = param_1 + uVar2;
    }
  } while( true );
}


// ==== FUN_00209508 @ 00209508 ====

undefined4 FUN_00209508(int *param_1)

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
  
  iVar10 = DAT_002096e0 + 0x209524;
  uVar5 = param_1[3];
  if (((((*(uint *)(DAT_002096dc + 0x209512) == (uint)*(byte *)((int)param_1 + 0x32)) &&
        (*(int *)(DAT_002096e4 + 0x20952e) == param_1[8])) &&
       ((*(uint *)(*param_1 + 0x20) & 0xffff) ==
        *(uint *)(*(int *)(iVar10 + DAT_002096e8) + (uint)*(ushort *)(param_1 + 1) * 4))) &&
      (iVar2 = (uint)*(ushort *)(param_1 + 1) * 0x10,
      iVar6 = *(int *)(iVar10 + DAT_002096ec) + iVar2,
      *(char *)(*(int *)(iVar10 + DAT_002096ec) + iVar2) != '\0')) &&
     ((*(char *)(iVar6 + 3) != '\0' || (*(char *)(iVar6 + 0xf) != '\0')))) {
    FUN_002134e8(DAT_002096f0 + 0x209560);
  }
  uVar9 = (uint)*(byte *)((int)param_1 + 0x32);
  uVar7 = param_1[8];
  *(uint *)(DAT_002096f4 + 0x20956e) = uVar9;
  *(uint *)(DAT_002096f8 + 0x209578) = uVar7;
  if (uVar9 == 2) {
    if (0xd48 < uVar7) goto LAB_0020959c;
    uVar13 = 8;
  }
  else {
    if ((uVar9 == 1) && (400 < uVar7)) {
LAB_0020959c:
      FUN_002134e8(DAT_002096fc + 0x2095a4,0x83);
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
      uVar3 = FUN_00201700(uVar5 >> 1,uVar11 * uVar12);
      if ((uVar3 <= uVar7) && (uVar7 - uVar3 < uVar8)) {
        uVar8 = uVar7 - uVar3;
        uVar14 = uVar11;
        local_2c = uVar12 & 0xffff;
      }
      uVar11 = uVar11 + 1 & 0xffff;
    } while (uVar11 <= uVar13);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 9);
  uVar5 = FUN_00201700(uVar5,uVar14 * local_2c * 2);
  if (uVar7 < uVar5) {
    if (uVar9 == 2) {
      iVar10 = DAT_00209700 + 0x209622;
    }
    else {
      iVar10 = DAT_00209704 + 0x209628;
    }
    FUN_002134e8(DAT_00209708 + 0x209630,0x9c,iVar10,uVar7);
    uVar4 = DAT_002096d8;
  }
  else {
    uVar7 = uVar14 - 1 & 0xffff;
    uVar13 = local_2c - 1 & 0xffff;
    uVar8 = *(uint *)(*param_1 + 0x20) & 0xfffff8c0;
    if (uVar9 == 2) {
      uVar8 = uVar8 | 0x10;
      *(uint *)(*(int *)(iVar10 + DAT_002096e8) + (uint)*(ushort *)(param_1 + 1) * 4) = uVar8;
      *(short *)(param_1 + 0xf) = (short)uVar8;
      uVar1 = (ushort)(uVar13 << 0xc) | (ushort)((uVar14 - 1 & 7) << 8) |
              (ushort)*(undefined4 *)(*param_1 + 0x48) & 0x88ff | 1;
    }
    else {
      uVar8 = uVar7 | uVar13 << 8 | uVar8;
      *(uint *)(*(int *)(iVar10 + DAT_002096e8) + (uint)*(ushort *)(param_1 + 1) * 4) = uVar8;
      *(short *)(param_1 + 0xf) = (short)uVar8;
      uVar1 = (ushort)*(undefined4 *)(*param_1 + 0x48) & 0xfffe;
    }
    *(ushort *)((int)param_1 + 0x3e) = uVar1;
    iVar2 = *(int *)(iVar10 + DAT_002096ec) + (uint)*(ushort *)(param_1 + 1) * 0x10;
    uVar4 = 0;
    if ((*(char *)(*(int *)(iVar10 + DAT_002096ec) + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0')
       && ((*(char *)(iVar2 + 3) != '\0' || (uVar4 = 0, *(char *)(iVar2 + 0xf) != '\0')))) {
      FUN_002134e8(DAT_00209710 + 0x2096ba,uVar5,*(undefined4 *)(DAT_0020970c + 0x2096b8),uVar13,
                   uVar7);
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ==== FUN_00209714 @ 00209714 ====

void FUN_00209714(int *param_1)

{
  int iVar1;
  
  FUN_002134e8(DAT_002097e0 + 0x209760,0xd5,param_1[3],(short)param_1[1],
               *(undefined1 *)((int)param_1 + 0x32),param_1[5],*(undefined1 *)((int)param_1 + 0x37),
               param_1[6],(char)param_1[0xe],(short)param_1[2],*(undefined2 *)((int)param_1 + 0x46),
               *(undefined2 *)((int)param_1 + 0x42),(short)param_1[0x12],(short)param_1[0x11],
               param_1[8]);
  FUN_002134e8(DAT_002097e4 + 0x20976e,0xd8,*param_1);
  iVar1 = *param_1;
  FUN_002134e8(DAT_002097e8 + 0x2097d6,0xec,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
               *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
               *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),
               *(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
               *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x30),
               *(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x48),
               *(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 100),
               *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x6c));
  return;
}


// ==== FUN_002097ec @ 002097ec ====

void FUN_002097ec(int *param_1)

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
  FUN_00215a5a((short)param_1[0x10],*param_1 + 0x10);
  iVar9 = DAT_002099f8 + 0x20980e;
  if ((uint)param_1[8] < 0x65) {
    FUN_00215a5a(0x8001,*param_1 + 0x28);
  }
  FUN_00215a5a((short)param_1[0xf],*param_1 + 0x20);
  FUN_00215a5a(*(undefined2 *)((int)param_1 + 0x3e),*param_1 + 0x48);
  if ((short)param_1[9] == 0) {
    *(undefined2 *)(param_1 + 9) = 2;
  }
  if (-1 < (int)((uint)*(ushort *)(param_1 + 0x10) << 0x1e)) {
    FUN_00215a5a((short)param_1[9],*param_1 + 0x1c);
  }
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  FUN_00215a5a(uVar2,*param_1 + 0x40);
  uVar3 = (uint)*(byte *)(param_1 + 0xc) << 1;
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    uVar3 = uVar3 | 1;
  }
  FUN_00215a5a(uVar3,*param_1 + 4);
  FUN_00215a5a(7,*param_1 + 0xc);
  FUN_00215a5a(1,*param_1 + 0x38);
  iVar5 = *param_1;
  if ((char)param_1[0xe] == '\0') {
    uVar3 = *(uint *)(iVar5 + 8) & 0xffff | 7;
  }
  else {
    uVar3 = *(uint *)(iVar5 + 8) & 0xfff8;
  }
  FUN_00215a5a(uVar3,iVar5 + 8);
  FUN_00215a5a(*(undefined2 *)((int)param_1 + 0x46),*param_1 + 0x14);
  FUN_00215a5a((short)param_1[0x12],*param_1 + 0x6c);
  FUN_00215a5a(*(undefined1 *)((int)param_1 + 0x42),*param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x37) == '\0') {
    if (param_1[6] != 2) {
      puVar8 = puVar6 + uVar7;
      for (; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        FUN_00215a5a(*puVar6,*param_1);
      }
      uVar7 = 0xffff;
    }
    goto LAB_002099ee;
  }
  FUN_00215a5a(1,param_1[7] + 0xc);
  iVar5 = param_1[7];
  if (param_1[6] == 2) {
    FUN_00215a5a(0,iVar5);
    FUN_00215a5a(1,param_1[7] + 0x18);
    FUN_00215a5a(param_1[0xb],param_1[7] + 0x20);
    iVar5 = param_1[7];
    uVar1 = (undefined2)param_1[0x11];
LAB_00209962:
    iVar5 = iVar5 + 0x28;
  }
  else {
    if (param_1[6] != 1) {
      FUN_00215a5a(0,iVar5);
      FUN_00215a5a(0,param_1[7] + 0x18);
      FUN_00215a5a(param_1[0xb],param_1[7] + 0x1c);
      FUN_00215a5a(param_1[0xb],param_1[7] + 0x20);
      FUN_00215a5a(*(undefined2 *)((int)param_1 + 0x46),param_1[7] + 0x24);
      iVar5 = param_1[7];
      uVar1 = (undefined2)param_1[0x12];
      goto LAB_00209962;
    }
    FUN_00215a5a(0,iVar5);
    FUN_00215a5a(0,param_1[7] + 0x18);
    FUN_00215a5a(param_1[0xb],param_1[7] + 0x1c);
    uVar1 = (undefined2)param_1[0x11];
    iVar5 = param_1[7] + 0x24;
  }
  FUN_00215a5a(uVar1,iVar5);
  FUN_00215a5a(1,param_1[7] + 8);
  iVar5 = *(int *)(iVar9 + DAT_002099fc);
  iVar9 = iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10;
  if ((*(char *)(iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
     ((*(char *)(iVar9 + 1) != '\0' || (*(char *)(iVar9 + 0xf) != '\0')))) {
    FUN_002134e8(DAT_00209a00 + 0x209994,(char)param_1[0xc],(short)param_1[0x11]);
  }
  iVar9 = iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10;
  if ((*(char *)(iVar5 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
     ((*(char *)(iVar9 + 1) != '\0' || (*(char *)(iVar9 + 0xf) != '\0')))) {
    puVar4 = (undefined4 *)param_1[7];
    FUN_002134e8(DAT_00209a04 + 0x2099ce,*puVar4,puVar4[6],puVar4[7],puVar4[8],puVar4[9],puVar4[10],
                 puVar4[2]);
  }
LAB_002099ee:
  *(ushort *)(param_1 + 0x11) = uVar7;
  return;
}


// ==== FUN_00209a08 @ 00209a08 ====

undefined4 FUN_00209a08(uint param_1,undefined4 param_2)

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
        goto LAB_00209b64;
      }
      FUN_002134e8(DAT_00209b84 + 0x209a76,0x1fc,uVar4 & 0xffff,2,uVar4 >> 0x10,param_2);
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
        goto LAB_00209b64;
      }
      uVar7 = 0;
      FUN_002134e8(DAT_00209b80 + 0x209a4a,0x1f0,uVar6,uVar4,0,param_2);
    }
    uVar8 = 0xffffffea;
  }
  else {
    iVar9 = *(int *)(DAT_00209b7c + 0x209a18 + DAT_00209b88);
    if (*(int *)(param_1 + 0x18) == 3) {
      uVar10 = uVar4 & 0xffff;
      uVar6 = uVar4 >> 0x10;
      if (((uVar10 - 1 & 0xffff) < 0xfffc) && (((uVar4 >> 0x10) - 1 & 0xffff) < 0x100)) {
        uVar8 = 0;
        uVar4 = param_1;
      }
      else {
        uVar4 = uVar6;
        FUN_002134e8(DAT_00209b94 + 0x209b1c,0x21c,uVar10,2,uVar6,param_2);
        uVar8 = 0xffffffea;
      }
      iVar2 = (uint)*(ushort *)(param_1 + 4) * 0x10;
      iVar3 = iVar9 + iVar2;
      if ((*(char *)(iVar9 + iVar2) != '\0') &&
         ((*(char *)(iVar3 + 1) != '\0' || (*(char *)(iVar3 + 0xf) != '\0')))) {
        FUN_002134e8(DAT_00209b98 + 0x209b4e,uVar10,2,uVar6,uVar4,param_2);
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
        FUN_002134e8(DAT_00209b8c + 0x209abe,0x20f,uVar6,uVar4,0,param_2);
        uVar8 = 0xffffffea;
      }
      iVar2 = (uint)*(ushort *)(param_1 + 4) * 0x10;
      iVar3 = iVar9 + iVar2;
      uVar7 = 0;
      if ((*(char *)(iVar9 + iVar2) != '\0') &&
         ((*(char *)(iVar3 + 1) != '\0' || (uVar7 = 0, *(char *)(iVar3 + 0xf) != '\0')))) {
        uVar7 = 0;
        FUN_002134e8(DAT_00209b90 + 0x209af2,uVar6,uVar4,0,uVar10,param_2);
      }
    }
  }
LAB_00209b64:
  *(short *)(param_1 + 0x42) = (short)uVar4;
  *(short *)(param_1 + 0x46) = sVar1;
  *(short *)(param_1 + 0x44) = sVar5;
  *(undefined2 *)(param_1 + 0x48) = uVar7;
  return uVar8;
}


// ==== FUN_00209b9c @ 00209b9c ====

int FUN_00209b9c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_00209db0 + 0x209baa;
  uVar6 = param_1[0xb];
  if (*(char *)((int)param_1 + 0x37) != '\0') {
    iVar1 = *(int *)(iVar5 + DAT_00209db4);
    iVar4 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
    if ((*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
       ((*(char *)(iVar4 + 1) != '\0' || (*(char *)(iVar4 + 0xf) != '\0')))) {
      FUN_002134e8(DAT_00209db8 + 0x209bc8);
    }
    if (param_1[7] == 0) {
      uVar2 = 0x236;
      uVar6 = (uint)*(ushort *)(param_1 + 1);
      iVar5 = DAT_00209dbc + 0x209bda;
      goto LAB_00209c32;
    }
    if (0xc0000000 < uVar6) {
      FUN_002134e8(DAT_00209dc0 + 0x209bea,0x23c);
      return -0x16;
    }
  }
  *(undefined2 *)(param_1 + 2) = 0;
  uVar6 = FUN_00209a08(param_1);
  if ((int)uVar6 < 0) {
    uVar2 = 0x24b;
    iVar5 = DAT_00209dc4 + 0x209c06;
  }
  else {
    if ((short)param_1[1] == 2) {
      param_1[3] = 13000;
    }
    else {
      uVar2 = FUN_00211cf8();
      iVar1 = FUN_002015c0(uVar2,10);
      param_1[3] = iVar1;
    }
    uVar6 = FUN_00209508(param_1);
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
      FUN_002097ec(param_1);
      iVar1 = *(int *)(iVar5 + DAT_00209db4);
      iVar5 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
      if ((*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) != '\0') &&
         ((*(char *)(iVar5 + 2) != '\0' || (*(char *)(iVar5 + 0xf) != '\0')))) {
        FUN_002134e8(DAT_00209dcc + 0x209ca6);
      }
      FUN_00215a5a(1,*param_1 + 0x24);
      iVar5 = param_1[10];
      if ((char)param_1[0xe] == '\0') {
LAB_00209d66:
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
            FUN_002134e8(DAT_00209de0 + 0x209da4,0x151,(short)param_1[1],(char)param_1[0xc]);
            goto LAB_00209cf2;
          }
          if ((int)(uVar6 << 0x1f) < 0) goto LAB_00209d66;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar5 = -0x6e;
        FUN_002134e8(DAT_00209dd0 + 0x209cec,0x14d,(short)param_1[1],(char)param_1[0xc]);
LAB_00209cf2:
        if ((int)((uint)*(ushort *)(param_1 + 2) << 0x1d) < 0) {
          FUN_002134e8(DAT_00209dd4 + 0x209d02,0x155);
        }
        if ((int)((uint)*(ushort *)(param_1 + 2) << 0x1e) < 0) {
          FUN_002134e8(DAT_00209dd8 + 0x209d14,0x157);
        }
        if (*(char *)((int)param_1 + 0x3a) == '\0') {
          FUN_00209714(param_1);
        }
        FUN_00215a5a(1,*param_1 + 0x50);
        FUN_00215a5a(0,*param_1 + 4);
        FUN_00215a5a(7,*param_1 + 0xc);
        FUN_00215a5a(1,*param_1 + 0x38);
      }
      iVar4 = iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10;
      if (*(char *)(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10) == '\0') {
        return iVar5;
      }
      if ((*(char *)(iVar4 + 2) == '\0') && (*(char *)(iVar4 + 0xf) == '\0')) {
        return iVar5;
      }
      FUN_002134e8(DAT_00209ddc + 0x209d62);
      return iVar5;
    }
    uVar2 = 599;
    iVar5 = DAT_00209dc8 + 0x209c34;
  }
LAB_00209c32:
  FUN_002134e8(iVar5,uVar2,uVar6);
  return -0x16;
}


// ==== FUN_00209de4 @ 00209de4 ====

undefined4 FUN_00209de4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = 0x288;
    iVar1 = DAT_00209e10 + 0x209df6;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      return 0;
    }
    uVar2 = 0x28f;
    iVar1 = DAT_00209e14 + 0x209e04;
  }
  FUN_002134e8(iVar1,uVar2,param_3,0,param_4);
  return 0xffffffea;
}


// ==== FUN_00209e18 @ 00209e18 ====

void FUN_00209e18(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  switch(*(undefined2 *)(param_1 + 1)) {
  case 0:
    uVar2 = DAT_00209e9c;
    break;
  case 1:
    uVar2 = DAT_00209ea0;
    break;
  case 2:
    uVar2 = DAT_00209ea4;
    break;
  case 3:
    uVar2 = DAT_00209ea8;
    break;
  default:
    FUN_002134e8(DAT_00209eac + 0x209e46,0x2aa);
    goto LAB_00209e48;
  }
  *param_1 = uVar2;
LAB_00209e48:
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


// ==== FUN_00209eb0 @ 00209eb0 ====

int FUN_00209eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(int *)(param_1 + 0x1c) =
       (int)(s__PWRAP__ERROR_line__d_wait_for_s_0021ffcf + *(ushort *)(param_1 + 4) + 0x34) * 0x80;
  iVar1 = FUN_00209de4();
  if (iVar1 < 0) {
    FUN_002134e8(DAT_00209f10 + 0x209ee0,0x314);
    return iVar1;
  }
  FUN_00209e18(param_1);
  iVar1 = FUN_00209b9c(param_1);
  if (*(int *)(param_1 + 0x28) != iVar1) {
    FUN_002134e8(DAT_00209f14 + 0x209f04,0x31d,*(int *)(param_1 + 0x28),iVar1);
    return -1;
  }
  return 0;
}


// ==== FUN_00209f18 @ 00209f18 ====

int FUN_00209f18(int param_1,undefined4 param_2,ushort param_3,int param_4)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x28) = (uint)param_3 | param_4 << 0x10;
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x1c) =
       (int)(s__PWRAP__ERROR_line__d_wait_for_s_0021ffcf + *(ushort *)(param_1 + 4) + 0x34) * 0x80;
  iVar1 = FUN_00209de4();
  if (iVar1 < 0) {
    FUN_002134e8(DAT_00209f80 + 0x209f4e,0x33c);
    return iVar1;
  }
  FUN_00209e18(param_1);
  iVar1 = FUN_00209b9c(param_1);
  if (*(int *)(param_1 + 0x28) != iVar1) {
    FUN_002134e8(DAT_00209f84 + 0x209f72,0x345,*(int *)(param_1 + 0x28),iVar1);
    return -1;
  }
  return 0;
}


// ==== FUN_0020a044 @ 0020a044 ====

void FUN_0020a044(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar2) = 0;
    *(undefined4 *)((int)param_2 + iVar2) = 0;
    *(undefined4 *)((int)param_3 + iVar2) = 0;
    uVar1 = DAT_0020a084;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0xc);
  *param_1 = DAT_0020a080;
  *param_3 = 1;
  param_1[1] = uVar1;
  param_3[1] = 1;
  *param_2 = DAT_0020a088;
  *param_3 = *param_3 | 0x10;
  param_2[1] = DAT_0020a08c;
  param_3[1] = param_3[1] | 0x10;
  return;
}


// ==== FUN_0020a090 @ 0020a090 ====

void FUN_0020a090(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_3c [10];
  
  piVar1 = local_3c + 3;
  piVar2 = local_3c + 6;
  FUN_002134e8(DAT_0020a10c + 0x20a09a);
  FUN_0020a044(local_3c,piVar1,piVar2);
  iVar4 = 0;
  do {
    if (*(int *)((int)piVar1 + iVar4) != 0) {
      FUN_00209190(*(int *)((int)piVar1 + iVar4),(*(uint *)((int)piVar2 + iVar4) & 0xff) >> 4);
      FUN_00209106(*(undefined4 *)((int)piVar1 + iVar4),0);
      FUN_00209122(*(undefined4 *)((int)piVar1 + iVar4),1);
      FUN_0020913e(*(undefined4 *)((int)piVar1 + iVar4),1);
    }
    iVar3 = *(int *)((int)local_3c + iVar4);
    if (iVar3 != 0) {
      FUN_00209190(iVar3,*(uint *)((int)piVar2 + iVar4) & 0xf);
      FUN_00209106(*(undefined4 *)((int)local_3c + iVar4),1);
      FUN_00209122(*(undefined4 *)((int)local_3c + iVar4),0);
      FUN_0020913e(*(undefined4 *)((int)local_3c + iVar4),0);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0xc);
  thunk_FUN_00215ac4(0x21);
  return;
}


// ==== FUN_0020a110 @ 0020a110 ====

void FUN_0020a110(void)

{
  FUN_00212168(0x40,0,1,0);
  FUN_0020a090();
  *DAT_0020a144 = *DAT_0020a144 & 0xfffe;
  *DAT_0020a148 = 1;
  FUN_00212168(0x40,0,1,2);
  return;
}


// ==== FUN_0020a14c @ 0020a14c ====

void FUN_0020a14c(void)

{
  return;
}


// ==== FUN_0020a150 @ 0020a150 ====

undefined4 FUN_0020a150(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x48) {
    if (param_1 == 2) {
      iVar1 = FUN_0021257e();
      if (iVar1 == 1) {
        FUN_002134e8(DAT_0020a1ac + 0x20a17a);
        return 1;
      }
    }
    else if (((uint)*(ushort *)(DAT_0020a1a4 + (param_1 >> 4) * 4) & 1 << (param_1 & 0xf)) == 0) {
      FUN_002134e8(DAT_0020a1b0 + 0x20a19c,param_1);
      return 1;
    }
  }
  else {
    FUN_002134e8(DAT_0020a1a8 + 0x20a15e,param_1);
  }
  return 0;
}


// ==== FUN_0020abd4 @ 0020abd4 ====

/* WARNING: Removing unreachable block (ram,0x00217f3c) */

void FUN_0020abd4(void)

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
  
  puVar27 = DAT_0020ac30;
  puVar35 = DAT_0020ac2c;
  if ((**(int **)(DAT_0020ac3c + 0x20abde + DAT_0020ac40) == 1) &&
     (**(int **)(DAT_0020ac3c + 0x20abde + DAT_0020ac44) == 1)) {
    FUN_002134e8(DAT_0020ac48 + 0x20abfc,*DAT_0020ac34,DAT_0020ac44,DAT_0020ac34,in_r3);
    puVar1 = DAT_0020ac38;
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
  *DAT_0020ac2c = 0;
  *puVar27 = 0;
  *DAT_00207344 = DAT_00207340;
  uVar12 = FUN_00207050();
  iVar37 = DAT_00207348 + 0x20721c;
  puVar35 = *(undefined4 **)(iVar37 + DAT_0020734c);
  *puVar35 = uVar12;
  FUN_002134e8(DAT_00207350 + 0x207226,uVar12);
  switch(*puVar35) {
  case 1:
    iVar26 = DAT_00207354 + 0x20723e;
    break;
  case 2:
    iVar26 = DAT_00207358 + 0x207244;
    break;
  case 3:
    iVar26 = DAT_0020735c + 0x20724e;
    break;
  case 4:
    iVar26 = DAT_00207360 + 0x207254;
    break;
  default:
    uVar12 = FUN_00207050();
    FUN_002134e8(DAT_00207364 + 0x207260,uVar12);
    goto LAB_00207262;
  }
  FUN_002134e8(iVar26);
LAB_00207262:
  FUN_002134e8(DAT_00207368 + 0x20726c,0);
  FUN_002134e8(DAT_0020736c + 0x20727a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (**(int **)(iVar37 + DAT_00207370) < 1) {
    iVar26 = 0;
    iVar37 = DAT_00207374 + 0x2072a8;
    goto LAB_00207f5a;
  }
  iVar26 = DAT_0020737c + 0x2072b6;
  **(undefined4 **)(iVar37 + DAT_00207378) = 0;
  FUN_002134e8(iVar26,0);
  iVar36 = *(int *)(iVar37 + DAT_00207380);
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
  FUN_002134e8(DAT_00207384 + 0x2072fe,*(undefined1 *)(iVar36 + 0x10),*(undefined1 *)(iVar36 + 0x11)
               ,*(undefined1 *)(iVar36 + 0x12),uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,
               uVar20,uVar21,uVar22,uVar23,uVar24,uVar25);
  iVar26 = DAT_00207758;
  puVar35 = DAT_00207630;
  uVar30 = *(uint *)(iVar36 + 4) & 0xf;
  if (uVar30 == 2) {
    FUN_002134e8(DAT_00207388 + 0x207310);
    uVar12 = 0xb4c;
    iVar37 = DAT_0020738c + 0x20731e;
    iVar26 = DAT_00207390 + 0x207320;
LAB_00207cf8:
    FUN_00211498(iVar37,uVar12,iVar26);
  }
  else {
    if (uVar30 != 3) {
      if (uVar30 == 4) {
        FUN_002134e8(DAT_00207e78 + 0x207cd4);
        uVar12 = 0xba9;
        iVar37 = DAT_00207e7c + 0x207ce2;
        iVar26 = DAT_00207e80 + 0x207ce4;
      }
      else {
        FUN_002134e8(DAT_00207e84 + 0x207cea);
        uVar12 = 0xbaf;
        iVar37 = DAT_00207e88 + 0x207cf8;
        iVar26 = DAT_00207e8c + 0x207cfa;
      }
      goto LAB_00207cf8;
    }
    piVar31 = *(int **)(iVar37 + DAT_00207394);
    iVar28 = DAT_00207754;
    if ((undefined1 *)(*(uint *)(iVar36 + 0xb0) & 0xfff00000) == &DAT_11200000) {
      iVar28 = DAT_00207398;
    }
    iVar28 = *(int *)(iVar37 + iVar28);
    *piVar31 = iVar28;
    puVar4 = DAT_0020775c;
    puVar27 = DAT_00207634;
    iVar32 = *piVar31;
    FUN_002134e8(iVar26 + 0x2073aa,*(undefined4 *)(iVar32 + 0xc),iVar28,iVar32,uVar13,uVar14,uVar15,
                 uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25);
    FUN_002134e8(DAT_00207760 + 0x2073c0,0x48,0xf);
    FUN_00207158(0x48);
    FUN_0020717c(0xf);
    FUN_002071bc(0);
    FUN_002134e8(DAT_00207764 + 0x2073e0,0x640,2);
    iVar26 = FUN_00211c94();
    FUN_002134e8(DAT_00207768 + 0x2073f4,iVar26 << 2,0x640,2);
    puVar2 = DAT_0020776c;
    uVar12 = DAT_0020763c;
    *DAT_00207638 = *(uint *)(iVar36 + 0x28);
    puVar1 = DAT_00207640;
    *DAT_00207640 = DAT_00207644;
    puVar1[2] = DAT_00207648;
    puVar1 = DAT_0020764c;
    *DAT_0020764c = 0;
    puVar1[2] = uVar12;
    puVar1[6] = DAT_00207650;
    puVar1[8] = 3;
    puVar1[10] = DAT_00207654;
    puVar1[0x18] = DAT_00207658;
    puVar1[0x34] = 0x27;
    puVar1[0x36] = DAT_0020765c;
    puVar29 = DAT_00207660;
    puVar1[0x38] = 0;
    *puVar29 = 0xcccccccc;
    puVar29[2] = 0xcccccccc;
    uVar12 = DAT_00207664;
    puVar29[0x1c] = DAT_00207664;
    puVar29[0x1d] = uVar12;
    uVar12 = DAT_00207668;
    puVar29[0x1e] = DAT_00207668;
    puVar29[0x1f] = uVar12;
    uVar12 = DAT_0020766c;
    puVar29[0x20] = DAT_0020766c;
    puVar29[0x21] = uVar12;
    puVar1 = DAT_00207670;
    *DAT_00207670 = DAT_00207674;
    puVar1[0xaa] = DAT_00207678;
    puVar1[-0x16] = DAT_0020767c;
    puVar1 = DAT_00207684;
    uVar12 = DAT_00207680;
    *DAT_00207684 = DAT_00207680;
    puVar1[2] = uVar12;
    puVar1 = DAT_00207688;
    *DAT_00207688 = DAT_0020768c;
    puVar1[2] = DAT_00207690;
    puVar1[4] = DAT_00207694;
    puVar1[6] = DAT_00207698;
    puVar1[8] = DAT_0020769c;
    puVar1 = DAT_002076a0;
    *puVar35 = 0x6b8;
    uVar12 = DAT_002076a4;
    *puVar1 = DAT_002076a4;
    puVar1[0x2c00] = uVar12;
    puVar35 = DAT_002076a8;
    *DAT_002076a8 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 0xff22ff22;
    puVar35[0x2c01] = 0xff22ff22;
    **(undefined4 **)(iVar37 + DAT_00207770) = 0xb;
    **(undefined4 **)(iVar37 + DAT_00207774) = 0xb;
    *puVar27 = uVar12;
    puVar35[0x2c01] = uVar12;
    puVar1 = DAT_002076b4;
    puVar27 = DAT_002076b0;
    uVar12 = DAT_002076ac;
    puVar35[0x2c05] = DAT_002076ac;
    puVar35[0x2c06] = uVar12;
    puVar35 = DAT_002076bc;
    puVar34 = DAT_002076b8;
    *DAT_002076b8 = *DAT_002076b8 | 0x3f00;
    puVar34[0x2c00] = puVar34[0x2c00] | 0x3f00;
    puVar29 = DAT_002076c0;
    uVar12 = *(undefined4 *)(iVar36 + 100);
    *DAT_002076c0 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_002076c8;
    uVar12 = DAT_002076c4;
    *DAT_002076c8 = DAT_002076c4;
    puVar29[0x2c00] = uVar12;
    uVar12 = DAT_002076cc;
    *puVar27 = DAT_002076cc;
    *puVar1 = uVar12;
    uVar12 = DAT_002076d0;
    *puVar35 = 0;
    puVar29[0x2c27] = 0;
    *puVar2 = uVar12;
    puVar35 = DAT_002076bc;
    puVar2[0x2c00] = uVar12;
    puVar2 = DAT_002076d8;
    puVar29 = DAT_002076d4;
    *DAT_002076d4 = 0;
    puVar29[0x2c00] = 0;
    puVar29 = DAT_002076dc;
    *DAT_002076dc = 0x80000000;
    puVar29[0x2c00] = 0x80000000;
    piVar31 = DAT_002076e4;
    iVar26 = DAT_002076e0;
    *DAT_002076e4 = DAT_002076e0;
    piVar31[0x2c00] = iVar26;
    piVar31 = DAT_002076e8;
    iVar26 = iVar26 + -0x68000000;
    *DAT_002076e8 = iVar26;
    piVar31[0x2c00] = iVar26;
    puVar29 = DAT_002076f0;
    uVar12 = DAT_002076ec;
    *DAT_002076f0 = DAT_002076ec;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_002076f4;
    *DAT_002076f4 = 0xc0000000;
    puVar29[0x2c00] = 0xc0000000;
    puVar3 = DAT_002076fc;
    puVar34 = DAT_002076f8;
    uVar13 = *(uint *)(iVar36 + 0x38);
    *DAT_002076f8 = uVar13;
    *puVar3 = uVar13;
    *puVar34 = *puVar34 | 0x10000000;
    *puVar3 = *puVar3 | 0x10000000;
    puVar29 = DAT_00207700;
    *DAT_00207700 = 0x80;
    puVar29[0x2c00] = 0x80;
    puVar29 = DAT_00207708;
    uVar12 = DAT_00207704;
    *puVar27 = DAT_00207704;
    *puVar1 = uVar12;
    puVar1 = DAT_0020770c;
    uVar12 = *(undefined4 *)(iVar36 + 0x3c);
    *puVar29 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00207710;
    uVar12 = *(undefined4 *)(iVar36 + 0x40);
    *DAT_00207710 = uVar12;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00207718;
    uVar12 = DAT_00207714;
    *DAT_00207718 = DAT_00207714;
    puVar29[0x2c00] = uVar12;
    puVar29 = DAT_00207720;
    uVar12 = DAT_0020771c;
    *DAT_00207720 = DAT_0020771c;
    puVar29[0x2c00] = uVar12;
    uVar12 = *(undefined4 *)(iVar36 + 0x60);
    *puVar1 = uVar12;
    puVar29[0x2c02] = uVar12;
    uVar12 = DAT_00207724;
    puVar27[0x56] = DAT_00207724;
    puVar27[0x2c56] = uVar12;
    puVar27 = DAT_0020772c;
    uVar12 = DAT_00207728;
    *DAT_0020772c = DAT_00207728;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00207730;
    *DAT_00207730 = 2;
    puVar27[0x2c00] = 2;
    puVar27 = DAT_00207738;
    uVar12 = DAT_00207734;
    *DAT_00207738 = DAT_00207734;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00207740;
    uVar12 = DAT_0020773c;
    *DAT_00207740 = DAT_0020773c;
    puVar27[0x2c00] = uVar12;
    puVar27 = DAT_00207744;
    *DAT_00207744 = uVar12;
    puVar27[0x2c00] = uVar12;
    puVar34 = DAT_00207748;
    uVar13 = DAT_0020774c;
    if ((*DAT_00207638 & 0x20000) == 0) {
      uVar13 = DAT_00207750;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    *puVar35 = 5;
    *puVar2 = 5;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(200);
    FUN_002134e8(DAT_00207af0 + 0x207798,DAT_00207af4 + 0x20779a,0x489,
                 *(undefined4 *)(iVar36 + 0xb8));
    puVar35 = DAT_00207a90;
    uVar12 = DAT_00207a8c;
    *DAT_00207a90 = DAT_00207a8c;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00207a94;
    *DAT_00207a94 = 1;
    puVar35[0x2c00] = 1;
    puVar1 = DAT_00207a9c;
    puVar27 = DAT_00207a94;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(10);
    *puVar27 = 0;
    *puVar1 = 0;
    *puVar4 = *puVar4 & 0xfffffff8;
    *puVar34 = *puVar34 & 0xfffffff8;
    FUN_00204530();
    iVar26 = *(int *)(iVar37 + DAT_00207af8);
    FUN_002134e8(DAT_00207afc + 0x2077f8,DAT_00207b00 + 0x2077fa,0x49e,
                 *(undefined4 *)(iVar26 + 0xb4));
    puVar35 = DAT_00207a90;
    uVar12 = *(undefined4 *)(iVar26 + 0xb4);
    *DAT_00207a90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    uVar12 = DAT_00207a98;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(1);
    iVar26 = DAT_00207b08;
    iVar28 = DAT_00207b04 + 0x20782e;
    *puVar27 = 0;
    *puVar1 = 0;
    FUN_002134e8(iVar28,iVar26 + 0x207834,0x4ad,uVar12);
    puVar35 = DAT_00207a90;
    *DAT_00207a90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(1);
    *puVar27 = 0;
    *puVar1 = 0;
    iVar26 = *(int *)(iVar37 + DAT_00207af8);
    FUN_002134e8(DAT_00207b0c + 0x207878,DAT_00207b10 + 0x20787a,0x4bd,
                 *(undefined4 *)(iVar26 + 0xac));
    puVar35 = DAT_00207a90;
    uVar12 = *(undefined4 *)(iVar26 + 0xac);
    *DAT_00207a90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    puVar27 = DAT_00207a9c;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(1);
    puVar3 = DAT_00207aa0;
    uVar12 = DAT_00207a98;
    puVar35 = DAT_00207a94;
    *DAT_00207a94 = 0;
    *puVar27 = 0;
    iVar26 = DAT_00207b14;
    if ((*puVar3 & 0x20000) != 0) {
      *puVar4 = *puVar4 | 8;
      iVar28 = DAT_00207b18;
      *puVar34 = *puVar34 | 8;
      FUN_002134e8(iVar26 + 0x2078d4,iVar28 + 0x2078de,0x4d2,*(undefined4 *)(iVar36 + 0xb4));
      puVar1 = DAT_00207aa4;
      uVar33 = *(undefined4 *)(iVar36 + 0xb4);
      *DAT_00207a90 = uVar33;
      *puVar1 = uVar33;
      *puVar35 = 1;
      *puVar27 = 1;
      DataSynchronizationBarrier(0xf);
      FUN_00215aa8(1);
      iVar26 = DAT_00207b20;
      iVar28 = DAT_00207b1c + 0x20790c;
      *puVar35 = 0;
      *puVar27 = 0;
      FUN_002134e8(iVar28,iVar26 + 0x207912,0x4e1,DAT_00207a98);
      puVar1 = DAT_00207a90;
      *DAT_00207a90 = uVar12;
      puVar1[0x2c00] = uVar12;
      *puVar35 = 1;
      *puVar27 = 1;
      DataSynchronizationBarrier(0xf);
      FUN_00215aa8(1);
      puVar1 = DAT_00207a94;
      *DAT_00207a94 = 0;
      puVar1[0x2c00] = 0;
      puVar3 = DAT_00207aa8;
      *DAT_00207aa8 = *DAT_00207aa8 & 0xfffffff7;
      puVar5 = DAT_00207aac;
      *DAT_00207aac = *DAT_00207aac & 0xfffffff7;
      *puVar3 = *puVar3 | 1;
      *puVar5 = *puVar5 | 1;
    }
    FUN_002134e8(DAT_00207b24 + 0x20797c,DAT_00207b28 + 0x20797e,0x4f7,
                 *(undefined4 *)(iVar36 + 0xa4));
    puVar1 = DAT_00207aa4;
    uVar12 = *(undefined4 *)(iVar36 + 0xa4);
    *DAT_00207a90 = uVar12;
    *puVar1 = uVar12;
    *puVar35 = 1;
    *puVar27 = 1;
    puVar1 = DAT_00207a9c;
    puVar27 = DAT_00207a94;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(1);
    iVar26 = DAT_00207b2c;
    *puVar27 = 0;
    *puVar1 = 0;
    iVar37 = *(int *)(iVar37 + DAT_00207af8);
    FUN_002134e8(iVar26 + 0x2079b6,DAT_00207b30 + 0x2079be,0x505,*(undefined4 *)(iVar37 + 0xa8));
    puVar35 = DAT_00207a90;
    uVar12 = *(undefined4 *)(iVar37 + 0xa8);
    *DAT_00207a90 = uVar12;
    puVar35[0x2c00] = uVar12;
    *puVar27 = 1;
    *puVar1 = 1;
    puVar3 = DAT_00207ab0;
    DataSynchronizationBarrier(0xf);
    FUN_00215aa8(1);
    puVar5 = DAT_00207ab8;
    puVar27 = DAT_00207ab4;
    puVar35 = DAT_00207a94;
    *DAT_00207a94 = 0x1100;
    puVar35[0x2c00] = 0x1100;
    puVar1 = DAT_00207ac0;
    puVar35 = DAT_00207abc;
    puVar29 = DAT_00207abc + -0x5a;
    uVar13 = DAT_00207ac4;
    if (-1 < (int)(*DAT_00207aa0 << 0xe)) {
      uVar13 = DAT_00207ac8;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    *puVar1 = 1;
    puVar1 = DAT_00207acc;
    *puVar27 = 1;
    *puVar35 = 1;
    *puVar1 = 1;
    *puVar29 = 0xa56;
    puVar27 = DAT_00207ad0;
    puVar35[0x2ba6] = 0xa56;
    puVar35 = DAT_00207ad4;
    *DAT_00207ad4 = 0;
    puVar35[0x2c00] = 0;
    uVar12 = *(undefined4 *)(iVar36 + 0x34);
    *puVar27 = uVar12;
    puVar27[0x2c00] = uVar12;
    puVar35 = DAT_00207ad8;
    uVar12 = *(undefined4 *)(iVar36 + 0x68);
    *DAT_00207ad8 = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00207adc;
    uVar12 = *(undefined4 *)(iVar36 + 0x44);
    *DAT_00207adc = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00207ae0;
    uVar12 = *(undefined4 *)(iVar36 + 0x60);
    puVar27 = DAT_00207ae0 + -0x78;
    *DAT_00207ae0 = uVar12;
    puVar1[-1] = uVar12;
    uVar12 = *(undefined4 *)(iVar36 + 0x48);
    *puVar27 = uVar12;
    puVar35[0x2b88] = uVar12;
    puVar35 = DAT_00207ae8;
    uVar12 = DAT_00207ae4;
    *puVar3 = 0;
    *puVar5 = 0;
    *puVar35 = uVar12;
    puVar35[0x2c00] = uVar12;
    piVar31 = DAT_00207dc4;
    puVar35 = DAT_00207aec;
    *DAT_00207aec = 0;
    puVar35[0x2c00] = 0;
    puVar6 = DAT_00207dc8;
    uVar13 = *(uint *)(iVar36 + 0x4c) & 0x3fffffff;
    *(uint *)(iVar36 + 0x4c) = uVar13;
    *puVar6 = uVar13;
    puVar6[0x2c00] = uVar13;
    uVar13 = DAT_00207dcc;
    if (-1 < *piVar31 << 0xe) {
      uVar13 = DAT_00207dd0;
    }
    *puVar4 = uVar13;
    *puVar34 = uVar13;
    iVar37 = FUN_0021116c();
    if (iVar37 == 1) {
      FUN_002134e8(DAT_00207e4c + 0x207b70,1);
      uVar12 = 0x18181818;
      uVar33 = 0;
    }
    else {
      uVar12 = 0;
      uVar33 = 0x22222222;
    }
    puVar9 = DAT_00207e54;
    puVar8 = DAT_00207e50;
    puVar35 = DAT_00207dd4;
    *DAT_00207dd4 = uVar33;
    puVar34 = DAT_00207dd8;
    puVar35[0x2c00] = uVar33;
    puVar10 = DAT_00207e58;
    puVar4 = DAT_00207de0;
    puVar35 = DAT_00207ddc;
    *DAT_00207ddc = uVar33;
    puVar11 = DAT_00207e5c;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207de4;
    *DAT_00207de4 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207de8;
    *DAT_00207de8 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207dec;
    *DAT_00207dec = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207df0;
    *DAT_00207df0 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207df4;
    *DAT_00207df4 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207df8;
    *DAT_00207df8 = uVar33;
    puVar35[0x2c00] = uVar33;
    puVar35 = DAT_00207dfc;
    *DAT_00207dfc = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar35 = DAT_00207e00;
    *DAT_00207e00 = uVar12;
    puVar35[0x2c00] = uVar12;
    puVar6 = DAT_00207e04;
    *puVar8 = 0x2222;
    *puVar6 = 0x2222;
    *puVar3 = 0x2222;
    *puVar5 = 0x2222;
    puVar7 = DAT_00207e08;
    *DAT_00207e08 = 0x66666666;
    *puVar9 = 0x66666666;
    *puVar34 = 0x66666666;
    *puVar4 = 0x66666666;
    puVar34[1] = 0x66666666;
    puVar34 = DAT_00207e0c;
    *puVar10 = 0x66666666;
    puVar35 = DAT_00207e10;
    *puVar11 = 0x66666666;
    *puVar34 = 0x66666666;
    uVar12 = DAT_00207e14;
    *puVar35 = DAT_00207e14;
    puVar35[0x2c00] = uVar12;
    FUN_002134e8(DAT_00207e60 + 0x207c42,*puVar3 | *puVar5 | *DAT_00207e18);
    FUN_002134e8(DAT_00207e64 + 0x207c66,*puVar8 | *puVar6 | *DAT_00207e1c);
    FUN_002134e8(DAT_00207e68 + 0x207c74,*puVar9 | *puVar7 | *DAT_00207e20);
    FUN_002134e8(DAT_00207e6c + 0x207c96,*DAT_00207de0 | *DAT_00207dd8 | *DAT_00207e24);
    FUN_002134e8(DAT_00207e70 + 0x207cae,*puVar10 | *DAT_00207e28 | *DAT_00207e2c);
    FUN_002134e8(DAT_00207e74 + 0x207cc4,*puVar34 | *puVar11 | *DAT_00207e30);
  }
  *DAT_00207e34 = *DAT_00207e34 | 0x400;
  iVar37 = FUN_00204214();
  if (iVar37 < 0) {
    iVar37 = DAT_00207e90 + 0x207d14;
  }
  else {
    iVar37 = DAT_00207e94 + 0x207d1a;
  }
  FUN_002134e8(iVar37);
  if ((*(uint *)(iVar36 + 0xb0) & 0xfff00000) == DAT_00207e38) {
    uVar12 = FUN_00206f54(5);
    uVar13 = FUN_00206f54(8);
    uVar14 = (uVar13 & 0x3f) >> 2;
    FUN_002134e8(DAT_00207e98 + 0x207d4e,uVar12,uVar14,(uVar13 & 0x3ff) >> 6);
    iVar37 = DAT_00207e48;
    puVar34 = DAT_00207e3c;
    if (uVar14 == 6) {
      FUN_002134e8(DAT_00207e9c + 0x207d5c);
      *puVar34 = *puVar34 | 8;
      uVar13 = FUN_00206f54(8);
      uVar14 = (uVar13 & 0x3ff) >> 6;
      FUN_002134e8(DAT_00207ea0 + 0x207d7e,(uVar13 & 0x3f) >> 2,uVar14);
      *puVar34 = *puVar34 & 0xfffffff7;
      piVar31 = DAT_00207dc4;
      if (uVar14 == 0) {
        FUN_002134e8(DAT_00207ea4 + 0x207d90);
        *DAT_00207dc4 = DAT_00207e40;
      }
      else {
        FUN_002134e8(DAT_00207ea8 + 0x207da2);
        *piVar31 = DAT_00207e44;
LAB_00207dbc:
        *(undefined4 *)(iVar36 + 0x70) = 0x40000000;
      }
    }
    else {
      if (uVar14 == 7) {
        FUN_002134e8(DAT_00207eac + 0x207db6);
        *DAT_00207dc4 = iVar37;
        goto LAB_00207dbc;
      }
      FUN_002134e8(DAT_00207fa0 + 0x207eb6);
      puVar35 = DAT_00207f88;
      uVar12 = DAT_00207f84;
      *DAT_00207f80 = iVar37;
      *puVar35 = uVar12;
    }
  }
  if (*DAT_00207f80 << 0xe < 0) {
    DAT_00207f8c[0x39] =
         DAT_00207f8c[0x39] & 0xfff0ffff | (((*DAT_00207f8c & 0x7ffffff) >> 0x18) + 2) * 0x10000;
  }
  puVar4 = DAT_00207f98;
  puVar3 = DAT_00207f94;
  puVar34 = DAT_00207f90;
  *DAT_00207f90 = *DAT_00207f90 | 0x100000;
  puVar34[0x2c00] = puVar34[0x2c00] | 0x100000;
  puVar34 = DAT_00207f9c;
  *DAT_00207f9c = *DAT_00207f9c | 0x80000000;
  puVar34[0x2c00] = puVar34[0x2c00] | 0x80000000;
  *puVar3 = *puVar3 | 0x4f10;
  *puVar4 = *puVar4 | 0x4f10;
  iVar26 = FUN_0020ac4c(0x40000000,0x2000);
  iVar37 = iVar26;
  if (((*DAT_00207f80 << 0xe < 0) && (iVar37 = FUN_0020ac4c(0x80000000,0x2000), iVar26 != 0)) ||
     (iVar37 != 0)) {
    FUN_002134e8(DAT_00207fac + 0x207f70,DAT_00207fb0 + 0x207f72);
    FUN_002134e8(DAT_00217f5c + 0x217f22);
    puVar34 = DAT_00217f54 + -2;
    *DAT_00217f54 = 0x1971;
    *puVar34 = *puVar34 | 0x22000014;
    FUN_00215aa8(100);
    *DAT_00217f58 = 0x1209;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar37 = DAT_00207fa4 + 0x207f5a;
  iVar26 = DAT_00207fa8 + 0x207f5c;
LAB_00207f5a:
  FUN_002134e8(iVar37,iVar26);
  return;
}


// ==== FUN_0020ac4c @ 0020ac4c ====

undefined4 FUN_0020ac4c(int *param_1,uint param_2)

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
                      for (uVar6 = 0; uVar9 = DAT_0020b054, uVar6 != uVar7; uVar6 = uVar6 + 1) {
                        param_1[uVar6] = uVar6;
                      }
                      uVar6 = 0;
                      while( true ) {
                        if (uVar6 == uVar7) {
                          for (uVar6 = 0; uVar1 = DAT_0020b054, uVar6 != uVar7; uVar6 = uVar6 + 1) {
                            param_1[uVar6] = uVar9;
                          }
                          uVar6 = 0;
                          puVar4 = puVar8;
                          while( true ) {
                            if (uVar6 == uVar7) {
                              uVar6 = 0;
                              piVar3 = param_1;
                              while( true ) {
                                uVar9 = DAT_0020b058;
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
                                                                        iVar2 = DAT_0020b05c;
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
                                                    if (param_1[uVar6] != DAT_0020b05c) break;
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


// ==== FUN_0020b060 @ 0020b060 ====

int FUN_0020b060(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_0020b0e0 + 0x20b06a);
  iVar1 = FUN_0020b410(*puVar5);
  uVar2 = FUN_0020b400(*puVar5);
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
      iVar3 = FUN_0020b864(uVar2,iVar1,1,0xb3,uVar4,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0020b8fe(uVar2,iVar1);
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


// ==== FUN_0020b12c @ 0020b12c ====

int FUN_0020b12c(void)

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
  
  iVar13 = DAT_0020b358 + 0x20b13a;
  iVar2 = FUN_00201e28(1);
  if (iVar2 == 0) {
    iVar2 = FUN_0020c4f8();
    piVar16 = (int *)(DAT_0020b35c + 0x20b14e);
    *piVar16 = iVar2;
    if (iVar2 != -1) {
      iVar3 = FUN_0020c3ac(iVar2,2);
      iVar2 = DAT_0020b360;
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar12 = (undefined4 *)(DAT_0020b360 + 0x20b16e);
      FUN_00215820(puVar12,0,0x28);
      iVar3 = FUN_0020b410(*piVar16);
      *(undefined4 *)(iVar2 + 0x20b172) = 0x200;
      *(undefined4 *)(iVar2 + 0x20b176) = 0x200;
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar4 = *piVar16;
      *(undefined4 *)(iVar2 + 0x20b182) = 0;
      *(undefined4 *)(iVar2 + 0x20b17a) = uVar9;
      *(int *)(iVar2 + 0x20b18e) = DAT_0020b364 + 0x20b194;
      *(int *)(iVar2 + 0x20b192) = DAT_0020b368 + 0x20b19a;
      *puVar12 = 1;
      uVar9 = FUN_0020b400(iVar4);
      *(undefined4 *)(iVar2 + 0x20b186) = uVar9;
      FUN_00215820(DAT_0020b36c + 0x20b1ae,0,8);
      iVar4 = *(int *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x20b17e) = 0;
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
        puVar10 = *(uint **)(iVar13 + DAT_0020b374);
        uVar5 = *puVar10;
        uVar6 = puVar10[1];
        puVar15 = (uint *)(DAT_0020b370 + 0x20b2d2);
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
        iVar2 = DAT_0020b37c;
        iVar3 = *(int *)(DAT_0020b378 + 0x20b31e);
        do {
          puVar11 = puVar11 + 2;
          iVar3 = iVar3 + *puVar11;
        } while (puVar11 != (uint *)&local_30);
        uVar9 = FUN_00201700(iVar3,*(undefined4 *)(DAT_0020b37c + 0x20b324),&local_30,puVar11,uVar7,
                             0,uVar17);
        iVar3 = DAT_0020b380;
        *(undefined4 *)(iVar2 + 0x20b330) = uVar9;
        **(longlong **)(iVar13 + iVar3) = lVar1;
        puVar12 = (undefined4 *)(DAT_0020b384 + 0x20b336);
        *puVar12 = 9;
        iVar2 = DAT_0020b388 + 0x20b33c;
      }
      else {
        iVar2 = 0;
        puVar12 = (undefined4 *)(DAT_0020b38c + 0x20b344);
        *puVar12 = 0;
      }
      iVar13 = DAT_0020b390;
      puVar12[1] = iVar2;
      FUN_00201e04(iVar13 + 0x20b34c);
    }
  }
  return 0;
}


// ==== FUN_0020b394 @ 0020b394 ====

uint FUN_0020b394(int param_1,uint param_2,uint param_3)

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


// ==== thunk_FUN_0020d904 @ 0020b3ce ====

void thunk_FUN_0020d904(void)

{
  return;
}


// ==== FUN_0020b3d2 @ 0020b3d2 ====

void FUN_0020b3d2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  FUN_00215830(&uStack_14,param_1 + 0x13e,4,param_4,param_1);
  FUN_00215830(&uStack_14,param_1 + 0x120,4);
  FUN_00215830(&uStack_14,param_1 + 0xe9,4);
  return;
}


// ==== FUN_0020b400 @ 0020b400 ====

int FUN_0020b400(int param_1)

{
  return DAT_0020b40c + 0x20b406 + param_1 * 0x80;
}


// ==== FUN_0020b410 @ 0020b410 ====

int FUN_0020b410(int param_1)

{
  return param_1 * 0x2dc + DAT_0020b420 + 0x20b41a;
}


// ==== FUN_0020b424 @ 0020b424 ====

void FUN_0020b424(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_2 + 0x20);
  do {
    iVar1 = FUN_0020f264(param_1,param_2);
    if (iVar1 == 0) {
      return;
    }
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  return;
}


// ==== FUN_0020b43e @ 0020b43e ====

void FUN_0020b43e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  while ((iVar1 = FUN_0020b424(param_1,&local_40), iVar1 != 0 ||
         (iVar1 = FUN_0020b424(param_1,param_2), iVar1 != 0))) {
    bVar2 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar2) {
      return;
    }
  }
  return;
}


// ==== FUN_0020b47a @ 0020b47a ====

int FUN_0020b47a(undefined4 param_1,int param_2,int *param_3)

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
    iVar1 = FUN_0020b43e(param_1,&local_40,0,5);
    if (((iVar1 != 0) || (local_34 < 0)) || (param_2 == 0)) goto LAB_0020b4bc;
    thunk_FUN_00215ac4(10);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = 1;
LAB_0020b4bc:
  if (param_3 != (int *)0x0) {
    *param_3 = local_34;
  }
  return iVar1;
}


// ==== FUN_0020b4c8 @ 0020b4c8 ====

int FUN_0020b4c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  undefined4 local_14;
  undefined4 local_10;
  
  local_30 = 0x88;
  if ((DAT_0020b508 & param_2) == 0) {
    local_2c = 0xaa;
  }
  else {
    local_2c = 0x1aa;
  }
  local_28 = 1;
  local_10 = 0;
  local_14 = 100;
  iVar1 = FUN_0020b424(param_1,&local_30);
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


// ==== FUN_0020b50c @ 0020b50c ====

int FUN_0020b50c(undefined4 param_1,int param_2,int *param_3)

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
    iVar1 = FUN_0020b424(param_1,&local_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((param_2 == 0) || (local_34 < 0)) break;
    thunk_FUN_00215ac4(10);
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


// ==== FUN_0020b6d8 @ 0020b6d8 ====

int FUN_0020b6d8(undefined4 param_1,int param_2,undefined4 param_3)

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
  FUN_0020efac();
  do {
    FUN_0020e6ea(param_1,1);
    FUN_0020e6e0(param_1,0x40);
    FUN_0020e650(param_1,extraout_r1,DAT_0020b770,DAT_0020b774,0);
    iVar1 = FUN_0020b424(param_1,&local_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_0020e9c8(param_1,param_3,0x40);
    if (iVar1 == 0) break;
    FUN_0020f2e0(param_1,1);
    iVar2 = FUN_0020f7b8(param_1);
  } while (iVar2 != 7);
  FUN_0020efac(param_1);
  return iVar1;
}


// ==== FUN_0020b778 @ 0020b778 ====

uint FUN_0020b778(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  param_2 = *(uint *)(param_1 + 0x4c) & param_2;
  iVar1 = FUN_002106a8(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 3 << (iVar1 - 1U & 0xff) & param_2;
  }
  return uVar2;
}


// ==== FUN_0020b792 @ 0020b792 ====

void FUN_0020b792(undefined4 param_1)

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
  FUN_0020b424(param_1,&local_30);
  return;
}


// ==== FUN_0020b7b2 @ 0020b7b2 ====

int FUN_0020b7b2(undefined4 param_1,int param_2,undefined4 *param_3)

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
  iVar1 = FUN_0020b424(param_1,&local_38);
  if (iVar1 == 0) {
    *param_3 = local_2c;
    thunk_FUN_0020d904();
  }
  return iVar1;
}


// ==== FUN_0020b7e6 @ 0020b7e6 ====

void FUN_0020b7e6(undefined4 param_1,int param_2)

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
  FUN_0020b424(param_1,&local_30);
  return;
}


// ==== FUN_0020b80c @ 0020b80c ====

void FUN_0020b80c(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  ushort local_32;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_00215820(&local_40,0,0x28);
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
  iVar1 = FUN_0020b424(param_1,&local_40);
  if ((iVar1 == 0) && (-1 < *(int *)(param_2 + 0x1c) << 0x1f)) {
    *param_3 = (uint)local_32;
  }
  return;
}


// ==== FUN_0020b864 @ 0020b864 ====

/* WARNING: Type propagation algorithm not settling */

int FUN_0020b864(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,byte param_5)

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
  iVar1 = FUN_0020b424(param_1,local_44 + 1);
  if (iVar1 == 0) {
    iVar1 = DAT_0020b8d0;
    do {
      iVar2 = FUN_0020b7b2(param_1,param_2,local_44);
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


// ==== FUN_0020b8d4 @ 0020b8d4 ====

int FUN_0020b8d4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [16];
  byte local_38;
  
  iVar1 = FUN_0020b6d8(param_1,1,auStack_48);
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


// ==== FUN_0020b8fe @ 0020b8fe ====

int FUN_0020b8fe(undefined4 param_1,int param_2)

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
  FUN_00215820(auStack_220,0,0x200);
  local_248 = 8;
  uStack_244 = 0;
  uStack_240 = 1;
  local_228 = 5;
  local_22c = 100;
  FUN_0020efac(param_1);
  iVar5 = 0;
  do {
    FUN_0020e6ea(param_1,1);
    FUN_0020e6e0(param_1,0x200);
    FUN_0020e650(param_1,extraout_r1,DAT_0020b6cc,DAT_0020b6d0,0);
    iVar2 = FUN_0020b424(param_1,&local_248);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_0020e9c8(param_1,auStack_220,0x200);
    if (iVar2 == 0) break;
    FUN_0020f2e0(param_1,1);
    iVar5 = FUN_0020f7b8(param_1);
  } while (iVar5 != 7);
  FUN_0020efac(param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (iVar5 == 7) {
    return 0;
  }
  FUN_00215830(param_2 + 0x4c,auStack_220,0x200);
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
    *(undefined4 *)(param_2 + 0x2a4) = DAT_0020b6c0;
    *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
    uVar3 = 0x32;
  }
  else if ((bVar1 & 0x30) == 0) {
    if ((bVar1 & 0xc) == 0) {
      if ((int)(uVar4 << 0x1e) < 0) {
        *(undefined4 *)(param_2 + 0x2a4) = DAT_0020b6c4;
        uVar3 = 0x2b;
      }
      else {
        if (-1 < (int)(uVar4 << 0x1f)) goto LAB_0020b6b0;
        *(undefined4 *)(param_2 + 0x2a4) = DAT_0020b6c8;
        uVar3 = 0x2a;
      }
    }
    else {
      *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
      *(undefined4 *)(param_2 + 0x2a4) = DAT_0020b6c4;
      uVar3 = 0x2c;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2a4) = DAT_0020b6c0;
    if ((bVar1 & 0xc) != 0) {
      *(byte *)(param_2 + 0x2be) = *(byte *)(param_2 + 0x2be) | 4;
    }
    uVar3 = 0x2d;
  }
  *(undefined1 *)(param_2 + 0x2d8) = uVar3;
LAB_0020b6b0:
  FUN_0020b3d2(param_2);
  return 0;
}


// ==== FUN_0020b90e @ 0020b90e ====

void FUN_0020b90e(int *param_1,int param_2,uint param_3)

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
  FUN_0020ecd4(param_1,uVar2,uVar3,uVar4);
  return;
}


// ==== FUN_0020b982 @ 0020b982 ====

void FUN_0020b982(undefined4 param_1,int param_2,undefined4 param_3)

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
  FUN_0020b43e(param_1,&local_30,*(undefined4 *)(param_2 + 0x18));
  return;
}


// ==== FUN_0020b9a8 @ 0020b9a8 ====

int FUN_0020b9a8(undefined4 param_1,undefined4 param_2)

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
  iVar1 = FUN_0020b424(param_1,&local_38);
  if (iVar1 == 0) {
    FUN_0020e6e0(param_1,param_2);
  }
  return iVar1;
}


// ==== FUN_0020b9da @ 0020b9da ====

int FUN_0020b9da(int param_1,int param_2,int param_3)

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
    iVar1 = FUN_0020b43e(param_1,&local_40,*(undefined4 *)(param_2 + 0x18),0);
    if (iVar1 != 0) {
      return iVar1;
    }
    goto LAB_0020baf8;
  }
  if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    return 0;
  }
  if (*(byte *)(param_2 + 0x269) < 4) {
    return 0;
  }
  if (param_3 == 8) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (-1 < iVar1 << 0x1a) goto LAB_0020ba86;
    uVar2 = *(ushort *)(param_2 + 0x20);
    if ((int)((uint)uVar2 << 0x17) < 0) {
      if (-1 < iVar1 << 0x16) goto LAB_0020bb02;
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
          goto LAB_0020bac0;
        }
      }
      else if ((uVar2 & 0x280) == 0) goto LAB_0020ba86;
LAB_0020bb02:
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 0;
    if (param_3 != 4) goto LAB_0020bac0;
LAB_0020ba86:
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = 0;
    if ((uVar3 & 1) == 0) {
LAB_0020babe:
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
            goto LAB_0020bb08;
          }
        }
        else {
          uVar4 = uVar4 & 0x280;
          if ((*(ushort *)(param_2 + 0x20) & 0x280) == 0) goto LAB_0020babe;
        }
        uVar4 = 1;
      }
LAB_0020bb08:
      param_3 = 4;
    }
  }
LAB_0020bac0:
  iVar1 = FUN_0020b864(param_1,param_2,1,0xb7,uVar4 & 0xff);
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
  FUN_0020b90e(param_1,*(ushort *)(param_2 + 0x20) & 0x40,*(undefined4 *)(param_1 + 0x3c));
LAB_0020baf8:
  FUN_0020eea0(param_1,param_3);
  return 0;
}


// ==== FUN_0020bb14 @ 0020bb14 ====

int FUN_0020bb14(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)(param_1[7] << 0x1e)) && (3 < *(byte *)((int)param_1 + 0x269))) {
    if ((param_1 == (undefined4 *)0x0) || (-1 < (int)(param_1[7] << 0x1f))) {
      iVar1 = 5;
    }
    else {
      iVar1 = FUN_0020b864(*param_1,param_1,1,0xb3,param_2,0xb3);
      if ((iVar1 == 0) && (iVar1 = FUN_0020b8fe(*param_1,param_1), iVar1 == 0)) {
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


// ==== FUN_0020bb34 @ 0020bb34 ====

uint FUN_0020bb34(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
        uVar2 = FUN_0020fa28(iVar3,param_4,iVar4,param_3);
      }
      else {
        uVar2 = FUN_0020f534(iVar3,param_4,iVar4,param_3,piVar5,param_2,uVar6);
      }
      if (uVar2 == 0) {
        return 0;
      }
      if (*(uint *)(iVar3 + 0x34) >> 4 < *(uint *)(iVar3 + 0x3c)) {
        FUN_0020b90e(iVar3,*(ushort *)(param_1 + 8) & 0x40,*(uint *)(iVar3 + 0x3c) >> 1);
        goto LAB_0020bba6;
      }
    }
    else {
LAB_0020bba6:
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


// ==== FUN_0020bbdc @ 0020bbdc ====

int FUN_0020bbdc(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_0020b400();
  iVar2 = FUN_0020b410(param_1);
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
      iVar1 = FUN_0020bb34(iVar2,param_2,uVar3,param_4);
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


// ==== FUN_0020bc38 @ 0020bc38 ====

uint FUN_0020bc38(undefined4 param_1,int param_2,uint param_3,int param_4)

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
  
  iVar1 = FUN_0020b400();
  piVar2 = (int *)FUN_0020b410(param_1);
  uVar5 = *(uint *)(iVar1 + 0x40);
  uVar6 = *(uint *)(iVar1 + 0x10);
  if (param_3 == 0) {
LAB_0020bc5e:
    uVar5 = 0;
  }
  else {
    uVar4 = (uVar5 >> 9) * param_2;
    if (uVar4 < (uint)piVar2[1] || uVar4 - piVar2[1] == 0) {
      local_40 = param_3;
LAB_0020bc78:
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
            uVar3 = FUN_0020fa28(iVar1,unaff_r10,param_4,uVar4,1);
          }
          else {
            uVar3 = FUN_0020fb24(iVar1,unaff_r10,param_4,uVar4);
          }
          if (uVar3 == 0) goto LAB_0020bcfe;
          if (*(uint *)(iVar1 + 0x34) >> 4 < *(uint *)(iVar1 + 0x3c)) {
            FUN_0020b90e(iVar1,*(ushort *)(piVar2 + 8) & 0x40,*(uint *)(iVar1 + 0x3c) >> 1);
            goto LAB_0020bcf0;
          }
        }
        else {
LAB_0020bcf0:
          uVar3 = (**(code **)(iVar1 + 0x7c))(iVar1,unaff_r10,param_4,uVar4);
          if (uVar3 == 0) goto LAB_0020bcfe;
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
      goto LAB_0020bd3c;
    }
    uVar5 = 5;
  }
  return uVar5;
LAB_0020bcfe:
  do {
    uVar3 = FUN_0020b7b2(iVar1,piVar2,&local_24);
    if (uVar3 != 0) {
      return uVar3;
    }
  } while ((-1 < (int)(local_24 << 0x17)) || ((local_24 & 0x1fff) >> 9 == 7));
LAB_0020bd3c:
  param_2 = param_2 + uVar4;
  param_4 = param_4 + uVar6 * uVar5;
  local_40 = local_40 - uVar4;
  if (local_40 == 0) goto LAB_0020bc5e;
  goto LAB_0020bc78;
}


// ==== FUN_0020bd54 @ 0020bd54 ====

void FUN_0020bd54(void)

{
  return;
}


// ==== FUN_0020bd58 @ 0020bd58 ====

int FUN_0020bd58(int param_1,int param_2,uint param_3)

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
  uVar4 = FUN_0020b778(param_1,param_3);
  *(uint *)(param_1 + 0x48) = uVar4;
  if (uVar4 == 0) {
    return 4;
  }
  FUN_0020b792(param_1);
  if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
    FUN_0020b4c8(param_1,uVar4);
  }
  *(undefined1 *)(param_2 + 0x2d8) = 10;
  if ((*(uint *)(param_2 + 0x1c) & 2) == 0) {
    local_5c = FUN_0020b50c(param_1,uVar4 | 0x40000000,param_2 + 0xc);
  }
  else {
    local_5c = FUN_0020b47a();
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
  iVar5 = FUN_0020b424(param_1,&local_60);
  iVar12 = param_2 + 0x24;
  if (iVar5 != 0) {
    return iVar5;
  }
  FUN_00215830(iVar12,&uStack_54,0x10);
  FUN_00215820(param_2 + 0x24c,0,0x1c);
  uVar1 = FUN_0020b394(iVar12,0x40,8);
  *(undefined1 *)(param_2 + 0x254) = uVar1;
  uVar1 = FUN_0020b394(iVar12,0x48,8);
  *(undefined1 *)(param_2 + 0x253) = uVar1;
  uVar1 = FUN_0020b394(iVar12,0x50,8);
  *(undefined1 *)(param_2 + 0x252) = uVar1;
  uVar1 = FUN_0020b394(iVar12,0x58,8);
  *(undefined1 *)(param_2 + 0x251) = uVar1;
  uVar1 = FUN_0020b394(iVar12,0x60,8);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined1 *)(param_2 + 0x250) = uVar1;
  if (iVar5 << 0x1e < 0) {
    uVar1 = FUN_0020b394(iVar12,8,4);
    *(undefined1 *)(param_2 + 0x266) = uVar1;
    sVar2 = FUN_0020b394(iVar12,0xc,8);
    *(short *)(param_2 + 0x262) = sVar2;
    uVar6 = FUN_0020b394(iVar12,0x18,0x20);
    *(undefined4 *)(param_2 + 0x25c) = uVar6;
    uVar1 = FUN_0020b394(iVar12,0x38,4);
    *(undefined1 *)(param_2 + 0x265) = uVar1;
    uVar1 = FUN_0020b394(iVar12,0x3c,4);
    *(undefined1 *)(param_2 + 0x264) = uVar1;
    uVar3 = FUN_0020b394(iVar12,0x68,0x10);
    *(undefined2 *)(param_2 + 0x260) = uVar3;
    uVar6 = FUN_0020b394(iVar12,0x78,8);
    *(short *)(param_2 + 0x262) = sVar2 + 2000;
    *(undefined4 *)(param_2 + 0x24c) = uVar6;
  }
  else {
    sVar2 = FUN_0020b394(iVar12,8,4);
    *(short *)(param_2 + 0x262) = sVar2 + 0x7cd;
    uVar1 = FUN_0020b394(iVar12,0xc,4);
    *(undefined1 *)(param_2 + 0x266) = uVar1;
    uVar1 = FUN_0020b394(iVar12,0x38,8);
    *(undefined1 *)(param_2 + 0x255) = uVar1;
    switch(*(undefined1 *)(param_2 + 0x269)) {
    case 0:
    case 1:
      uVar6 = FUN_0020b394(iVar12,0x10,0x18);
      *(undefined4 *)(param_2 + 0x25c) = uVar6;
      uVar1 = FUN_0020b394(iVar12,0x28,4);
      *(undefined1 *)(param_2 + 0x265) = uVar1;
      uVar1 = FUN_0020b394(iVar12,0x2c,4);
      *(undefined1 *)(param_2 + 0x264) = uVar1;
      uVar1 = FUN_0020b394(iVar12,0x30,8);
      uVar6 = 0x68;
      uVar9 = 0x18;
      *(undefined1 *)(param_2 + 0x256) = uVar1;
      break;
    case 2:
    case 3:
    case 4:
      uVar6 = FUN_0020b394(iVar12,0x10,0x20);
      *(undefined4 *)(param_2 + 0x25c) = uVar6;
      uVar3 = FUN_0020b394(iVar12,0x68,0x10);
      uVar6 = 0x78;
      uVar9 = 8;
      *(undefined2 *)(param_2 + 0x260) = uVar3;
      break;
    default:
      goto switchD_0020bef6_default;
    }
    uVar6 = FUN_0020b394(iVar12,uVar6,uVar9);
    *(undefined4 *)(param_2 + 0x24c) = uVar6;
  }
switchD_0020bef6_default:
  if (iVar5 << 0x1f < 0) {
    *(undefined4 *)(param_2 + 0x18) = 1;
  }
  iVar5 = FUN_0020b80c(param_1,param_2,param_2 + 0x18);
  if (iVar5 != 0) {
    return iVar5;
  }
  local_60 = 9;
  local_58 = 2;
  local_5c = *(int *)(param_2 + 0x18) << 0x10;
  local_40 = 5;
  local_44 = 10000;
  iVar5 = FUN_0020b424(param_1,&local_60);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = param_2 + 0x34;
  FUN_00215830(iVar5,&uStack_54,0x10);
  uVar4 = FUN_0020b394(iVar5,0x7e,2);
  *(char *)(param_2 + 0x268) = (char)uVar4;
  if (((int)(*(uint *)(param_2 + 0x1c) << 0x1f) < 0) && (3 < uVar4)) {
    return 5;
  }
  uVar11 = *(uint *)(param_2 + 0x1c) & 2;
  if ((uVar11 != 0) && (1 < uVar4)) {
    return 5;
  }
  iVar7 = FUN_0020b394(iVar5,99,4);
  iVar8 = FUN_0020b394(iVar5,0x60,3);
  *(uint *)(param_2 + 0x278) =
       *(int *)(DAT_0020c2e4 + 0x20c01a + iVar8 * 4) *
       (uint)*(byte *)(DAT_0020c2e0 + 0x20c012 + iVar7);
  uVar6 = FUN_0020b394(iVar5,0x50,4);
  *(undefined4 *)(param_2 + 0x27c) = uVar6;
  iVar7 = FUN_0020b394(iVar5,0x2f,3);
  iVar8 = FUN_0020b394(iVar5,0x3e,0xc);
  *(int *)(param_2 + 0x284) = iVar8 + 1 << (iVar7 + 2U & 0xff);
  if (uVar11 == 0) {
    uVar1 = FUN_0020b394(iVar5,0x7a,4);
    *(undefined1 *)(param_2 + 0x269) = uVar1;
  }
  else if (uVar4 == 1) {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
    iVar5 = FUN_0020b394(iVar5,0x30,0x16);
    *(undefined4 *)(param_2 + 0x27c) = 9;
    *(int *)(param_2 + 0x284) = (iVar5 + 1) * 0x400;
  }
  iVar5 = FUN_0020b7e6(param_1,param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
    if ((int)((uint)*(ushort *)(param_2 + 0x26a) << 0x15) < 0) {
      iVar5 = FUN_0020b6d8(param_1,0,&local_60);
      if (iVar5 == 0) {
        uVar4 = (uint)local_53;
        if ((int)(uVar4 << 0x1f) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020c2d4;
        }
        if ((int)(uVar4 << 0x1e) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020c2d8;
        }
        if ((int)(uVar4 << 0x1b) < 0) {
          *(undefined4 *)(param_2 + 0x2c8) = DAT_0020c2d8;
          *(undefined4 *)(param_2 + 0x2cc) = 1;
        }
      }
      if (*(int *)(param_1 + 0x2c) << 0x1b < 0) {
        FUN_0020b8d4(param_1,param_2);
      }
    }
    FUN_0020b9da(param_1,param_2,4);
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    iVar5 = 0;
    if ((*(ushort *)(param_2 + 0x20) & 0x24) == 0) {
LAB_0020c242:
      iVar7 = *(int *)(param_2 + 0x278);
    }
    else {
      iVar7 = *(int *)(param_2 + 0x2c8);
    }
  }
  else {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x200;
    FUN_0020b9da(param_1,param_2,8);
    if (((int)(*(uint *)(param_1 + 0x2c) << 0x17) < 0) && (-1 < *(int *)(param_1 + 0x4c) << 0x18)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffeff;
    }
    iVar5 = FUN_0020b8fe(param_1,param_2);
    uVar4 = DAT_0020c2dc;
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = 0;
    if (DAT_0020c2dc < *(uint *)(param_2 + 0x2a4)) {
      if (*(int *)(param_1 + 0x2c) << 0x16 < 0) {
        iVar5 = FUN_0020b9a8(param_1,0x200);
        if ((((iVar5 == 0) && (iVar5 = FUN_0020b864(param_1,param_2,1,0xb9,2), iVar5 == 0)) &&
            (iVar5 = FUN_0020b864(param_1,param_2,1,0xb9,1), iVar5 == 0)) &&
           ((iVar5 = FUN_0020b864(param_1,param_2,1,0xb7,6), iVar5 == 0 &&
            (iVar5 = FUN_0020b864(param_1,param_2,1,0xb9,3), iVar5 == 0)))) {
          uVar10 = *(ushort *)(param_2 + 0x20) | 0x100;
LAB_0020c1e6:
          *(ushort *)(param_2 + 0x20) = uVar10;
        }
      }
      else {
        if (-1 < *(int *)(param_1 + 0x2c) << 0x17) goto LAB_0020c1ec;
        iVar5 = FUN_0020b864(param_1,param_2,1,0xb9,2);
        if (iVar5 == 0) {
          uVar10 = *(ushort *)(param_2 + 0x20) | 0x80;
          goto LAB_0020c1e6;
        }
      }
    }
    else if (*(uint *)(param_2 + 0x2a4) != 0) {
LAB_0020c1ec:
      if (*(int *)(param_1 + 0x2c) << 0x1c < 0) {
        iVar5 = FUN_0020b864(param_1,param_2,1,0xb9,1);
        if (iVar5 == 0) {
          *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 4;
        }
        if ((*(int *)(param_1 + 0x2c) << 0x18 < 0) &&
           ((int)((uint)*(byte *)(param_2 + 0x2be) << 0x1d) < 0)) {
          FUN_0020b9da(param_1,param_2,8);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    if ((int)((uint)*(ushort *)(param_2 + 0x20) << 0x1d) < 0) {
      *(uint *)(param_2 + 0x10) = uVar4;
      goto LAB_0020c24c;
    }
    if ((*(ushort *)(param_2 + 0x20) & 0x180) == 0) goto LAB_0020c242;
    iVar7 = *(int *)(param_2 + 0x2a4);
  }
  if (iVar7 != -1) {
    *(int *)(param_2 + 0x10) = iVar7;
  }
LAB_0020c24c:
  if (((*(int *)(param_2 + 0x1c) << 0x1f < 0) && ((*(ushort *)(param_2 + 0x20) & 0x140) != 0)) ||
     (iVar5 = FUN_0020b9a8(param_1,0x200), iVar5 == 0)) {
    if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
      FUN_0020b982(param_1,param_2,0);
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
    iVar8 = DAT_0020c2e8;
    *(int *)(param_2 + 4) = iVar7;
    FUN_0020bd54(iVar8 + 0x20c2b4,iVar12,0x10,0x10,0);
    *(undefined2 *)(param_2 + 0x22) = 1;
  }
  return iVar5;
}


// ==== FUN_0020c386 @ 0020c386 ====

undefined4 FUN_0020c386(int param_1,uint param_2,uint param_3,undefined4 param_4)

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
  
  FUN_00215820(param_1,0,0x80);
  auStack_30[3] = *(undefined4 *)(DAT_00210004 + 0x20fdf6);
  auStack_30[2] = *(undefined4 *)(DAT_00210004 + 0x20fdf2);
  auStack_30[1] = *(undefined4 *)(DAT_00210004 + 0x20fdee);
  auStack_30[0] = *(undefined4 *)(DAT_00210004 + 0x20fdea);
  puVar6 = (uint *)auStack_30[param_2];
  iVar8 = *(int *)(DAT_00210008 + 0x20fdf4 + DAT_0021000c);
  if (param_3 == 0xffffffff) {
    param_3 = (uint)*(byte *)(iVar8 + param_2 * 0x18);
  }
  iVar7 = param_2 * 0x98 + DAT_00210010 + 0x20fe22;
  uVar1 = *(undefined1 *)(param_2 * 0x18 + iVar8 + 1);
  FUN_00215820(iVar7,0);
  *(char *)(param_1 + 0x5a) = (char)param_2;
  *(uint **)(param_1 + 0x28) = puVar6;
  *(char *)(param_1 + 0x58) = (char)param_3;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  if ((param_2 & 0xff) == 3) {
    iVar4 = DAT_00210014 + 0x20fe4c;
  }
  else {
    iVar4 = DAT_00210018 + 0x20fe52;
  }
  uVar5 = *(undefined4 *)(iVar4 + param_3 * 4);
  *(int *)(param_1 + 0x74) = iVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = DAT_0020fff8;
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
  uVar5 = DAT_0020fffc;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  if ((*(uint *)(param_1 + 0x2c) & 0x300) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = DAT_00210000;
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
  FUN_0020cc10(param_1);
  *(undefined4 *)(iVar7 + 0x6c) = 0;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined4 *)(iVar7 + 0x80) = 0;
  *(undefined4 *)(iVar7 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xce4;
  FUN_0020e1cc(param_1,1);
  FUN_0020ef7c(param_1,0);
  FUN_0020ef7c(param_1,2);
  uVar3 = *puVar6;
  iVar7 = FUN_002106a8(1);
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
                FUN_002134e8(DAT_002101f8 + 0x21002e);
              }
              puVar6[0x3c] = 0;
              puVar6[0x3e] = 0;
              puVar6[0x3f] = 0;
              puVar6[1] = 0;
              puVar6[0xc] = puVar6[0xc] | 0x80000;
              puVar6[0xc] = puVar6[0xc] & 0xffefffff;
              uVar3 = puVar6[0x2e];
              FUN_002106a8(0x10000000);
              puVar6[0x2e] = uVar3 & 0xefffffff;
              uVar3 = puVar6[0x2e];
              iVar7 = FUN_002106a8(0x8000);
              puVar6[0x2e] = 1 << (iVar7 - 1U & 0xff) | uVar3 & 0xffff7fff;
              FUN_0020dfb8(param_1,(uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8,
                           *(int *)(param_1 + 0x6c) == 0x708);
              FUN_0020ddfc(param_1,0);
              FUN_0020d92c(param_1,1);
              puVar6[0x1c] = puVar6[0x1c] & 0xffff7fff;
              uVar3 = puVar6[1];
              bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8 + 2);
              iVar7 = FUN_002106a8(2);
              puVar6[1] = uVar3 & 0xfffffffd | (uint)bVar2 << (iVar7 - 1U & 0xff);
              uVar3 = puVar6[1];
              bVar2 = *(byte *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 + iVar8 + 3);
              iVar8 = FUN_002106a8(4);
              puVar6[1] = uVar3 & 0xfffffffb | (uint)bVar2 << (iVar8 - 1U & 0xff);
              FUN_0020e352(param_1,0);
              FUN_0020eea0(param_1,1);
              FUN_0020ecd4(param_1,0,DAT_002101f0,0);
              FUN_0020e700(param_1,param_4);
              FUN_0020e73c(param_1,0x20);
              FUN_0020e9b2(param_1,DAT_002101f4);
              FUN_0020d496(param_1);
              FUN_0020e650(param_1,extraout_r1,DAT_002101e8,DAT_002101ec,0);
              if (*(byte *)(param_1 + 0x5a) < 2) {
                uVar3 = puVar6[0xc];
                FUN_002106a8(0x80000);
                puVar6[0xc] = uVar3 & 0xfff7ffff;
                uVar3 = puVar6[0xc];
                FUN_002106a8(0x100000);
                puVar6[0xc] = uVar3 & 0xffefffff;
                uVar3 = puVar6[0xc];
                FUN_002106a8(2);
                puVar6[0xc] = uVar3 & 0xfffffffd;
              }
              return 0;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          thunk_FUN_00215aa8(200);
        } while( true );
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    thunk_FUN_00215aa8(200);
  } while( true );
}


// ==== FUN_0020c3ac @ 0020c3ac ====

uint FUN_0020c3ac(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *local_1c [3];
  undefined4 uStack_10;
  
  piVar6 = (int *)(DAT_0020c3e0 + 0x20c3be + param_1 * 0x80);
  uStack_10 = param_4;
  uVar4 = FUN_0020c386(piVar6,param_1,0xffffffff,param_2);
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar5 = (undefined4 *)(param_1 * 0x2dc + DAT_0020c3e4 + 0x20c3d4);
  local_1c[0] = puVar5;
  FUN_00215820(puVar5,0,0x2dc,uStack_10,piVar6);
  *puVar5 = piVar6;
  puVar5[7] = 0;
  *(ushort *)(puVar5 + 8) = *(ushort *)(puVar5 + 8) | 1;
  FUN_0020b792(piVar6);
  FUN_0020b4c8(piVar6,piVar6[0x13]);
  iVar2 = FUN_0020b47a(piVar6,0,local_1c);
  if (iVar2 == 0) {
    uVar4 = puVar5[7] | 2;
  }
  else {
    uVar4 = FUN_0020b50c(piVar6,0,local_1c);
    if (uVar4 != 0) {
      return uVar4;
    }
    uVar4 = puVar5[7] | 1;
  }
  puVar5[7] = uVar4;
  uVar3 = FUN_0020bd58(piVar6,puVar5,local_1c[0]);
  uVar4 = uVar3;
  if (uVar3 == 0) {
    FUN_0020b90e(piVar6,*(ushort *)(puVar5 + 8) & 0x40,puVar5[4]);
    *piVar6 = (int)puVar5;
    uVar1 = *(ushort *)(puVar5 + 8);
    uVar4 = uVar1 & 0x100;
    if ((uVar1 & 0x100) != 0) {
      FUN_0020b90e(piVar6,uVar1 & 0x40,puVar5[4]);
      uVar4 = uVar3;
    }
  }
  return uVar4;
}


// ==== FUN_0020c3e8 @ 0020c3e8 ====

uint FUN_0020c3e8(uint param_1)

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
  
  iVar6 = DAT_0020c4f0 + 0x20c3fe;
  iVar4 = iVar6 + param_1 * 0x80;
  local_4c = 0;
  FUN_00215820(iVar4,0,0x80);
  uVar5 = (param_1 & 0xf) << 0x18;
  uVar1 = FUN_00210200(param_1,iVar4);
  if (uVar1 == 0) {
    iVar2 = DAT_0020c4f4 + 0x20c434;
    iVar3 = iVar2 + param_1 * 0x2dc;
    FUN_00215820(iVar3,0);
    *(int *)(iVar6 + param_1 * 0x80) = iVar3;
    iVar6 = FUN_0020fd84(iVar4);
    if (iVar6 == 0) {
      uVar5 = uVar5 | 0xa0200000;
    }
    else {
      *(ushort *)(iVar3 + 0x20) = *(ushort *)(iVar3 + 0x20) | 1;
      *(int *)(iVar2 + param_1 * 0x2dc) = iVar4;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      FUN_0020b792(iVar4);
      FUN_0020b4c8(iVar4,*(undefined4 *)(iVar4 + 0x4c));
      FUN_00215820(&local_48,0,0x28);
      local_48 = 0x85;
      local_40 = 4;
      local_28 = 5;
      local_2c = 100;
      local_44 = uVar1;
      iVar6 = FUN_0020b424(iVar4,&local_48);
      local_4c = local_3c;
      if (iVar6 == 0) {
        uVar5 = uVar5 | 0x90000000;
        uVar1 = *(uint *)(iVar3 + 0x1c) | 4;
      }
      else {
        iVar6 = FUN_0020b47a(iVar4,0,&local_4c);
        if (iVar6 == 0) {
          uVar5 = uVar5 | 0xa0000000;
          uVar1 = *(uint *)(iVar3 + 0x1c) | 2;
        }
        else {
          uVar1 = FUN_0020b50c(iVar4,0,&local_4c);
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


// ==== FUN_0020c4f8 @ 0020c4f8 ====

int FUN_0020c4f8(void)

{
  uint uVar1;
  int iVar2;
  
  if (((int)(*DAT_0020c564 << 0x18) < 0) && ((*DAT_0020c564 & 0x40) == 0)) {
    uVar1 = FUN_0020c3e8(0);
    if ((int)uVar1 < 0) {
      if ((int)(uVar1 << 1) < 0) {
        return 0;
      }
      if ((uVar1 & 0x30000000) != 0) {
        return -1;
      }
    }
    iVar2 = FUN_0020c3e8(3);
    if ((iVar2 < 0) && (iVar2 << 1 < 0)) {
      return 3;
    }
  }
  else {
    uVar1 = FUN_0020c3e8(3);
    if ((int)uVar1 < 0) {
      if ((int)(uVar1 << 1) < 0) {
        return 3;
      }
      if ((uVar1 & 0x30000000) != 0) {
        return -1;
      }
    }
    uVar1 = FUN_0020c3e8(0);
    if ((int)uVar1 < 0) {
      return (int)((uVar1 ^ 0x40000000) << 1) >> 0x1f;
    }
  }
  return -1;
}


// ==== FUN_0020c568 @ 0020c568 ====

int FUN_0020c568(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_002134e8(DAT_0020c610 + 0x20c582,DAT_0020c614 + 0x20c584,param_5,param_4,param_3,param_2);
  if ((param_5 == '\x01') && (param_4 == 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_4 == 1;
  }
  FUN_0020e742(param_1,2,0);
  FUN_0020f358(param_1,param_3,bVar3);
  FUN_0020e9a0(param_1,1);
  if (param_5 == '\x01') {
    iVar1 = FUN_0020bc38();
  }
  else {
    iVar1 = FUN_0020bbdc(0,0,param_3,param_2);
  }
  FUN_0020e742(param_1,2,0);
  if (iVar1 != 0) {
    if (param_5 == '\x01') {
      iVar2 = DAT_0020c618 + 0x20c5ee;
    }
    else {
      iVar2 = DAT_0020c61c + 0x20c5f4;
    }
    FUN_002134e8(DAT_0020c620 + 0x20c5fc,DAT_0020c624 + 0x20c5fe,iVar2,iVar1);
  }
  FUN_0020e9a0(param_1,0);
  return iVar1;
}


// ==== FUN_0020c628 @ 0020c628 ====

int FUN_0020c628(undefined4 *param_1,undefined4 *param_2)

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
  iVar2 = FUN_0020c568(*param_1,iVar6,uVar5,uVar1,1,param_2);
  if (iVar2 == 0) {
    FUN_00215820(iVar6,0,uVar7 << 9);
    if ((uVar1 & 0xfffd) == 1) {
      *(undefined1 *)(iVar6 + 0x1ff) = 5;
      iVar2 = FUN_0020c568(*param_1,iVar6,1,5,1,param_2);
      if (iVar2 != 0) {
        iVar6 = DAT_0020c6e4 + 0x20c6aa;
        iVar4 = DAT_0020c6e8 + 0x20c6ac;
        goto LAB_0020c6cc;
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
    iVar2 = FUN_0020c568(uVar3,iVar6,uVar7,uVar1,2,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    iVar6 = DAT_0020c6ec + 0x20c6cc;
    iVar4 = DAT_0020c6f0 + 0x20c6ce;
  }
  else {
    iVar6 = DAT_0020c6dc + 0x20c658;
    iVar4 = DAT_0020c6e0 + 0x20c65a;
  }
LAB_0020c6cc:
  FUN_002134e8(iVar6,iVar4,iVar2);
  return iVar2;
}


// ==== FUN_0020c6f4 @ 0020c6f4 ====

void FUN_0020c6f4(int param_1)

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


// ==== FUN_0020c70e @ 0020c70e ====

ushort FUN_0020c70e(ushort *param_1)

{
  return *param_1 << 8 | *param_1 >> 8;
}


// ==== FUN_0020c716 @ 0020c716 ====

uint FUN_0020c716(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}


// ==== FUN_0020c71c @ 0020c71c ====

undefined4
FUN_0020c71c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00215820(iVar5,0,(uint)(ushort)psVar6[2] << 9,param_4,CONCAT22(psVar6[2],(short)param_1));
  sVar2 = FUN_0020c70e(psVar6);
  sVar1 = *psVar6;
  local_1c._2_2_ = sVar2;
  if (sVar1 == 1) {
    FUN_00215830(iVar5 + 0x1fe,(int)&local_1c + 2,2);
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
      FUN_00215830(iVar5 + 0x1fe,(int)&local_1c + 2,2);
      uVar3 = FUN_0020c70e(psVar6 + 3);
      local_1c = CONCAT22(local_1c._2_2_,uVar3);
      FUN_00215830(iVar5 + 0x1f8,&local_1c,2);
      local_18 = FUN_0020c716(*(undefined4 *)(psVar6 + 4));
      FUN_00215830(iVar5 + 500,&local_18,4);
      FUN_0020c70e(psVar6 + 2);
      FUN_00215830(iVar5 + 0x1fa,&stack0xffffffe2,2);
      FUN_00215830(iVar8,*(undefined4 *)(psVar6 + 8),0x100);
      FUN_0020c6f4(iVar8);
      local_14 = 0x20;
      FUN_00217f98(iVar8,0x11c);
      FUN_00217fcc(iVar5 + 0xc4,&local_14);
      return 0;
    }
    FUN_00215830(iVar5 + 0x1fe,(int)&local_1c + 2,2);
    if (local_1c._2_2_ == 4) {
      local_1c._0_2_ = FUN_0020c70e(psVar6 + 3);
      FUN_00215830(iVar5 + 0x1f8,&local_1c,2);
    }
    iVar5 = iVar5 + 0x1e4;
    uVar4 = 0x10;
  }
  FUN_00215830(iVar5,uVar7,uVar4);
  return 0;
}


// ==== FUN_0020c82c @ 0020c82c ====

undefined4 FUN_0020c82c(undefined4 *param_1)

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
  FUN_00215830(auStack_36,iVar7 + 0x1fc,2);
  sVar2 = FUN_0020c70e(auStack_36);
  psVar8[1] = sVar2;
  if ((ushort)(*psVar8 - 2U) < 2) {
    puVar9 = *(undefined4 **)(psVar8 + 4);
    uVar3 = FUN_0020c716(iVar7 + 500);
    *puVar9 = uVar3;
  }
  if ((*psVar8 == 2) || (*psVar8 == 4)) {
    iVar4 = FUN_00215842(*(undefined4 *)(psVar8 + 6),iVar7 + 0x1e4,0x10);
    if (iVar4 != 0) {
      FUN_002134e8(DAT_0020c8e0 + 0x20c888,DAT_0020c8e4 + 0x20c88a);
      return 0xffffffff;
    }
    local_34 = 0x20;
    FUN_00217f98(iVar7 + 0xe4,0x11c);
    FUN_00217fcc(abStack_30,&local_34);
    bVar6 = 0;
    iVar4 = 0;
    do {
      iVar5 = iVar7 + iVar4;
      pbVar1 = abStack_30 + iVar4;
      iVar4 = iVar4 + 1;
      bVar6 = bVar6 | *(byte *)(iVar5 + 0xc4) ^ *pbVar1;
    } while (iVar4 != 0x20);
    if (bVar6 != 0) {
      FUN_002134e8(DAT_0020c8e8 + 0x20c8d2,DAT_0020c8ec + 0x20c8d4);
      return 0xfffffffe;
    }
  }
  return 0;
}


// ==== FUN_0020c8f0 @ 0020c8f0 ====

uint FUN_0020c8f0(uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if ((int)(param_1 << 0x18) < 0) {
      iVar1 = DAT_0020c924 + 0x20c90c;
    }
    else {
      iVar1 = DAT_0020c928 + 0x20c912;
    }
    FUN_002134e8(DAT_0020c92c + 0x20c918,DAT_0020c930 + 0x20c91a,
                 *(undefined4 *)(DAT_0020c920 + 0x20c902 + (param_1 & 7) * 4),iVar1);
  }
  return param_1;
}


// ==== FUN_0020c934 @ 0020c934 ====

int FUN_0020c934(undefined4 param_1)

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
  
  FUN_0020b400(0);
  iVar1 = FUN_0020b410(0);
  FUN_00215820(&local_230,0,0x18);
  FUN_0021c484(auStack_240,0x10);
  local_230 = 2;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_220 = 0;
  local_21c = 0;
  local_228 = param_1;
  local_224 = auStack_240;
  iVar2 = FUN_0020bb14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    iVar3 = DAT_0020ca18 + 0x20c9a6;
    FUN_002134e8(DAT_0020ca1c + 0x20c9a8,iVar3);
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020c71c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020c628(iVar1,&local_248);
      if (iVar2 == 0) {
        iVar2 = FUN_0020c82c(&local_248);
        FUN_002134e8(DAT_0020ca28 + 0x20c9fa,iVar3,local_22e);
        if (iVar2 == 0) {
          iVar2 = FUN_0020c8f0(local_22e);
        }
      }
      else {
        FUN_002134e8(DAT_0020ca24 + 0x20c9e2,iVar3,iVar2);
      }
    }
    else {
      FUN_002134e8(DAT_0020ca20 + 0x20c9c6,iVar3,iVar2);
    }
  }
  else {
    FUN_002134e8(DAT_0020ca10 + 0x20c998,DAT_0020ca14 + 0x20c99a,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020ca3c @ 0020ca3c ====

int FUN_0020ca3c(undefined4 param_1)

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
  
  FUN_0020b400(0);
  iVar1 = FUN_0020b410(0);
  FUN_00215820(&local_230,0,0x18);
  FUN_0021c484(auStack_240,0x10);
  local_230 = 4;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_228 = 0;
  local_220 = 0;
  local_21c = 0;
  local_224 = auStack_240;
  iVar2 = FUN_0020bb14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020c71c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020c628(iVar1,&local_248);
      if (iVar2 == 0) {
        iVar2 = FUN_0020c82c(&local_248);
        if ((iVar2 == 0) && (iVar2 = FUN_0020c8f0(local_22e), iVar2 == 0)) {
          FUN_00215830(param_1,auStack_134,0x100);
          FUN_0020c6f4(param_1);
        }
      }
      else {
        FUN_002134e8(DAT_0020cb28 + 0x20cae0,DAT_0020cb2c + 0x20cae2,iVar2);
      }
    }
    else {
      FUN_002134e8(DAT_0020cb20 + 0x20cac2,DAT_0020cb24 + 0x20cac4,iVar2);
    }
  }
  else {
    FUN_002134e8(DAT_0020cb18 + 0x20caa0,DAT_0020cb1c + 0x20caa2,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020cb30 @ 0020cb30 ====

int FUN_0020cb30(undefined4 param_1,undefined4 param_2)

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
  FUN_0020b400(0);
  iVar1 = FUN_0020b410(0);
  FUN_00215820(&local_230,0,0x18);
  FUN_0021c484(auStack_240,0x10);
  local_230 = 3;
  local_22e = 0;
  local_22c = 1;
  local_22a = 0;
  local_21c = 0;
  local_228 = &local_24c;
  local_224 = auStack_240;
  local_220 = param_1;
  iVar2 = FUN_0020bb14(iVar1,*(byte *)(iVar1 + 0xff) & 0xf8 | 3);
  if (iVar2 == 0) {
    local_244 = auStack_218;
    local_248 = &local_230;
    iVar2 = FUN_0020c71c(&local_248);
    if (iVar2 == 0) {
      iVar2 = FUN_0020c628(iVar1,&local_248);
      if (iVar2 == 0) {
        FUN_0020c82c(&local_248);
        iVar2 = FUN_0020c8f0(local_22e);
      }
      else {
        FUN_002134e8(DAT_0020cc08 + 0x20cbdc,DAT_0020cc0c + 0x20cbde,iVar2);
      }
    }
    else {
      FUN_002134e8(DAT_0020cc00 + 0x20cbbe,DAT_0020cc04 + 0x20cbc0,iVar2);
    }
  }
  else {
    FUN_002134e8(DAT_0020cbf8 + 0x20cb9a,DAT_0020cbfc + 0x20cb9c,iVar2);
  }
  return iVar2;
}


// ==== FUN_0020cc10 @ 0020cc10 ====

void FUN_0020cc10(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x5a);
  iVar5 = *(int *)(param_1 + 0x74);
  uVar2 = uVar1 * 0x38 + DAT_0020cc7c + 0x20cc20;
  uVar3 = DAT_0020cc80 + 0x20cc2a;
  iVar4 = uVar3 + uVar1 * 0x40;
  FUN_00215820(uVar2,0,0x38,uVar1,param_1,param_2);
  FUN_00215820(iVar4,0,0x40);
  if ((uVar3 & 0xf) != 0) {
    FUN_002134e8(DAT_0020cc84 + 0x20cc4e,DAT_0020cc88 + 0x20cc52,iVar4,DAT_0020cc8c + 0x20cc54,0x43)
    ;
  }
  if ((uVar2 & 0xf) != 0) {
    FUN_002134e8(DAT_0020cc90 + 0x20cc68,DAT_0020cc94 + 0x20cc6c,uVar2,DAT_0020cc98 + 0x20cc6e,0x44)
    ;
  }
  *(int *)(iVar5 + 0x8c) = iVar4;
  *(uint *)(iVar5 + 0x88) = uVar2;
  return;
}


// ==== FUN_0020cc9c @ 0020cc9c ====

void FUN_0020cc9c(void)

{
  return;
}


// ==== FUN_0020cc9e @ 0020cc9e ====

byte FUN_0020cc9e(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    bVar2 = bVar2 + *(char *)(param_1 + iVar1);
  }
  return ~bVar2;
}


// ==== FUN_0020ccb8 @ 0020ccb8 ====

uint FUN_0020ccb8(int param_1,int param_2,undefined4 param_3)

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
      FUN_00215820(uVar4,0,iVar5,iVar3,param_1,param_2,param_3);
      uVar2 = iVar5 + -0x38 + uVar4;
      *(uint *)(uVar2 + 4) = iVar5 + -0x1c + uVar4;
      for (; uVar2 != uVar4; uVar2 = uVar2 - 0x1c) {
        *(uint *)(uVar2 - 0x18) = uVar2;
      }
      if ((uVar4 & 0xf) != 0) {
        FUN_002134e8(DAT_0020cd34 + 0x20cd06,DAT_0020cd38 + 0x20cd0a,uVar4,DAT_0020cd3c + 0x20cd0c,
                     0x76);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ==== FUN_0020cd40 @ 0020cd40 ====

byte * FUN_0020cd40(int param_1,int param_2,undefined4 param_3)

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
      FUN_00215820(pbVar6,0,param_2 * 0x10,iVar4,param_1,param_2,param_3);
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
        FUN_002134e8(DAT_0020cdc8 + 0x20cd90,DAT_0020cdcc + 0x20cd94,pbVar6,DAT_0020cdd0 + 0x20cd96,
                     0x97);
      }
    }
  }
  else {
    pbVar6 = (byte *)0x0;
  }
  return pbVar6;
}


// ==== FUN_0020cdd4 @ 0020cdd4 ====

void FUN_0020cdd4(int param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if ((param_3 & 0xf) != 0) {
    FUN_002134e8(DAT_0020ce18 + 0x20cdec,DAT_0020ce1c + 0x20cdf0,param_3,DAT_0020ce20 + 0x20cdf2,
                 0xa3,param_2);
  }
  *(uint *)(param_2 + 8) = param_3;
  *param_2 = *param_2 | 3;
  if (*(int *)(iVar2 + 0x10) << 0x1f < 0) {
    for (; param_3 != 0; param_3 = *(uint *)(param_3 + 4)) {
      uVar1 = FUN_0020cc9e(param_3,0x10);
      *(undefined1 *)(param_3 + 1) = uVar1;
    }
  }
  return;
}


// ==== FUN_0020ce24 @ 0020ce24 ====

void FUN_0020ce24(int param_1,uint param_2,int param_3)

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
    FUN_002134e8(DAT_0020ce84 + 0x20ce3e,DAT_0020ce88 + 0x20ce42,param_2,DAT_0020ce8c + 0x20ce44,
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
        uVar1 = FUN_0020cc9e(param_2,0x10,iVar2,iVar3,param_1);
        *(undefined1 *)(param_2 + 1) = uVar1;
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
    }
  }
  return;
}


// ==== FUN_0020ce90 @ 0020ce90 ====

void FUN_0020ce90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  return;
}


// ==== FUN_0020cea2 @ 0020cea2 ====

int FUN_0020cea2(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  FUN_0020cc9c(param_2,param_3);
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
LAB_0020cef6:
      return 4 - iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  goto LAB_0020cef6;
}


// ==== FUN_0020cefe @ 0020cefe ====

void FUN_0020cefe(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    FUN_0020cc9c(param_3,param_5);
  }
  else {
    uVar1 = FUN_0020cea2(*(undefined4 *)(param_2 + 0x18));
    *(undefined4 *)(param_2 + 0x10) = uVar1;
  }
  FUN_0020e2c0(param_1);
  *puVar2 = *puVar2 & 0xfffffff7;
  return;
}


// ==== FUN_0020cf46 @ 0020cf46 ====

void FUN_0020cf46(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(iVar3 + 0x98);
  iVar1 = FUN_002106a8(1);
  *(uint *)(iVar3 + 0x98) = uVar2 & 0xfffffffe | 1 << (iVar1 - 1U & 0xff);
  return;
}


// ==== FUN_0020cf76 @ 0020cf76 ====

void FUN_0020cf76(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  uVar2 = puVar3[0x26];
  iVar1 = FUN_002106a8(2);
  puVar3[0x26] = uVar2 & 0xfffffffd | 1 << (iVar1 - 1U & 0xff);
  do {
  } while ((int)(puVar3[0x27] << 0x1f) < 0);
  *puVar3 = *puVar3 | 8;
  FUN_0020ce90(param_1);
  return;
}


// ==== FUN_0020cfbe @ 0020cfbe ====

undefined4 FUN_0020cfbe(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  do {
    iVar1 = FUN_0020d498(param_1,0xf778);
    if ((iVar1 == 0) || (iVar1 << 0x11 < 0)) {
LAB_0020d038:
      uVar2 = 1;
      goto LAB_0020d03e;
    }
    if (iVar1 << 0x10 < 0) goto LAB_0020cfdc;
    if (iVar1 << 0x16 < 0) goto LAB_0020d038;
    if (iVar1 << 0x15 < 0) goto LAB_0020cfdc;
    if (iVar1 << 0x1b < 0) goto LAB_0020d038;
    if (iVar1 << 0x1a < 0) goto LAB_0020cfdc;
    if ((*(char *)(param_1 + 0x5a) == '\x03') && (iVar1 << 8 < 0)) {
      uVar2 = 0xd;
      goto LAB_0020d03e;
    }
    if (iVar1 << 0x1c < 0) {
      *(uint *)(iVar4 + 0x40) = puVar3[0x20];
      FUN_0020d904();
    }
  } while ((((*(char *)(iVar4 + 0x44) == '\0') || (*(char *)(iVar4 + 0x30) != '\x02')) ||
           (-1 < iVar1 << 0x12)) && (-1 < iVar1 << 0x13));
  while ((puVar3[3] & 0x60000) == 0) {
    if ((puVar3[0x27] & 1) == 0) {
      return 0;
    }
  }
LAB_0020cfdc:
  uVar2 = 2;
LAB_0020d03e:
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
    thunk_FUN_00215aa8(200);
  } while( true );
}


// ==== FUN_0020d068 @ 0020d068 ====

void FUN_0020d068(void)

{
  return;
}


// ==== FUN_0020d06a @ 0020d06a ====

undefined4 FUN_0020d06a(int param_1,uint *param_2)

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
    iVar4 = FUN_002106a8(0x400);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xfffffbff | 1 << (iVar4 - 1U & 0xff);
    *(undefined4 *)(iVar6 + 0xa8) = puVar7[1];
    uVar9 = *(uint *)(iVar6 + 0x98);
    bVar1 = *(byte *)((int)param_2 + 0x21);
    iVar4 = FUN_002106a8(0x7000);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xffff8fff | (uint)bVar1 << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98) & 0xfffffeff;
    FUN_002106a8(0x100);
  }
  else {
    if ((char)param_2[8] != '\x03') {
      return 0;
    }
    uVar5 = *param_2;
    iVar2 = FUN_0020ccb8(param_1,1);
    *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) & 0xfe;
    iVar3 = FUN_0020cd40(param_1,uVar9);
    iVar4 = iVar3;
    for (uVar8 = 0; uVar8 != uVar9; uVar8 = uVar8 + 1) {
      bVar1 = (byte)uVar5;
      *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) & 0xf9 | bVar1 & 2 | bVar1 & 4;
      *(undefined4 *)(iVar4 + 8) = *puVar7;
      *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xff000000 | puVar7[1] & 0xffffff;
      puVar7 = puVar7 + 2;
      iVar4 = iVar4 + 0x10;
    }
    FUN_0020cdd4(param_1,iVar2,iVar3);
    FUN_0020cc9c(iVar3,uVar8 << 4);
    FUN_0020ce24(param_1,iVar2,1);
    FUN_0020d068(param_1);
    FUN_0020cc9c(iVar2,0x38);
    *(int *)(iVar6 + 0x90) = iVar2;
    uVar9 = *(uint *)(iVar6 + 0x9c);
    iVar4 = FUN_002106a8(2);
    *(uint *)(iVar6 + 0x9c) = uVar9 & 0xfffffffd | (uVar5 & 1) << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98);
    bVar1 = *(byte *)((int)param_2 + 0x21);
    iVar4 = FUN_002106a8(0x7000);
    *(uint *)(iVar6 + 0x98) = uVar9 & 0xffff8fff | (uint)bVar1 << (iVar4 - 1U & 0xff);
    uVar9 = *(uint *)(iVar6 + 0x98);
    iVar4 = FUN_002106a8(0x100);
    uVar9 = uVar9 & 0xfffffeff | 1 << (iVar4 - 1U & 0xff);
  }
  *(uint *)(iVar6 + 0x98) = uVar9;
  return 0;
}


// ==== FUN_0020d238 @ 0020d238 ====

int FUN_0020d238(int param_1,int param_2,int *param_3)

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
  FUN_0020e6e0(param_1,uVar11);
  FUN_0020e650(param_1,extraout_r1,param_3[2] * DAT_0020d408,0,0);
  local_48 = (ulonglong)uVar11 * (ulonglong)uVar5;
  iVar6 = (int)((ulonglong)local_48 >> 0x20);
  uVar3 = uVar5;
  local_40 = local_48;
  if (*(char *)(iVar4 + 0x30) != '\x02') goto LAB_0020d374;
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
    uVar3 = FUN_002017c8(uVar7,uVar9,uVar11,0);
LAB_0020d374:
    do {
      do {
        if (local_48._4_4_ == 0 && (uint)local_48 == 0) {
          return 0;
        }
        FUN_0020e6ea(param_1,uVar3);
        FUN_0020cefe(param_1,iVar4 + 0x10,iVar10,local_40._4_4_,(uint)local_40,local_40._4_4_);
        iVar6 = FUN_0020e754(param_1,param_2);
        FUN_0020d06a(param_1,iVar4 + 0x10);
        if (iVar6 != 0) {
          FUN_0020ce90();
          iVar2 = 0;
          iVar1 = iVar6;
          goto LAB_0020d3ea;
        }
        iVar1 = FUN_0020e8c8(param_1,param_2);
        iVar2 = iVar6;
        if (iVar1 == 2) {
          if ((*(uint *)(iVar8 + 0x34) & 0x1800) != 0) {
            FUN_0020f2e0(param_1,1);
          }
          if (*(char *)(param_1 + 0x5c) == '\x02') goto LAB_0020d3ea;
          iVar1 = FUN_0020efb4(param_1,param_2);
          if (iVar1 != 0) {
            FUN_0020ce90(param_1);
            goto LAB_0020d3ea;
          }
        }
        else if (iVar1 != 0) goto LAB_0020d3ea;
        FUN_0020cf46(param_1);
        iVar2 = FUN_0020cfbe(param_1,0xffffffff);
        FUN_0020cf76(param_1);
        FUN_0020cc9c(iVar10,uVar11 * uVar3);
        iVar1 = iVar2;
        if (iVar2 != 0) {
LAB_0020d3ea:
          FUN_0020e31c(param_1);
          if (iVar2 != 0) {
            FUN_0020f2e0(param_1,1);
            iVar1 = iVar2;
          }
          return iVar1;
        }
        if (((1 < uVar5) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_0020f2a8(param_1,param_2), iVar6 != 0)) {
          FUN_0020e31c(param_1);
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


// ==== FUN_0020d40c @ 0020d40c ====

void FUN_0020d40c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
    local_38 = 0x11;
  }
  else {
    local_38 = 0x12;
  }
  if (*(int *)(*(int *)(param_1 + 0x74) + 4) << 0x1e < 0) {
    local_38 = 0x12;
  }
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x90) != 0) {
    local_38 = 0x12;
  }
  local_18 = 0;
  local_1c = 100;
  local_3c = 100;
  local_30 = 1;
  local_44 = param_2;
  local_40 = param_4;
  local_34 = param_3;
  FUN_0020d238(param_1,&local_38,&local_44);
  return;
}


// ==== FUN_0020d450 @ 0020d450 ====

void FUN_0020d450(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  FUN_0020d238(param_1,&local_38,&local_44);
  return;
}


// ==== FUN_0020d496 @ 0020d496 ====

void FUN_0020d496(void)

{
  return;
}


// ==== FUN_0020d498 @ 0020d498 ====

uint FUN_0020d498(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  iVar3 = DAT_0020d4ec;
  while( true ) {
    uVar4 = puVar2[3];
    uVar5 = uVar4 & param_2;
    if (uVar5 != 0) break;
    if (iVar3 == 0) goto LAB_0020d4bc;
    iVar3 = iVar3 + -1;
    thunk_FUN_00215ac4(1);
  }
  if (iVar3 != 0) {
LAB_0020d4e2:
    puVar2[3] = uVar5;
    return uVar4;
  }
LAB_0020d4bc:
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
      if (-1 < (int)(*puVar2 << 0x1d)) goto LAB_0020d4e2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    thunk_FUN_00215aa8(200);
  } while( true );
}


// ==== FUN_0020d904 @ 0020d904 ====

void FUN_0020d904(void)

{
  return;
}


// ==== FUN_0020d906 @ 0020d906 ====

void FUN_0020d906(void)

{
  return;
}


// ==== FUN_0020d908 @ 0020d908 ====

void FUN_0020d908(void)

{
  return;
}


// ==== FUN_0020d90a @ 0020d90a ====

void FUN_0020d90a(uint param_1)

{
  FUN_0020d904(((param_1 & 0x7fff) >> 0xe) << 0x16 | ((param_1 & 0xffff) >> 0xf) << 0x17 |
               param_1 & 0x1fff | ((param_1 & 0x3fff) >> 0xd) << 0x13);
  return;
}


// ==== FUN_0020d92c @ 0020d92c ====

void FUN_0020d92c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = DAT_0020ddf8;
  puVar2 = DAT_0020ddf4;
  puVar6 = DAT_0020db8c;
  puVar1 = DAT_0020db88;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    puVar6 = DAT_0020db88 + 8;
    uVar5 = *DAT_0020db88;
    iVar4 = FUN_002106a8(0x800);
    *puVar1 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar1;
    iVar4 = FUN_002106a8(0x800);
    *puVar1 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(8);
    *puVar6 = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x80);
    *puVar6 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x8000);
    *puVar6 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_002106a8(8);
    puVar1[0xc] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x80);
    puVar1[0xc] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x800);
    puVar1[0xc] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x8000);
    puVar1[0xc] = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    return;
  case 1:
    uVar5 = *DAT_0020db8c;
    iVar4 = FUN_002106a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_002106a8(8);
    puVar6[8] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_002106a8(0x80);
    puVar6[8] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_002106a8(0x800);
    puVar6[8] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar6[8];
    iVar4 = FUN_002106a8(0x8000);
    uVar5 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    break;
  case 2:
    uVar5 = *DAT_0020ddf4;
    iVar4 = FUN_002106a8(0x800);
    *puVar2 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar2;
    iVar4 = FUN_002106a8(0x800);
    *puVar2 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_002106a8(8);
    puVar2[8] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_002106a8(0x80);
    puVar2[8] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_002106a8(0x800);
    puVar2[8] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar2[8];
    iVar4 = FUN_002106a8(0x8000);
    uVar5 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    puVar6 = puVar2;
    break;
  case 3:
    puVar6 = DAT_0020ddf8 + 8;
    uVar5 = *DAT_0020ddf8;
    iVar4 = FUN_002106a8(0x800);
    *puVar3 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar3;
    iVar4 = FUN_002106a8(0x800);
    *puVar3 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(8);
    *puVar6 = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x80);
    *puVar6 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x800);
    *puVar6 = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6;
    iVar4 = FUN_002106a8(0x8000);
    *puVar6 = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_002106a8(8);
    puVar3[0xc] = uVar5 & 0xfffffff7 | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x80);
    puVar3[0xc] = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x800);
    puVar3[0xc] = uVar5 & 0xfffff7ff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x8000);
    puVar3[0xc] = uVar5 & 0xffff7fff | param_2 << (iVar4 - 1U & 0xff);
    uVar5 = puVar3[0x10];
    iVar4 = FUN_002106a8(0x80);
    uVar5 = uVar5 & 0xffffff7f | param_2 << (iVar4 - 1U & 0xff);
    break;
  default:
    goto switchD_0020d93c_default;
  }
  puVar6[8] = uVar5;
switchD_0020d93c_default:
  return;
}


// ==== FUN_0020ddfc @ 0020ddfc ====

void FUN_0020ddfc(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = DAT_0020dfb4;
  puVar2 = DAT_0020dfb0;
  puVar1 = DAT_0020dfac;
  puVar6 = DAT_0020dfa8;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    uVar5 = *DAT_0020dfa8;
    iVar4 = FUN_002106a8(0xf);
    *puVar6 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar6 & 0xfffffc0f;
    FUN_002106a8(0x3f0);
    break;
  case 1:
    uVar5 = *DAT_0020dfac;
    puVar6 = puVar1;
    if (param_2 == 0) {
      iVar4 = FUN_002106a8(0xf);
      *puVar1 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar1;
      iVar4 = FUN_002106a8(0x3f0);
      uVar5 = uVar5 & 0xfffffc0f | 0xc << (iVar4 - 1U & 0xff);
    }
    else {
      iVar4 = FUN_002106a8(0xf);
      *puVar1 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar1 & 0xfffffc0f;
      FUN_002106a8(0x3f0);
    }
    break;
  case 2:
    uVar5 = *DAT_0020dfb0;
    puVar6 = puVar2;
    if (param_2 == 0) {
      FUN_002106a8(0xf);
      *puVar2 = uVar5 & 0xfffffff0;
      uVar5 = *puVar2;
      iVar4 = FUN_002106a8(0x3f0);
      uVar5 = uVar5 & 0xfffffc0f | 0xc << (iVar4 - 1U & 0xff);
    }
    else {
      iVar4 = FUN_002106a8(0xf);
      *puVar2 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
      uVar5 = *puVar2 & 0xfffffc0f;
      FUN_002106a8(0x3f0);
    }
    break;
  case 3:
    uVar5 = *DAT_0020dfb4;
    iVar4 = FUN_002106a8(0xf);
    *puVar3 = uVar5 & 0xfffffff0 | 10 << (iVar4 - 1U & 0xff);
    uVar5 = *puVar3 & 0xfffffc0f;
    FUN_002106a8(0x3f0);
    puVar6 = puVar3;
    break;
  default:
    goto switchD_0020de0a_default;
  }
  *puVar6 = uVar5;
switchD_0020de0a_default:
  return;
}


// ==== FUN_0020dfb8 @ 0020dfb8 ====

void FUN_0020dfb8(int param_1,int param_2,int param_3)

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
  
  puVar6 = DAT_0020e1c0;
  puVar5 = DAT_0020e1b4;
  puVar4 = DAT_0020e1a8;
  puVar11 = DAT_0020e19c;
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
      uVar8 = *DAT_0020e19c;
      iVar7 = FUN_002106a8(7);
      puVar4 = DAT_0020e1a0;
      *puVar11 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_002106a8(7);
      puVar11 = DAT_0020e1a4;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_002106a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 1:
      uVar8 = *DAT_0020e1a8;
      iVar7 = FUN_002106a8(7);
      puVar5 = DAT_0020e1ac;
      *puVar4 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar5;
      iVar7 = FUN_002106a8(7);
      puVar11 = DAT_0020e1b0;
      *puVar5 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_002106a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 2:
      uVar8 = *DAT_0020e1b4;
      iVar7 = FUN_002106a8(7);
      puVar4 = DAT_0020e1b8;
      *puVar5 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_002106a8(7);
      puVar11 = DAT_0020e1bc;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_002106a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    case 3:
      uVar8 = *DAT_0020e1c0;
      iVar7 = FUN_002106a8(7);
      puVar4 = DAT_0020e1c4;
      *puVar6 = uVar12 << (iVar7 - 1U & 0xff) | uVar8 & 0xfffffff8;
      uVar12 = *puVar4;
      iVar7 = FUN_002106a8(7);
      puVar11 = DAT_0020e1c8;
      *puVar4 = uVar12 & 0xfffffff8 | uVar10 << (iVar7 - 1U & 0xff);
      uVar10 = *puVar11;
      iVar7 = FUN_002106a8(7);
      uVar9 = uVar10 & 0xfffffff8 | uVar9 << (iVar7 - 1U & 0xff);
      break;
    default:
      goto switchD_0020dfe4_default;
    }
    *puVar11 = uVar9;
  }
switchD_0020dfe4_default:
  return;
}


// ==== FUN_0020e1cc @ 0020e1cc ====

void FUN_0020e1cc(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = DAT_0020e2bc;
  puVar1 = DAT_0020e2b8;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    uVar3 = *DAT_0020e2bc;
    iVar4 = FUN_002106a8(0x80);
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    uVar3 = uVar3 & 0xffffff7f | iVar2 << (iVar4 - 1U & 0xff);
    break;
  case 2:
    uVar3 = *DAT_0020e2bc;
    iVar4 = FUN_002106a8(0x800000);
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    *puVar5 = uVar3 & 0xff7fffff | iVar2 << (iVar4 - 1U & 0xff);
  case 1:
    puVar5 = DAT_0020e2bc;
    uVar3 = *DAT_0020e2bc;
    iVar4 = FUN_002106a8(0x8000);
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
    uVar3 = *DAT_0020e2b8;
    iVar2 = FUN_002106a8(0x80);
    *puVar1 = uVar3 & 0xffffff7f | iVar4 << (iVar2 - 1U & 0xff);
    uVar3 = *puVar1;
    iVar2 = FUN_002106a8(0x8000);
    uVar3 = uVar3 & 0xffff7fff | iVar4 << (iVar2 - 1U & 0xff);
    puVar5 = puVar1;
    break;
  default:
    goto switchD_0020e1da_default;
  }
  *puVar5 = uVar3;
switchD_0020e1da_default:
  return;
}


// ==== FUN_0020e2c0 @ 0020e2c0 ====

void FUN_0020e2c0(int param_1)

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
    thunk_FUN_00215aa8(200);
  } while( true );
}


// ==== FUN_0020e2f0 @ 0020e2f0 ====

void FUN_0020e2f0(int param_1)

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
    thunk_FUN_00215aa8(200);
  } while( true );
}


// ==== FUN_0020e31c @ 0020e31c ====

void FUN_0020e31c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_0020e2f0();
  FUN_0020e2c0(param_1);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  return;
}


// ==== FUN_0020e33c @ 0020e33c ====

void FUN_0020e33c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar3 = DAT_0020d900;
  puVar2 = DAT_0020d7b4;
  puVar7 = DAT_0020d7b0;
  puVar1 = DAT_0020d7ac;
  if ((param_2 == 1) || (param_2 != 2)) {
    iVar5 = 3;
  }
  else {
    iVar5 = 4;
  }
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    puVar7 = DAT_0020d7ac + 8;
    uVar6 = *DAT_0020d7ac;
    iVar4 = FUN_002106a8(0x700);
    *puVar1 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(7);
    *puVar7 = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x70);
    *puVar7 = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x7000);
    *puVar7 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_002106a8(7);
    puVar1[0xc] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x70);
    puVar1[0xc] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x700);
    puVar1[0xc] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar1[0xc];
    iVar4 = FUN_002106a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    break;
  case 1:
    uVar6 = *DAT_0020d7b0;
    iVar4 = FUN_002106a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_002106a8(7);
    puVar7[8] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_002106a8(0x70);
    puVar7[8] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_002106a8(0x700);
    puVar7[8] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar7[8];
    iVar4 = FUN_002106a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    goto LAB_0020d7a8;
  case 2:
    uVar6 = *DAT_0020d7b4;
    iVar4 = FUN_002106a8(0x700);
    *puVar2 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_002106a8(7);
    puVar2[8] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_002106a8(0x70);
    puVar2[8] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_002106a8(0x700);
    puVar2[8] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar2[8];
    iVar4 = FUN_002106a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    puVar7 = puVar2;
LAB_0020d7a8:
    puVar7[8] = uVar6;
    return;
  case 3:
    puVar7 = DAT_0020d900 + 8;
    uVar6 = *DAT_0020d900;
    iVar4 = FUN_002106a8(0x700);
    *puVar3 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(7);
    *puVar7 = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x70);
    *puVar7 = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x700);
    *puVar7 = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = *puVar7;
    iVar4 = FUN_002106a8(0x7000);
    *puVar7 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_002106a8(7);
    puVar3[0xc] = uVar6 & 0xfffffff8 | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x70);
    puVar3[0xc] = uVar6 & 0xffffff8f | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x700);
    puVar3[0xc] = uVar6 & 0xfffff8ff | iVar5 << (iVar4 - 1U & 0xff);
    uVar6 = puVar3[0xc];
    iVar4 = FUN_002106a8(0x7000);
    uVar6 = uVar6 & 0xffff8fff | iVar5 << (iVar4 - 1U & 0xff);
    break;
  default:
    goto switchD_0020d4fc_default;
  }
  puVar7[4] = uVar6;
switchD_0020d4fc_default:
  return;
}


// ==== FUN_0020e352 @ 0020e352 ====

void FUN_0020e352(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0x5a) == '\x03') {
    uVar2 = *puVar3;
    iVar1 = FUN_002106a8(0x1800000);
    *puVar3 = uVar2 & 0xfe7fffff | param_2 << (iVar1 - 1U & 0xff);
    *(int *)(iVar4 + 0x7c) = param_2;
    FUN_002106a8(0x1800000);
  }
  return;
}


// ==== FUN_0020e39a @ 0020e39a ====

void FUN_0020e39a(int param_1,int param_2,uint param_3,undefined4 param_4)

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
      FUN_002106a8(1);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffffe;
      uVar2 = *(uint *)(iVar3 + 0x208);
      FUN_002106a8(0x200);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffdff;
    }
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_002106a8(2);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffffd | param_3 << (iVar1 - 1U & 0xff);
      *(uint *)(iVar4 + 0x78) = param_3;
    }
    break;
  case 1:
    uVar2 = *(uint *)(iVar3 + 0x208);
    if (param_2 == 0) {
      FUN_002106a8(0x10);
      *(uint *)(iVar3 + 0x208) = uVar2 & 0xffffffef;
      if (param_3 < 2) {
        uVar2 = *(uint *)(iVar3 + 4);
        FUN_002106a8(0x200);
        *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff;
        uVar2 = *(uint *)(iVar3 + 4);
        iVar1 = FUN_002106a8(0x100);
        uVar2 = uVar2 & 0xfffffeff | param_3 << (iVar1 - 1U & 0xff);
      }
      else {
        if (param_3 != 2) {
          return;
        }
        uVar2 = *(uint *)(iVar3 + 4) & 0xfffffbff;
        FUN_002106a8(0x400);
      }
      goto LAB_0020e4de;
    }
    iVar1 = FUN_002106a8(0x10);
    *(uint *)(iVar3 + 0x208) = 1 << (iVar1 - 1U & 0xff) | uVar2 & 0xffffffef;
    if (1 < param_3) {
      return;
    }
    uVar2 = *(uint *)(iVar3 + 0x208);
    iVar1 = FUN_002106a8(8);
    *(uint *)(iVar3 + 0x208) = uVar2 & 0xfffffff7 | param_3 << (iVar1 - 1U & 0xff);
    goto LAB_0020e4e0;
  case 2:
    if (param_2 == 0) {
      FUN_0020e352(param_1,0);
      *(undefined4 *)(iVar4 + 0x7c) = 0;
    }
    else {
      FUN_0020e352(param_1,2);
      *(undefined4 *)(iVar4 + 0x7c) = 2;
    }
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      FUN_002106a8(0x20);
      *(uint *)(iVar3 + 4) = uVar2 & 0xffffffdf;
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_002106a8(4);
      uVar2 = uVar2 & 0xfffffffb | param_3 << (iVar1 - 1U & 0xff);
    }
    else {
      if (param_3 != 2) {
        return;
      }
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_002106a8(0x20);
      *(uint *)(iVar3 + 4) = uVar2 & 0xffffffdf | 1 << (iVar1 - 1U & 0xff);
      uVar2 = *(uint *)(iVar3 + 4) & 0xfeffffff;
      FUN_002106a8(0x1000000);
    }
    *(uint *)(iVar3 + 4) = uVar2;
    *(uint *)(iVar4 + 0x70) = param_3;
    break;
  case 3:
    uVar2 = *(uint *)(iVar3 + 0x208);
    FUN_002106a8(0x10);
    *(uint *)(iVar3 + 0x208) = uVar2 & 0xffffffef;
    if (param_3 < 2) {
      uVar2 = *(uint *)(iVar3 + 4);
      FUN_002106a8(0x200);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff;
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_002106a8(0x100);
      uVar2 = uVar2 & 0xfffffeff | param_3 << (iVar1 - 1U & 0xff);
    }
    else {
      if (param_3 != 2) {
        return;
      }
      uVar2 = *(uint *)(iVar3 + 4);
      iVar1 = FUN_002106a8(0x200);
      *(uint *)(iVar3 + 4) = uVar2 & 0xfffffdff | 1 << (iVar1 - 1U & 0xff);
      uVar2 = *(uint *)(iVar3 + 4) & 0xffffbfff;
      FUN_002106a8(0x4000);
    }
LAB_0020e4de:
    *(uint *)(iVar3 + 4) = uVar2;
LAB_0020e4e0:
    *(uint *)(iVar4 + 0x74) = param_3;
  }
  return;
}


// ==== FUN_0020e650 @ 0020e650 ====

void FUN_0020e650(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

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
    iVar1 = FUN_00201700(DAT_0020e6dc);
    iVar1 = FUN_002017c8((iVar1 - 1U) + param_3,
                         ((iVar1 != 0) - 1) + param_4 + (uint)CARRY4(iVar1 - 1U,param_3),iVar1,0,
                         param_1,param_2);
    uVar2 = *puVar4;
    uVar3 = (uint)(iVar1 + param_5 + 0xfffff) >> 0x14;
    iVar1 = FUN_002106a8(0x300000);
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
  iVar1 = FUN_002106a8(0xff000000);
  puVar4[0xc] = uVar2 & 0xffffff | uVar3 << (iVar1 - 1U & 0xff);
  return;
}


// ==== FUN_0020e6e0 @ 0020e6e0 ====

void FUN_0020e6e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x24) = param_2;
  FUN_0020e2c0();
  return;
}


// ==== FUN_0020e6ea @ 0020e6ea ====

void FUN_0020e6ea(int param_1,uint param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x74) + 8) << 0x1f < 0) {
    param_2 = param_2 & 0xbfffffff | 0x80000000;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0x50) = param_2;
  return;
}


// ==== FUN_0020e700 @ 0020e700 ====

void FUN_0020e700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0020e728;
  *(char *)(*(int *)(param_1 + 0x74) + 0x30) = (char)param_2;
  iVar2 = iVar2 + 0x20e70e;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + DAT_0020e72c);
    iVar1 = DAT_0020e730;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + DAT_0020e734);
    iVar1 = DAT_0020e738;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar2 + iVar1);
  return;
}


// ==== FUN_0020e73c @ 0020e73c ====

void FUN_0020e73c(int param_1,undefined4 param_2)

{
  **(undefined4 **)(param_1 + 0x74) = param_2;
  return;
}


// ==== FUN_0020e742 @ 0020e742 ====

void FUN_0020e742(int param_1,uint param_2,int param_3)

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


// ==== FUN_0020e754 @ 0020e754 ====

void FUN_0020e754(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_2;
  iVar4 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x74);
  uVar3 = uVar2 & 0xfffffe7f | *(int *)(param_1 + 0x40) << 0x10 |
          *(int *)(DAT_0020e8c4 + 0x20e778 + param_2[2] * 4) << 7;
  if (uVar2 == 0x19) {
    if (*(int *)(iVar1 + 4) << 0x1f < 0) {
      uVar3 = uVar3 | 0x10000000;
    }
    else if (*(int *)(iVar1 + 4) << 0x1e < 0) {
      uVar3 = uVar3 | 0x20000000;
    }
    uVar3 = uVar3 | 0x3000;
LAB_0020e88a:
    if (*(int *)(iVar4 + 0x3c) << 0x1f < 0) {
      uVar2 = 1000;
      while (*(int *)(iVar4 + 0x3c) << 0x1f < 0) {
        if (uVar2 == 0) goto LAB_0020e878;
        uVar2 = uVar2 - 1;
        thunk_FUN_00215ac4(1);
      }
LAB_0020e8aa:
      if (uVar2 == 0) {
LAB_0020e878:
        uVar2 = 1;
        goto LAB_0020e8b6;
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
LAB_0020e8bc:
          uVar3 = uVar3 | 0x1000;
        }
      }
      else {
        if (((((uVar2 & 0xfffffffb) == 0x11) || (uVar2 == 0x133)) || (uVar2 == 0x86)) ||
           ((uVar2 == 8 || (uVar2 - 0x1e < 2)))) {
          uVar3 = uVar3 | 0x800;
          goto LAB_0020e862;
        }
        if (uVar2 == 0xc) {
          uVar3 = uVar3 & 0xf000ffff;
LAB_0020e820:
          uVar3 = uVar3 | 0x4000;
        }
        else if (uVar2 == 0xb5) {
          uVar2 = param_2[1];
          if ((int)uVar2 < 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if (((int)(uVar2 << 4) < 0) && (1 < (uVar2 & 0x1ff))) goto LAB_0020e8bc;
LAB_0020e83e:
          uVar3 = uVar3 | 0x800;
        }
        else if (uVar2 == 0xb4) {
          if (((int)param_2[1] < 0) && ((param_2[1] & 0x3ffffff) >> 9 != 0)) goto LAB_0020e820;
        }
        else if (uVar2 == 0x8b) {
          uVar3 = uVar3 | 0x40000000;
        }
        else {
          if (uVar2 == 0x93) {
            if ((*(uint *)(iVar1 + 4) & 3) != 0) {
              uVar3 = uVar3 | 0x30000000;
            }
            goto LAB_0020e83e;
          }
          if (uVar2 == 0x28) {
            uVar3 = uVar3 | 0x8000;
          }
          else if (uVar2 == 0x14) {
            uVar3 = uVar3 | 0x3800;
          }
          else {
            if (uVar2 != 0xb) goto LAB_0020e862;
            uVar3 = uVar3 | 0x1800;
          }
        }
      }
      goto LAB_0020e88a;
    }
    uVar3 = uVar3 | 0x2800;
LAB_0020e862:
    if (uVar2 != 0xd) goto LAB_0020e88a;
    if (*(int *)(iVar4 + 0x3c) << 0x1e < 0) {
      uVar2 = param_2[7];
      while (*(int *)(iVar4 + 0x3c) << 0x1e < 0) {
        if (uVar2 == 0) goto LAB_0020e878;
        uVar2 = uVar2 - 1;
        thunk_FUN_00215ac4(1);
      }
      goto LAB_0020e8aa;
    }
  }
  uVar2 = 0;
  *(uint *)(iVar4 + 0x38) = param_2[1];
  *(uint *)(iVar4 + 0x34) = uVar3;
LAB_0020e8b6:
  param_2[9] = uVar2;
  return;
}


// ==== FUN_0020e8c8 @ 0020e8c8 ====

void FUN_0020e8c8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2[2];
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = DAT_0020e994;
  if (*param_2 != 0x28) {
    uVar3 = DAT_0020e990;
  }
  uVar1 = FUN_0020d498(param_1,uVar3,DAT_0020e990,*param_2,param_4);
  if (uVar1 == 0) {
    iVar2 = 1;
LAB_0020e932:
    if (iVar5 == 8) {
      do {
      } while (-1 < *(int *)(iVar4 + 8) << 0xf);
    }
    if (iVar2 != 0) goto LAB_0020e972;
  }
  else {
    if ((DAT_0020e998 & uVar1) == 0) {
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
      goto LAB_0020e932;
    }
    if (iVar5 != 0) {
      if (iVar5 != 2) {
        if ((DAT_0020e99c & uVar1) == 0) {
          param_2[3] = *(int *)(iVar4 + 0x40);
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
          param_2[3] = *(int *)(iVar4 + 0x80);
        }
        goto LAB_0020e932;
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
    FUN_0020d904(param_2[3]);
    break;
  case 3:
    FUN_0020d906(param_2[3]);
    break;
  case 5:
    FUN_0020d908(param_2[3]);
    break;
  case 6:
    FUN_0020d90a(param_2[3]);
  }
  iVar2 = 0;
LAB_0020e972:
  param_2[9] = iVar2;
  if ((*param_2 == 0x37) && (iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(int *)(param_1 + 0x60) = param_2[1];
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}


// ==== FUN_0020e9a0 @ 0020e9a0 ====

void FUN_0020e9a0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 1;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 0;
  return;
}


// ==== FUN_0020e9b2 @ 0020e9b2 ====

void FUN_0020e9b2(int param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x5a) == '\x03') {
    param_2 = param_2 | 0x800000;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0x10) = param_2 | *(uint *)(*(int *)(param_1 + 0x28) + 0x10);
  return;
}


// ==== FUN_0020e9c8 @ 0020e9c8 ====

undefined4 FUN_0020e9c8(int param_1,undefined4 *param_2,uint param_3)

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
LAB_0020e9d0:
  do {
    iVar6 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 0xc) = iVar6;
    if (iVar6 << 0x10 < 0) {
      uVar7 = 2;
      FUN_002106a8(0xffff,puVar3,uVar4,*(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 0x60),
                   param_2,param_3);
LAB_0020ea66:
      FUN_0020e31c(param_1);
      return uVar7;
    }
    if (iVar6 << 0x11 < 0) {
      uVar7 = 1;
      goto LAB_0020ea66;
    }
    if (iVar6 << 0x1a < 0) {
      uVar7 = 0xc;
      FUN_002106a8(0xffff,puVar3,uVar4,*(undefined4 *)(iVar5 + 0x60),param_1,
                   *(undefined4 *)(iVar5 + 0x60),param_3);
      goto LAB_0020ea66;
    }
    if (iVar6 << 0x13 < 0) {
      if (uVar4 == 0) {
        return 0;
      }
      bVar1 = true;
LAB_0020ea14:
      uVar8 = *(uint *)(iVar5 + 0x14) & 0xff;
      puVar2 = puVar3;
      if (uVar4 < 0x40) {
        uVar10 = uVar4;
        uVar9 = uVar4;
        if (uVar8 < uVar4) goto LAB_0020e9d0;
      }
      else {
        if (uVar8 < 0x40) goto LAB_0020e9d0;
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
      goto LAB_0020e9d0;
    }
    if (uVar4 != 0) goto LAB_0020ea14;
    if (bVar1) {
      return 0;
    }
  } while( true );
}


// ==== FUN_0020ea72 @ 0020ea72 ====

undefined4 FUN_0020ea72(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x28);
LAB_0020ea76:
  iVar2 = *(int *)(iVar7 + 0xc);
  *(int *)(iVar7 + 0xc) = iVar2;
  if (iVar2 << 0x10 < 0) {
    uVar6 = 2;
  }
  else if (iVar2 << 0x11 < 0) {
    uVar6 = 1;
  }
  else {
    if (-1 < iVar2 << 0x1a) {
      if (-1 < iVar2 << 0x13) goto LAB_0020ea8e;
      if (param_3 == 0) {
        return 0;
      }
      goto LAB_0020ea92;
    }
    uVar6 = 0xc;
  }
  FUN_0020e31c();
  return uVar6;
LAB_0020ea8e:
  if (param_3 != 0) {
LAB_0020ea92:
    if ((*(uint *)(iVar7 + 0x14) & 0xffffff) >> 0x10 == 0) {
      puVar1 = param_2;
      uVar4 = param_3;
      uVar3 = param_3;
      if (0x7f < param_3) {
        uVar4 = 0x80;
        uVar3 = 0x80;
      }
      do {
        while ((int)uVar4 < 4) {
          puVar5 = (undefined4 *)((int)puVar1 + uVar4);
          for (; puVar1 != puVar5; puVar1 = (undefined4 *)((int)puVar1 + 1)) {
            *(undefined1 *)(iVar7 + 0x18) = *(undefined1 *)puVar1;
          }
          puVar1 = puVar5;
          uVar4 = 0xffffffff;
        }
        uVar4 = uVar4 - 4;
        param_2 = puVar1 + 1;
        *(undefined4 *)(iVar7 + 0x18) = *puVar1;
        puVar1 = param_2;
      } while (uVar4 != 0);
      param_3 = param_3 - uVar3;
    }
  }
  goto LAB_0020ea76;
}


// ==== FUN_0020eaec @ 0020eaec ====

void FUN_0020eaec(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = DAT_0020eccc;
  puVar4 = DAT_0020ecc4;
  iVar6 = DAT_0020ecc0;
  puVar3 = DAT_0020ecbc;
  cVar1 = *(char *)((int)param_1 + 0x5a);
  uVar2 = (undefined1)param_3;
  if (cVar1 == '\x03') {
    if ((*param_1 == 0) || (-1 < (int)((uint)*(ushort *)(*param_1 + 0x20) << 0x17))) {
      *(char *)(param_1 + 0x16) = (char)param_2;
      *(undefined1 *)((int)param_1 + 0x59) = uVar2;
      param_1[0xe] = *(int *)(iVar5 + 0x20eb22 + param_2 * 4);
    }
    else {
      param_2 = 1;
      *(undefined1 *)((int)param_1 + 0x59) = uVar2;
      param_1[0xe] = iVar6;
    }
    puVar4 = DAT_0020ecc8;
    uVar7 = *DAT_0020ecc8;
    iVar6 = FUN_002106a8(3);
    *puVar4 = param_3 << (iVar6 - 1U & 0xff) | uVar7 & 0xfffffffc;
    uVar7 = *puVar3;
    iVar6 = FUN_002106a8(0x8000);
    *puVar3 = 1 << (iVar6 - 1U & 0xff) | uVar7 & 0xffff7fff;
    uVar7 = *puVar4;
    iVar6 = FUN_002106a8(0xf00);
    *puVar4 = param_2 << (iVar6 - 1U & 0xff) | uVar7 & 0xfffff0ff;
    uVar7 = *puVar3;
    iVar6 = FUN_002106a8(0x10000);
    uVar7 = uVar7 & 0xfffeffff | 1 << (iVar6 - 1U & 0xff);
  }
  else {
    iVar6 = DAT_0020ecd0 + 0x20eb38;
    *(char *)(param_1 + 0x16) = (char)param_2;
    *(undefined1 *)((int)param_1 + 0x59) = uVar2;
    param_1[0xe] = *(int *)(iVar6 + param_2 * 4);
    uVar7 = *puVar4;
    if (cVar1 == '\x02') {
      iVar6 = FUN_002106a8(0x70000);
      *puVar4 = uVar7 & 0xfff8ffff | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_002106a8(0x4000);
      uVar7 = uVar7 & 0xffffbfff | 1 << (iVar6 - 1U & 0xff);
    }
    else if (cVar1 == '\x01') {
      iVar6 = FUN_002106a8(0x700);
      *puVar4 = uVar7 & 0xfffff8ff | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_002106a8(0x2000);
      uVar7 = 1 << (iVar6 - 1U & 0xff) | uVar7 & 0xffffdfff;
    }
    else {
      iVar6 = FUN_002106a8(7);
      *puVar4 = uVar7 & 0xfffffff8 | param_2 << (iVar6 - 1U & 0xff);
      uVar7 = *puVar3;
      iVar6 = FUN_002106a8(0x1000);
      uVar7 = uVar7 & 0xffffefff | 1 << (iVar6 - 1U & 0xff);
    }
  }
  *puVar3 = uVar7;
  return;
}


// ==== FUN_0020ecd4 @ 0020ecd4 ====

void FUN_0020ecd4(int param_1,int param_2,uint param_3,uint param_4)

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
  FUN_0020eaec(param_1,*(undefined1 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x59));
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((param_4 & 3) == 0) {
    uVar7 = 0;
    if (param_2 == 0) {
      if (uVar3 < uVar1) {
        uVar6 = uVar1 >> 1;
        if (uVar3 < uVar6) {
          uVar7 = FUN_00201700((uVar1 - 1) + uVar3 * 4);
          uVar6 = FUN_00201700(uVar1 >> 2,uVar7);
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
        uVar7 = FUN_00201700((uVar1 - 1) + uVar3 * 4);
        uVar6 = FUN_00201700(uVar6,uVar7);
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
  iVar2 = FUN_002106a8(DAT_0020ee9c);
  *puVar5 = (uVar7 | iVar4 << 0xc) << (iVar2 - 1U & 0xff) | uVar3 & 0xff8000ff;
  do {
  } while (-1 < (int)(*puVar5 << 0x18));
  if ((param_4 & 3) == 0) {
    FUN_0020e39a(param_1,0,*(uint *)(iVar8 + 0x78) & 0xff,0);
    FUN_0020e39a(param_1,0,*(undefined1 *)(iVar8 + 0x70),2);
    FUN_0020e39a(param_1,0,*(undefined1 *)(iVar8 + 0x74),1);
    uVar3 = puVar5[0x2e];
    FUN_002106a8(0x10000000);
    puVar5[0x2e] = uVar3 & 0xefffffff;
    uVar3 = puVar5[0x2e] & 0x1fffffff;
    FUN_002106a8(0xe0000000);
  }
  else {
    FUN_0020e39a(param_1,1,*(uint *)(iVar8 + 0x78) & 0xff,0);
    FUN_0020e39a(param_1,1,*(undefined1 *)(iVar8 + 0x70),2);
    FUN_0020e39a(param_1,1,*(undefined1 *)(iVar8 + 0x74),1);
    uVar3 = puVar5[0x2e];
    FUN_002106a8(0x10000000);
    puVar5[0x2e] = uVar3 & 0xefffffff;
    uVar3 = puVar5[0x2e];
    iVar8 = FUN_002106a8(0xe0000000);
    uVar3 = uVar3 & 0x1fffffff | 1 << (iVar8 - 1U & 0xff);
  }
  puVar5[0x2e] = uVar3;
  FUN_002106a8(0x30000);
  return;
}


// ==== FUN_0020eea0 @ 0020eea0 ====

void FUN_0020eea0(int param_1,int param_2)

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
  iVar1 = FUN_002106a8(0x30000);
  *(uint *)(iVar3 + 0x30) = uVar2 & 0xfffcffff | uVar4 << (iVar1 - 1U & 0xff);
  FUN_002106a8(0x300000);
  FUN_002106a8(DAT_0020eef4);
  return;
}


// ==== FUN_0020eef8 @ 0020eef8 ====

void FUN_0020eef8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0020ef38 + 0x20ef0c;
  FUN_0020ddfc(param_1,*(int *)(param_1 + 0x6c) == 0x708);
  FUN_0020dfb8(param_1,(uint)*(byte *)(param_1 + 0x5a) * 0x18 + *(int *)(iVar1 + DAT_0020ef3c),
               *(int *)(param_1 + 0x6c) == 0x708,param_4);
  return;
}


// ==== FUN_0020ef40 @ 0020ef40 ====

void FUN_0020ef40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  
  if (param_2 != 0) {
    FUN_0020e33c(param_1,2);
    FUN_0020eef8(param_1,1);
    FUN_0020e1cc(param_1,1,extraout_r2,param_4);
    return;
  }
  FUN_0020e1cc();
  FUN_0020eef8(param_1,0);
  FUN_0020e33c(param_1,1,extraout_r2_00,param_4);
  return;
}


// ==== FUN_0020ef7a @ 0020ef7a ====

void FUN_0020ef7a(void)

{
  return;
}


// ==== FUN_0020ef7c @ 0020ef7c ====

void FUN_0020ef7c(undefined4 param_1,char param_2)

{
  if ((byte)(param_2 - 1U) < 2) {
    FUN_0020ef40(param_1,1);
    FUN_0020ef7a(param_1,1);
    return;
  }
  FUN_0020ef7a(param_1,0);
  FUN_0020ef40(param_1,0);
  return;
}


// ==== FUN_0020efac @ 0020efac ====

void FUN_0020efac(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}


// ==== FUN_0020efb4 @ 0020efb4 ====

undefined4 FUN_0020efb4(int param_1,int *param_2)

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
  iVar1 = FUN_002106a8(2);
  puVar9 = puVar15 + 0x3c;
  uVar10 = puVar15[0x3c];
  iVar2 = FUN_002106a8(0x7c00000);
  uVar11 = puVar15[0x2d];
  uVar10 = (uVar10 & 0x7c00000) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_002106a8(0x38);
  uVar12 = puVar15[0x2c];
  puVar6 = puVar15 + 0x2c;
  uVar11 = (uVar11 & 0x38) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_002106a8(0x380);
  uVar13 = *puVar15;
  uVar17 = (uVar12 & 0x380) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_002106a8(0x300000);
  uVar12 = uVar17 + 1;
  do {
    uVar18 = uVar11 + 1;
    do {
      uVar19 = uVar10 + 1;
      do {
        uVar16 = 0;
        do {
          FUN_0020e39a(param_1,((uVar13 & 0x300000) >> (iVar2 - 1U & 0xff) & 0xff) == 3,
                       ((uVar8 & 2) >> (iVar1 - 1U & 0xff)) + uVar16 & 1,0);
          if (*(uint *)(param_1 + 0x3c) <= DAT_0020f25c) {
            uVar14 = *puVar7;
            FUN_002106a8(2);
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
              iVar4 = FUN_0020f264(param_1,&local_48);
              if (iVar4 == 0) break;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            *(undefined1 *)(param_1 + 0x5c) = 1;
            if (iVar4 != 0) {
              return 6;
            }
          }
          iVar3 = FUN_0020e754(param_1,param_2);
          if (iVar3 == 1) {
            uVar16 = uVar16 - 1;
LAB_0020f122:
            iVar3 = *param_2;
            if (iVar3 == 0xc) goto LAB_0020f128;
          }
          else {
            if (iVar3 != 0) goto LAB_0020f122;
LAB_0020f128:
            iVar3 = FUN_0020e8c8(param_1,param_2);
            FUN_002106a8(2,puVar7,*puVar7);
            FUN_002106a8(0x7c00000,puVar9,*puVar9);
            FUN_002106a8(0x38,extraout_r1,*puVar20);
            FUN_002106a8(0x380,puVar6,*puVar6);
            if (iVar3 == 0) {
              *(undefined1 *)(param_1 + 0x5c) = 0;
              return 0;
            }
            iVar3 = *param_2;
          }
          if ((iVar3 - 0x11U < 2) || (iVar3 - 0x18U < 2)) {
            FUN_0020f2e0(param_1,1);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 2);
        uVar16 = *puVar9;
        iVar3 = FUN_002106a8(0x7c00000);
        uVar14 = uVar19 & 0x1f;
        uVar19 = uVar19 + 1;
        *puVar9 = uVar14 << (iVar3 - 1U & 0xff) | uVar16 & 0xf83fffff;
      } while (uVar19 != uVar10 + 0x21);
      if (uVar5 <= DAT_0020f260) {
        return 6;
      }
      uVar19 = *puVar20;
      iVar3 = FUN_002106a8(0x38);
      uVar16 = uVar18 & 7;
      uVar18 = uVar18 + 1;
      *puVar20 = uVar16 << (iVar3 - 1U & 0xff) | uVar19 & 0xffffffc7;
    } while (uVar18 != uVar11 + 9);
    uVar18 = *puVar6;
    iVar3 = FUN_002106a8(0x380);
    uVar19 = uVar12 & 7;
    uVar12 = uVar12 + 1;
    *puVar6 = uVar18 & 0xfffffc7f | uVar19 << (iVar3 - 1U & 0xff);
    if (uVar12 == uVar17 + 9) {
      return 6;
    }
  } while( true );
}


// ==== FUN_0020f264 @ 0020f264 ====

int FUN_0020f264(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0020e754();
  if ((iVar1 == 0) && (iVar1 = FUN_0020e8c8(param_1,param_2), iVar1 == 2)) {
    if ((*(uint *)(*(int *)(param_1 + 0x28) + 0x34) & 0x1800) != 0) {
      FUN_0020f2e0(param_1,1);
    }
    if (*(char *)(param_1 + 0x5c) != '\x02') {
      iVar1 = FUN_0020efb4(param_1,param_2);
      return iVar1;
    }
  }
  return iVar1;
}


// ==== FUN_0020f2a8 @ 0020f2a8 ====

void FUN_0020f2a8(int *param_1,int *param_2)

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
  FUN_0020f264(param_1,&local_30);
  return;
}


// ==== FUN_0020f2e0 @ 0020f2e0 ====

void FUN_0020f2e0(int *param_1,int param_2)

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
      FUN_0020e31c(param_1);
      local_48 = 0xd;
      local_2c = 100;
      local_44 = *(int *)(*param_1 + 0x18) << 0x10;
      local_40 = 1;
      local_28 = 5;
      iVar1 = FUN_0020f264(param_1,&local_48);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = (local_3c & 0x1fff) >> 9;
      thunk_FUN_0020d904();
      if (uVar2 - 5 < 2) break;
      if (uVar2 != 7) {
        if (uVar2 != 4) {
          return;
        }
        FUN_0020e31c(param_1);
        return;
      }
      thunk_FUN_00215ac4(100);
    }
  } while ((param_2 == 0) || (iVar1 = FUN_0020f2a8(param_1,0), iVar1 == 0));
  return;
}


// ==== FUN_0020f358 @ 0020f358 ====

void FUN_0020f358(undefined4 param_1,uint param_2,int param_3)

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
  FUN_0020f264(param_1,&local_30);
  return;
}


// ==== FUN_0020f468 @ 0020f468 ====

int FUN_0020f468(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = *(int *)(param_1 + 0x74);
  iVar3 = *(int *)(param_1 + 0x40);
  FUN_0020e2c0();
  FUN_0020e6ea(param_1,param_4);
  FUN_0020e6e0(param_1,iVar3);
  if (param_4 < 2) {
    local_48 = 0x18;
  }
  else {
    local_48 = 0x19;
  }
  if (*(int *)(iVar2 + 4) << 0x1e < 0) {
    local_48 = 0x19;
  }
  if (*(int *)(iVar2 + 0x90) != 0) {
    local_48 = 0x19;
  }
  local_40 = 1;
  local_28 = 0;
  local_2c = 100;
  local_44 = param_2;
  iVar1 = FUN_0020f264(param_1,&local_48);
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x70) = &local_48;
    iVar3 = FUN_0020ea72(param_1,param_3,iVar3 * param_4);
    if ((param_4 < 2) || (*(int *)(iVar2 + 4) != 0)) {
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_0020f2a8(param_1,&local_48);
      if (iVar3 == 0) {
        if (iVar2 == 0) {
          return 0;
        }
        FUN_0020e31c(param_1);
        return 4;
      }
    }
    FUN_0020f2e0(param_1,1);
    return iVar3;
  }
  FUN_0020e31c(param_1);
  return iVar1;
}


// ==== FUN_0020f534 @ 0020f534 ====

undefined4 FUN_0020f534(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_002106a8(0x300000);
  uVar9 = (uVar9 & 0x300000) >> (iVar1 - 1U & 0xff);
  uVar10 = puVar14[0x2c];
  iVar1 = FUN_002106a8(0x7c00);
  uVar11 = puVar14[0x2c];
  uVar10 = (uVar10 & 0x7c00) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_002106a8(0x380);
  uVar12 = puVar14[1];
  uVar16 = (uVar11 & 0x380) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_002106a8(4);
  uVar11 = puVar14[1];
  iVar2 = FUN_002106a8(8);
  puVar14[1] = 1 << (iVar2 - 1U & 0xff) | uVar11 & 0xfffffff7;
  local_84 = uVar16 + 1;
  do {
    local_88 = uVar10 + 1;
    do {
      local_7c = 0x20;
      do {
        iVar2 = 0;
        do {
          FUN_0020e39a(param_1,uVar9 == 3,((uVar12 & 4) >> (iVar1 - 1U & 0xff)) + iVar2 & 1,2);
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
          uVar20 = FUN_002106a8(0xffff);
          uVar11 = (uVar11 & 0xffff) >> ((int)uVar20 - 1U & 0xff);
          if (uVar9 != 2) {
            uVar11 = uVar11 & 0xffff00ff;
          }
          FUN_002106a8(4,(int)((ulonglong)uVar20 >> 0x20),puVar14 + 1,puVar14[1]);
          FUN_002106a8(0x7c00);
          FUN_002106a8(0x380);
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
      if (uVar6 <= DAT_0020f7b4) break;
      uVar11 = *puVar15;
      iVar2 = FUN_002106a8(0x7c00);
      uVar4 = local_88 & 0x1f;
      local_88 = local_88 + 1;
      *puVar15 = uVar11 & 0xffff83ff | uVar4 << (iVar2 - 1U & 0xff);
    } while (local_88 != uVar10 + 0x21);
    if (uVar9 != 1) {
      return 2;
    }
    uVar11 = *puVar15;
    iVar2 = FUN_002106a8(0x380);
    uVar4 = local_84 & 7;
    local_84 = local_84 + 1;
    *puVar15 = uVar11 & 0xfffffc7f | uVar4 << (iVar2 - 1U & 0xff);
    if (local_84 == uVar16 + 9) {
      return 2;
    }
  } while( true );
}


// ==== FUN_0020f7b8 @ 0020f7b8 ====

undefined4 FUN_0020f7b8(int *param_1)

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
  bVar17 = DAT_0020fa24 < (uint)param_1[0xf];
  uVar13 = 0;
  if (*param_1 != 0) {
    uVar13 = *(ushort *)(*param_1 + 0x20) & 0x40;
  }
  uVar6 = *puVar11;
  iVar1 = FUN_002106a8(0x300000);
  uVar7 = puVar11[0x2c];
  uVar12 = (uVar6 & 0x300000) >> (iVar1 - 1U & 0xff);
  iVar1 = FUN_002106a8(0x7c00);
  uVar6 = puVar11[0x2c];
  iVar2 = FUN_002106a8(0x380);
  uVar8 = puVar11[1];
  iVar3 = FUN_002106a8(4);
  uVar9 = puVar11[1];
  iVar4 = FUN_002106a8(8);
  uVar8 = ((uVar8 & 4) >> (iVar3 - 1U & 0xff)) + 1;
  puVar11[1] = 1 << (iVar4 - 1U & 0xff) | uVar9 & 0xfffffff7;
  FUN_0020e39a(param_1,uVar12 == 3,uVar8 & 1,2);
  if (1 < uVar8) {
    uVar8 = puVar11[0x18];
    iVar3 = FUN_002106a8(0xffff);
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
      iVar1 = FUN_002106a8(0x7c00);
      puVar11[0x2c] = (uVar7 & 0x1f) << (iVar1 - 1U & 0xff) | uVar8 & 0xffff83ff;
      if ((0x1f < uVar7) && (uVar12 == 1)) {
        uVar7 = puVar11[0x2c];
        iVar1 = FUN_002106a8(0x380);
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


// ==== FUN_0020fa28 @ 0020fa28 ====

int FUN_0020fa28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    iVar1 = FUN_002106a8(0x7c);
    uVar3 = *(uint *)(iVar5 + 0x188);
    uVar2 = (uVar2 & 0x7c) >> (iVar1 - 1U & 0xff);
    iVar5 = FUN_002106a8(0x1f000);
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
      iVar5 = FUN_002106a8(0x1f000);
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
        iVar5 = FUN_002106a8(0x7c);
        *puVar8 = uVar4 & 0xffffff83 | uVar2 << (iVar5 - 1U & 0xff);
        if (param_5 == 0) {
          pcVar7 = *(code **)(param_1 + 0x78);
LAB_0020faf6:
          iVar6 = (*pcVar7)(param_1,param_2,param_3,param_4);
        }
        else if (param_5 == 1) {
          pcVar7 = *(code **)(param_1 + 0x7c);
          goto LAB_0020faf6;
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


// ==== FUN_0020fb24 @ 0020fb24 ====

int FUN_0020fb24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_002106a8(0x300000);
  uVar9 = puVar15[0x3c];
  iVar2 = FUN_002106a8(0x1f);
  uVar10 = puVar15[1];
  uVar14 = (uVar9 & 0x1f) >> (iVar2 - 1U & 0xff);
  iVar2 = FUN_002106a8(0x100);
  uVar9 = puVar15[0x2d];
  puVar6 = puVar15 + 0x2d;
  iVar3 = FUN_002106a8(7);
  uVar11 = puVar15[1];
  uVar16 = (uVar9 & 7) >> (iVar3 - 1U & 0xff);
  iVar3 = FUN_002106a8(8);
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
          FUN_0020e39a(param_1,(uVar8 & 0x300000) >> (iVar1 - 1U & 0xff) == 2,
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
          FUN_002106a8(0x1f);
          FUN_002106a8(0x100,extraout_r1,puVar15 + 1,puVar15[1]);
          FUN_002106a8(7,extraout_r1_00,puVar6,*puVar6);
          if (iVar4 == 0) {
            return 0;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 2);
        uVar13 = puVar15[0x3c];
        uVar14 = uVar14 + 1;
        iVar3 = FUN_002106a8(0x1f);
        puVar15[0x3c] = uVar13 & 0xffffffe0 | (uVar14 & 0x1f) << (iVar3 - 1U & 0xff);
      } while (uVar14 != uVar12);
      uVar11 = uVar11 + 1;
      puVar15[0x3e] = uVar9 & 0x1f1f1f | (uVar11 & 0x1f) << 0x18;
    } while (uVar11 != uVar7);
    if (uVar5 <= DAT_0020fcfc) {
      return iVar4;
    }
    uVar12 = *puVar6;
    iVar3 = FUN_002106a8(7);
    uVar7 = uVar17 & 7;
    uVar17 = uVar17 + 1;
    *puVar6 = uVar12 & 0xfffffff8 | uVar7 << (iVar3 - 1U & 0xff);
    if (uVar17 == uVar16 + 9) {
      return iVar4;
    }
  } while( true );
}


// ==== FUN_0020fd00 @ 0020fd00 ====

void FUN_0020fd00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = *(uint *)(iVar3 + 8);
  if ((*(uint *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 +
                 *(int *)(DAT_0020fd7c + 0x20fd08 + DAT_0020fd80) + 0x14) & 1) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  else if (param_2 == 0) {
    *(uint *)(iVar3 + 8) = uVar2 & 0xfffffffe;
    uVar2 = *(uint *)(iVar3 + 8) & 0xffff0fff;
    FUN_002106a8(0xf000);
  }
  else {
    iVar1 = FUN_002106a8(0xf000);
    *(uint *)(iVar3 + 8) = uVar2 & 0xffff0fff | 8 << (iVar1 - 1U & 0xff);
    uVar2 = *(uint *)(iVar3 + 8) | 1;
  }
  *(uint *)(iVar3 + 8) = uVar2;
  return;
}


// ==== FUN_0020fd84 @ 0020fd84 ====

bool FUN_0020fd84(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)((uint)*(byte *)(param_1 + 0x5a) * 0x18 +
                    *(int *)(DAT_0020fdcc + 0x20fd8c + DAT_0020fdd0) + 0x14);
  if ((int)(uVar1 << 0x1a) < 0) {
    bVar3 = false;
    if ((uVar1 & 1) != 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 8);
      iVar2 = FUN_002106a8(2);
      bVar3 = (uVar1 & 2) >> (iVar2 - 1U & 0xff) == 0;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


// ==== FUN_00210200 @ 00210200 ====

undefined4 FUN_00210200(int param_1,int param_2)

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
  
  auStack_30[3] = *(undefined4 *)(DAT_00210410 + 0x210216);
  auStack_30[2] = *(undefined4 *)(DAT_00210410 + 0x210212);
  auStack_30[1] = *(undefined4 *)(DAT_00210410 + 0x21020e);
  auStack_30[0] = *(undefined4 *)(DAT_00210410 + 0x21020a);
  puVar9 = (uint *)auStack_30[param_1];
  iVar6 = *(int *)(DAT_00210414 + 0x21021c + DAT_00210418);
  iVar7 = iVar6 + param_1 * 0x18;
  uVar2 = *(undefined1 *)(iVar7 + 1);
  uVar3 = *(undefined1 *)(iVar6 + param_1 * 0x18);
  iVar10 = param_1 * 0x98 + DAT_0021041c + 0x210236;
  FUN_00215820(iVar10,0);
  uVar5 = DAT_00210404;
  *(char *)(param_2 + 0x5a) = (char)param_1;
  *(uint **)(param_2 + 0x28) = puVar9;
  *(undefined4 *)(param_2 + 0x34) = uVar5;
  uVar5 = DAT_00210408;
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
  uVar5 = DAT_0021040c;
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
  FUN_0020ef7c(param_2);
  FUN_0020ef7c(param_2,2);
  uVar8 = *puVar9;
  iVar6 = FUN_002106a8(1);
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
        goto LAB_002103e2;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    thunk_FUN_00215aa8(200);
  } while( true );
LAB_002103e2:
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
        FUN_002134e8(DAT_002106a0 + 0x210432);
      }
      puVar9[0x3c] = 0;
      puVar9[0x3e] = 0;
      puVar9[0x3f] = 0;
      iVar11 = 1;
      puVar9[1] = 0;
      puVar9[0xc] = puVar9[0xc] | 0x80000;
      uVar8 = puVar9[0x2e];
      iVar6 = FUN_002106a8(0x10000000);
      puVar9[0x2e] = uVar8 & 0xefffffff | 1 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[0x2e];
      FUN_002106a8(0x8000);
      puVar9[0x2e] = uVar8 & 0xffff7fff;
      uVar8 = puVar9[0x2c];
      iVar6 = FUN_002106a8(0x10000);
      puVar9[0x2c] = uVar8 & 0xfffeffff | 1 << (iVar6 - 1U & 0xff);
      FUN_0020d92c(param_2,1);
      uVar8 = puVar9[1];
      iVar7 = *(int *)(iVar10 + 0x78);
      iVar6 = FUN_002106a8(2);
      puVar9[1] = uVar8 & 0xfffffffd | iVar7 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[1];
      iVar7 = *(int *)(iVar10 + 0x70);
      iVar6 = FUN_002106a8(4);
      puVar9[1] = uVar8 & 0xfffffffb | iVar7 << (iVar6 - 1U & 0xff);
      FUN_0020e352(param_2,0);
      FUN_0020eea0(param_2,1);
      FUN_0020e9b2(param_2,DAT_00210690);
      FUN_0020e700(param_2,1);
      FUN_0020e73c(param_2,0x20);
      FUN_0020eaec(param_2,uVar3,uVar2);
      uVar8 = *(uint *)(param_2 + 0x38);
      if (DAT_00210694 < uVar8) {
        if (DAT_00210694 < uVar8 >> 1) {
          iVar11 = 0;
          uVar4 = FUN_00201700(uVar8 + 0xfde7f,DAT_00210698);
          uVar8 = FUN_00201700(uVar8 >> 2,uVar4);
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
      iVar6 = FUN_002106a8(DAT_0021069c);
      iVar7 = 0x14;
      *puVar9 = (uVar4 | iVar11 << 0xc) << (iVar6 - 1U & 0xff) | uVar8 & 0xffc000ff;
      goto LAB_002105c8;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  thunk_FUN_00215aa8(200);
  goto LAB_002103e2;
LAB_002105c8:
  if ((int)(*puVar9 << 0x18) < 0) {
    if (iVar7 == 0) {
LAB_0021067e:
      uVar5 = 5;
    }
    else {
      FUN_0020e650(param_2,*puVar9 << 0x18,DAT_00210688,DAT_0021068c,0);
      FUN_0020fd00(param_2,1);
      FUN_0020e39a(param_2,0,*(undefined1 *)(iVar10 + 0x78),0);
      FUN_0020e39a(param_2,0,*(undefined1 *)(iVar10 + 0x70),2);
      FUN_0020e39a(param_2,0,*(undefined1 *)(iVar10 + 0x74),1);
      uVar8 = puVar9[0x2e];
      iVar6 = FUN_002106a8(0x10000000);
      puVar9[0x2e] = uVar8 & 0xefffffff | 1 << (iVar6 - 1U & 0xff);
      uVar8 = puVar9[0x2e];
      FUN_002106a8(0xe0000000);
      puVar9[0x2e] = uVar8 & 0x1fffffff;
      FUN_002106a8(0x30000);
      uVar5 = 0;
    }
    return uVar5;
  }
  if (iVar7 == 0) goto LAB_0021067e;
  iVar7 = iVar7 + -1;
  thunk_FUN_00215ac4(1);
  goto LAB_002105c8;
}


// ==== FUN_002106a8 @ 002106a8 ====

int FUN_002106a8(uint param_1)

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


// ==== FUN_00210744 @ 00210744 ====

int FUN_00210744(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(DAT_00210794 + 0x21074c + DAT_00210798) + 0x5b204;
  while( true ) {
    if (*(int *)(iVar3 + 4) == 0) {
      return 0;
    }
    if ((*(int *)(iVar3 + 0xc) != 0) &&
       (iVar2 = FUN_002157e4(param_1), iVar1 = DAT_0021079c, iVar2 == 0)) break;
    iVar3 = iVar3 + 0x10;
  }
  iVar2 = DAT_0021079c + 0x210776;
  iVar4 = DAT_002107a0 + 0x210778;
  FUN_00215830(iVar2,iVar3,0x10);
  FUN_00215830(iVar4,*(undefined4 *)(iVar3 + 0xc),0x50);
  *(int *)(iVar1 + 0x210782) = iVar4;
  return iVar2;
}


// ==== thunk_FUN_00210744 @ 002107a4 ====

int thunk_FUN_00210744(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(DAT_00210794 + 0x21074c + DAT_00210798) + 0x5b204;
  while( true ) {
    if (*(int *)(iVar3 + 4) == 0) {
      return 0;
    }
    if ((*(int *)(iVar3 + 0xc) != 0) &&
       (iVar2 = FUN_002157e4(param_1), iVar1 = DAT_0021079c, iVar2 == 0)) break;
    iVar3 = iVar3 + 0x10;
  }
  iVar2 = DAT_0021079c + 0x210776;
  iVar4 = DAT_002107a0 + 0x210778;
  FUN_00215830(iVar2,iVar3,0x10);
  FUN_00215830(iVar4,*(undefined4 *)(iVar3 + 0xc),0x50);
  *(int *)(iVar1 + 0x210782) = iVar4;
  return iVar2;
}


// ==== FUN_00210b6c @ 00210b6c ====

undefined4
FUN_00210b6c(int param_1,int *param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 * *(int *)(param_1 + 4);
  iVar1 = FUN_00201e54(param_1,param_2,uVar3 + param_4,CARRY4(uVar3,param_4),*param_5,*param_3,
                       param_2[2]);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_00210ba0 @ 00210ba0 ====

undefined4
FUN_00210ba0(undefined4 *param_1,int *param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00202018(param_1,param_2[2],*param_2 * param_1[1] + param_4,
                       CARRY4(*param_2 * param_1[1],param_4),param_5,*param_3,param_2[2]);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_002134e8(DAT_00210bf4 + 0x210bda,DAT_00210bf8 + 0x210be2,*param_1,param_2[2],param_3,param_5
                );
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ==== FUN_00210cbc @ 00210cbc ====

bool FUN_00210cbc(void)

{
  int iVar1;
  
  iVar1 = FUN_002125a4();
  return iVar1 == 0xb003;
}


// ==== FUN_00210d74 @ 00210d74 ====

void FUN_00210d74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar6 = DAT_00211028 + 0x210d80;
  piVar8 = *(int **)(iVar6 + DAT_0021102c);
  iVar9 = *piVar8;
  *(undefined4 *)(iVar9 + 0x5e208) = DAT_00211018;
  puVar11 = *(undefined4 **)(iVar6 + DAT_00211030);
  *(undefined4 *)(iVar9 + 0x5e20c) = *puVar11;
  local_20 = param_3;
  local_1c = param_4;
  uVar2 = thunk_FUN_0021bcb0();
  uVar3 = DAT_0021101c;
  *(undefined4 *)(iVar9 + 0x5e210) = uVar2;
  iVar9 = *piVar8;
  *(undefined4 *)(iVar9 + 0x5e214) = uVar3;
  *(undefined4 *)(iVar9 + 0x5e218) = 0xe1000;
  uVar1 = FUN_002133a8();
  iVar4 = *piVar8;
  *(undefined1 *)(iVar9 + 0x5e21c) = uVar1;
  iVar9 = *(int *)(iVar4 + 0x5e238);
  *(int *)(iVar4 + 0x5e220) = iVar9;
  for (iVar5 = 0; iVar5 != iVar9; iVar5 = iVar5 + 1) {
    *(undefined4 *)(iVar4 + iVar5 * 4 + 0x5e224) = *(undefined4 *)(iVar5 * 0x18 + iVar4 + 0x5e248);
  }
  puVar10 = *(undefined4 **)(iVar6 + DAT_00211034);
  *(undefined4 *)(iVar4 + 0x5e308) = *puVar10;
  *(undefined4 *)(iVar4 + 0x5e374) = *(undefined4 *)(DAT_00211038 + 0x210dfc);
  *(undefined4 *)(iVar4 + 0x5e30c) = **(undefined4 **)(iVar6 + DAT_0021103c);
  *(undefined4 *)(iVar4 + 0x5e310) = **(undefined4 **)(iVar6 + DAT_00211040);
  *(undefined4 *)(iVar4 + 0x5e348) = DAT_00211020;
  uVar3 = FUN_00215b08(**(undefined4 **)(iVar6 + DAT_00211044));
  iVar9 = DAT_00211048;
  iVar5 = *piVar8;
  *(undefined4 *)(iVar4 + 0x5e314) = uVar3;
  *(int *)(iVar5 + 0x5e334) = iVar5 + 0x58a04;
  *(char *)(iVar5 + 0x5e21d) = (char)*(undefined4 *)(iVar5 + 0x58a00);
  *(undefined4 *)(iVar5 + 0x5e33c) = **(undefined4 **)(iVar6 + iVar9);
  *(undefined4 *)(iVar5 + 0x5e340) = **(undefined4 **)(iVar6 + DAT_0021104c);
  *(undefined4 *)(iVar5 + 0x5e344) = DAT_00211024;
  *(undefined4 *)(iVar5 + 0x5e34c) = **(undefined4 **)(iVar6 + DAT_00211050);
  *(undefined4 *)(iVar5 + 0x5e350) = **(undefined4 **)(iVar6 + DAT_00211054);
  iVar7 = DAT_0021105c + 0x210e7e;
  *(undefined4 *)(iVar5 + 0x5e354) = **(undefined4 **)(iVar6 + DAT_00211058);
  local_1c = 0;
  FUN_00215edc(&local_20);
  FUN_00215ef0(&local_1c);
  iVar4 = *piVar8;
  *(undefined4 *)(iVar4 + 0x5e2f8) = local_20;
  *(undefined4 *)(iVar4 + 0x5e2fc) = 0;
  *(undefined4 *)(iVar4 + 0x5e300) = local_1c;
  *(undefined4 *)(iVar4 + 0x5e304) = 0;
  iVar9 = DAT_00211060;
  *(undefined1 **)(iVar4 + 0x5e358) = &DAT_0012c000;
  *(undefined4 *)(iVar4 + 0x5e35c) = 0x4000;
  FUN_002134e8(iVar9 + 0x210ec2,iVar7);
  FUN_002134e8(DAT_00211064 + 0x210ed4,iVar7,*(undefined4 *)(*piVar8 + 0x5e35c));
  FUN_00215830(*piVar8 + 0x5e360,DAT_00211068 + 0x210ee8,8);
  FUN_002134e8(DAT_0021106c + 0x210efc,iVar7,*piVar8 + 0x5e360);
  FUN_002134e8(DAT_00211070 + 0x210f10,iVar7,*(undefined1 *)(*piVar8 + 0x5e338));
  FUN_002134e8(DAT_00211074 + 0x210f24,iVar7,*(undefined1 *)(*piVar8 + 0x5e339));
  FUN_002134e8(DAT_00211078 + 0x210f34,iVar7,*puVar10);
  FUN_002134e8(DAT_0021107c + 0x210f40,iVar7,*puVar11);
  FUN_002134e8(DAT_00211080 + 0x210f50,iVar7,*(undefined4 *)(*piVar8 + 0x5e310),
               *(undefined4 *)(*piVar8 + 0x5e30c));
  FUN_002134e8(DAT_00211084 + 0x210f6c,iVar7,*piVar8 + 0x5e210,*(undefined4 *)(*piVar8 + 0x5e210));
  FUN_002134e8(DAT_00211088 + 0x210f80,iVar7,*(undefined4 *)(*piVar8 + 0x5e314));
  FUN_002134e8(DAT_0021108c + 0x210f94,iVar7,*(undefined4 *)(*piVar8 + 0x5e33c),
               *(undefined4 *)(*piVar8 + 0x5e340));
  FUN_002134e8(DAT_00211090 + 0x210fac,iVar7,*(undefined4 *)(*piVar8 + 0x5e344));
  FUN_002134e8(DAT_00211094 + 0x210fc0,iVar7,*(undefined4 *)(*piVar8 + 0x5e34c));
  FUN_002134e8(DAT_00211098 + 0x210fd4,iVar7,*(undefined4 *)(*piVar8 + 0x5e350));
  FUN_002134e8(DAT_0021109c + 0x210fe8,iVar7,*(undefined4 *)(*piVar8 + 0x5e354));
  iVar9 = *piVar8;
  FUN_002134e8(DAT_002110a0 + 0x211004,iVar7,*(undefined4 *)(iVar9 + 0x5e2f8),
               *(undefined4 *)(iVar9 + 0x5e2fc),*(undefined4 *)(iVar9 + 0x5e300),
               *(undefined4 *)(iVar9 + 0x5e304));
  return;
}


// ==== thunk_FUN_00217ccc @ 0021112e ====

void thunk_FUN_00217ccc(void)

{
  *DAT_00217cd8 = 0x1971;
  return;
}


// ==== FUN_0021116c @ 0021116c ====

bool FUN_0021116c(void)

{
  return *DAT_00211178 != 0;
}


// ==== FUN_00211180 @ 00211180 ====

void FUN_00211180(undefined4 param_1,int param_2,undefined4 param_3)

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
  
  iVar6 = DAT_00211310 + 0x21118a;
  local_24 = param_2;
  uStack_20 = param_3;
  FUN_00207fb4();
  FUN_00217d7c();
  FUN_0020a110();
  iVar2 = FUN_0021401c();
  if (iVar2 == 0) {
    iVar2 = FUN_00217d38();
    if (iVar2 == 1) {
      uVar3 = 3;
    }
    else {
      iVar2 = FUN_00217d38();
      if (iVar2 == 2) {
        uVar3 = 4;
      }
      else {
        iVar2 = FUN_0020a150(2);
        if ((iVar2 != 0) && (iVar2 = FUN_002125d8(), iVar2 != 0)) {
          FUN_00213e94();
        }
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 2;
  }
  puVar8 = *(undefined4 **)(iVar6 + DAT_00211314);
  *puVar8 = uVar3;
  uVar3 = FUN_00217cdc();
  *(undefined4 *)(DAT_00211318 + 0x2111e2) = uVar3;
  cVar1 = FUN_00210cbc();
  iVar2 = FUN_00213f4c();
  if (iVar2 != 0) {
    uVar3 = FUN_00215b08(0);
    FUN_00213f6c();
    if (cVar1 == '\0') {
      do {
        uVar4 = FUN_00215b08(uVar3);
        if (29999 < uVar4) break;
        FUN_00212140(0x4a,&local_24,1,0xe);
        if (local_24 != 0) {
          FUN_00212168(0x4a,1,1,4);
        }
        iVar2 = FUN_0021257e();
      } while (iVar2 != 0);
      FUN_00213ed4();
    }
  }
  FUN_00212140(0x4a,&local_24,1,0xe);
  if (local_24 != 0) {
    uVar3 = FUN_00215b08(0);
    FUN_00213f1c();
    if (cVar1 == '\0') {
      FUN_00212168(0x4a,1,1,4);
      do {
        uVar4 = FUN_00215b08(uVar3);
        if (4999 < uVar4) break;
        iVar2 = FUN_0021257e();
      } while (iVar2 != 0);
      FUN_00213ed4();
    }
    else {
      FUN_00212168(0x4a,1,1,4);
      *puVar8 = 1;
      FUN_00213eb4();
      FUN_00213eec();
    }
  }
  FUN_00213e68();
  FUN_0020a14c();
  FUN_0020abd4();
  FUN_002029e0();
  FUN_00213514();
  FUN_0021368c(**(undefined4 **)(iVar6 + DAT_0021131c));
  iVar2 = FUN_0020b12c();
  if (iVar2 == 0) {
    iVar5 = DAT_00211324 + 0x2112ba;
  }
  else {
    iVar5 = DAT_00211320 + 0x2112b4;
  }
  FUN_002134e8(DAT_00211328 + 0x2112c0,DAT_0021132c + 0x2112c2,iVar5,iVar2);
  piVar7 = *(int **)(iVar6 + DAT_00211330);
  iVar2 = *piVar7;
  uVar3 = FUN_00207084();
  *(undefined4 *)(iVar2 + 0x5e220) = uVar3;
  FUN_002070c8(*piVar7 + 0x5e224);
  FUN_0020828c(*piVar7 + 0x5e2a0);
  iVar2 = *piVar7;
  FUN_0020814c(iVar2 + 0x5e238,iVar2 + 0x5e2a0,iVar2 + 0x5e2e8);
  return;
}


// ==== FUN_00211498 @ 00211498 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00211498(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_002134e8(DAT_002114b4 + 0x2114aa,param_1,param_2,param_3,param_4);
  iVar1 = FUN_002133a8();
  if (iVar1 == 0) {
    FUN_00216498(0,0xe1000);
    FUN_0021335c(1);
  }
  FUN_002134e8(_DAT_00211494 + 0x21148c);
  FUN_00214584();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ==== FUN_00211630 @ 00211630 ====

undefined2 FUN_00211630(void)

{
  return *(undefined2 *)(DAT_00211638 + 0x211636);
}


// ==== FUN_00211c94 @ 00211c94 ====

int FUN_00211c94(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = DAT_00211cf0;
  puVar2 = DAT_00211cec;
  puVar1 = DAT_00211ce8;
  uVar8 = *DAT_00211ce8;
  *DAT_00211ce8 = 0x1901;
  uVar6 = *puVar2;
  *puVar2 = uVar6 & 0xffffff | 0x7000000;
  uVar7 = *puVar3;
  *puVar3 = 0xff0000;
  piVar4 = DAT_00211cf4;
  *DAT_00211cf4 = 0x1000;
  *piVar4 = 0x1010;
  do {
  } while (*piVar4 << 0x1b < 0);
  uVar5 = *puVar3;
  *puVar1 = uVar8;
  *puVar2 = uVar6;
  *DAT_00211cf4 = 0;
  *puVar3 = uVar7;
  return ((uVar5 & 0xffff) * 26000 >> 8) << 3;
}


// ==== FUN_00211cf8 @ 00211cf8 ====

int FUN_00211cf8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = DAT_00211d54;
  puVar2 = DAT_00211d50;
  puVar1 = DAT_00211d4c;
  uVar8 = *DAT_00211d4c;
  *DAT_00211d4c = 0x101;
  uVar6 = *puVar2;
  *puVar2 = uVar6 & 0xffffff | 0x7000000;
  uVar7 = *puVar3;
  *puVar3 = 0xff0000;
  piVar4 = DAT_00211d58;
  *DAT_00211d58 = 0x1000;
  *piVar4 = 0x1010;
  do {
  } while (*piVar4 << 0x1b < 0);
  uVar5 = *puVar3;
  *puVar1 = uVar8;
  *puVar2 = uVar6;
  *DAT_00211d58 = 0;
  *puVar3 = uVar7;
  return ((uVar5 & 0xffff) * 26000 >> 8) << 3;
}


// ==== FUN_0021213c @ 0021213c ====

undefined4 FUN_0021213c(void)

{
  return 3;
}


// ==== FUN_00212140 @ 00212140 ====

void FUN_00212140(undefined4 param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *local_1c;
  int iStack_18;
  
  local_1c = param_2;
  iStack_18 = param_3;
  iVar1 = FUN_00213078(0,param_1,0,&local_1c,param_1);
  if (iVar1 == 0) {
    *param_2 = ((uint)local_1c & param_3 << (param_4 & 0xff)) >> (param_4 & 0xff);
  }
  return;
}


// ==== FUN_00212168 @ 00212168 ====

void FUN_00212168(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_1c;
  
  uVar2 = param_1;
  local_1c = param_2;
  iVar1 = FUN_00213078(0,param_1,0,&local_1c,param_1);
  if (iVar1 == 0) {
    FUN_00213078(1,param_1,local_1c & ~(param_3 << (param_4 & 0xff)) | param_2 << (param_4 & 0xff),
                 &local_1c,uVar2);
  }
  return;
}


// ==== FUN_002121a4 @ 002121a4 ====

void FUN_002121a4(void)

{
  return;
}


// ==== FUN_002121c2 @ 002121c2 ====

void FUN_002121c2(undefined4 param_1)

{
  FUN_002121a4();
  FUN_00212168(0x24,param_1,1,0);
  return;
}


// ==== FUN_0021223a @ 0021223a ====

void FUN_0021223a(undefined4 param_1)

{
  FUN_002121a4();
  FUN_00212168(0x26,param_1,3,0);
  return;
}


// ==== FUN_0021257e @ 0021257e ====

bool FUN_0021257e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00212140(0x142,&local_c,1,1,param_1);
  return local_c != 1;
}


// ==== FUN_002125a4 @ 002125a4 ====

undefined4 FUN_002125a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00212140(0,&local_c,1,5,param_1);
  uVar1 = 0xb004;
  if (local_c != 0) {
    uVar1 = 0xb003;
  }
  return uVar1;
}


// ==== FUN_002125cc @ 002125cc ====

undefined4 FUN_002125cc(void)

{
  return *(undefined4 *)(DAT_002125d4 + 0x2125d2);
}


// ==== FUN_002125d8 @ 002125d8 ====

undefined4 FUN_002125d8(void)

{
  return 1;
}


// ==== FUN_00212728 @ 00212728 ====

undefined4 FUN_00212728(code *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00215a60();
  uVar2 = FUN_00215a90(0xff);
  do {
    iVar3 = FUN_00215a6c(uVar1,uVar2);
    if (iVar3 != 0) {
      FUN_002134e8(DAT_00212774 + 0x212752,0xfc);
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


// ==== FUN_00213060 @ 00213060 ====

void FUN_00213060(void)

{
  int iVar1;
  
  iVar1 = DAT_00213070;
  do {
    iVar1 = iVar1 + 4;
  } while (iVar1 != DAT_00213074);
  return;
}


// ==== FUN_00213078 @ 00213078 ====

int FUN_00213078(uint param_1,uint param_2,uint param_3,uint *param_4)

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
        uVar1 = FUN_00215a60();
        iVar8 = DAT_00213214 + 0x2130a6;
        uVar2 = FUN_00215a90(0xff);
        iVar6 = DAT_00213218 + 0x2130b4;
        iVar5 = DAT_0021321c + 0x2130b8;
LAB_002130ba:
        do {
          iVar3 = FUN_00215a6c(uVar1,uVar2);
          if (iVar3 != 0) {
            iVar5 = 9;
            FUN_002134e8(DAT_00213220 + 0x2130d0,0x139);
            FUN_00213060();
LAB_00213136:
            FUN_002134e8(DAT_00213228 + 0x213142,0x1a4,iVar5);
            goto LAB_00213144;
          }
          if (-1 < (int)(*DAT_00213208 << 10)) {
            iVar5 = 7;
            FUN_002134e8(DAT_00213224 + 0x2130ec,0x142);
            goto LAB_00213136;
          }
          uVar7 = (*DAT_00213208 & 0x7ffff) >> 0x10;
          if (uVar7 == 4) {
            uVar4 = 0x14e;
            iVar3 = iVar6;
LAB_0021311e:
            FUN_002134e8(iVar3,uVar4);
            goto LAB_002130ba;
          }
          if (uVar7 == 6) {
            FUN_00215a5a(1,DAT_0021320c);
            uVar4 = 0x14b;
            iVar3 = iVar5;
            goto LAB_0021311e;
          }
          if (uVar7 == 2) {
            uVar4 = 0x151;
            iVar3 = iVar8;
            goto LAB_0021311e;
          }
        } while (uVar7 != 0);
        FUN_00215a5a((param_2 >> 1) << 0x10 | param_1 << 0x1f | param_3,DAT_00213210);
        if (param_1 == 0) {
          uVar1 = FUN_00215a60();
          uVar2 = FUN_00215a90(0xff);
          do {
            iVar5 = FUN_00215a6c(uVar1,uVar2);
            if (iVar5 != 0) {
              iVar6 = 9;
              FUN_002134e8(DAT_00213234 + 0x213198,0x167);
              FUN_00213060();
LAB_002131ee:
              iVar5 = iVar6 + 1;
              FUN_002134e8(DAT_00213240 + 0x2131fc,0x1b1,iVar6);
              goto LAB_00213144;
            }
            uVar7 = *DAT_00213208;
            if (-1 < (int)(uVar7 << 10)) {
              iVar6 = 7;
              FUN_002134e8(DAT_00213238 + 0x2131b4,0x170);
              goto LAB_002131ee;
            }
          } while ((uVar7 & 0x7ffff) >> 0x10 != 6);
          if (param_4 == (uint *)0x0) {
            iVar5 = 1;
            FUN_002134e8(DAT_0021323c + 0x2131e2,0x1b7);
            FUN_00215a5a(1,DAT_0021320c);
LAB_00213144:
            FUN_002134e8(DAT_0021322c + 0x213150,0x1c3,iVar5);
            FUN_002134e8(DAT_00213230 + 0x21315c,0x1c4);
            return iVar5;
          }
          *param_4 = uVar7 & 0xffff;
          FUN_00215a5a(1,DAT_0021320c);
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


// ==== FUN_00213244 @ 00213244 ====

void FUN_00213244(undefined4 param_1,undefined4 param_2)

{
  FUN_00213078(0,param_1,0,param_2);
  return;
}


// ==== FUN_00213252 @ 00213252 ====

void FUN_00213252(undefined4 param_1,undefined4 param_2)

{
  FUN_00213078(1,param_1,param_2,0);
  return;
}


// ==== FUN_00213290 @ 00213290 ====

void FUN_00213290(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  if (*(int *)(DAT_002132cc + 0x213298) == 0) {
    piVar3 = *(int **)(DAT_002165a8 + 0x216588 + DAT_002165ac);
    do {
    } while ((*(uint *)(*piVar3 + 0x14) & 0x20) == 0);
    if (param_1 == 10) {
      *(undefined4 *)*piVar3 = 0xd;
    }
    *(int *)*piVar3 = param_1;
    return;
  }
  puVar1 = *(undefined4 **)(DAT_002132d0 + 0x2132a0 + DAT_002132d4);
  puVar2 = (undefined1 *)*puVar1;
  if (puVar2 < (undefined1 *)**(undefined4 **)(DAT_002132d0 + 0x2132a0 + DAT_002132d8)) {
    *puVar1 = puVar2 + 1;
    *puVar2 = (char)param_1;
    return;
  }
  *(int *)(DAT_002132dc + 0x2132be) = *(int *)(DAT_002132dc + 0x2132be) + 1;
  return;
}


// ==== FUN_002132e0 @ 002132e0 ====

void FUN_002132e0(uint param_1)

{
  uint extraout_r1;
  
  if (9 < param_1) {
    FUN_00201700(param_1,10);
    FUN_002132e0();
    FUN_00201798(param_1,10);
    param_1 = extraout_r1;
  }
  FUN_00213290(param_1 + 0x30 & 0xff);
  return;
}


// ==== FUN_0021330a @ 0021330a ====

void FUN_0021330a(char *param_1)

{
  while( true ) {
    if (*param_1 == '\0') break;
    if (*param_1 == '\n') {
      FUN_00213290(0xd);
    }
    FUN_00213290(*param_1);
    param_1 = param_1 + 1;
  }
  return;
}


// ==== FUN_0021332a @ 0021332a ====

void FUN_0021332a(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    param_2 = param_2 + -1;
  }
  if (((param_1 & 0xfffffff0) != 0) || (param_2 != 0)) {
    uVar2 = param_1 >> 4;
    param_1 = param_1 & 0xf;
    FUN_0021332a(uVar2);
  }
  if (param_1 < 10) {
    cVar1 = (char)param_1 + '0';
  }
  else {
    cVar1 = (char)param_1 + '7';
  }
  FUN_00213290(cVar1);
  return;
}


// ==== FUN_0021335c @ 0021335c ====

void FUN_0021335c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar1 = DAT_0021339c;
  *(uint *)(DAT_00213398 + 0x213366) = (uint)(param_1 == 0);
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x213372 + DAT_002133a0);
    puVar3 = *(undefined4 **)(iVar1 + 0x213372 + DAT_002133a4);
    puVar5 = (undefined1 *)*puVar3;
    for (puVar4 = (undefined1 *)*puVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      FUN_00213290(*puVar4);
    }
    *puVar3 = *puVar2;
  }
  return;
}


// ==== FUN_002133a8 @ 002133a8 ====

int FUN_002133a8(void)

{
  int iVar1;
  
  iVar1 = 1 - *(uint *)(DAT_002133b8 + 0x2133ae);
  if (1 < *(uint *)(DAT_002133b8 + 0x2133ae)) {
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_002133bc @ 002133bc ====

void FUN_002133bc(char *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  
  FUN_00213290(0x5b);
  FUN_00215b08(0);
  iVar6 = 1;
  FUN_002132e0();
  FUN_00213290(0x5d);
  FUN_00213290(0x20);
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
LAB_002134d4:
      FUN_00213290(0xd);
      cVar2 = '\n';
      param_1 = pcVar7;
LAB_002134dc:
      FUN_00213290(cVar2);
    }
    if (cVar2 != '%') {
      param_1 = pcVar7;
      if (cVar2 == '\n') goto LAB_002134d4;
      goto LAB_002134dc;
    }
    bVar1 = param_1[1];
    pcVar7 = param_1 + 2;
    if (bVar1 == 99) {
      FUN_00213290((char)*param_2);
LAB_0021344c:
      param_2 = param_2 + 1;
    }
    else {
      if (99 < bVar1) {
        if (bVar1 == 0x73) {
          FUN_0021330a(*param_2);
        }
        else {
          if (bVar1 < 0x74) {
            if (bVar1 != 100) {
              if (bVar1 != 0x6c) goto LAB_002134c0;
              if ((param_1[2] == 'l') && (param_1[3] == 'x')) {
                piVar5 = param_2;
                if (iVar6 << 0x1f < 0) {
                  piVar5 = param_2 + 1;
                  iVar6 = iVar6 + 1;
                }
                iVar6 = iVar6 + 1;
                param_2 = piVar5 + 2;
                iVar3 = *piVar5;
                FUN_0021332a(piVar5[1],8);
                FUN_0021332a(iVar3,8);
                pcVar7 = param_1 + 4;
              }
              goto LAB_002134c6;
            }
            iVar3 = *param_2;
            if (iVar3 < 0) {
              iVar3 = -iVar3;
              FUN_00213290(0x2d);
            }
          }
          else {
            if (bVar1 != 0x75) {
              if (bVar1 == 0x78) {
                iVar3 = *param_2;
                uVar4 = 0;
                goto LAB_00213448;
              }
              goto LAB_002134c0;
            }
            iVar3 = *param_2;
          }
          FUN_002132e0(iVar3);
        }
        goto LAB_0021344c;
      }
      if (bVar1 == 0x42) {
        iVar3 = *param_2;
        uVar4 = 2;
LAB_00213448:
        FUN_0021332a(iVar3,uVar4);
        goto LAB_0021344c;
      }
      if (0x42 < bVar1) {
        if (bVar1 == 0x48) {
          iVar3 = *param_2;
          uVar4 = 4;
        }
        else {
          if (bVar1 != 0x58) goto LAB_002134c0;
          iVar3 = *param_2;
          uVar4 = 8;
        }
        goto LAB_00213448;
      }
      if (bVar1 != 0x25) {
LAB_002134c0:
        bVar1 = 0x20;
      }
      FUN_00213290(bVar1);
    }
LAB_002134c6:
    param_1 = pcVar7;
    iVar6 = iVar6 + 1;
  } while( true );
}


// ==== FUN_002134e8 @ 002134e8 ====

void FUN_002134e8(undefined4 param_1)

{
  FUN_002133bc(param_1);
  return;
}


// ==== FUN_00213502 @ 00213502 ====

void FUN_00213502(undefined4 param_1)

{
  FUN_002134e8(param_1);
  return;
}


// ==== FUN_00213514 @ 00213514 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00213514(void)

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
  
  iVar5 = DAT_0021363c;
  iVar3 = DAT_00213630;
  puVar7 = (undefined4 *)(DAT_00213638 + 0x213522);
  *puVar7 = &DAT_0012c000;
  if (_DAT_0012c000 == iVar3) {
    uVar2 = 0x4000;
    puVar7 = (undefined4 *)(DAT_00213640 + 0x213536);
  }
  else {
    FUN_002134e8(DAT_00213644 + 0x21353e,DAT_00213648 + 0x213540);
    uVar2 = 0x10000;
    *puVar7 = DAT_00213634;
    puVar7 = (undefined4 *)(DAT_0021364c + 0x213550);
  }
  *puVar7 = uVar2;
  piVar8 = (int *)(DAT_00213650 + 0x21355a);
  iVar9 = DAT_00213658 + 0x213560;
  FUN_002134e8(DAT_0021365c + 0x213568,iVar9,*piVar8,*(undefined4 *)(DAT_00213654 + 0x21355e));
  FUN_002134e8(DAT_00213660 + 0x213576,iVar9,*(undefined4 *)*piVar8);
  FUN_002134e8(DAT_00213664 + 0x213584,iVar9,*(undefined4 *)(*piVar8 + 4));
  FUN_002134e8(DAT_00213668 + 0x213592,iVar9,*(undefined4 *)(*piVar8 + 8));
  FUN_002134e8(DAT_0021366c + 0x2135a0,iVar9,*(undefined4 *)(*piVar8 + 0xc));
  iVar1 = DAT_00213678;
  if ((((**(int **)(iVar5 + 0x213528 + DAT_00213670) != 0) &&
       (piVar4 = (int *)*piVar8, *piVar4 == iVar3)) && (piVar4[3] == 0x10)) &&
     ((piVar4[1] == 0x40 && (piVar4[2] == 0x80)))) {
    FUN_002134e8(DAT_00213674 + 0x2135d0,iVar9);
    iVar5 = *piVar8;
    iVar9 = 0;
    iVar3 = *(int *)(iVar5 + 4);
    do {
      iVar6 = iVar5 + iVar3 + iVar9;
      iVar9 = iVar9 + 4;
      FUN_002134e8(iVar1 + 0x2135d8,*(undefined4 *)(iVar6 + 4));
    } while (iVar9 != 0xc);
    FUN_002134e8(DAT_0021367c + 0x2135f2);
    iVar3 = *(int *)(DAT_00213680 + 0x2135fa);
    FUN_00215830(*(int *)(iVar3 + 8) + iVar3,*(int *)(iVar3 + 4) + iVar3,
                 *(undefined4 *)(iVar3 + 0xc),in_r3);
    return;
  }
  puVar7 = (undefined4 *)(DAT_00213684 + 0x213616);
  FUN_00215820(*puVar7,0,*(undefined4 *)(DAT_00213688 + 0x213618));
  piVar8 = (int *)*puVar7;
  *piVar8 = iVar3;
  piVar8[1] = 0x40;
  piVar8[3] = 0x10;
  piVar8[2] = 0x80;
  return;
}


// ==== FUN_0021368c @ 0021368c ====

void FUN_0021368c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002136ac + 0x213694);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + *(int *)(iVar1 + 4)) = param_1;
    FUN_002134e8(DAT_002136b0 + 0x2136a4,DAT_002136b4 + 0x2136a6,param_1,param_1);
    return;
  }
  return;
}


// ==== FUN_002136b8 @ 002136b8 ====

int FUN_002136b8(short *param_1)

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


// ==== FUN_002136e6 @ 002136e6 ====

bool FUN_002136e6(short *param_1)

{
  if ((((ushort)(*param_1 - 3U) < 5) && ((ushort)param_1[1] < 500)) &&
     ((ushort)(param_1[2] - 3U) < 6)) {
    return (ushort)(param_1[3] - 0x12dU) < 0x2773;
  }
  return false;
}


// ==== FUN_0021371e @ 0021371e ====

int FUN_0021371e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  iVar2 = FUN_002015c0(iVar1 * 0x16f,0xc);
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 3;
  }
  iVar3 = FUN_002015c0(param_1,0xffffff9c);
  iVar4 = FUN_002015c0(param_1,400);
  return (((param_3 + iVar2 + -0xaf91e + (param_1 + -1) * 0x16d + iVar4 + (iVar1 >> 2) + iVar3) *
           0x18 + param_4) * 0x3c + param_5) * 0x3c + param_6;
}


// ==== FUN_0021379a @ 0021379a ====

uint FUN_0021379a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  FUN_00213244(param_1,&local_c,param_3,0,param_1);
  return local_c & 0xffff;
}


// ==== FUN_002137b2 @ 002137b2 ====

bool FUN_002137b2(void)

{
  uint uVar1;
  
  uVar1 = FUN_0021379a(0x803e);
  if (-1 < (int)(uVar1 << 0x10)) {
    return (uVar1 & 0xc) != 4;
  }
  return true;
}


// ==== FUN_002137d0 @ 002137d0 ====

undefined4 FUN_002137d0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00213252(0x803c,1);
  uVar1 = FUN_00215b08(0);
  do {
    iVar2 = FUN_0021379a(0x8000);
    if (-1 < iVar2 << 0x19) {
      return 1;
    }
    uVar3 = FUN_00215b08(uVar1);
  } while (uVar3 < 0x3e9);
  FUN_002134e8(DAT_0021380c + 0x213802);
  return 0;
}


// ==== FUN_00213810 @ 00213810 ====

bool FUN_00213810(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0021379a(0x803e);
  FUN_00213252(0x803e,uVar1 & 0x800c | 0x420);
  iVar2 = FUN_002137d0();
  return iVar2 != 0;
}


// ==== FUN_00213838 @ 00213838 ====

void FUN_00213838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  FUN_00213252(0x8026,0x1a57);
  thunk_FUN_00215ac4(1);
  FUN_00213252(0x8026,0x2b68);
  thunk_FUN_00215ac4(1);
  FUN_00213252(0x8026,param_1);
  thunk_FUN_00215ac4(1,extraout_r1,extraout_r2,param_4);
  return;
}


// ==== FUN_00213874 @ 00213874 ====

void FUN_00213874(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_00215b08(0);
  if (param_1 != 0) {
    FUN_00213838(param_1);
  }
  FUN_00213252(0x182,0);
  uVar1 = FUN_0021379a(0x108);
  FUN_00213252(0x108,uVar1 | 0x20);
  uVar1 = FUN_0021379a(0x114);
  FUN_00213252(0x114,uVar1 | 0x100);
  do {
    iVar3 = FUN_0021379a(0x186);
    if (iVar3 == 0) break;
    iVar3 = FUN_0021379a(0x182);
  } while (iVar3 << 0x1c < 0);
  uVar4 = FUN_0021379a(0x114);
  FUN_00213252(0x114,uVar4 & 0xfeff);
  uVar4 = FUN_0021379a(0x108);
  FUN_00213252(0x108,uVar4 & 0xffdf);
  FUN_00213252(0x184,param_3);
  FUN_00213252(0x182,param_2 | 0x8000);
  thunk_FUN_00215ac4(1);
  do {
    iVar3 = FUN_0021379a(0x182);
    if (-1 < iVar3 << 0x1c) goto LAB_00213942;
    uVar4 = FUN_00215b08(uVar2);
  } while (uVar4 < 2);
  FUN_002134e8(DAT_00213950 + 0x213940);
LAB_00213942:
  FUN_0021379a(0x186);
  return;
}


// ==== FUN_00213954 @ 00213954 ====

uint FUN_00213954(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  
  uVar2 = FUN_0021379a(0x126);
  uVar6 = 0x24df;
  uVar5 = 0x24c0;
  FUN_00213252(0x126,uVar2 | 0xc0);
  do {
    uVar7 = (uVar6 + uVar5) / 2;
    if (uVar7 == uVar5) break;
    unaff_r7 = FUN_00213874(uVar7,4,0);
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
  iVar3 = FUN_00213874(uVar5,4,0);
  iVar4 = FUN_00213874(uVar6,4,0);
  if ((int)(0x318U - iVar3 & 0xffff) < iVar4 + -0x318) {
    uVar6 = uVar5;
  }
  return uVar6;
}


// ==== FUN_002139e2 @ 002139e2 ====

void FUN_002139e2(undefined2 *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = FUN_0021379a(0x126);
  FUN_00213252(0x126,uVar3 & 0xff3f);
  thunk_FUN_00215ac4(1);
  uVar1 = FUN_00213874(0,4,4);
  *param_1 = uVar1;
  uVar2 = FUN_0021379a(0x126);
  FUN_00213252(0x126,uVar2 | 0x80);
  thunk_FUN_00215ac4(1);
  uVar1 = FUN_00213874(0,4,4);
  param_1[1] = uVar1;
  uVar3 = FUN_0021379a(0x126);
  FUN_00213252(0x126,uVar3 & 0xff3f);
  thunk_FUN_00215ac4(1);
  uVar1 = FUN_00213874(0,0,0xf82);
  param_1[2] = uVar1;
  uVar1 = FUN_00213874(0,1,0xf82);
  param_1[2] = uVar1;
  uVar2 = FUN_0021379a(0x126);
  FUN_00213252(0x126,uVar2 | 0xc0);
  thunk_FUN_00215ac4(1);
  uVar1 = FUN_00213874(0,4,4);
  param_1[3] = uVar1;
  return;
}


// ==== FUN_00213a98 @ 00213a98 ====

undefined4 FUN_00213a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00213252(0x8036,0x586a,param_3,param_4,param_4);
  iVar1 = FUN_002137d0();
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00213252(0x8036,0x9136);
    iVar1 = FUN_002137d0();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ==== FUN_00213ac4 @ 00213ac4 ====

bool FUN_00213ac4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0021379a(0x803a);
  FUN_00213252(0x803a,uVar2 & 0xf7ff);
  iVar3 = FUN_002137d0();
  if (iVar3 != 0) {
    uVar1 = FUN_0021379a(0x803a);
    FUN_00213252(0x803a,uVar1 | 0x800);
    iVar3 = FUN_002137d0();
    if (iVar3 != 0) {
      uVar2 = FUN_0021379a(0x803a);
      FUN_00213252(0x803a,uVar2 & 0xf7ff);
      iVar3 = FUN_002137d0();
      return iVar3 != 0;
    }
  }
  return false;
}


// ==== FUN_00213b26 @ 00213b26 ====

bool FUN_00213b26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00213252(0x8004,0,param_3,param_4,param_4);
  FUN_00213252(0x8006,0);
  FUN_00213252(0x8008,0);
  FUN_00213252(0x8024,2);
  FUN_00213252(0x8022,1);
  FUN_00213252(0x801e,1);
  FUN_00213252(0x8020,1);
  FUN_00213252(0x801c,0);
  FUN_00213252(0x801a,0);
  FUN_00213252(0x8018,0);
  FUN_00213252(0x802c,0x8000);
  FUN_00213252(0x802e,0x201);
  FUN_00213252(0x8030,0);
  FUN_00213252(0x8032,0x800);
  FUN_00213252(0x8038,0);
  FUN_00213252(0x803a,0);
  iVar1 = FUN_00213ac4();
  if ((iVar1 != 0) && (iVar1 = FUN_002137d0(), iVar1 != 0)) {
    FUN_0021379a(0x8002);
    FUN_00213252(0x8016,0x2a);
    FUN_00213252(0x8014,1);
    FUN_00213252(0x8010,1);
    FUN_00213252(0x8012,1);
    FUN_00213252(0x800e,0);
    FUN_00213252(0x800c,0);
    FUN_00213252(0x800a,0);
    iVar1 = FUN_002137d0();
    return iVar1 != 0;
  }
  return false;
}


// ==== FUN_00213c3a @ 00213c3a ====

int FUN_00213c3a(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_0021379a(0x803e);
  uVar5 = uVar2 & 0xfff7 | 4;
  FUN_00213252(0x803e,uVar5);
  iVar3 = FUN_002137d0();
  if (iVar3 != 0) {
    FUN_00213252(0x803e,uVar2 & 0xfff7 | 0xc);
    iVar3 = FUN_002137d0();
    if (iVar3 != 0) {
      FUN_00213252(0x803e,uVar5);
      iVar3 = FUN_002137d0();
      if (iVar3 != 0) {
        uVar1 = FUN_0021379a(0x8030);
        FUN_00213252(0x8030,uVar1 | 0x80);
        iVar4 = FUN_002137d0();
        iVar3 = 0;
        if (iVar4 != 0) {
          uVar2 = FUN_002137b2();
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


// ==== FUN_00213cb4 @ 00213cb4 ====

undefined4 FUN_00213cb4(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  if (*(char *)(DAT_00213d44 + 0x213cbc) != '\0') {
    uVar1 = FUN_0021379a(0x142);
    FUN_00213252(0x142,uVar1 | 0x800);
    FUN_00213838(3);
    thunk_FUN_00215ac4(1000);
  }
  FUN_002139e2(&uStack_10);
  iVar2 = FUN_002136b8(&uStack_10);
  if (iVar2 == 0) {
    if (*(char *)(DAT_00213d48 + 0x213cfa) != '\0') {
      uVar1 = FUN_0021379a(0x142);
      FUN_00213252(0x142,uVar1 | 0xa00);
    }
    FUN_00213838(0x240f);
    thunk_FUN_00215ac4(10);
    FUN_002139e2(&uStack_10);
    iVar2 = FUN_002136e6(&uStack_10);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00213954();
    uVar3 = uVar3 & 0x1f | 0x2400;
  }
  else {
    uVar3 = 0;
  }
  FUN_00213838(uVar3);
  return 1;
}


// ==== FUN_00213d4c @ 00213d4c ====

bool FUN_00213d4c(void)

{
  int iVar1;
  
  iVar1 = FUN_00213a98();
  if ((iVar1 != 0) && (iVar1 = FUN_00213810(), iVar1 != 0)) {
    FUN_00213838(3);
    FUN_00213252(0x8028,0xa357);
    FUN_00213252(0x802a,0x67d2);
    iVar1 = FUN_002137d0();
    if (iVar1 != 0) {
      thunk_FUN_00215ac4(1000);
      iVar1 = FUN_00213cb4();
      if ((iVar1 != 0) && (iVar1 = FUN_00213b26(), iVar1 != 0)) {
        iVar1 = FUN_00213c3a();
        return iVar1 != 0;
      }
    }
  }
  return false;
}


// ==== FUN_00213dac @ 00213dac ====

void FUN_00213dac(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  cVar3 = '\0';
  iVar4 = DAT_00213e54 + 0x213dbe;
  iVar5 = DAT_00213e58 + 0x213dc0;
  *(undefined1 *)(DAT_00213e50 + 0x213dbc) = 1;
  do {
    iVar1 = FUN_00213cb4();
    if (iVar1 == 0) {
      FUN_00211498(iVar4,0x75,iVar5);
    }
    else {
      iVar1 = FUN_00213a98();
      if (iVar1 != 0) {
        FUN_00213252(0x8028,0xa357);
        FUN_00213252(0x802a,0x67d2);
        iVar1 = FUN_002137d0();
        if (iVar1 != 0) {
          uVar2 = FUN_0021379a(0x142);
          FUN_00213252(0x142,uVar2 & 0xf7ff);
          iVar1 = FUN_00213810();
          if (((iVar1 != 0) && (iVar1 = FUN_00213b26(), iVar1 != 0)) &&
             (iVar1 = FUN_00213c3a(), iVar1 != 0)) break;
        }
      }
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 != '\x03');
  *(undefined1 *)(DAT_00213e5c + 0x213e0a) = 0;
  if (cVar3 != '\x03') {
    return;
  }
  FUN_00211498(DAT_00213e60 + 0x213e16,0x75,DAT_00213e64 + 0x213e18);
  return;
}


// ==== FUN_00213e68 @ 00213e68 ====

void FUN_00213e68(void)

{
  uint uVar1;
  
  FUN_00213252(0x8000,0x430d);
  FUN_002137d0();
  uVar1 = FUN_0021379a(0x803a);
  FUN_00213252(0x803a,uVar1 & 0xfeff);
  return;
}


// ==== FUN_00213e94 @ 00213e94 ====

void FUN_00213e94(void)

{
  ushort uVar1;
  
  uVar1 = FUN_0021379a(0x802c);
  FUN_00213252(0x802c,uVar1 | 0x40);
  FUN_002137d0();
  return;
}


// ==== FUN_00213eb4 @ 00213eb4 ====

void FUN_00213eb4(void)

{
  uint uVar1;
  
  uVar1 = FUN_0021379a(0x802c);
  FUN_00213252(0x802c,uVar1 & 0xffbf);
  FUN_002137d0();
  return;
}


// ==== FUN_00213ed4 @ 00213ed4 ====

void FUN_00213ed4(void)

{
  FUN_00213a98();
  FUN_00213252(0x8000,0x4309);
  FUN_002137d0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ==== FUN_00213eec @ 00213eec ====

void FUN_00213eec(void)

{
  ushort uVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  uVar1 = FUN_0021379a(0x8030);
  FUN_00213252(0x8030,uVar1 | 0x100);
  FUN_002137d0();
  FUN_002134e8(DAT_00213f18 + 0x213f12,uVar1 | 0x100,extraout_r2,in_r3);
  return;
}


// ==== FUN_00213f1c @ 00213f1c ====

void FUN_00213f1c(void)

{
  ushort uVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  uVar1 = FUN_0021379a(0x8030);
  FUN_00213252(0x8030,uVar1 | 0x400);
  FUN_002137d0();
  FUN_002134e8(DAT_00213f48 + 0x213f42,uVar1 | 0x400,extraout_r2,in_r3);
  return;
}


// ==== FUN_00213f4c @ 00213f4c ====

uint FUN_00213f4c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0021379a(0x8030);
  FUN_002134e8(DAT_00213f68 + 0x213f60,uVar1);
  return (uVar1 & 0xfff) >> 0xb;
}


// ==== FUN_00213f6c @ 00213f6c ====

void FUN_00213f6c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0021379a(0x8030);
  FUN_00213252(0x8030,uVar1 & 0xf7ff);
  FUN_002137d0();
  return;
}


// ==== FUN_00213f8c @ 00213f8c ====

void FUN_00213f8c(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (*(char *)(DAT_00214004 + 0x213f94) != '\x01') {
    uVar4 = 1;
    *(char *)(DAT_00214004 + 0x213f94) = '\x01';
    uVar1 = FUN_0021379a(0x803a);
    if ((int)(uVar1 << 0x17) < 0) {
      if ((uVar1 & 0x7ff) >> 9 == 3) {
        FUN_00213ac4();
        puVar3 = (undefined1 *)(DAT_00214018 + 0x214002);
      }
      else {
        if ((uVar1 & 0x800) != 0) {
LAB_00213fb8:
          FUN_00213ac4();
          iVar2 = FUN_0021379a(0x802e);
          bVar5 = -1 < iVar2 << 0x18;
          if (bVar5) {
            iVar2 = DAT_00214014 + 0x213ff6;
          }
          else {
            FUN_002134e8(DAT_00214008 + 0x213fce);
            iVar2 = DAT_0021400c + 0x213fd8;
          }
          *(bool *)iVar2 = bVar5;
          return;
        }
        iVar2 = FUN_002125cc();
        if (iVar2 == 0xb005) goto LAB_00213fb8;
        FUN_00213ac4();
        puVar3 = (undefined1 *)(DAT_00214010 + 0x213fee);
        uVar4 = 0;
      }
      *puVar3 = uVar4;
    }
  }
  return;
}


// ==== FUN_0021401c @ 0021401c ====

bool FUN_0021401c(void)

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
  
  iVar13 = DAT_00214414 + 0x214032;
  FUN_00213252(0x108,0x3df);
  FUN_002139e2(auStack_28);
  iVar4 = FUN_002136b8(auStack_28);
  if (iVar4 == 0) {
    iVar4 = FUN_002136e6(auStack_28);
    bVar1 = false;
    if (iVar4 == 0) {
      bVar1 = true;
      FUN_002134e8(DAT_00214418 + 0x214056);
    }
  }
  else {
    bVar1 = false;
  }
  iVar4 = FUN_002137b2();
  if ((iVar4 != 0) || (bVar1)) {
LAB_002140a2:
    iVar4 = FUN_00213d4c();
    if (iVar4 != 0) goto LAB_00214128;
  }
  else {
    uVar2 = FUN_0021379a(0x8000);
    FUN_00213252(0x8000,uVar2 | 0x4320);
    iVar4 = FUN_002137d0();
    if ((iVar4 != 0) && (iVar4 = FUN_00213a98(), iVar4 != 0)) {
      iVar4 = FUN_0021379a(0x8028);
      if ((iVar4 == 0xa357) && (iVar4 = FUN_0021379a(0x802a), iVar4 == 0x67d2)) {
        uVar5 = FUN_0021379a(0x802c);
        if ((uVar5 & 0x1f00) == 0) {
          FUN_00213810();
        }
        iVar4 = FUN_0021379a(0x8026);
        if (iVar4 << 0x1a < 0) {
          uVar5 = FUN_00213954();
          uVar5 = uVar5 & 0x1f | 0x2400;
        }
        else {
          uVar5 = FUN_0021379a(0x8026);
          if ((uVar5 & 0x1f) != 0) {
            FUN_00213838(3);
            FUN_00215aa8(200);
          }
          uVar5 = 0;
        }
        FUN_00213838(uVar5);
        uVar5 = FUN_0021379a(0x8030);
        FUN_00213252(0x8030,uVar5 & 0xff7f);
        FUN_002137d0();
        FUN_0021379a(0x8030);
        goto LAB_00214128;
      }
      goto LAB_002140a2;
    }
  }
  FUN_00213dac();
LAB_00214128:
  uVar2 = FUN_0021379a(0x8000);
  FUN_00213252(0x8000,uVar2 | 0x4320);
  FUN_002137d0();
  uVar2 = FUN_0021379a(0x130);
  FUN_00213252(0x130,uVar2 | 0x100);
  FUN_00213252(0x108,0x3ff);
  uVar5 = FUN_0021379a(0x802c);
  uVar6 = FUN_0021379a(0x802e);
  FUN_00213252(0x802c,uVar5 & 0x7fbf);
  FUN_00213252(0x802e,uVar6 & 0xffef);
  FUN_002137d0();
  uVar2 = FUN_0021379a(0x8030);
  iVar4 = FUN_0021379a(0x8026);
  if (iVar4 << 0x1a < 0) {
    uVar2 = uVar2 & 0xffbf;
  }
  else {
    uVar2 = uVar2 | 0x40;
  }
  FUN_00213252(0x8030,uVar2);
  FUN_002137d0();
  FUN_00213f8c();
  uVar2 = FUN_0021379a(0x8000);
  FUN_00213252(0x8000,uVar2 | 0x4320);
  FUN_002137d0();
  iVar4 = FUN_0021379a(0x8002);
  uVar5 = FUN_0021379a(0x802c);
  uVar6 = FUN_0021379a(0x802e);
  uVar7 = FUN_0021379a(0x8030);
  uVar8 = FUN_0021379a(0x8032);
  if (iVar4 << 0x1f < 0) {
    uVar2 = FUN_0021379a(0x8000);
    FUN_00213252(0x8000,uVar2 | 0x4308);
    FUN_002137d0();
    if ((uVar5 & 0x80) != 0) {
      uVar9 = FUN_0021379a(0x800a);
      local_44 = FUN_0021379a(0x800c);
      local_40 = FUN_0021379a(0x800e);
      uVar10 = FUN_0021379a(0x8010);
      uVar11 = FUN_0021379a(0x8014);
      sVar3 = FUN_0021379a(0x8016);
      uVar12 = FUN_0021379a(0x800a);
      if (uVar12 < uVar9) {
        uVar9 = FUN_0021379a(0x800a);
        local_44 = FUN_0021379a(0x800c);
        local_40 = FUN_0021379a(0x800e);
        uVar10 = FUN_0021379a(0x8010);
        uVar11 = FUN_0021379a(0x8014);
        sVar3 = FUN_0021379a(0x8016);
      }
      uVar16 = (uVar8 & 0x7ff) >> 6;
      uVar14 = (uVar8 & 0x7ffffff) >> 0xb;
      uVar12 = FUN_0021371e(sVar3 + 0x7b0,uVar11,uVar10,local_40,local_44,uVar9);
      uVar15 = (uVar6 & 0x7fff) >> 8;
      uVar9 = FUN_0021371e(uVar15 + 0x7b0,uVar6 & 0xf,uVar14,uVar16,uVar8 & 0x3f,uVar7 & 0x3f);
      if ((uVar9 - 1 <= uVar12) && (uVar12 <= uVar9 + 4)) {
        FUN_00213252(0x802c,uVar5 & 0xff3f | 0x40);
        FUN_00213252(0x802e,uVar6 & 0xffff | 0x10);
        FUN_002137d0();
        if (-1 < (int)(uVar6 << 0x10)) {
          **(undefined4 **)(iVar13 + DAT_0021441c) = 7;
        }
        return true;
      }
      if (uVar12 < uVar9) {
        FUN_00213252(0x8024,uVar15);
        uVar12 = FUN_0021379a(0x8022);
        FUN_00213252(0x8022,uVar12 & 0xff00 | uVar6 & 0xf);
        uVar6 = FUN_0021379a(0x801e);
        FUN_00213252(0x801e,uVar6 & 0xff00 | uVar14);
        uVar6 = FUN_0021379a(0x801c);
        FUN_00213252(0x801c,uVar6 & 0xff00 | uVar16);
        FUN_00213252(0x801a,uVar8 & 0x3f);
        FUN_00213252(0x8018,uVar7 & 0x3f);
        FUN_00213252(0x8008,0x10);
        FUN_002137d0();
        uVar2 = FUN_0021379a(0x8004);
        FUN_00213252(0x8004,uVar2 | 5);
        FUN_002137d0();
      }
    }
  }
  return (uVar5 & 0x30) == 0x10;
}


// ==== FUN_00214420 @ 00214420 ====

undefined4 FUN_00214420(int *param_1,int param_2,int param_3,int param_4)

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
    FUN_00215830(DAT_0021445c,param_3,0x40);
    FUN_00215830(DAT_00214460,param_1,param_2);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
    param_4 = 0x80;
    param_1 = DAT_0021445c;
  }
  iVar1 = DAT_00218f18 + 0x218eaa;
  if (param_4 == 0x80) {
    iVar3 = DAT_00218f20 + 0x218ec2;
    FUN_002134e8(DAT_00218f24 + 0x218ec8,iVar3,(char)*param_1,*(undefined1 *)((int)param_1 + 1),
                 *(undefined1 *)((int)param_1 + 2),*(undefined1 *)((int)param_1 + 3),param_3,
                 unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r9);
    uVar2 = *(undefined4 *)(iVar1 + DAT_00218f28);
    FUN_0021b740(param_1,param_2,uVar2);
    FUN_002134e8(DAT_00218f2c + 0x218ee2,iVar3);
    param_4 = FUN_0021a63a(*(undefined4 *)(iVar1 + DAT_00218f30),0x14,uVar2,param_3);
    if (param_4 == 0) {
      FUN_002134e8(DAT_00218f38 + 0x218f0c);
      return 0;
    }
    iVar1 = DAT_00218f34 + 0x218efe;
  }
  else {
    iVar1 = DAT_00218f1c + 0x218eb2;
  }
  FUN_002134e8(iVar1,param_4);
  return 0xffffffff;
}


// ==== FUN_00214584 @ 00214584 ====

undefined4 FUN_00214584(void)

{
  return 0;
}


// ==== FUN_00214588 @ 00214588 ====

undefined4 FUN_00214588(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_00215a5a(DAT_00214674,DAT_00214678,param_3,param_4,param_4);
  puVar1 = DAT_00214680;
  if (param_1 == 0) {
    if (param_2 != 0) {
      do {
      } while (-1 < *DAT_0021467c << 0xf);
    }
    FUN_00215a5a(*DAT_00214680 | 2,DAT_00214680);
    FUN_00215a5a(*puVar1 | 0x20,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffbf,puVar1);
    FUN_00215a5a(*DAT_00214684 | 1);
    FUN_00215a5a(*puVar1 & 0xfffffffe,puVar1);
    FUN_00215a5a(*puVar1 | 0x10,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffb,puVar1);
    uVar2 = *puVar1 & 0xfffffff7;
  }
  else {
    FUN_00215a5a(*DAT_00214680 | 4,DAT_00214680);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 8,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffd,puVar1);
    FUN_00215a5a(*DAT_00214684 & 0xfffffffe);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 0x40,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffdf,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffef,puVar1);
    uVar2 = *puVar1 | 1;
  }
  FUN_00215a5a(uVar2,puVar1);
  return 0;
}


// ==== FUN_002149a0 @ 002149a0 ====

undefined4 FUN_002149a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_00215a5a(DAT_00214ab4,DAT_00214ab8,param_3,param_4,param_4);
  puVar1 = DAT_00214ac0;
  puVar3 = DAT_00214abc;
  if (param_1 == 0) {
    if (param_2 != 0) {
      thunk_FUN_00215ac4(500);
    }
    FUN_00215a5a(*puVar3 | 2,DAT_00214abc);
    FUN_00215a5a(*puVar3 | 0x20,DAT_00214abc);
    FUN_00215a5a(*puVar3 & 0xffffffbf,DAT_00214abc);
    FUN_00215a5a(*puVar1 | 1,DAT_00214ac0);
    FUN_00215a5a(*puVar1 | 4,DAT_00214ac0);
    thunk_FUN_00215aa8(2);
    FUN_00215a5a(*puVar3 & 0xfffffffe,DAT_00214abc);
    FUN_00215a5a(*puVar3 | 0x10,DAT_00214abc);
    FUN_00215a5a(*puVar3 & 0xfffffffb,DAT_00214abc);
    uVar2 = *puVar3 & 0xfffffff7;
    puVar3 = DAT_00214abc;
  }
  else {
    FUN_00215a5a(*DAT_00214abc | 4,DAT_00214abc);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar3 | 8,puVar3);
    FUN_00215a5a(*puVar3 & 0xfffffffd,puVar3);
    FUN_00215a5a(*puVar1 & 0xfffffffb,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffe,puVar1);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar3 | 0x40,puVar3);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar3 & 0xffffffdf,puVar3);
    FUN_00215a5a(*puVar3 & 0xffffffef,puVar3);
    uVar2 = *puVar3 | 1;
  }
  FUN_00215a5a(uVar2,puVar3);
  return 0;
}


// ==== FUN_00214ac4 @ 00214ac4 ====

undefined4 FUN_00214ac4(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  FUN_00215a5a(DAT_00214c04,DAT_00214c08);
  puVar3 = DAT_00214c14;
  puVar2 = DAT_00214c10;
  puVar1 = DAT_00214c0c;
  if (param_1 == 0) {
    if (param_2 != 0) {
      thunk_FUN_00215ac4(500);
    }
    FUN_00215a5a(*puVar1 | 2,DAT_00214c0c);
    FUN_00215a5a(*puVar1 | 0x20,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xffffffbf,DAT_00214c0c);
    FUN_00215a5a(*puVar2 | 1,DAT_00214c10);
    FUN_00215a5a(*puVar2 | 0x10,DAT_00214c10);
    FUN_00215a5a(*puVar1 & 0xfffffffe,DAT_00214c0c);
    FUN_00215a5a(*puVar1 | 0x10,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xfffffffb,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xfffffff7,DAT_00214c0c);
    if ((*puVar3 & 0xe0000) == 0) {
      if ((*DAT_00214c18 & 0xe0000) == 0) {
        FUN_002149a0(0,param_2);
      }
    }
  }
  else {
    if ((-1 < (int)(*DAT_00214c14 << 0x10)) && (-1 < (int)(*DAT_00214c18 << 0x10))) {
      FUN_002149a0(param_1,param_2);
    }
    FUN_00215a5a(*puVar1 | 4,DAT_00214c0c);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 8,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xfffffffd,DAT_00214c0c);
    FUN_00215a5a(*puVar2 & 0xffffffef,DAT_00214c10);
    FUN_00215a5a(*puVar2 & 0xfffffffe,DAT_00214c10);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 0x40,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xffffffdf,DAT_00214c0c);
    FUN_00215a5a(*puVar1 & 0xffffffef,DAT_00214c0c);
    FUN_00215a5a(*puVar1 | 1,DAT_00214c0c);
  }
  return 0;
}


// ==== FUN_00214c1c @ 00214c1c ====

undefined4 FUN_00214c1c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  FUN_00215a5a(DAT_00214d5c,DAT_00214d60);
  puVar2 = DAT_00214d6c;
  puVar1 = DAT_00214d68;
  if (param_1 == 0) {
    if (param_2 != 0) {
      do {
      } while (-1 < *DAT_00214d64 << 10);
    }
    FUN_00215a5a(*DAT_00214d68 | 2,DAT_00214d68);
    FUN_00215a5a(*puVar1 | 0x20,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffbf,puVar1);
    FUN_00215a5a(*puVar2 | 2,puVar2);
    FUN_00215a5a(*puVar2 | 0x20,puVar2);
    FUN_00215a5a(*puVar1 & 0xfffffffe,puVar1);
    FUN_00215a5a(*puVar1 | 0x10,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffb,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffff7,puVar1);
    if (((*DAT_00214d70 & 0xe0000) == 0) && ((*DAT_00214d74 & 0xe0000) == 0)) {
      FUN_002149a0(0,param_2);
    }
  }
  else {
    if ((-1 < (int)(*DAT_00214d70 << 0x10)) && (-1 < (int)(*DAT_00214d74 << 0x10))) {
      FUN_002149a0(param_1,param_2);
    }
    puVar2 = DAT_00214d6c;
    puVar1 = DAT_00214d68;
    FUN_00215a5a(*DAT_00214d68 | 4,DAT_00214d68);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 8,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffd,puVar1);
    FUN_00215a5a(*puVar2 & 0xffffffdf,puVar2);
    FUN_00215a5a(*puVar2 & 0xfffffffd,puVar2);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 0x40,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffdf,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffef,puVar1);
    FUN_00215a5a(*puVar1 | 1,puVar1);
  }
  return 0;
}


// ==== FUN_00214d78 @ 00214d78 ====

undefined4 FUN_00214d78(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  FUN_00215a5a(DAT_00214eb8,DAT_00214ebc);
  puVar2 = DAT_00214ec8;
  puVar1 = DAT_00214ec4;
  if (param_1 == 0) {
    if (param_2 != 0) {
      do {
      } while (-1 < *DAT_00214ec0 << 9);
    }
    FUN_00215a5a(*DAT_00214ec4 | 2,DAT_00214ec4);
    FUN_00215a5a(*puVar1 | 0x20,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffbf,puVar1);
    FUN_00215a5a(*puVar2 | 4,puVar2);
    FUN_00215a5a(*puVar2 | 0x40,puVar2);
    FUN_00215a5a(*puVar1 & 0xfffffffe,puVar1);
    FUN_00215a5a(*puVar1 | 0x10,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffb,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffff7,puVar1);
    if (((*DAT_00214ecc & 0xe0000) == 0) && ((*DAT_00214ed0 & 0xe0000) == 0)) {
      FUN_002149a0(0,param_2);
    }
  }
  else {
    if ((-1 < (int)(*DAT_00214ecc << 0x10)) && (-1 < (int)(*DAT_00214ed0 << 0x10))) {
      FUN_002149a0(param_1,param_2);
    }
    puVar2 = DAT_00214ec8;
    puVar1 = DAT_00214ec4;
    FUN_00215a5a(*DAT_00214ec4 | 4,DAT_00214ec4);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 8,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffd,puVar1);
    FUN_00215a5a(*puVar2 & 0xffffffbf,puVar2);
    FUN_00215a5a(*puVar2 & 0xfffffffb,puVar2);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 0x40,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffdf,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffef,puVar1);
    FUN_00215a5a(*puVar1 | 1,puVar1);
  }
  return 0;
}


// ==== FUN_00214ed4 @ 00214ed4 ====

undefined4 FUN_00214ed4(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  FUN_00215a5a(DAT_00215014,DAT_00215018);
  puVar2 = DAT_00215024;
  puVar1 = DAT_00215020;
  if (param_1 == 0) {
    if (param_2 != 0) {
      do {
      } while (-1 < *DAT_0021501c << 8);
    }
    FUN_00215a5a(*DAT_00215020 | 2,DAT_00215020);
    FUN_00215a5a(*puVar1 | 0x20,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffbf,puVar1);
    FUN_00215a5a(*puVar2 | 8,puVar2);
    FUN_00215a5a(*puVar2 | 0x80,puVar2);
    FUN_00215a5a(*puVar1 & 0xfffffffe,puVar1);
    FUN_00215a5a(*puVar1 | 0x10,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffb,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffff7,puVar1);
    if (((*DAT_00215028 & 0xe0000) == 0) && ((*DAT_0021502c & 0xe0000) == 0)) {
      FUN_002149a0(0,param_2);
    }
  }
  else {
    if ((-1 < (int)(*DAT_00215028 << 0x10)) && (-1 < (int)(*DAT_0021502c << 0x10))) {
      FUN_002149a0(param_1,param_2);
    }
    puVar2 = DAT_00215024;
    puVar1 = DAT_00215020;
    FUN_00215a5a(*DAT_00215020 | 4,DAT_00215020);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 8,puVar1);
    FUN_00215a5a(*puVar1 & 0xfffffffd,puVar1);
    FUN_00215a5a(*puVar2 & 0xffffff7f,puVar2);
    FUN_00215a5a(*puVar2 & 0xfffffff7,puVar2);
    thunk_FUN_00215aa8(1);
    FUN_00215a5a(*puVar1 | 0x40,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffdf,puVar1);
    FUN_00215a5a(*puVar1 & 0xffffffef,puVar1);
    FUN_00215a5a(*puVar1 | 1,puVar1);
  }
  return 0;
}


// ==== FUN_00215764 @ 00215764 ====

byte * FUN_00215764(byte *param_1,uint param_2)

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


// ==== FUN_0021577c @ 0021577c ====

int FUN_0021577c(char *param_1)

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
  iVar6 = DAT_002157d0 + 0x2157ae;
  while( true ) {
    pcVar5 = pcVar5 + 1;
    if ((*pcVar5 == '\0') || (iVar3 = FUN_00215764(iVar6), iVar3 == 0)) break;
    iVar4 = iVar4 * 10 + (iVar3 - iVar6);
  }
  if (bVar2) {
    return -iVar4;
  }
  return iVar4;
}


// ==== FUN_002157d4 @ 002157d4 ====

int FUN_002157d4(char *param_1)

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


// ==== FUN_002157e4 @ 002157e4 ====

int FUN_002157e4(int param_1,int param_2)

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


// ==== FUN_00215820 @ 00215820 ====

void FUN_00215820(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


// ==== FUN_00215830 @ 00215830 ====

void FUN_00215830(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}


// ==== FUN_00215842 @ 00215842 ====

int FUN_00215842(int param_1,int param_2,int param_3)

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


// ==== FUN_00215860 @ 00215860 ====

int FUN_00215860(undefined1 param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = param_1;
  iVar2 = DAT_00215894;
  FUN_00215898[DAT_00215894 + 4] = (code)0x60;
  *(undefined1 *)(iVar2 + 0x21589e) = 0;
  *(undefined4 *)(iVar2 + 0x21588c) = 100;
  *(undefined2 *)(iVar2 + 0x215870) = 1;
  *(undefined1 *)(iVar2 + 0x2158a5) = 1;
  *(undefined4 *)(iVar2 + 0x215880) = 1;
  uVar1 = FUN_00209f18();
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


// ==== FUN_00215898 @ 00215898 ====

int FUN_00215898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  iVar3 = DAT_002158d8;
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT11((char)param_2,(char)param_1);
  iVar1 = DAT_002158d8 + 0x2158ae;
  FUN_002158dc[DAT_002158d8 + 2] = (code)0x60;
  *(undefined1 *)(iVar3 + 0x2158e0) = 0;
  *(undefined4 *)(iVar3 + 0x2158ce) = 100;
  *(undefined2 *)(iVar3 + 0x2158b2) = 1;
  *(undefined1 *)(iVar3 + 0x2158e7) = 1;
  *(undefined4 *)(iVar3 + 0x2158c2) = 1;
  uStack_8 = param_3;
  uVar2 = FUN_00209eb0(iVar1,&local_c,2,1,param_1);
  iVar3 = 1 - uVar2;
  if (1 < uVar2) {
    iVar3 = 0;
  }
  return iVar3;
}


// ==== FUN_002158dc @ 002158dc ====

void FUN_002158dc(undefined4 param_1,undefined1 *param_2,int param_3,uint param_4)

{
  undefined4 uStack_14;
  
  uStack_14 = (uint)param_2 & 0xffffff;
  FUN_00215860(param_1,(int)&uStack_14 + 3,param_3,0,param_1);
  *param_2 = (char)((int)(param_3 << (param_4 & 0xff) & uStack_14 >> 0x18) >> (param_4 & 0xff));
  return;
}


// ==== FUN_00215902 @ 00215902 ====

void FUN_00215902(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_00215860(param_1,&stack0xffffffe7,param_3,0,param_1,param_2 & 0xffffff);
  FUN_00215898(param_1);
  return;
}


// ==== FUN_00215998 @ 00215998 ====

undefined4 FUN_00215998(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uStack_14;
  
  uStack_14 = param_2 & 0xffffff;
  iVar1 = FUN_002158dc(param_1 & 0xff,(int)&uStack_14 + 3,0x80,0,param_1);
  if (iVar1 == 0) {
    FUN_002134e8(DAT_002159e8 + 0x2159b8);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00201700(param_2 - 600000,0x30d4);
    if (iVar1 < 0x40) {
      bVar3 = uStack_14._3_1_ | (byte)iVar1;
    }
    else {
      bVar3 = uStack_14._3_1_ | 0x3f;
    }
    uVar2 = FUN_00215898(param_1 & 0xff,bVar3);
  }
  return uVar2;
}


// ==== FUN_00215a5a @ 00215a5a ====

void FUN_00215a5a(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  DataSynchronizationBarrier(0xf);
  return;
}


// ==== FUN_00215a60 @ 00215a60 ====

undefined4 FUN_00215a60(void)

{
  return *DAT_00215a68;
}


// ==== FUN_00215a6c @ 00215a6c ====

bool FUN_00215a6c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00215a60();
  uVar2 = uVar1 - param_1;
  if (uVar1 < param_1) {
    uVar2 = uVar2 - 1;
  }
  return param_2 <= uVar2;
}


// ==== FUN_00215a90 @ 00215a90 ====

int FUN_00215a90(uint param_1)

{
  if (param_1 <= DAT_00215aa4) {
    return param_1 * 0xd;
  }
  return -1;
}


// ==== FUN_00215aa8 @ 00215aa8 ====

void FUN_00215aa8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00215a90();
  uVar2 = FUN_00215a60();
  do {
    iVar3 = FUN_00215a6c(uVar2,uVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_00215ac4 @ 00215ac4 ====

void FUN_00215ac4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00215b04 < param_1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00201700(param_1 * 0x208 + 999,1000,param_3,DAT_00215b04,param_4);
    iVar1 = param_1 * 13000 + iVar1;
  }
  uVar2 = FUN_00215a60();
  do {
    iVar3 = FUN_00215a6c(uVar2,iVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_00215b08 @ 00215b08 ====

uint FUN_00215b08(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00201700(*DAT_00215b78 + 12999,13000,param_3,DAT_00215b78,param_1,param_2,param_3);
  puVar2 = (uint *)(DAT_00215b7c + 0x215b24);
  if (uVar1 < *puVar2) {
    *(int *)(DAT_00215b84 + 0x215b44) =
         (uVar1 + *(int *)(DAT_00215b84 + 0x215b44) + 0x50a8e) - *puVar2;
  }
  else {
    *(int *)(DAT_00215b80 + 0x215b32) = (uVar1 + *(int *)(DAT_00215b80 + 0x215b32)) - *puVar2;
  }
  *(uint *)(DAT_00215b88 + 0x215b5e) = uVar1;
  uVar1 = *(uint *)(DAT_00215b8c + 0x215b64);
  if (uVar1 < param_1) {
    uVar1 = ~(param_1 - uVar1);
  }
  else {
    uVar1 = uVar1 - param_1;
  }
  return uVar1;
}


// ==== thunk_FUN_00215ac4 @ 00215b90 ====

void thunk_FUN_00215ac4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00215b04 < param_1) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00201700(param_1 * 0x208 + 999,1000,param_3,DAT_00215b04,param_4);
    iVar1 = param_1 * 13000 + iVar1;
  }
  uVar2 = FUN_00215a60();
  do {
    iVar3 = FUN_00215a6c(uVar2,iVar1);
  } while (iVar3 == 0);
  return;
}


// ==== thunk_FUN_00215aa8 @ 00215b94 ====

void thunk_FUN_00215aa8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00215a90();
  uVar2 = FUN_00215a60();
  do {
    iVar3 = FUN_00215a6c(uVar2,uVar1);
  } while (iVar3 == 0);
  return;
}


// ==== FUN_00215edc @ 00215edc ====

void FUN_00215edc(int *param_1)

{
  *param_1 = *(int *)(DAT_00215eec + 0x215ee2) + -0x200000;
  return;
}


// ==== FUN_00215ef0 @ 00215ef0 ====

void FUN_00215ef0(int *param_1)

{
  *param_1 = *(int *)(DAT_00215f00 + 0x215ef6) + 0x200000;
  return;
}


// ==== FUN_002163b4 @ 002163b4 ====

void FUN_002163b4(int param_1)

{
  uint uVar1;
  
  if (param_1 == DAT_002163f8) {
    uVar1 = *DAT_002163fc | 0x400000;
  }
  else if (param_1 == DAT_00216400) {
    uVar1 = *DAT_002163fc | 0x800000;
  }
  else if (param_1 == DAT_00216404) {
    uVar1 = *DAT_002163fc | 0x1000000;
  }
  else {
    if (param_1 != DAT_00216408) {
      return;
    }
    uVar1 = *DAT_002163fc | 0x2000000;
  }
  *DAT_002163fc = uVar1;
  return;
}


// ==== FUN_0021640c @ 0021640c ====

void FUN_0021640c(undefined4 param_1,uint param_2)

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
  iVar3 = DAT_0021647c + 0x21643a;
  uVar1 = FUN_00201700(param_1,param_2 * uVar4);
  FUN_00201798(param_1,param_2 * uVar4);
  piVar2 = *(int **)(iVar3 + DAT_00216480);
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


// ==== FUN_00216484 @ 00216484 ====

void FUN_00216484(undefined4 param_1)

{
  **(undefined4 **)(DAT_00216490 + 0x21648c + DAT_00216494) = param_1;
  return;
}


// ==== FUN_00216498 @ 00216498 ====

void FUN_00216498(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_00209190(DAT_0021655c,1);
  FUN_00209106(DAT_0021655c,1);
  FUN_00209190(DAT_00216560,1);
  FUN_00209106(DAT_00216560,0);
  FUN_00209122(DAT_00216560,1);
  FUN_0020913e(DAT_00216560,1);
  FUN_00209190(DAT_00216564,1);
  FUN_00209106(DAT_00216564,1);
  FUN_00209190(DAT_00216568,1);
  FUN_00209106(DAT_00216568,0);
  FUN_00209122(DAT_00216568,1);
  FUN_0020913e(DAT_00216568,1);
  iVar1 = DAT_00216578;
  if (param_1 == 0) {
    param_1 = DAT_0021656c;
  }
  FUN_00216484(DAT_00216570);
  FUN_002163b4(DAT_00216570);
  piVar3 = *(int **)(iVar1 + 0x21651c + DAT_0021657c);
  *(uint *)(*piVar3 + 8) = *(uint *)(*piVar3 + 8) | 7;
  *(undefined2 *)(*piVar3 + 0xc) = 3;
  FUN_0021640c(param_1,0x1c200);
  FUN_00216484(DAT_00216574);
  FUN_002163b4(DAT_00216574);
  uVar2 = *(uint *)(*piVar3 + 8) | 7;
  *(uint *)(*piVar3 + 8) = uVar2;
  *(undefined2 *)(*piVar3 + 0xc) = 3;
  FUN_0021640c(param_1,param_2,uVar2,param_4);
  return;
}


// ==== FUN_002165b0 @ 002165b0 ====

undefined4 FUN_002165b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_00216664;
  iVar1 = FUN_0021b774(0x600);
  piVar3 = *(int **)(iVar2 + 0x2165c4 + DAT_00216668);
  *piVar3 = iVar1;
  if (iVar1 == 0) {
    iVar2 = DAT_00216690 + 0x216658;
    iVar1 = DAT_00216694 + 0x21665a;
  }
  else {
    FUN_0020b410(0);
    FUN_00215820(*piVar3,0,0x600);
    iVar2 = FUN_00201e44(param_1,2,3,*piVar3,2,param_2);
    if (iVar2 != 0) {
      FUN_002134e8(DAT_0021666c + 0x2165fa,DAT_00216670 + 0x2165fc,iVar2);
      FUN_0021b7fc(*piVar3);
      return 0;
    }
    iVar1 = *piVar3;
    iVar2 = FUN_002157d4(iVar1 + 0x108);
    if (iVar2 != 0) {
      iVar2 = FUN_002167f0(DAT_00216674 + 0x216624,iVar1 + 0x108,0x100);
      if (iVar2 != 0) {
        FUN_002134e8(DAT_00216680 + 0x216640,DAT_00216684 + 0x216642);
        return 0;
      }
      FUN_002134e8(DAT_00216678 + 0x216632,DAT_0021667c + 0x216634);
      return 1;
    }
    iVar2 = DAT_00216688 + 0x21664e;
    iVar1 = DAT_0021668c + 0x216650;
  }
  FUN_002134e8(iVar2,iVar1);
  return 0;
}


// ==== FUN_00216698 @ 00216698 ====

undefined4 FUN_00216698(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00215830(&iStack_20,DAT_002166e8 + 0x2166a8,0x10);
  iVar2 = 0;
  do {
    uVar1 = param_1 >> (iVar2 * -4 + 0x18U & 0xff);
    *(undefined1 *)(param_2 + iVar2) = *(undefined1 *)((int)&iStack_20 + ((uVar1 & 0xff) >> 4));
    iVar2 = iVar2 + 2;
    *(undefined1 *)(param_2 + iVar2 + -1) = *(undefined1 *)((int)&iStack_20 + (uVar1 & 0xf));
  } while (iVar2 != 8);
  return 8;
}


// ==== FUN_002166ec @ 002166ec ====

undefined4
FUN_002166ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int iVar2;
  int local_144;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [256];
  
  FUN_00215820(auStack_140,0,0x20);
  FUN_00215820(auStack_120,0,0x100);
  local_144 = 0;
  if (param_5 == 0x100) {
    iVar1 = FUN_0021c040(param_4,param_1,auStack_120);
    if (iVar1 == 0) {
      iVar1 = FUN_0021c01a(param_2,param_3,0x78,auStack_140);
      if (iVar1 == 0) {
        iVar1 = FUN_0021c120(auStack_140,0x20,auStack_120,0x100,0x20,0x800,&local_144);
        if (iVar1 == 0) {
          if (local_144 == 1) {
            FUN_002134e8(DAT_002167e8 + 0x2167b4,DAT_002167ec + 0x2167b6);
            return 0;
          }
          iVar1 = DAT_002167e0 + 0x2167aa;
          iVar2 = DAT_002167e4 + 0x2167ac;
        }
        else {
          iVar1 = DAT_002167d8 + 0x21679a;
          iVar2 = DAT_002167dc + 0x21679c;
        }
      }
      else {
        iVar1 = DAT_002167d0 + 0x216776;
        iVar2 = DAT_002167d4 + 0x216778;
      }
    }
    else {
      iVar1 = DAT_002167c8 + 0x216756;
      iVar2 = DAT_002167cc + 0x216758;
    }
    FUN_002134e8(iVar1,iVar2);
  }
  else {
    FUN_002134e8(DAT_002167c0 + 0x21673c,DAT_002167c4 + 0x21673e,param_5);
  }
  return 0xffffffff;
}


// ==== FUN_002167f0 @ 002167f0 ====

undefined4 FUN_002167f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)FUN_0021b774(0x79);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0xffffffff;
    FUN_002134e8(DAT_0021685c + 0x216850,DAT_00216860 + 0x216852);
  }
  else {
    *puVar1 = 0x30;
    puVar1[1] = 0x78;
    uVar2 = FUN_0021bcc0(0xd);
    iVar3 = FUN_00216698(uVar2,puVar1 + 2);
    uVar2 = FUN_0021bcc0(0xc);
    iVar4 = FUN_00216698(uVar2,puVar1 + iVar3 + 2);
    iVar4 = iVar3 + 2 + iVar4;
    puVar1[iVar4] = 0;
    uVar2 = FUN_002166ec(param_1,puVar1,iVar4,param_2,param_3);
    FUN_0021b7fc(puVar1);
  }
  return uVar2;
}


// ==== FUN_00216864 @ 00216864 ====

uint FUN_00216864(uint *param_1)

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
  
  puVar2 = DAT_00216900;
  uVar7 = param_1[1];
  uVar9 = *param_1 & 0xf;
  if (uVar9 == 0) {
    uVar7 = *(uint *)(DAT_0021690c + 0x216878);
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar1 = *DAT_00216900;
  *DAT_00216900 = (char)uVar9;
  puVar3 = DAT_00216908;
  puVar6 = (undefined4 *)(*(int *)(uVar7 + 0x18) + *(int *)(uVar7 + 0x10));
  uVar8 = (uint)*DAT_00216904;
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


// ==== FUN_00216910 @ 00216910 ====

int FUN_00216910(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(DAT_00216948 + 0x21691c) + 0x20) <= iVar1) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(DAT_00216948 + 0x21691c) + 0x1c);
    uVar2 = *(uint *)(iVar3 + iVar1 * 0x1c);
    if (((uVar2 & 0xf) == param_1) && ((uVar2 & 0x80) == param_2)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar3 + iVar1 * 0x1c;
}


// ==== FUN_0021694c @ 0021694c ====

void FUN_0021694c(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  ushort uVar4;
  ushort *puVar5;
  
  puVar2 = DAT_00216990;
  uVar1 = *DAT_00216990;
  *DAT_00216990 = (char)param_1;
  if (param_1 == 0) {
    uVar4 = *DAT_00216994 | 0x100;
    puVar5 = DAT_00216994;
  }
  else {
    piVar3 = (int *)FUN_00216910();
    if (*piVar3 << 0x18 < 0) {
      uVar4 = *DAT_00216994 | 8;
      puVar5 = DAT_00216994;
    }
    else {
      uVar4 = *DAT_00216998 | 0x10;
      puVar5 = DAT_00216998;
    }
  }
  *puVar5 = uVar4;
  *puVar5 = uVar4;
  *puVar2 = uVar1;
  return;
}


// ==== FUN_0021699c @ 0021699c ====

uint FUN_0021699c(uint *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = DAT_00216a1c;
  uVar5 = param_1[3];
  uVar7 = *param_1 & 0xf;
  if (uVar7 == 0) {
    uVar5 = *(uint *)(DAT_00216a20 + 0x2169b2);
  }
  if (uVar5 == 0) {
    return 0;
  }
  uVar1 = *DAT_00216a1c;
  *DAT_00216a1c = (char)uVar7;
  uVar6 = *(int *)(uVar5 + 0x18) - param_1[5];
  if (param_1[4] <= uVar6) {
    uVar6 = param_1[4];
  }
  if ((int)uVar6 < 0) {
    FUN_002134e8(DAT_00216a24 + 0x2169e0);
  }
  else if (uVar6 == 0) goto LAB_002169e6;
  puVar3 = (undefined1 *)(*(int *)(uVar5 + 0x10) + param_1[5]);
  for (puVar4 = puVar3; 0 < (int)(puVar3 + (uVar6 - (int)puVar4)); puVar4 = puVar4 + 1) {
    *(undefined1 *)((uVar7 + 0x4480008) * 4) = *puVar4;
  }
LAB_002169e6:
  param_1[6] = uVar6;
  param_1[5] = uVar6 + param_1[5];
  *puVar2 = uVar1;
  return uVar6;
}


// ==== FUN_00216a28 @ 00216a28 ====

void FUN_00216a28(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar4 = DAT_00216a88;
  iVar7 = DAT_00216a94 + 0x216a3a;
  iVar8 = *(int *)(*(int *)(DAT_00216a90 + 0x216a34) + 0x1c);
  uVar3 = *DAT_00216a88;
  *DAT_00216a88 = 0;
  puVar5 = DAT_00216a8c;
  uVar2 = *DAT_00216a8c;
  if ((uVar2 & 2) == 0) {
    iVar6 = FUN_0021699c(iVar8);
    if (iVar6 < 0x40) {
      uVar1 = 10;
      *(undefined4 *)(*(int *)(DAT_00216a98 + 0x216a6c) + 0x18) = 0;
      iVar6 = DAT_00216a9c;
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


// ==== FUN_00216aa0 @ 00216aa0 ====

void FUN_00216aa0(void)

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
  
  puVar1 = DAT_00216b38;
  uVar8 = 1;
  *DAT_00216b38 = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *(undefined2 *)(puVar1 + 0x6e) = 3;
  iVar7 = *(int *)(DAT_00216b48 + 0x216abc);
  *(undefined1 *)(iVar7 + 0x14) = 0;
  FUN_0021694c(0,0,3,iVar7,in_r3);
  do {
    uVar10 = uVar8 & 0xff;
    uVar8 = uVar8 + 1;
    FUN_0021694c(uVar10,0);
    FUN_0021694c(uVar10,0x80);
  } while (uVar8 != 4);
  if ((int)((uint)*DAT_00216b3c << 0x1b) < 0) {
    FUN_002134e8(DAT_00216b4c + 0x216ae8);
    FUN_0021797c();
  }
  else {
    FUN_002134e8(DAT_00216b58 + 0x216b06);
  }
  puVar3 = DAT_00216b54;
  puVar2 = DAT_00216b44;
  puVar1 = DAT_00216b40;
  iVar7 = 1;
  piVar6 = (int *)(DAT_00216b50 + 0x216afa);
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


// ==== FUN_00216b5c @ 00216b5c ====

void FUN_00216b5c(int param_1,byte *param_2,uint param_3,int param_4)

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
    FUN_00215830(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10),param_2,uVar1);
    *(uint *)(param_1 + 0x18) = uVar1 + *(int *)(param_1 + 0x18);
  }
  return;
}


// ==== FUN_00216b8c @ 00216b8c ====

void FUN_00216b8c(uint param_1,int param_2,int param_3)

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
  
  iVar22 = DAT_00216e70 + 0x216b9e;
  if ((param_3 != 0) && (param_3 << 0x1d < 0)) {
    **(undefined4 **)(iVar22 + DAT_00216e74) = 1;
    FUN_00216aa0();
  }
  iVar15 = DAT_00216e78;
  puVar5 = DAT_00216e6c;
  puVar4 = DAT_00216e68;
  local_44 = param_1;
  if (-1 < (int)(param_1 << 0x1f)) goto LAB_00217050;
  uVar1 = *DAT_00216e68;
  *DAT_00216e68 = 0;
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
    uVar6 = *(undefined4 *)(*(int *)(DAT_0021719c + 0x21701a) + 0x1c);
    *puVar4 = 0;
    uVar17 = *puVar5;
    if ((int)((uint)uVar17 << 0x1f) < 0) {
      iVar22 = FUN_00216864(uVar6);
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
    goto LAB_00217044;
  }
  if (iVar15 != 0) {
    if (iVar15 == 2) {
      FUN_00216a28();
    }
    goto LAB_00217044;
  }
  piVar16 = *(int **)(iVar22 + DAT_00216e7c);
  if (*piVar16 != 0) {
    DAT_11200000 = *(undefined1 *)(*(int *)(DAT_00216e80 + 0x216c1a) + 0x14);
    *piVar16 = 0;
  }
  uVar6 = *(undefined4 *)(*(int *)(DAT_00216e84 + 0x216c2c) + 0x1c);
  uVar2 = *puVar4;
  *puVar4 = 0;
  if (-1 < (int)((uint)*puVar5 << 0x1f)) goto LAB_00217044;
  piVar18 = (int *)(DAT_00216e88 + 0x216c46);
  iVar15 = *piVar18;
  *(undefined4 *)(iVar15 + 0x18) = 0;
  FUN_00216864(uVar6);
  FUN_00215830(iVar15 + 8,*(undefined4 *)(iVar15 + 0x10),8);
  bVar10 = *(byte *)(iVar15 + 8) & 0x60;
  if ((*(byte *)(iVar15 + 8) & 0x60) != 0) {
    if (bVar10 != 0x20) {
      if (bVar10 == 0x40) {
        FUN_002134e8(DAT_00217198 + 0x21700a);
      }
      goto LAB_00217110;
    }
    iVar7 = *piVar18;
    switch(*(undefined1 *)(iVar7 + 9)) {
    case 0x20:
      *piVar21 = 1;
      FUN_00217954();
      break;
    case 0x21:
      FUN_00215830(*(undefined4 *)(iVar7 + 0x10),DAT_00217178 + 0x216f68,7);
      *(undefined4 *)(iVar7 + 0x18) = 7;
      *piVar21 = 2;
      break;
    case 0x22:
      **(uint **)(iVar22 + DAT_0021717c) = (uint)*(ushort *)(iVar7 + 10);
      break;
    case 0x23:
      break;
    default:
      cVar13 = -1;
      goto LAB_00216f88;
    }
    cVar13 = '\0';
LAB_00216f88:
    if (cVar13 == '\0') goto LAB_00217110;
    FUN_002134e8(DAT_00217180 + 0x216f96);
    FUN_002134e8(DAT_00217184 + 0x216fa0,*(undefined1 *)(iVar15 + 8));
    FUN_002134e8(DAT_00217188 + 0x216faa,*(undefined1 *)(iVar15 + 9));
    FUN_002134e8(DAT_0021718c + 0x216fba,*(undefined2 *)(iVar15 + 10));
    FUN_002134e8(DAT_00217190 + 0x216fca,*(undefined2 *)(iVar15 + 0xc));
    uVar2 = *(undefined1 *)(iVar15 + 0xe);
    uVar12 = *(undefined1 *)(iVar15 + 0xf);
    iVar22 = DAT_00217194 + 0x216fd6;
    goto LAB_00216fd4;
  }
  iVar19 = *piVar18;
  iVar7 = *(int *)(iVar19 + 4);
  puVar11 = *(undefined1 **)(iVar19 + 0x10);
  if (iVar7 == 0) goto switchD_00216c94_caseD_1;
  bVar10 = *(byte *)(iVar19 + 8);
  bVar20 = bVar10 & 0x60;
  if ((bVar10 & 0x60) != 0) goto switchD_00216c94_caseD_1;
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
            FUN_002134e8(DAT_00217158 + 0x216ed8,*(byte *)(iVar19 + 0xc) & 0xf,
                         *(byte *)(iVar19 + 0xc) & 0x80);
            goto LAB_00216ee8;
          }
          FUN_002134e8(DAT_0021715c + 0x216ee2);
        }
        goto switchD_00216c94_caseD_1;
      }
      bVar10 = *(byte *)(iVar19 + 10);
      *(byte *)(iVar7 + 0x17) = bVar20;
      *(byte *)(iVar7 + 0x16) = bVar20;
      *(byte *)(iVar7 + 0x15) = bVar10 & 0x7f;
      FUN_002179d8();
    }
    goto LAB_00216ee8;
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
    goto LAB_00216d2c;
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
          goto LAB_00216d26;
        }
        break;
      case 2:
        if (uVar14 != 0) {
          uVar14 = uVar14 - 1;
        }
        if (((int)uVar14 < *(int *)(iVar7 + 0xc)) &&
           (iVar22 = uVar14 * 0xc + *(int *)(iVar7 + 0x10), iVar22 != 0)) {
          iVar7 = *(int *)(iVar22 + 4);
          FUN_00216b5c(iVar19,iVar7,9,uVar3);
          for (iVar24 = 0; iVar24 < (int)(uint)*(byte *)(iVar7 + 4); iVar24 = iVar24 + 1) {
            piVar16 = *(int **)(*(int *)(iVar22 + 8) + iVar24 * 4);
            if (piVar16 == (int *)0x0) goto switchD_00216c94_caseD_1;
            for (iVar25 = 0; iVar25 < *piVar16; iVar25 = iVar25 + 1) {
              iVar23 = piVar16[1] + iVar25 * 0x1c;
              if ((iVar23 == 0) || (iVar8 = *(int *)(piVar16[1] + iVar25 * 0x1c), iVar8 == 0))
              goto switchD_00216c94_caseD_1;
              FUN_00216b5c(iVar19,iVar8,9,uVar3);
              if (*(int *)(iVar23 + 4) != 0) {
                FUN_00216b5c(iVar19,*(int *)(iVar23 + 4),5,uVar3);
              }
              if (*(int *)(iVar23 + 8) != 0) {
                FUN_00216b5c(iVar19,*(int *)(iVar23 + 8),4,uVar3);
              }
              if (*(int *)(iVar23 + 0xc) != 0) {
                FUN_00216b5c(iVar19,*(int *)(iVar23 + 0xc),5,uVar3);
              }
              if (*(int *)(iVar23 + 0x10) != 0) {
                FUN_00216b5c(iVar19,*(int *)(iVar23 + 0x10),5,uVar3);
              }
              for (iVar8 = 0; iVar8 < *(int *)(iVar23 + 0x14); iVar8 = iVar8 + 1) {
                iVar9 = *(int *)(*(int *)(iVar23 + 0x18) + iVar8 * 4);
                if (iVar9 == 0) goto switchD_00216c94_caseD_1;
                FUN_00216b5c(iVar19,iVar9,8,uVar3);
              }
            }
          }
          goto LAB_00216d2c;
        }
        break;
      case 3:
        puVar11 = *(undefined1 **)(**(int **)(iVar22 + DAT_00216e8c) + uVar14 * 4);
        uVar12 = *puVar11;
LAB_00216d26:
        FUN_00216b5c(iVar19,puVar11,uVar12,uVar3);
        goto LAB_00216d2c;
      case 6:
        puVar11 = *(undefined1 **)(iVar7 + 8);
        if (puVar11 != (undefined1 *)0x0) {
          uVar12 = 9;
          goto LAB_00216d26;
        }
      }
    }
  default:
switchD_00216c94_caseD_1:
    bVar20 = 0xff;
    break;
  case '\b':
    *(undefined4 *)(iVar19 + 0x18) = 1;
    uVar12 = *(undefined1 *)(iVar7 + 0x15);
    goto LAB_00216e64;
  case '\n':
    *(undefined4 *)(iVar19 + 0x18) = 1;
    uVar12 = *(undefined1 *)(iVar7 + 0x17);
LAB_00216e64:
    *puVar11 = uVar12;
LAB_00216d2c:
    bVar20 = 0;
  }
LAB_00216ee8:
  if (bVar20 == 0) {
LAB_00217110:
    iVar22 = *piVar21;
    if (iVar22 == 1) {
      uVar17 = *puVar5 | 0x40;
LAB_0021712c:
      *puVar5 = uVar17;
    }
    else {
      if (iVar22 == 0) {
        uVar17 = *puVar5 | 0x48;
        goto LAB_0021712c;
      }
      if (iVar22 == 2) {
        *puVar5 = *puVar5 | 0x40;
        FUN_00216a28();
      }
    }
    *puVar4 = uVar2;
  }
  else {
    FUN_002134e8(DAT_00217160 + 0x216ef6);
    FUN_002134e8(DAT_00217164 + 0x216f00,*(undefined1 *)(iVar15 + 8));
    FUN_002134e8(DAT_00217168 + 0x216f0a,*(undefined1 *)(iVar15 + 9));
    FUN_002134e8(DAT_0021716c + 0x216f1a,*(undefined2 *)(iVar15 + 10));
    FUN_002134e8(DAT_00217170 + 0x216f2a,*(undefined2 *)(iVar15 + 0xc));
    uVar2 = *(undefined1 *)(iVar15 + 0xe);
    uVar12 = *(undefined1 *)(iVar15 + 0xf);
    iVar22 = DAT_00217174 + 0x216f36;
LAB_00216fd4:
    FUN_002134e8(iVar22,CONCAT11(uVar12,uVar2));
    uVar2 = *puVar4;
    *puVar4 = 0;
    FUN_0021694c(0,0);
    *puVar5 = *puVar5 | 0x20;
    *piVar21 = 0;
    *puVar4 = uVar2;
  }
LAB_00217044:
  *puVar4 = uVar1;
  local_44 = param_1 & 0xfe;
LAB_00217050:
  puVar4 = DAT_00217150;
  if (local_44 != 0) {
    uVar14 = 1;
    do {
      if (((int)local_44 >> (uVar14 & 0xff)) << 0x1f < 0) {
        iVar22 = FUN_00216910(uVar14,0x80);
        uVar1 = *puVar4;
        *puVar4 = (char)uVar14;
        puVar5 = DAT_002171a0;
        uVar17 = *DAT_002171a0;
        if ((uVar17 & 0x21) == 0) {
          iVar15 = FUN_0021699c();
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
  puVar5 = DAT_00217154;
  puVar4 = DAT_00217150;
  if (param_2 != 0) {
    uVar14 = 1;
    do {
      if ((param_2 >> (uVar14 & 0xff)) << 0x1f < 0) {
        FUN_00216910(uVar14,0);
        uVar1 = *puVar4;
        *puVar4 = (char)uVar14;
        uVar17 = *puVar5;
        if ((-1 < (int)((uint)uVar17 << 0x19)) && ((int)((uint)uVar17 << 0x1f) < 0)) {
          FUN_00216864();
          *puVar5 = uVar17 & 0xfffe;
          *puVar4 = uVar1;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 3);
  }
  return;
}


// ==== FUN_002171a4 @ 002171a4 ====

void FUN_002171a4(uint *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar3 = DAT_002171d8;
  uVar5 = *param_1;
  uVar1 = *DAT_002171d8;
  *DAT_002171d8 = (char)(uVar5 & 0xf);
  puVar4 = DAT_002171dc;
  if ((uVar5 & 0xf) != 0) {
    if ((int)(*param_1 << 0x18) < 0) {
      uVar2 = *DAT_002171dc;
      if ((int)((uint)uVar2 << 0x1f) < 0) {
        return;
      }
      FUN_0021699c();
      *puVar4 = uVar2 | 1;
    }
    *puVar3 = uVar1;
  }
  return;
}


// ==== FUN_002171e0 @ 002171e0 ====

ushort FUN_002171e0(uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  
  pbVar2 = DAT_00217204;
  bVar1 = *DAT_00217204;
  *DAT_00217204 = (byte)*param_1 & 0xf;
  uVar3 = 0;
  if ((*param_1 & 0x80) != 0) {
    uVar3 = *DAT_00217208;
  }
  *pbVar2 = bVar1;
  return uVar3 & 1;
}


// ==== FUN_0021720c @ 0021720c ====

void FUN_0021720c(undefined4 param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar2 = DAT_0021734c;
  iVar4 = DAT_00217370 + 0x217214;
  if (param_2 == 0) {
    return;
  }
  uVar1 = *DAT_0021734c;
  *DAT_0021734c = (char)param_2;
  piVar5 = *(int **)(iVar4 + DAT_00217374);
  if ((*param_3 & 0x80) == 0) {
    *DAT_00217350 = *DAT_00217350 | 0x90;
    *DAT_00217354 = (short)((uint)(*piVar5 << 0xd) >> 0x10);
    uVar7 = param_3[2];
    *DAT_00217358 = (short)uVar7;
    puVar6 = DAT_0021735c;
    if (uVar7 == 0x100) {
      uVar3 = 5;
    }
    else if ((int)uVar7 < 0x101) {
      if (uVar7 == 0x20) {
        uVar3 = 2;
      }
      else if ((int)uVar7 < 0x21) {
        if (uVar7 == 8) {
          *DAT_0021735c = 0;
          goto LAB_00217342;
        }
        if (uVar7 != 0x10) goto LAB_00217342;
        uVar3 = 1;
      }
      else if (uVar7 == 0x40) {
        uVar3 = 3;
      }
      else {
        if (uVar7 != 0x80) goto LAB_00217342;
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
        if (uVar7 != 0x400) goto LAB_00217342;
        uVar3 = 7;
      }
    }
    else {
      if ((uVar7 != 0xc00) && (uVar7 != 0x1000)) goto LAB_00217342;
      uVar3 = 9;
    }
  }
  else {
    *DAT_00217360 = *DAT_00217360 | 0x48;
    *DAT_00217364 = (short)((uint)(*piVar5 << 0xd) >> 0x10);
    uVar7 = param_3[4];
    *DAT_00217368 = (short)uVar7;
    puVar6 = DAT_0021736c;
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
          if (uVar7 != 0x10) goto LAB_00217342;
          uVar3 = 1;
        }
      }
      else if (uVar7 == 0x40) {
        uVar3 = 3;
      }
      else {
        if (uVar7 != 0x80) goto LAB_00217342;
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
        if (uVar7 != 0x400) goto LAB_00217342;
        uVar3 = 7;
      }
    }
    else {
      if ((uVar7 != 0xc00) && (uVar7 != 0x1000)) goto LAB_00217342;
      uVar3 = 9;
    }
  }
  *puVar6 = uVar3;
LAB_00217342:
  *piVar5 = uVar7 + *piVar5;
  *puVar2 = uVar1;
  return;
}


// ==== FUN_00217398 @ 00217398 ====

void FUN_00217398(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  FUN_00217504();
  puVar1 = DAT_002173c8;
  *DAT_002173c8 = 0xffff;
  puVar1[1] = 0xffff;
  *(undefined1 *)(puVar1 + 4) = 0xff;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(DAT_002173cc + 0x2173b6) = param_1;
  uVar2 = FUN_002175f4(param_1,uVar2);
  *(undefined4 *)(DAT_002173d0 + 0x2173c0) = uVar2;
  FUN_00216aa0();
  return;
}


// ==== FUN_00217504 @ 00217504 ====

void FUN_00217504(void)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = DAT_00217580;
  *DAT_00217580 = *DAT_00217580 & 0xef;
  pbVar1[0x4e] = pbVar1[0x4e] & 0xfb;
  pbVar1[0x51] = pbVar1[0x51] & 0xfe;
  pbVar1[0x4d] = pbVar1[0x4d] & 0xfb;
  pbVar2 = DAT_00217584;
  *DAT_00217584 = *DAT_00217584 & 0xfc;
  pbVar2[0x47] = pbVar2[0x47] & 0xb;
  pbVar2[0x48] = pbVar2[0x48] & 0xc3;
  pbVar1[0x4d] = pbVar1[0x4d] & 0x45;
  pbVar1[-3] = pbVar1[-3] & 0x7f;
  pbVar1[-3] = pbVar1[-3] | 0x10;
  thunk_FUN_00215aa8(800);
  return;
}


// ==== FUN_002175a8 @ 002175a8 ====

void FUN_002175a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = FUN_002157d4(param_1);
    if (iVar1 <= iVar2) {
      return;
    }
    if (*(byte *)(param_1 + iVar2) == 0) break;
    *(ushort *)(param_2 + iVar2 * 2) = (ushort)*(byte *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
  }
  return;
}


// ==== FUN_002175c8 @ 002175c8 ====

int FUN_002175c8(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_002175ec;
  iVar2 = *(int *)((int)&DAT_002175f0 + DAT_002175ec);
  iVar3 = *(int *)(iVar2 + 0x18);
  if (iVar3 != 0) {
    FUN_002022d8(DAT_002175f0 + 0x2175de,*(undefined4 *)(iVar2 + 0x10),iVar3,iVar2,in_r3);
    *(undefined4 *)(*(int *)((int)&DAT_002175f0 + iVar1) + 0x18) = 0;
  }
  return iVar3;
}


// ==== FUN_002175f4 @ 002175f4 ====

undefined4 * FUN_002175f4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0021763c;
  if (((*param_2 & 0xf) != 0) && (iVar1 = DAT_00217640, (int)(*param_2 << 0x18) < 0)) {
    iVar1 = DAT_00217638;
  }
  puVar2 = *(undefined4 **)(DAT_00217634 + 0x217604 + iVar1);
  FUN_00215820(puVar2,0,0x41c);
  *puVar2 = param_2;
  puVar2[1] = param_1;
  puVar2[4] = puVar2 + 7;
  puVar2[5] = 0x400;
  return puVar2;
}


// ==== FUN_00217644 @ 00217644 ====

undefined4 FUN_00217644(undefined4 param_1,undefined4 param_2)

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
  
  iVar6 = DAT_002178a8;
  iVar1 = DAT_002178a4;
  iVar11 = 0;
  iVar13 = DAT_00217898 + 0x21765a;
  iVar3 = DAT_002178a0 + 0x217666;
  **(undefined4 **)(iVar13 + DAT_0021789c) = 0;
  puVar15 = (undefined4 *)(iVar1 + 0x217674);
  puVar14 = (undefined4 *)(iVar6 + 0x217678);
  **(undefined4 **)(iVar13 + DAT_002178ac) = 0;
  **(undefined4 **)(iVar13 + DAT_002178b0) = 0;
  **(undefined4 **)(iVar13 + DAT_002178b4) = 0x200;
  puVar8 = *(undefined4 **)(iVar13 + DAT_002178b8);
  *puVar8 = 0;
  FUN_0020220c(iVar3,0x400,0x200,puVar8,param_1,param_2);
  FUN_00202258(DAT_002178bc + 0x21769a,0x400);
  iVar3 = DAT_002178c0;
  puVar5 = (undefined1 *)(DAT_002178c0 + 0x2176a6);
  iVar4 = DAT_002178c4 + 0x2176a8;
  *(undefined1 *)(DAT_002178c0 + 0x2176a7) = 3;
  *puVar5 = 0x12;
  FUN_002175a8(iVar4,iVar3 + 0x2176a8);
  iVar3 = DAT_002178c8;
  iVar4 = DAT_002178cc + 0x2176bc;
  *(undefined1 *)(DAT_002178c8 + 0x2176ba) = 0x22;
  *(undefined1 *)(iVar3 + 0x2176bb) = 3;
  FUN_002175a8(iVar4);
  iVar3 = DAT_002178d0;
  iVar4 = DAT_002178d4 + 0x2176d4;
  *(undefined1 *)(DAT_002178d0 + 0x2176d2) = 0x34;
  *(undefined1 *)(iVar3 + 0x2176d3) = 3;
  FUN_002175a8(iVar4);
  iVar3 = DAT_002178d8;
  iVar4 = DAT_002178dc + 0x2176ec;
  *(undefined1 *)(DAT_002178d8 + 0x2176ea) = 0x2e;
  *(undefined1 *)(iVar3 + 0x2176eb) = 3;
  FUN_002175a8(iVar4);
  iVar3 = DAT_002178e0;
  iVar4 = DAT_002178e4 + 0x217702;
  *(undefined1 *)(DAT_002178e0 + 0x217701) = 3;
  *(undefined1 *)(iVar3 + 0x217700) = 0x40;
  FUN_002175a8(iVar4);
  iVar3 = DAT_002178ec;
  iVar12 = DAT_002178ec + 0x21771c;
  **(int **)(iVar13 + DAT_002178e8) = DAT_002178f0 + 0x21771e;
  FUN_00215820(iVar12,0,0x28);
  iVar4 = DAT_002178f4;
  *(undefined4 *)(iVar3 + 0x217728) = 1;
  *(int *)(iVar3 + 0x217720) = iVar4 + 0x217732;
  iVar4 = DAT_002178f8;
  *(undefined4 **)(iVar3 + 0x21772c) = puVar15;
  *(undefined4 *)(iVar3 + 0x21773c) = 1;
  *(int *)(iVar3 + 0x217724) = iVar4 + 0x217740;
  *(undefined1 *)(iVar3 + 0x217734) = 0;
  *(undefined4 **)(iVar3 + 0x217738) = puVar14;
  *(undefined1 *)(iVar3 + 0x217740) = 0x40;
  FUN_00215820(puVar15,0,0xc);
  iVar3 = DAT_002178fc;
  *puVar15 = 2;
  iVar2 = DAT_00217904;
  iVar4 = DAT_00217900;
  *(int *)(iVar1 + 0x217678) = iVar3 + 0x217760;
  iVar3 = DAT_00217908;
  puVar8 = (undefined4 *)(iVar4 + 0x21776a);
  puVar17 = (undefined4 *)(iVar2 + 0x21776e);
  *(undefined4 **)(iVar1 + 0x21767c) = puVar8;
  puVar15 = (undefined4 *)(iVar3 + 0x217776);
  *puVar8 = puVar17;
  *(undefined4 **)(iVar4 + 0x21776e) = puVar15;
  FUN_00215820(puVar17,0,8);
  iVar1 = DAT_0021790c;
  piVar16 = (int *)(DAT_0021790c + 0x217794);
  *puVar17 = 1;
  puVar17[1] = piVar16;
  FUN_00215820(piVar16,0,0x1c);
  iVar3 = DAT_00217910;
  *(undefined4 *)(iVar1 + 0x2177a8) = 2;
  iVar4 = DAT_00217914;
  iVar3 = iVar3 + 0x2177b2;
  *piVar16 = iVar3;
  *(int *)(iVar1 + 0x2177ac) = iVar4 + 0x2177b8;
  iVar1 = DAT_00217918;
  FUN_00215820(puVar15,0,8);
  piVar16 = (int *)(iVar1 + 0x2177d2);
  *puVar15 = 1;
  puVar15[1] = piVar16;
  FUN_00215820(piVar16,0,0x1c);
  *piVar16 = iVar3 + 9;
  *(int *)(iVar1 + 0x2177d6) = DAT_0021791c + 0x2177fa;
  *(int *)(iVar1 + 0x2177da) = DAT_00217920 + 0x217802;
  *(undefined4 *)(iVar1 + 0x2177de) = *(undefined4 *)(iVar13 + DAT_00217924);
  uVar9 = *(undefined4 *)(iVar13 + DAT_00217928);
  *(undefined4 *)(iVar1 + 0x2177e6) = 1;
  iVar3 = DAT_0021792c;
  *(undefined4 *)(iVar1 + 0x2177e2) = uVar9;
  iVar4 = DAT_00217934;
  *(int *)(iVar1 + 0x2177ea) = DAT_00217930 + 0x217826;
  FUN_00215820(puVar14,0,0x1c);
  *puVar14 = 0;
  *(undefined4 *)(iVar6 + 0x217680) = 0x40;
  *(undefined4 *)(iVar6 + 0x217688) = 0x40;
  iVar1 = DAT_00217938;
  FUN_0021720c(iVar12,0,puVar14);
  do {
    puVar8 = puVar14 + 7;
    FUN_00215820(puVar8,0,0x1c);
    iVar6 = iVar3 + 0x217820 + iVar11;
    uVar10 = (uint)*(byte *)(iVar6 + 2);
    uVar7 = (uint)*(ushort *)(iVar6 + 4);
    puVar14[7] = uVar10;
    puVar14[9] = uVar7;
    puVar14[0xb] = uVar7;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar9 = FUN_002175f4(iVar1 + 0x21784a,puVar8);
      puVar14[10] = uVar9;
    }
    else {
      uVar9 = FUN_002175f4(iVar4 + 0x217848,puVar8);
      puVar14[8] = uVar9;
    }
    iVar11 = iVar11 + 8;
    puVar14 = puVar8;
  } while (iVar11 != 0x18);
  FUN_00217398(DAT_0021793c + 0x21788c);
  return 0;
}


// ==== FUN_00217954 @ 00217954 ====

void FUN_00217954(undefined4 param_1)

{
  **(undefined4 **)(DAT_00217960 + 0x21795c + DAT_00217964) = param_1;
  return;
}


// ==== FUN_00217968 @ 00217968 ====

undefined4 FUN_00217968(void)

{
  return **(undefined4 **)(DAT_00217974 + 0x217970 + DAT_00217978);
}


// ==== FUN_0021797c @ 0021797c ====

void FUN_0021797c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar1 = DAT_002179c0;
  *(undefined1 *)(DAT_002179bc + 0x21799e) = 1;
  *(int *)(DAT_002179c4 + 0x2179aa) = DAT_002179c8 + 0x217994;
  *(int *)(DAT_002179cc + 0x2179b4) = DAT_002179d0 + 0x21799e;
  iVar4 = 0;
  puVar5 = (uint *)(DAT_002179d4 + 0x2179a6);
  do {
    iVar2 = iVar1 + 0x21798e + iVar4;
    iVar4 = iVar4 + 8;
    uVar3 = (uint)*(ushort *)(iVar2 + 4);
    puVar5[7] = (uint)*(byte *)(iVar2 + 2);
    puVar5[9] = uVar3;
    puVar5[0xb] = uVar3;
    puVar5 = puVar5 + 7;
  } while (iVar4 != 0x18);
  return;
}


// ==== FUN_002179d8 @ 002179d8 ====

void FUN_002179d8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00217a14;
  iVar2 = DAT_00217a14 + 0x2179e6;
  iVar4 = 0;
  iVar5 = DAT_00217a18 + 0x2179f0;
  **(undefined4 **)(DAT_00217a0c + 0x2179e0 + DAT_00217a10) = 1;
  *(undefined4 *)(iVar3 + 0x217a06) = 4;
  do {
    puVar1 = (uint *)(iVar4 + iVar5);
    iVar3 = iVar5 + iVar4;
    iVar4 = iVar4 + 0x1c;
    FUN_0021720c(iVar2,*puVar1 & 0xffffff7f,iVar3);
  } while (iVar4 != 0x70);
  return;
}


// ==== FUN_00217a1c @ 00217a1c ====

void FUN_00217a1c(undefined4 param_1,undefined1 param_2,undefined4 param_3)

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
  
  puVar5 = DAT_00217a84;
  uVar2 = *DAT_00217a84;
  *DAT_00217a84 = (ushort)(byte)uVar2;
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
    FUN_00216b8c(bVar7,bVar8,bVar9,bVar1,param_1,uVar6,param_3);
  }
  return;
}


// ==== FUN_00217a88 @ 00217a88 ====

void FUN_00217a88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  FUN_00217a1c();
  iVar2 = FUN_00217968();
  iVar1 = DAT_00217b00;
  if ((iVar2 != 0) && (puVar6 = (uint *)(DAT_00217af8 + 0x217a9c), *puVar6 != 0)) {
    iVar2 = *(int *)(DAT_00217afc + 0x217aec);
    iVar7 = DAT_00217b00 + 0x217ae2;
    while (uVar5 = *puVar6, uVar5 != 0) {
      if (iVar2 == 0) {
LAB_00217abe:
        FUN_002134e8(DAT_00217b04 + 0x217ac4);
        break;
      }
      uVar4 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x18);
      if ((int)uVar4 < 1) goto LAB_00217abe;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      iVar3 = FUN_002022a4(puVar6,*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x10),uVar4);
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + iVar3;
      if (iVar3 == 0) break;
      if (*(int *)((int)&DAT_00217af8 + iVar1 + 2) == 0) {
        FUN_002171a4(iVar7);
      }
    }
  }
  FUN_002175c8();
  return;
}


// ==== FUN_00217b08 @ 00217b08 ====

void FUN_00217b08(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00215b08(0);
  piVar5 = (int *)(DAT_00217b4c + 0x217b1a);
  iVar4 = (int)&DAT_00217b50 + DAT_00217b48;
  while ((*piVar5 != 0 || (iVar3 = FUN_002171e0(iVar4), iVar3 != 0))) {
    FUN_00217a88();
    uVar2 = FUN_00215b08(uVar1);
    if (300 < uVar2) {
      FUN_002134e8(DAT_00217b50 + 0x217b3a);
      return;
    }
  }
  return;
}


// ==== thunk_FUN_00217b08 @ 00217b54 ====

void thunk_FUN_00217b08(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00215b08(0);
  piVar5 = (int *)(DAT_00217b4c + 0x217b1a);
  iVar4 = (int)&DAT_00217b50 + DAT_00217b48;
  while ((*piVar5 != 0 || (iVar3 = FUN_002171e0(iVar4), iVar3 != 0))) {
    FUN_00217a88();
    uVar2 = FUN_00215b08(uVar1);
    if (300 < uVar2) {
      FUN_002134e8(DAT_00217b50 + 0x217b3a);
      return;
    }
  }
  return;
}


// ==== FUN_00217b58 @ 00217b58 ====

undefined4 FUN_00217b58(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = (uint *)(DAT_00217bac + 0x217b6e);
  iVar5 = DAT_00217bb0 + 0x217b74;
  piVar1 = (int *)(DAT_00217bb4 + 0x217b76);
  iVar6 = param_1;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + iVar3) {
    do {
      if (*puVar4 < 0x200) {
        FUN_00217a88();
      }
      iVar3 = *piVar1;
    } while (iVar3 == 0);
    if (param_1 < iVar2 + iVar3) {
      iVar3 = param_1 - iVar2;
    }
    FUN_002022a4(iVar5,param_2 + iVar2,iVar3,piVar1,iVar6);
  }
  return 0;
}


// ==== FUN_00217bb8 @ 00217bb8 ====

void FUN_00217bb8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00217c20;
  iVar4 = DAT_00217c18 + 0x217bd0;
  iVar5 = DAT_00217c1c + 0x217bd2;
  puVar3 = (uint *)(DAT_00217c20 + 0x217bd4);
  while (0 < param_1) {
    if (param_1 < 0x201) {
      iVar2 = param_2 + param_1;
      FUN_002022d8(iVar4,param_2,param_1);
      param_1 = 0;
    }
    else {
      iVar2 = param_2 + 0x200;
      FUN_002022d8(iVar5,param_2,0x200);
      param_1 = param_1 + -0x200;
    }
    param_2 = iVar2;
    if ((*(uint *)(iVar1 + 0x217bd8) <= *puVar3) || (param_3 != 0)) {
      FUN_00217a88();
    }
  }
  return;
}


// ==== FUN_00217c7c @ 00217c7c ====

undefined4 FUN_00217c7c(void)

{
  int iVar1;
  
  if ((*(uint *)(DAT_00217ca0 + 0x217c84) < 0x200) && (iVar1 = FUN_00217968(), iVar1 != 0)) {
    FUN_00217a1c();
    FUN_002175c8();
  }
  return *(undefined4 *)(DAT_00217ca4 + 0x217c9e);
}


// ==== FUN_00217ca8 @ 00217ca8 ====

undefined4 FUN_00217ca8(void)

{
  if (*(int *)(DAT_00217cc4 + 0x217cae) == 0) {
    *(int *)(DAT_00217cc4 + 0x217cae) = *DAT_00217cc0;
  }
  return *(undefined4 *)(DAT_00217cc8 + 0x217cbc);
}


// ==== FUN_00217ccc @ 00217ccc ====

void FUN_00217ccc(void)

{
  *DAT_00217cd8 = 0x1971;
  return;
}


// ==== FUN_00217cdc @ 00217cdc ====

undefined4 FUN_00217cdc(void)

{
  uint uVar1;
  
  uVar1 = FUN_00217ca8();
  if ((int)(uVar1 << 1) < 0) {
    FUN_002134e8(DAT_00217d28 + 0x217cec);
    return 3;
  }
  if ((int)(uVar1 << 0x1f) < 0) {
    FUN_002134e8(DAT_00217d2c + 0x217cfc);
    return 4;
  }
  if ((uVar1 & 2) != 0) {
    FUN_002134e8(DAT_00217d30 + 0x217d0e);
    return 5;
  }
  if ((int)uVar1 < 0) {
    FUN_002134e8(DAT_00217d34 + 0x217d1e);
    return 6;
  }
  return 0;
}


// ==== FUN_00217d38 @ 00217d38 ====

undefined4 FUN_00217d38(void)

{
  uint uVar1;
  
  uVar1 = FUN_00217ca8();
  if ((DAT_00217d6c & uVar1) == 0) {
    return 0;
  }
  if (*(int *)(DAT_00217d70 + 0x217d4a) << 0x1b < 0) {
    FUN_002134e8(DAT_00217d74 + 0x217d54);
    return 2;
  }
  FUN_002134e8(DAT_00217d78 + 0x217d60);
  return 1;
}


// ==== FUN_00217d7c @ 00217d7c ====

void FUN_00217d7c(void)

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
  
  puVar1 = DAT_00217ec8;
  puVar8 = (uint *)(DAT_00217ed4 + 0x217d8a);
  iVar9 = DAT_00217ed8 + 0x217d8c;
  *puVar8 = *DAT_00217ec8;
  uVar3 = FUN_00217ca8();
  puVar6 = *(uint **)(iVar9 + DAT_00217edc);
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
  puVar8 = DAT_00217ecc;
  FUN_002134e8(DAT_00217ee0 + 0x217dfc,*puVar6,uVar5,puVar6,in_r3);
  *puVar1 = *puVar1 & 0xffffffb0 | 0x22000010;
  uVar3 = *puVar8;
  puVar7 = (undefined4 *)(DAT_00217ee4 + 0x217e1c);
  uVar5 = uVar3 & 3;
  *puVar7 = 0;
  iVar4 = FUN_00217ca8();
  iVar9 = DAT_00217efc;
  if (iVar4 == 0) {
    if (uVar5 == 3) {
      *puVar7 = 4;
      iVar9 = iVar9 + 0x217e6a;
    }
    else {
      iVar9 = DAT_00217f00 + 0x217e70;
    }
  }
  else {
    FUN_002134e8(DAT_00217ee8 + 0x217e2c);
    iVar2 = DAT_00217ef4;
    iVar4 = DAT_00217ef0;
    iVar9 = DAT_00217eec;
    if (uVar5 == 1) {
      *puVar7 = 2;
      iVar9 = iVar2 + 0x217e56;
    }
    else if (uVar5 == 0) {
      *puVar7 = 1;
      iVar9 = iVar4 + 0x217e4c;
    }
    else if (uVar5 == 2) {
      *puVar7 = 3;
      iVar9 = iVar9 + 0x217e42;
    }
    else {
      iVar9 = DAT_00217ef8 + 0x217e5c;
    }
  }
  FUN_002134e8(iVar9);
  uVar3 = uVar3 & 0xfffffff8;
  if (*(int *)(DAT_00217f04 + 0x217e7c) == 4) {
    uVar3 = uVar3 | 4;
  }
  *puVar8 = uVar3;
  iVar9 = FUN_00217d38();
  if (iVar9 == 2) {
    iVar9 = DAT_00217f08 + 0x217e94;
  }
  else {
    iVar9 = FUN_00217d38();
    if (iVar9 == 1) {
      iVar9 = DAT_00217f0c + 0x217ea2;
    }
    else {
      iVar9 = DAT_00217f10 + 0x217ea8;
    }
  }
  FUN_002134e8(iVar9);
  *(undefined4 *)(DAT_00217f14 + 0x217eb4) = 0x5000;
  puVar7 = DAT_00217ed0;
  *DAT_00217ed0 = 0x5008;
  puVar7[0xf] = puVar7[0xf] | 0x59000002;
  return;
}


// ==== FUN_00217f98 @ 00217f98 ====

undefined4 FUN_00217f98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00217fc0 + 0x217faa;
  FUN_002183c0(iVar1,DAT_00217fc4 + 0x217fae,DAT_00217fc8 + 0x217fb0,0x20);
  FUN_0021842a(iVar1,param_1,param_2);
  return 0;
}


// ==== FUN_00217fcc @ 00217fcc ====

undefined4 FUN_00217fcc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_c = *param_2;
    FUN_00218434(DAT_00217ff8 + 0x217fe4,param_1,&local_c,param_1,param_1);
    uVar1 = 0;
    *param_2 = local_c;
  }
  return uVar1;
}


// ==== thunk_FUN_0021bcb0 @ 00218064 ====

uint thunk_FUN_0021bcb0(void)

{
  return *DAT_0021bcbc & 1;
}


// ==== FUN_00218068 @ 00218068 ====

void FUN_00218068(int param_1,uint param_2)

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


// ==== FUN_0021808c @ 0021808c ====

undefined4 FUN_0021808c(int param_1,int param_2)

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
    piVar1 = (int *)(iVar4 + DAT_002181c0 + 0x21812a);
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


// ==== FUN_002181c4 @ 002181c4 ====

undefined4 FUN_002181c4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = DAT_002181fc;
    param_1[10] = 0;
    param_1[2] = uVar1;
    param_1[3] = DAT_00218200;
    param_1[4] = DAT_00218204;
    param_1[5] = DAT_00218208;
    param_1[6] = DAT_0021820c;
    param_1[7] = DAT_00218210;
    param_1[8] = DAT_00218214;
    param_1[9] = DAT_00218218;
    return 0;
  }
  return 0xffffffff;
}


// ==== FUN_0021821c @ 0021821c ====

int FUN_0021821c(uint *param_1,int param_2,uint param_3)

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
          FUN_00215830(uVar1 + 0x30 + (int)param_1,param_2,uVar3);
          uVar1 = param_1[10];
          param_2 = param_2 + uVar3;
          param_3 = param_3 - uVar3;
          param_1[10] = uVar1 + uVar3;
          if (uVar1 + uVar3 == 0x40) {
            param_1[0xb] = 0x40;
            iVar2 = FUN_0021808c(param_1,param_1 + 0xc);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar1 = *param_1;
            param_1[10] = 0;
            *param_1 = uVar1 + 0x200;
            param_1[1] = param_1[1] + (uint)(0xfffffdff < uVar1);
          }
        }
        iVar2 = FUN_0021808c(param_1,param_2);
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


// ==== FUN_002182cc @ 002182cc ====

undefined4 FUN_002182cc(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_0021808c(param_1,param_1 + 0xc,0,0x40,param_4);
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
  FUN_0021808c(param_1,param_1 + 0xc,uVar2 >> 8,0x40,param_4);
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


// ==== FUN_002183c0 @ 002183c0 ====

undefined4 FUN_002183c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x70) = param_2;
  iVar3 = param_4;
  uVar1 = FUN_0021b774(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  iVar2 = FUN_0021b774(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  FUN_00215830(*(undefined4 *)(param_1 + 0x74),param_3,param_4);
  FUN_00215820(*(int *)(param_1 + 0x74) + param_4,0,
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
  FUN_0021b7fc(iVar2);
  return 0;
}


// ==== FUN_0021842a @ 0021842a ====

void FUN_0021842a(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x70) + 4))();
  return;
}


// ==== FUN_00218434 @ 00218434 ====

undefined4 FUN_00218434(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_0021b774(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x10));
  uVar2 = FUN_0021b774(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0xc));
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
  FUN_0021b7fc(uVar2);
  FUN_0021b7fc(iVar1);
  return 0;
}


// ==== FUN_002184ce @ 002184ce ====

void FUN_002184ce(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3 * 4; iVar1 = iVar1 + 4) {
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_2 + iVar1);
  }
  return;
}


// ==== FUN_002184e2 @ 002184e2 ====

uint FUN_002184e2(int param_1,int param_2,uint param_3,uint param_4)

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
    uVar3 = FUN_002184e2(param_1,param_1,param_3,uVar3);
    uVar4 = uVar4 | uVar3;
  }
  return uVar4;
}


// ==== FUN_00218562 @ 00218562 ====

uint FUN_00218562(int param_1,int param_2,uint param_3,uint param_4)

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
      uVar3 = FUN_00218562(param_1,param_1);
      uVar2 = uVar2 | uVar3;
    }
  }
  return uVar2;
}


// ==== FUN_002185f2 @ 002185f2 ====

/* WARNING: Removing unreachable block (ram,0x00218868) */
/* WARNING: Removing unreachable block (ram,0x00218942) */

undefined4
FUN_002185f2(undefined4 param_1,int param_2,int param_3,uint *param_4,int param_5,
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
        uVar11 = FUN_00218562(param_6,param_5,uVar12,0x80);
        iVar6 = uVar13 << (uVar12 & 0xff);
        iVar16 = 0x80;
        puVar10 = param_6 + 0x7f;
        while (bVar18 = iVar16 != 0, iVar16 = iVar16 + -1, bVar18) {
          uVar8 = *puVar10;
          uVar3 = FUN_002017c8(uVar8,uVar11,iVar6,0);
          *puVar10 = uVar3;
          FUN_002017c8(uVar8,uVar11,iVar6,0);
          uVar11 = extraout_r2;
          puVar10 = puVar10 + -1;
        }
        uVar11 = uVar11 >> (uVar12 & 0xff);
      }
      *param_7 = uVar11;
    }
    else if (iVar6 < 0) {
LAB_00218726:
      FUN_002184ce(param_7,param_5,0x80);
    }
    else if (iVar6 == 0) {
      if (iVar16 != 0) {
        iVar7 = 0;
        do {
          uVar11 = *(uint *)(param_5 + iVar16 * 4 + iVar7 * -4 + -4);
          iVar14 = -1 - iVar7;
          if (param_4[iVar16 + iVar14] < uVar11) goto LAB_0021877a;
          iVar7 = iVar7 + 1;
          if (uVar11 < param_4[iVar16 + iVar14]) goto LAB_00218726;
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
LAB_0021877a:
      iVar7 = iVar16 + 0x3fffffff;
      local_6c = 0;
      uVar11 = 0x80000000;
      do {
        if ((uVar11 & param_4[iVar7]) != 0) break;
        uVar11 = uVar11 >> 1;
        local_6c = local_6c + 1;
      } while (local_6c != 0x20);
      FUN_00218562(param_4,param_4,local_6c,iVar16);
      iVar15 = 4;
      local_28 = FUN_00218562(param_7,param_5,local_6c,local_68);
      iVar14 = iVar7 * 4 + 4;
      puVar17 = param_7 + local_68;
      do {
        uVar13 = puVar17[-1];
        iVar15 = iVar15 + -4;
        uVar12 = param_4[iVar7];
        uVar19 = FUN_002017c8(uVar13,local_28,uVar12,0);
        uVar11 = (uint)uVar19;
        if ((int)((ulonglong)uVar19 >> 0x20) == 0) {
          uVar9 = uVar11;
          if (uVar11 != 0) {
            FUN_002017c8(uVar13,local_28,uVar12,0);
            uVar4 = extraout_r2_00;
            goto LAB_00218856;
          }
        }
        else {
          uVar4 = uVar13 + uVar12;
          if (CARRY4(uVar13,uVar12)) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar11 = 0xffffffff;
LAB_00218856:
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
      FUN_002184e2(param_7,param_7,local_6c,iVar16);
      FUN_002184e2(param_4,param_4,local_6c,iVar16);
    }
  }
  FUN_002184ce(param_1,param_7,0x40);
  return 0;
}


// ==== FUN_0021895e @ 0021895e ====

undefined4 FUN_0021895e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0021b774(0x100);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0021b774(0x200);
    if (iVar2 == 0) {
      FUN_0021b7fc(iVar1,0x100);
      uVar3 = 0xfffffffe;
    }
    else {
      iVar4 = FUN_0021b774(0x200);
      if (iVar4 == 0) {
        FUN_0021b7fc(iVar1,0x100);
        FUN_0021b7fc(iVar2,0x200);
        uVar3 = 0xfffffffd;
      }
      else {
        iVar5 = FUN_0021b774(0x200);
        if (iVar5 == 0) {
          FUN_0021b7fc(iVar1,0x100);
          FUN_0021b7fc(iVar2,0x200);
          FUN_0021b7fc(iVar4,0x200);
          uVar3 = 0xfffffffc;
        }
        else {
          iVar6 = 0xf;
          FUN_002185f2(iVar1,param_1,param_1,param_2,iVar2,iVar4,iVar5);
          do {
            FUN_002185f2(iVar1,iVar1,iVar1,param_2,iVar2,iVar4,iVar5);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          FUN_002185f2(iVar1,iVar1,param_1,param_2,iVar2,iVar4,iVar5);
          FUN_00215830(param_3,iVar1,0x100);
          FUN_0021b7fc(iVar1,0x100);
          FUN_0021b7fc(iVar2,0x200);
          FUN_0021b7fc(iVar4,0x200);
          FUN_0021b7fc(iVar5,0x200);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


// ==== FUN_00218a66 @ 00218a66 ====

int FUN_00218a66(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

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
LAB_00218a82:
    iVar5 = param_4;
    if (iVar5 != 0) {
      local_b0[3] = (undefined1)iVar4;
      local_b0[0] = (undefined1)((uint)iVar4 >> 0x18);
      local_b0[1] = (undefined1)((uint)iVar4 >> 0x10);
      local_b0[2] = (undefined1)((uint)iVar4 >> 8);
      iVar2 = FUN_002181c4(auStack_90);
      iVar4 = iVar4 + 1;
      if (((iVar2 != 0) || (iVar2 = FUN_0021821c(auStack_90,param_1,param_2), iVar2 != 0)) ||
         (iVar2 = FUN_0021821c(auStack_90,local_b0,4), iVar2 != 0)) goto LAB_00218aea;
      iVar2 = FUN_002182cc(auStack_90,local_b0);
      iVar3 = 0;
      puVar6 = param_3;
      if (iVar2 != 0) goto LAB_00218aea;
      do {
        puVar1 = local_b0 + iVar3;
        iVar3 = iVar3 + 1;
        param_3 = puVar6 + 1;
        *puVar6 = *puVar1;
        param_4 = iVar5 - iVar3;
        if (iVar3 == 0x20) break;
        puVar6 = param_3;
      } while (param_4 != 0);
      goto LAB_00218a82;
    }
    iVar2 = 0;
LAB_00218aea:
    FUN_00215820(local_b0,0,0x20);
    FUN_00215820(auStack_90,0,0x70);
  }
  return iVar2;
}


// ==== FUN_00218b10 @ 00218b10 ====

int FUN_00218b10(int param_1,undefined4 param_2,byte *param_3,uint param_4,uint param_5,uint param_6
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
  
  pbVar1 = (byte *)FUN_0021b774(0x100);
  if (pbVar1 == (byte *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar2 = FUN_0021b774(0x100);
    if (iVar2 == 0) {
      FUN_0021b7fc(pbVar1,0x100);
      iVar3 = -2;
    }
    else {
      iVar4 = FUN_0021b774(0x100);
      if (iVar4 == 0) {
        FUN_0021b7fc(pbVar1,0x100);
        FUN_0021b7fc(iVar2,0x100);
        iVar3 = -3;
      }
      else {
        iVar5 = FUN_0021b774(0x100);
        if (iVar5 == 0) {
          FUN_0021b7fc(pbVar1,0x100);
          FUN_0021b7fc(iVar2,0x100);
          FUN_0021b7fc(iVar4,0x100);
          iVar3 = -4;
        }
        else if ((param_1 == 0) || (param_7 == (undefined4 *)0x0)) {
          FUN_0021b7fc(pbVar1,0x100);
          FUN_0021b7fc(iVar2,0x100);
          FUN_0021b7fc(iVar4,0x100);
          FUN_0021b7fc(iVar5,0x100);
          iVar3 = -5;
        }
        else {
          *param_7 = 0;
          uVar7 = (uint)((param_6 & 7) != 0) + (param_6 >> 3);
          if (uVar7 < 0x101) {
            if (((uVar7 < param_5) || (uVar7 < param_5 + 0x22)) || (param_4 != uVar7)) {
              FUN_0021b7fc(pbVar1,0x100);
              FUN_0021b7fc(iVar2,0x100);
              FUN_0021b7fc(iVar4,0x100);
              FUN_0021b7fc(iVar5,0x100);
              iVar3 = -8;
            }
            else {
              if (param_3[param_4 - 1] == 0xbc) {
                uVar7 = param_4 - 0x21;
                FUN_00215830(pbVar1,param_3,uVar7);
                FUN_00215830(iVar4,param_3 + uVar7,0x20);
                uVar9 = 0xff >> ((param_4 * 8 + 1) - param_6 & 0xff);
                if (((uint)*param_3 & ~uVar9) == 0) {
                  iVar3 = FUN_00218a66(iVar4,0x20,iVar5,uVar7);
                  uVar8 = 0;
                  if (iVar3 == 0) {
                    for (; uVar8 < uVar7; uVar8 = uVar8 + 1) {
                      pbVar1[uVar8] = pbVar1[uVar8] ^ *(byte *)(uVar8 + iVar5);
                    }
                    *pbVar1 = *pbVar1 & (byte)uVar9;
                    for (uVar7 = 0; uVar7 < (param_4 - 0x22) - param_5; uVar7 = uVar7 + 1) {
                      if (pbVar1[uVar7] != 0) {
                        iVar3 = -0xb;
                        goto LAB_00218d80;
                      }
                    }
                    if (pbVar1[uVar7] == 1) {
                      iVar3 = FUN_002181c4(auStack_90);
                      if (iVar3 == 0) {
                        FUN_00215820(iVar5,0,8);
                        iVar3 = FUN_0021821c(auStack_90,iVar5,8);
                        if (((iVar3 == 0) &&
                            (iVar3 = FUN_0021821c(auStack_90,param_1,param_2), iVar3 == 0)) &&
                           ((iVar3 = FUN_0021821c(auStack_90,pbVar1 + uVar7 + 1,param_5), iVar3 == 0
                            && ((iVar3 = FUN_002182cc(auStack_90,iVar5), iVar3 == 0 &&
                                (iVar6 = FUN_00215842(iVar5,iVar4,0x20), iVar6 == 0)))))) {
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
LAB_00218d80:
              FUN_00215820(pbVar1,0,param_4);
              FUN_00215820(iVar5,0,param_4);
              FUN_00215820(iVar2,0,param_4);
              FUN_00215820(iVar4,0,param_4);
              FUN_0021b7fc(pbVar1,0x100);
              FUN_0021b7fc(iVar2,0x100);
              FUN_0021b7fc(iVar4,0x100);
              FUN_0021b7fc(iVar5,0x100);
            }
          }
          else {
            FUN_0021b7fc(pbVar1,0x100);
            FUN_0021b7fc(iVar2,0x100);
            FUN_0021b7fc(iVar4,0x100);
            FUN_0021b7fc(iVar5,0x100);
            iVar3 = -6;
          }
        }
      }
    }
  }
  return iVar3;
}


// ==== FUN_00218dec @ 00218dec ====

undefined4 FUN_00218dec(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00218e74 + 0x218dfe + DAT_00218e78);
  FUN_00215820(piVar3,0,0x5c);
  *piVar3 = param_2;
  iVar1 = FUN_00218f76(piVar3 + 5,0x10,param_1,param_2 << 1);
  if (iVar1 == 0) {
    iVar1 = FUN_00218f76(piVar3 + 8,0x10,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = DAT_00218e8c + 0x218e56;
      FUN_002134e8(DAT_00218e90 + 0x218e5c,iVar1,*piVar3 << 3);
      FUN_002134e8(DAT_00218e94 + 0x218e6a,iVar1,param_4 << 2);
      return 0;
    }
    iVar1 = DAT_00218e84 + 0x218e40;
    iVar2 = DAT_00218e88 + 0x218e42;
  }
  else {
    iVar1 = DAT_00218e7c + 0x218e24;
    iVar2 = DAT_00218e80 + 0x218e26;
  }
  FUN_002134e8(iVar1,iVar2);
  return 0x3007;
}


// ==== FUN_00218f3c @ 00218f3c ====

undefined4 FUN_00218f3c(uint *param_1,uint param_2,int param_3)

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


// ==== FUN_00218f76 @ 00218f76 ====

int FUN_00218f76(int *param_1,int param_2,char *param_3,int param_4)

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
  FUN_0021b7fe(auStack_2c);
  if (param_2 == 0x10) {
    iVar2 = param_4 * 4 + 0x1f;
    if (iVar2 < 0) {
      iVar2 = param_4 * 4 + 0x3e;
    }
    iVar2 = FUN_00219150(param_1,iVar2 >> 5);
    if ((iVar2 != 0) || (iVar1 = FUN_002191f0(param_1,0), iVar2 = iVar1, iVar1 != 0))
    goto LAB_00219086;
    iVar4 = param_4 + -1;
    while( true ) {
      uVar3 = (param_4 + -1) - iVar4;
      if (iVar4 < 0) break;
      if ((iVar4 == 0) && (*param_3 == '-')) {
        *param_1 = -1;
        iVar2 = iVar1;
        goto LAB_00219086;
      }
      iVar2 = FUN_00218f3c(&local_30,0x10,param_3[iVar4]);
      if (iVar2 != 0) goto LAB_00219086;
      iVar2 = (int)uVar3 >> 3;
      iVar4 = iVar4 + -1;
      *(uint *)(param_1[2] + iVar2 * 4) =
           *(uint *)(param_1[2] + iVar2 * 4) | local_30 << ((uVar3 & 7) << 2);
    }
  }
  else {
    iVar2 = FUN_002191f0(param_1,0);
    if (iVar2 != 0) goto LAB_00219086;
    for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
      if ((iVar1 == 0) && (*param_3 == '-')) {
        *param_1 = -1;
      }
      else {
        iVar2 = FUN_00218f3c(&local_30,param_2,param_3[iVar1]);
        if ((iVar2 != 0) || (iVar2 = FUN_0021a16c(auStack_2c,param_1,param_2), iVar2 != 0))
        goto LAB_00219086;
        if (*param_1 == 1) {
          iVar2 = FUN_002196d4();
        }
        else {
          iVar2 = FUN_00219700(param_1,auStack_2c,local_30);
        }
        if (iVar2 != 0) goto LAB_00219086;
      }
    }
  }
  iVar2 = 0;
LAB_00219086:
  FUN_0021b80a(auStack_2c);
  return iVar2;
}


// ==== FUN_0021909c @ 0021909c ====

int FUN_0021909c(int param_1,int param_2,int param_3)

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
  iVar1 = FUN_00219150(param_1,iVar1 >> 2);
  if ((iVar1 == 0) && (iVar1 = FUN_002191f0(param_1,0), iVar1 == 0)) {
    for (iVar3 = param_3 + -1; uVar2 = (param_3 + -1) - iVar3, iVar4 <= iVar3; iVar3 = iVar3 + -1) {
      iVar5 = (int)uVar2 >> 2;
      *(uint *)(*(int *)(param_1 + 8) + iVar5 * 4) =
           *(uint *)(*(int *)(param_1 + 8) + iVar5 * 4) |
           (uint)*(byte *)(param_2 + iVar3) << ((uVar2 & 3) << 3);
    }
  }
  return iVar1;
}


// ==== FUN_0021910a @ 0021910a ====

undefined4 FUN_0021910a(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_0021925e();
  if (iVar1 <= param_3) {
    puVar3 = (undefined1 *)(param_3 + param_2);
    FUN_00215820(param_2,0,param_3);
    for (uVar2 = 0; 0 < (int)(iVar1 - uVar2); uVar2 = uVar2 + 1) {
      puVar3 = puVar3 + -1;
      *puVar3 = (char)(*(uint *)(*(int *)(param_1 + 8) + ((int)uVar2 >> 2) * 4) >>
                      ((uVar2 & 3) << 3));
    }
    return 0;
  }
  return 4;
}


// ==== FUN_00219150 @ 00219150 ====

undefined4 FUN_00219150(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) < param_2) {
    iVar1 = FUN_0021b774(param_2 << 2);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00215820(iVar1,0,param_2 << 2);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00215830(iVar1,*(int *)(param_1 + 8),*(int *)(param_1 + 4) << 2);
      FUN_00215820(*(undefined4 *)(param_1 + 8),0,*(int *)(param_1 + 4) << 2);
      FUN_0021b7fc(*(undefined4 *)(param_1 + 8));
    }
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = iVar1;
  }
  return 0;
}


// ==== FUN_0021919e @ 0021919e ====

int FUN_0021919e(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

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
  iVar2 = FUN_00219150(param_1,iVar1 + 1,param_3,uVar3,param_4);
  if (iVar2 == 0) {
    FUN_00215820(param_1[2],0,param_1[1] << 2);
    FUN_00215830(param_1[2],param_2[2],(iVar1 + 1) * 4);
  }
  return iVar2;
}


// ==== FUN_002191f0 @ 002191f0 ====

int FUN_002191f0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00219150(param_1,1);
  if (iVar1 == 0) {
    FUN_00215820(param_1[2],0,param_1[1] << 2);
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


// ==== FUN_00219228 @ 00219228 ====

int FUN_00219228(int param_1)

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


// ==== FUN_0021925e @ 0021925e ====

int FUN_0021925e(void)

{
  int iVar1;
  
  iVar1 = FUN_00219228();
  return iVar1 + 7 >> 3;
}


// ==== FUN_0021926a @ 0021926a ====

int FUN_0021926a(int param_1,uint param_2)

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
  iVar1 = FUN_00219228();
  iVar5 = (int)uVar4 >> 5;
  iVar1 = iVar1 + param_2;
  if (*(int *)(param_1 + 4) * 0x20 < iVar1) {
    iVar3 = iVar1 + 0x1f;
    if (iVar3 < 0) {
      iVar3 = iVar1 + 0x3e;
    }
    iVar1 = FUN_00219150(param_1,iVar3 >> 5);
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


// ==== FUN_00219310 @ 00219310 ====

undefined4 FUN_00219310(int param_1,uint param_2)

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


// ==== FUN_0021938a @ 0021938a ====

uint FUN_0021938a(int param_1,int param_2)

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


// ==== FUN_002193f2 @ 002193f2 ====

int FUN_002193f2(int *param_1,int *param_2)

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
LAB_00219430:
      return *param_1;
    }
    piVar1 = (int *)(param_2[2] + iVar5);
    iVar5 = iVar5 + -4;
    if (*piVar1 != 0) {
      iVar5 = *param_1;
      if (iVar4 < 0) goto LAB_00219428;
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
LAB_00219428:
        return -iVar5;
      }
      goto LAB_00219430;
    }
    iVar3 = iVar3 + -1;
  } while( true );
}


// ==== FUN_0021947a @ 0021947a ====

void FUN_0021947a(undefined4 param_1,uint param_2)

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
  FUN_002193f2(param_1,&local_14);
  return;
}


// ==== FUN_002194a6 @ 002194a6 ====

int FUN_002194a6(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
     (iVar2 = FUN_0021919e(), iVar2 == 0)) {
    *param_1 = 1;
    iVar11 = param_2[1] + -1;
    iVar2 = iVar11 * 4;
    while ((-1 < iVar11 && (piVar1 = (int *)(param_2[2] + iVar2), iVar2 = iVar2 + -4, *piVar1 == 0))
          ) {
      iVar11 = iVar11 + -1;
    }
    iVar2 = FUN_00219150(param_1,iVar11 + 1);
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
          iVar5 = FUN_00219150(param_1,iVar6 + 1);
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


// ==== FUN_00219570 @ 00219570 ====

void FUN_00219570(uint param_1,int param_2,uint *param_3)

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


// ==== FUN_002195d8 @ 002195d8 ====

int FUN_002195d8(undefined4 ****param_1,undefined4 ****param_2,undefined4 ****param_3,
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
  iVar2 = FUN_0021938a(param_2,param_3,param_3,param_4,param_1);
  if (iVar2 < 0) {
    iVar2 = 5;
  }
  else {
    FUN_0021b7fe(&pppuStack_24);
    if (((param_1 != param_3) ||
        (iVar2 = FUN_0021919e(&pppuStack_24,param_1), param_3 = &pppuStack_24, iVar2 == 0)) &&
       ((param_1 == param_2 || (iVar2 = FUN_0021919e(param_1,param_2), iVar2 == 0)))) {
      *param_1 = (undefined4 ***)0x1;
      iVar3 = (int)param_3[1] + -1;
      iVar2 = iVar3 * 4;
      while ((-1 < iVar3 &&
             (piVar1 = (int *)((int)param_3[2] + iVar2), iVar2 = iVar2 + -4, *piVar1 == 0))) {
        iVar3 = iVar3 + -1;
      }
      iVar2 = 0;
      FUN_00219570(iVar3 + 1,param_3[2],param_1[2]);
    }
    FUN_0021b80a(&pppuStack_24);
  }
  return iVar2;
}


// ==== FUN_00219652 @ 00219652 ====

void FUN_00219652(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 * *param_3 < 0) {
    iVar1 = FUN_0021938a(param_2,param_3,param_3,iVar2 * *param_3,param_4);
    if (iVar1 < 0) {
      iVar1 = FUN_002195d8(param_1,param_3,param_2);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = -iVar2;
      goto LAB_0021968e;
    }
    iVar1 = FUN_002195d8(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_002194a6();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_0021968e:
  *param_1 = iVar2;
  return;
}


// ==== FUN_00219692 @ 00219692 ====

void FUN_00219692(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 * *param_3 < 1) {
    iVar1 = FUN_002194a6();
  }
  else {
    iVar1 = FUN_0021938a(param_2,param_3,param_3,iVar2 * *param_3,param_4);
    if (iVar1 < 0) {
      iVar1 = FUN_002195d8(param_1,param_3,param_2);
      if (iVar1 != 0) {
        return;
      }
      iVar2 = -iVar2;
      goto LAB_002196d0;
    }
    iVar1 = FUN_002195d8(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_002196d0:
  *param_1 = iVar2;
  return;
}


// ==== FUN_002196d4 @ 002196d4 ====

void FUN_002196d4(undefined4 param_1,undefined4 param_2,uint param_3)

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
  FUN_00219652(param_1,param_2,&local_14);
  return;
}


// ==== FUN_00219700 @ 00219700 ====

void FUN_00219700(undefined4 param_1,undefined4 param_2,uint param_3)

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
  FUN_00219692(param_1,param_2,&local_14);
  return;
}


// ==== FUN_0021972c @ 0021972c ====

void FUN_0021972c(uint param_1,uint *param_2,uint *param_3,uint param_4)

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


// ==== FUN_0021a080 @ 0021a080 ====

int FUN_0021a080(int *param_1,int *param_2,int *param_3)

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
  
  FUN_0021b7fe(local_38);
  FUN_0021b7fe(local_2c);
  if (param_1 == param_2) {
    iVar3 = FUN_0021919e(local_38,param_1);
    if (iVar3 != 0) goto LAB_0021a158;
    param_2 = local_38;
  }
  if ((param_1 != param_3) ||
     (iVar3 = FUN_0021919e(local_2c,param_1), param_3 = local_2c, iVar3 == 0)) {
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
    iVar3 = FUN_00219150(param_1,iVar6 + iVar5 + 2);
    if ((iVar3 == 0) && (iVar3 = FUN_002191f0(param_1,0), iVar3 == 0)) {
      iVar7 = iVar5 << 2;
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        puVar2 = (undefined4 *)(param_3[2] + iVar7);
        iVar4 = param_1[2] + iVar7;
        iVar7 = iVar7 + -4;
        FUN_0021972c(iVar6 + 1,param_2[2],iVar4,*puVar2);
      }
      *param_1 = *param_3 * *param_2;
    }
  }
LAB_0021a158:
  FUN_0021b80a(local_2c);
  FUN_0021b80a(local_38);
  return iVar3;
}


// ==== FUN_0021a16c @ 0021a16c ====

void FUN_0021a16c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  local_c = &local_18;
  local_14 = 1;
  local_10 = 1;
  local_18 = param_3;
  FUN_0021a080(param_1,param_2,&local_14);
  return;
}


// ==== FUN_0021a188 @ 0021a188 ====

int FUN_0021a188(int *param_1,int *param_2,int *param_3,int *param_4)

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
  
  iVar1 = FUN_0021947a(param_4,0);
  if (iVar1 == 0) {
    return 6;
  }
  FUN_0021b7fe(&local_5c);
  FUN_0021b7fe(&local_50);
  FUN_0021b7fe(auStack_44);
  FUN_0021b7fe(auStack_38);
  FUN_0021b7fe(auStack_2c);
  iVar1 = FUN_0021938a(param_3,param_4);
  if (iVar1 < 0) {
    if (((param_1 == (int *)0x0) || (iVar1 = FUN_002191f0(param_1,0), iVar1 == 0)) &&
       ((param_2 == (int *)0x0 || (iVar1 = FUN_0021919e(param_2,param_3), iVar1 == 0)))) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0021919e(&local_5c,param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_0021919e(&local_50,param_4), iVar1 == 0)) {
      local_50 = 1;
      local_5c = 1;
      iVar1 = FUN_00219150(auStack_44,param_3[1] + 2);
      if ((iVar1 == 0) &&
         (((iVar1 = FUN_002191f0(auStack_44,0), iVar1 == 0 &&
           (iVar1 = FUN_00219150(auStack_38,2), iVar1 == 0)) &&
          (iVar2 = FUN_00219150(auStack_2c,3), iVar1 = iVar2, iVar2 == 0)))) {
        uVar3 = FUN_00219228(&local_50);
        uVar3 = DAT_0021a4ec & uVar3;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        if (uVar3 == 0x1f) {
          local_80 = 0;
        }
        else {
          local_80 = 0x1f - uVar3;
          iVar1 = FUN_0021926a(&local_5c,local_80);
          if ((iVar1 != 0) || (iVar1 = FUN_0021926a(&local_50,local_80), iVar1 != 0))
          goto LAB_0021a53e;
        }
        local_9c = local_58 + -1;
        iVar8 = local_4c + -1;
        iVar1 = (local_9c - iVar8) * 0x20;
        iVar11 = (local_9c - iVar8) * 4;
        FUN_0021926a(&local_50,iVar1);
        while (iVar4 = FUN_002193f2(&local_5c,&local_50), -1 < iVar4) {
          *(int *)(local_3c + iVar11) = *(int *)(local_3c + iVar11) + 1;
          FUN_00219692(&local_5c,&local_5c,&local_50);
        }
        FUN_00219310(&local_50,iVar1);
        iVar4 = iVar8 * 4;
        iVar9 = (local_9c - local_4c) * 4;
        local_68 = (local_58 - local_4c) * 0x20;
        iVar11 = (local_58 + 0x3ffffffe) * 4;
        for (; iVar1 = local_54, iVar8 < local_9c; local_9c = local_9c + -1) {
          uVar3 = *(uint *)(local_54 + iVar11 + 4);
          uVar10 = *(uint *)(local_48 + iVar4);
          if (uVar3 < uVar10) {
            uVar12 = uVar10 >> 0x10;
            iVar5 = FUN_00201700(uVar3,uVar12);
            uVar7 = *(uint *)(iVar1 + iVar11);
            uVar13 = uVar7 >> 0x10 | (uVar3 - uVar12 * iVar5) * 0x10000;
            uVar3 = (uVar10 & 0xffff) * iVar5;
            do {
              if (uVar3 <= uVar13) break;
              uVar13 = uVar13 + uVar10;
              iVar5 = iVar5 + -1;
            } while (uVar10 <= uVar13);
            iVar1 = uVar13 - uVar3;
            uVar3 = FUN_00201700(iVar1,uVar12);
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
            iVar1 = FUN_002191f0(auStack_38,0);
            if (iVar1 != 0) goto LAB_0021a53e;
            uVar6 = 0;
            if (0 < iVar8) {
              uVar6 = *(undefined4 *)(local_48 + iVar4 + -4);
            }
            *local_30 = uVar6;
            local_30[1] = *(undefined4 *)(local_48 + iVar4);
            iVar1 = FUN_0021a16c(auStack_38,auStack_38,*(undefined4 *)(local_3c + iVar9));
            if ((iVar1 != 0) || (iVar1 = FUN_002191f0(auStack_2c), iVar1 != 0)) goto LAB_0021a53e;
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
            iVar1 = FUN_002193f2(auStack_38,auStack_2c);
          } while (0 < iVar1);
          iVar1 = FUN_0021a16c(auStack_38,&local_50,*(undefined4 *)(local_3c + iVar9));
          if (iVar1 != 0) goto LAB_0021a53e;
          local_68 = local_68 + -0x20;
          iVar1 = FUN_0021926a(auStack_38,local_68);
          if ((iVar1 != 0) || (iVar1 = FUN_00219692(&local_5c,&local_5c,auStack_38), iVar1 != 0))
          goto LAB_0021a53e;
          iVar1 = FUN_0021947a(&local_5c);
          if (iVar1 < 0) {
            iVar1 = FUN_0021919e(auStack_38,&local_50);
            if (((iVar1 != 0) || (iVar1 = FUN_0021926a(auStack_38,local_68), iVar1 != 0)) ||
               (iVar1 = FUN_00219652(&local_5c,&local_5c,auStack_38), iVar1 != 0))
            goto LAB_0021a53e;
            *(int *)(local_3c + iVar9) = *(int *)(local_3c + iVar9) + -1;
          }
          iVar9 = iVar9 + -4;
          iVar11 = iVar11 + -4;
        }
        if (param_1 != (int *)0x0) {
          FUN_0021919e(param_1,auStack_44);
          *param_1 = *param_4 * *param_3;
        }
        iVar1 = iVar2;
        if (param_2 != (int *)0x0) {
          FUN_00219310(&local_5c,local_80);
          FUN_0021919e(param_2,&local_5c);
          *param_2 = *param_3;
          iVar8 = FUN_0021947a(param_2,0);
          if (iVar8 == 0) {
            *param_2 = 1;
          }
        }
      }
    }
  }
LAB_0021a53e:
  FUN_0021b80a(&local_5c);
  FUN_0021b80a(&local_50);
  FUN_0021b80a(auStack_44);
  FUN_0021b80a(auStack_38);
  FUN_0021b80a(auStack_2c);
  return iVar1;
}


// ==== FUN_0021a568 @ 0021a568 ====

int FUN_0021a568(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0021947a(param_3,0);
  if (iVar1 < 0) {
    return 5;
  }
  iVar1 = FUN_0021a188(0,param_1,param_2,param_3);
  if (iVar1 == 0) {
    while (iVar1 = FUN_0021947a(param_1,0), iVar1 < 0) {
      iVar1 = FUN_00219652(param_1,param_1,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    while (iVar1 = FUN_002193f2(param_1,param_3), -1 < iVar1) {
      iVar1 = FUN_00219692(param_1,param_1,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ==== FUN_0021a5ca @ 0021a5ca ====

undefined4
FUN_0021a5ca(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0021b7fe(&uStack_24);
  iVar1 = FUN_0021909c(&uStack_24,param_2,0x80);
  if (iVar1 == 0) {
    iVar1 = FUN_002193f2(&uStack_24,param_1 + 5);
    if (-1 < iVar1) {
      FUN_0021b80a(&uStack_24);
      return 1;
    }
    uVar2 = *param_1;
    iVar1 = FUN_0021b82e(&uStack_24,param_1 + 8,param_1 + 5,param_1 + 0xe,puVar3);
    if (iVar1 == 0) {
      iVar1 = FUN_0021910a(&uStack_24,param_3,uVar2);
    }
  }
  FUN_0021b80a(&uStack_24);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}


// ==== FUN_0021a63a @ 0021a63a ====

int FUN_0021a63a(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char acStack_419 [1029];
  
  iVar4 = *param_1;
  if (iVar4 - 0x10U < 0x3f1) {
    iVar2 = FUN_0021a5ca(param_1,param_4,acStack_419 + 1);
    if (iVar2 == 0) {
      if ((acStack_419[1] == '\0') && (acStack_419[2] == '\x01')) {
        pcVar3 = acStack_419 + 2;
        while( true ) {
          pcVar1 = pcVar3 + 1;
          if (*pcVar1 == '\0') break;
          if ((acStack_419 + iVar4 <= pcVar3 + 1) || (pcVar3 = pcVar3 + 1, *pcVar1 != -1))
          goto LAB_0021a6a0;
        }
        if (acStack_419 + (iVar4 - (int)(pcVar3 + 2)) + 1 == param_2) {
          iVar4 = FUN_00215842(pcVar3 + 2,param_3,param_2);
          if (iVar4 == 0) {
            return 0;
          }
          return 7;
        }
      }
LAB_0021a6a0:
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// ==== FUN_0021a6a8 @ 0021a6a8 ====

uint FUN_0021a6a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + param_1;
  return (uint)*(byte *)(iVar1 + 1) << 0x10 | (uint)*(byte *)(param_1 + param_2) << 0x18 |
         (uint)*(byte *)(iVar1 + 3) | (uint)*(byte *)(iVar1 + 2) << 8;
}


// ==== FUN_0021a6c0 @ 0021a6c0 ====

void FUN_0021a6c0(int param_1,undefined4 param_2)

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
    uVar1 = FUN_0021a6a8(param_2,iVar13);
    *(undefined4 *)((int)local_60 + iVar13) = uVar1;
    iVar13 = iVar13 + 4;
  } while (iVar13 != 0x40);
  uVar11 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar3 = DAT_0021aa68 + *(int *)(param_1 + 0x18) + local_60[0] + (uVar2 >> 0x1b | uVar2 << 5) +
          ((uVar11 ^ uVar8) & uVar5 ^ uVar11);
  uVar24 = uVar5 >> 2 | uVar5 << 0x1e;
  uVar28 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar6 = ((uVar24 ^ uVar8) & uVar2 ^ uVar8) + DAT_0021aa68 + uVar11 + local_60[1] +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar23 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar9 = ((uVar28 ^ uVar24) & uVar3 ^ uVar24) + DAT_0021aa68 + uVar8 + local_60[2] +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_0021aa68 + local_60[3] + ((uVar23 ^ uVar28) & uVar6 ^ uVar28) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar24 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar28 + DAT_0021aa68 + local_60[4] + ((uVar3 ^ uVar23) & uVar9 ^ uVar23) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar28 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar23 + DAT_0021aa68 + local_60[5] + ((uVar24 ^ uVar3) & uVar6 ^ uVar3) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar23 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar3 + DAT_0021aa68 + local_60[6] + ((uVar28 ^ uVar24) & uVar9 ^ uVar24) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar3 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar24 + DAT_0021aa68 + local_60[7] + ((uVar23 ^ uVar28) & uVar6 ^ uVar28) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar24 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar28 + DAT_0021aa68 + local_60[8] + ((uVar3 ^ uVar23) & uVar9 ^ uVar23) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar28 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar14 = uVar23 + DAT_0021aa68 + local_60[9] + ((uVar24 ^ uVar3) & uVar6 ^ uVar3) +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar23 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar6 = uVar3 + DAT_0021aa68 + local_60[10] + ((uVar28 ^ uVar24) & uVar9 ^ uVar24) +
          (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar3 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar9 = uVar24 + DAT_0021aa68 + local_60[0xb] + ((uVar23 ^ uVar28) & uVar14 ^ uVar28) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar24 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar6 = uVar28 + DAT_0021aa68 + local_60[0xc] + ((uVar3 ^ uVar23) & uVar6 ^ uVar23) +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar28 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar9 = uVar23 + DAT_0021aa68 + local_60[0xd] + ((uVar24 ^ uVar3) & uVar9 ^ uVar3) +
          (uVar6 >> 0x1b | uVar6 * 0x20);
  uVar23 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar14 = uVar3 + DAT_0021aa68 + local_60[0xe] + ((uVar28 ^ uVar24) & uVar6 ^ uVar24) +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar3 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar6 = local_60[2] ^ local_60[0] ^ local_60[8] ^ local_60[0xd];
  uVar4 = uVar24 + DAT_0021aa68 + local_60[0xf] + ((uVar23 ^ uVar28) & uVar9 ^ uVar28) +
          (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar24 = uVar6 >> 0x1f | uVar6 << 1;
  uVar6 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar9 = local_60[3] ^ local_60[1] ^ local_60[9] ^ local_60[0xe];
  uVar7 = uVar28 + DAT_0021aa68 + uVar24 + ((uVar3 ^ uVar23) & uVar14 ^ uVar23) +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar28 = uVar9 >> 0x1f | uVar9 << 1;
  uVar9 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar14 = local_60[4] ^ local_60[2] ^ local_60[10] ^ local_60[0xf];
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar10 = uVar23 + DAT_0021aa68 + uVar28 + ((uVar6 ^ uVar3) & uVar4 ^ uVar3) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar23 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar12 = uVar3 + DAT_0021aa68 + uVar14 + ((uVar9 ^ uVar6) & uVar7 ^ uVar6) +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar4 = local_60[5] ^ local_60[3] ^ local_60[0xb] ^ uVar24;
  uVar3 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar15 = local_60[6] ^ local_60[4] ^ local_60[0xc] ^ uVar28;
  uVar25 = uVar6 + DAT_0021aa68 + uVar4 + ((uVar23 ^ uVar9) & uVar10 ^ uVar9) +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar6 = uVar15 >> 0x1f | uVar15 << 1;
  uVar15 = DAT_0021aa6c + uVar6 + uVar9 + (uVar3 ^ uVar23 ^ uVar12) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar10 = local_60[7] ^ local_60[5] ^ local_60[0xd] ^ uVar14;
  uVar9 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar25 = uVar23 + DAT_0021aa6c + uVar10 + (uVar7 ^ uVar3 ^ uVar25) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar23 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar12 = local_60[8] ^ local_60[6] ^ local_60[0xe] ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar18 = DAT_0021aa6c + uVar12 + uVar3 + (uVar9 ^ uVar7 ^ uVar15) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar3 = local_60[9] ^ local_60[7] ^ local_60[0xf] ^ uVar6;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar15 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar21 = DAT_0021aa6c + uVar3 + uVar7 + (uVar23 ^ uVar9 ^ uVar25) +
           (uVar18 >> 0x1b | uVar18 * 0x20);
  uVar7 = local_60[10] ^ local_60[8] ^ uVar24 ^ uVar10;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar25 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar26 = uVar9 + DAT_0021aa6c + uVar7 + (uVar15 ^ uVar23 ^ uVar18) +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar9 = local_60[0xb] ^ local_60[9] ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar18 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar16 = uVar23 + DAT_0021b044 + uVar9 + (uVar25 ^ uVar15 ^ uVar21) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar23 = local_60[0xc] ^ local_60[10] ^ uVar14 ^ uVar3;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar21 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar20 = uVar15 + DAT_0021b044 + uVar23 + (uVar18 ^ uVar25 ^ uVar26) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar15 = local_60[0xd] ^ local_60[0xb] ^ uVar4 ^ uVar7;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar19 = uVar25 + DAT_0021b044 + uVar15 + (uVar21 ^ uVar18 ^ uVar16) +
           (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = local_60[0xe] ^ local_60[0xc] ^ uVar6 ^ uVar9;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar26 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar22 = uVar18 + DAT_0021b044 + uVar16 + (uVar25 ^ uVar21 ^ uVar20) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar18 = local_60[0xf] ^ local_60[0xd] ^ uVar10 ^ uVar23;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar27 = uVar21 + DAT_0021b044 + uVar18 + (uVar26 ^ uVar25 ^ uVar19) +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar21 = uVar24 ^ local_60[0xe] ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar19 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar17 = uVar25 + DAT_0021b044 + uVar21 + (uVar20 ^ uVar26 ^ uVar22) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar25 = uVar28 ^ local_60[0xf] ^ uVar3 ^ uVar16;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar26 + DAT_0021b044 + uVar25 + (uVar19 ^ uVar20 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar24 = uVar14 ^ uVar24 ^ uVar7 ^ uVar18;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar20 + DAT_0021b044 + uVar24 + (uVar22 ^ uVar19 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar20 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar19 + DAT_0021b044 + uVar28 + (uVar26 ^ uVar22 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar6 ^ uVar14 ^ uVar23 ^ uVar25;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = uVar22 + DAT_0021b044 + uVar14 + (uVar20 ^ uVar26 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar4 ^ uVar10 ^ uVar15 ^ uVar24;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar17 = uVar26 + DAT_0021b044 + uVar4 + (uVar19 ^ uVar20 ^ uVar27) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar6 = uVar6 ^ uVar12 ^ uVar16 ^ uVar28;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar10 ^ uVar3 ^ uVar18 ^ uVar14;
  uVar10 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  uVar27 = uVar20 + DAT_0021b044 + uVar6 + (uVar22 ^ uVar19 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar20 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar12 = uVar12 ^ uVar7 ^ uVar21 ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar17 = uVar19 + DAT_0021b044 + uVar26 + (uVar10 ^ uVar22 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar22 + DAT_0021b044 + uVar12 + (uVar20 ^ uVar10 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar3 = uVar3 ^ uVar9 ^ uVar25 ^ uVar6;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = uVar10 + DAT_0021b044 + uVar3 + (uVar19 ^ uVar20 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar7 ^ uVar23 ^ uVar24 ^ uVar26;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar20 + DAT_0021b048 + uVar7 + (uVar29 >> 0x1b | uVar29 * 0x20) +
           (uVar27 & uVar22 | (uVar27 | uVar22) & uVar19);
  uVar10 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar20 = uVar16 ^ uVar23 ^ uVar14 ^ uVar3;
  uVar23 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar20 = uVar20 >> 0x1f | uVar20 << 1;
  uVar29 = uVar19 + DAT_0021b048 + uVar9 + (uVar29 & uVar10 | (uVar29 | uVar10) & uVar22) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar27 = uVar22 + DAT_0021b048 + uVar20 + (uVar29 >> 0x1b | uVar29 * 0x20) +
           (uVar17 & uVar23 | (uVar17 | uVar23) & uVar10);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar15 = uVar18 ^ uVar15 ^ uVar4 ^ uVar7;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar16 = uVar21 ^ uVar16 ^ uVar6 ^ uVar9;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar17 = uVar10 + DAT_0021b048 + uVar15 + (uVar29 & uVar19 | (uVar29 | uVar19) & uVar23) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar10 = uVar25 ^ uVar18 ^ uVar26 ^ uVar20;
  uVar30 = uVar23 + DAT_0021b048 + uVar16 + (uVar17 >> 0x1b | uVar17 * 0x20) +
           (uVar27 & uVar22 | (uVar27 | uVar22) & uVar19);
  uVar23 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar19 + DAT_0021b048 + uVar10 + (uVar17 & uVar23 | (uVar17 | uVar23) & uVar22) +
           (uVar30 >> 0x1b | uVar30 * 0x20);
  uVar21 = uVar24 ^ uVar21 ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar29 = ((uVar30 | uVar18) & uVar23 | uVar30 & uVar18) +
           DAT_0021b048 + uVar21 + uVar22 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar19 = uVar30 >> 2 | uVar30 * 0x40000000;
  uVar25 = uVar28 ^ uVar25 ^ uVar3 ^ uVar16;
  uVar25 = uVar25 >> 0x1f | uVar25 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar27 = ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19) + uVar23 + DAT_0021b048 + uVar25 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar24 = uVar14 ^ uVar24 ^ uVar7 ^ uVar10;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar17 = ((uVar29 | uVar22) & uVar19 | uVar29 & uVar22) +
           uVar18 + DAT_0021b048 + uVar24 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar23 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar18 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar29 = ((uVar27 | uVar23) & uVar22 | uVar27 & uVar23) + uVar19 + DAT_0021b048 + uVar28 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar6 ^ uVar14 ^ uVar20 ^ uVar25;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar27 = ((uVar17 | uVar18) & uVar23 | uVar17 & uVar18) +
           uVar22 + DAT_0021b048 + uVar14 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar4 = uVar26 ^ uVar4 ^ uVar15 ^ uVar24;
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar17 = ((uVar29 | uVar19) & uVar18 | uVar29 & uVar19) + uVar23 + DAT_0021b048 + uVar4 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar23 = uVar12 ^ uVar6 ^ uVar16 ^ uVar28;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar29 = ((uVar27 | uVar22) & uVar19 | uVar27 & uVar22) +
           uVar18 + DAT_0021b3dc + uVar23 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar6 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar18 = uVar3 ^ uVar26 ^ uVar10 ^ uVar14;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar12 = uVar7 ^ uVar12 ^ uVar21 ^ uVar4;
  uVar17 = uVar19 + DAT_0021b3dc + uVar18 + (uVar17 & uVar6 | (uVar17 | uVar6) & uVar22) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar27 = ((uVar29 | uVar26) & uVar6 | uVar29 & uVar26) +
           uVar22 + DAT_0021b3dc + uVar12 + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar19 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar3 = uVar9 ^ uVar3 ^ uVar25 ^ uVar23;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar29 = ((uVar17 | uVar19) & uVar26 | uVar17 & uVar19) + DAT_0021b3dc + uVar3 + uVar6 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar20 ^ uVar7 ^ uVar24 ^ uVar18;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar17 = ((uVar27 | uVar22) & uVar19 | uVar27 & uVar22) +
           DAT_0021b3dc + uVar6 + uVar26 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar26 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar27 = (uVar29 & uVar7 | (uVar29 | uVar7) & uVar22) + uVar19 + DAT_0021b3dc + uVar9 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar20 = uVar16 ^ uVar20 ^ uVar14 ^ uVar3;
  uVar20 = uVar20 >> 0x1f | uVar20 << 1;
  uVar29 = ((uVar17 | uVar26) & uVar7 | uVar17 & uVar26) +
           uVar22 + DAT_0021b3dc + uVar20 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar15 = uVar10 ^ uVar15 ^ uVar4 ^ uVar6;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar22 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar17 = (uVar27 & uVar19 | (uVar27 | uVar19) & uVar26) + uVar7 + DAT_0021b3dc + uVar15 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar16 = uVar21 ^ uVar16 ^ uVar23 ^ uVar9;
  uVar7 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar27 = DAT_0021b3e0 + uVar16 + uVar26 + (uVar22 ^ uVar19 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar10 = uVar25 ^ uVar10 ^ uVar18 ^ uVar20;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar21 = uVar24 ^ uVar21 ^ uVar12 ^ uVar15;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar17 = uVar19 + DAT_0021b3e0 + uVar10 + (uVar7 ^ uVar22 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar19 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar29 = uVar22 + DAT_0021b3e0 + uVar21 + (uVar26 ^ uVar7 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar22 = uVar28 ^ uVar25 ^ uVar3 ^ uVar16;
  uVar25 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar27 = DAT_0021b3e0 + uVar22 + uVar7 + (uVar19 ^ uVar26 ^ uVar17) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar7 = uVar14 ^ uVar24 ^ uVar6 ^ uVar10;
  uVar24 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar26 + DAT_0021b3e0 + uVar7 + (uVar25 ^ uVar19 ^ uVar29) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar4 ^ uVar28 ^ uVar9 ^ uVar21;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar26 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar14 = uVar23 ^ uVar14 ^ uVar20 ^ uVar22;
  uVar27 = DAT_0021b3e0 + uVar28 + uVar19 + (uVar24 ^ uVar25 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar4 = uVar18 ^ uVar4 ^ uVar15 ^ uVar7;
  uVar17 = uVar25 + DAT_0021b3e0 + uVar14 + (uVar26 ^ uVar24 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar4 >> 0x1f | uVar4 << 1;
  uVar25 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar27 = uVar24 + DAT_0021b3e0 + uVar4 + (uVar19 ^ uVar26 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar23 = uVar12 ^ uVar23 ^ uVar16 ^ uVar28;
  uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar23 = uVar23 >> 0x1f | uVar23 << 1;
  uVar29 = DAT_0021b3e0 + uVar23 + uVar26 + (uVar25 ^ uVar19 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar26 = uVar3 ^ uVar18 ^ uVar10 ^ uVar14;
  uVar18 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  uVar17 = uVar19 + DAT_0021b3e0 + uVar26 + (uVar24 ^ uVar25 ^ uVar27) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar12 = uVar6 ^ uVar12 ^ uVar21 ^ uVar4;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar19 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar27 = uVar25 + DAT_0021b624 + uVar12 + (uVar18 ^ uVar24 ^ uVar29) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar3 = uVar9 ^ uVar3 ^ uVar22 ^ uVar23;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar25 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = uVar24 + DAT_0021b624 + uVar3 + (uVar19 ^ uVar18 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar6 = uVar20 ^ uVar6 ^ uVar7 ^ uVar26;
  uVar24 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar27 = uVar18 + DAT_0021b624 + uVar6 + (uVar25 ^ uVar19 ^ uVar27) +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar9 = uVar15 ^ uVar9 ^ uVar28 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar19 = uVar19 + DAT_0021b624 + uVar9 + (uVar24 ^ uVar25 ^ uVar17) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar14 = uVar16 ^ uVar20 ^ uVar14 ^ uVar3;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar20 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar25 = uVar25 + DAT_0021b624 + uVar14 + (uVar18 ^ uVar24 ^ uVar27) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar6 = uVar10 ^ uVar15 ^ uVar4 ^ uVar6;
  uVar4 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar19 = uVar24 + DAT_0021b624 + uVar6 + (uVar20 ^ uVar18 ^ uVar19) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar9 = uVar23 ^ uVar21 ^ uVar16 ^ uVar9;
  uVar24 = uVar9 >> 0x1f | uVar9 << 1;
  uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar15 = uVar18 + DAT_0021b624 + uVar24 + (uVar4 ^ uVar20 ^ uVar25) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar14 = uVar26 ^ uVar22 ^ uVar10 ^ uVar14;
  uVar9 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar6 = uVar7 ^ uVar21 ^ uVar12 ^ uVar6;
  uVar7 = uVar20 + DAT_0021b624 + (uVar14 >> 0x1f | uVar14 << 1) + (uVar23 ^ uVar4 ^ uVar19) +
          (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar6 = uVar4 + DAT_0021b624 + (uVar6 >> 0x1f | uVar6 << 1) + (uVar9 ^ uVar23 ^ uVar15) +
          (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar24 = uVar28 ^ uVar22 ^ uVar3 ^ uVar24;
  *(uint *)(param_1 + 8) =
       uVar23 + DAT_0021b624 + uVar2 + (uVar24 >> 0x1f | uVar24 << 1) + (uVar14 ^ uVar9 ^ uVar7) +
       (uVar6 >> 0x1b | uVar6 * 0x20);
  *(uint *)(param_1 + 0x10) = uVar8 + (uVar7 >> 2 | uVar7 * 0x40000000);
  *(uint *)(param_1 + 0xc) = uVar6 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar14 + uVar11;
  *(uint *)(param_1 + 0x18) = uVar9 + *(int *)(param_1 + 0x18);
  return;
}


// ==== FUN_0021b628 @ 0021b628 ====

void FUN_0021b628(undefined4 param_1,int param_2,int param_3)

{
  *(char *)(param_2 + param_3) = (char)((uint)param_1 >> 0x18);
  param_3 = param_3 + param_2;
  *(char *)(param_3 + 3) = (char)param_1;
  *(char *)(param_3 + 1) = (char)((uint)param_1 >> 0x10);
  *(char *)(param_3 + 2) = (char)((uint)param_1 >> 8);
  return;
}


// ==== FUN_0021b63c @ 0021b63c ====

void FUN_0021b63c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = DAT_0021b65c;
  param_1[2] = DAT_0021b65c;
  param_1[3] = iVar1 + -0x77777778;
  iVar1 = DAT_0021b660;
  param_1[4] = DAT_0021b660;
  param_1[5] = iVar1 + 0x77777778;
  param_1[6] = DAT_0021b664;
  return;
}


// ==== FUN_0021b668 @ 0021b668 ====

void FUN_0021b668(uint *param_1,int param_2,uint param_3)

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
      FUN_00215830((int)param_1 + uVar2 + 0x1c,param_2,iVar3);
      param_3 = param_3 - iVar3;
      FUN_0021a6c0(param_1,param_1 + 7);
      param_2 = param_2 + iVar3;
      uVar2 = 0;
    }
    param_2 = param_2 + param_3;
    for (; 0x3f < (int)param_3; param_3 = param_3 - 0x40) {
      FUN_0021a6c0(param_1);
    }
    if (0 < (int)param_3) {
      FUN_00215830((int)param_1 + uVar2 + 0x1c,param_2 - param_3,param_3);
      return;
    }
  }
  return;
}


// ==== FUN_0021b6dc @ 0021b6dc ====

void FUN_0021b6dc(uint *param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_0021b628(uVar3 >> 0x1d | param_1[1] << 3,&puStack_20,0);
  FUN_0021b628(uVar3 << 3,&puStack_20,4);
  uVar3 = *param_1 & 0x3f;
  if (uVar3 < 0x38) {
    iVar1 = 0x38 - uVar3;
  }
  else {
    iVar1 = 0x78 - uVar3;
  }
  FUN_0021b668(param_1,DAT_0021b73c + 0x21b710,iVar1);
  FUN_0021b668(param_1,&puStack_20,8);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    FUN_0021b628(*(undefined4 *)((int)param_1 + iVar1 + 8),param_2,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x14);
  return;
}


// ==== FUN_0021b740 @ 0021b740 ====

void FUN_0021b740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_74 [96];
  
  FUN_0021b63c(auStack_74);
  FUN_0021b668(auStack_74,param_1,param_2);
  FUN_0021b6dc(auStack_74,param_3);
  FUN_00215820(auStack_74,0,0x5c);
  return;
}


// ==== FUN_0021b774 @ 0021b774 ====

int FUN_0021b774(uint param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_0021b7d4 + 0x21b77e;
  if (param_1 == 0) {
    iVar1 = DAT_0021b7d8 + 0x21b786;
    iVar3 = DAT_0021b7dc + 0x21b788;
  }
  else {
    param_3 = *(uint **)(iVar4 + DAT_0021b7e0);
    uVar2 = *param_3;
    if (uVar2 < param_1) {
      iVar1 = DAT_0021b7e4 + 0x21b79a;
      iVar3 = DAT_0021b7e8 + 0x21b79c;
    }
    else {
      param_3 = (uint *)**(int **)(iVar4 + DAT_0021b7ec);
      if (param_1 + (int)param_3 <= uVar2) {
        piVar5 = *(int **)(iVar4 + DAT_0021b7f8);
        **(int **)(iVar4 + DAT_0021b7ec) = (param_1 + 3 & 0xfffffffc) + (int)param_3;
        return (int)param_3 + *piVar5 + 0x74368;
      }
      iVar1 = DAT_0021b7f0 + 0x21b7b6;
      iVar3 = DAT_0021b7f4 + 0x21b7b8;
    }
  }
  FUN_00213502(iVar1,iVar3,param_3,iVar4,param_4);
  return 0;
}


// ==== FUN_0021b7fc @ 0021b7fc ====

void FUN_0021b7fc(void)

{
  return;
}


// ==== FUN_0021b7fe @ 0021b7fe ====

void FUN_0021b7fe(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_0021b80a @ 0021b80a ====

void FUN_0021b80a(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00215820(param_1[2],0,param_1[1] << 2);
    FUN_0021b7fc(param_1[2]);
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== FUN_0021b82e @ 0021b82e ====

int FUN_0021b82e(undefined4 param_1,int param_2,int param_3,int param_4)

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
  
  iVar1 = FUN_0021947a(param_3,0);
  if ((iVar1 < 0) || (-1 < **(int **)(param_3 + 8) << 0x1f)) {
    return 2;
  }
  FUN_0021bb12(&local_33c,param_3);
  FUN_0021b7fe(auStack_338);
  FUN_0021b7fe(auStack_32c);
  FUN_00215820(auStack_320,0,0x300);
  iVar4 = *(int *)(param_3 + 4) + 1;
  iVar1 = FUN_00219150(param_1,iVar4);
  if (iVar1 == 0) {
    iVar1 = FUN_00219150(auStack_314,iVar4);
    if ((((iVar1 == 0) && (iVar1 = FUN_00219150(auStack_32c,iVar4 * 2), iVar1 == 0)) &&
        (iVar1 = FUN_002191f0(auStack_338,1), iVar1 == 0)) &&
       ((iVar1 = FUN_0021926a(auStack_338,*(int *)(param_3 + 4) << 6), iVar1 == 0 &&
        (iVar1 = FUN_0021a568(auStack_338,auStack_338,param_3), iVar1 == 0)))) {
      if (param_4 != 0) {
        FUN_00215830(param_4,auStack_338,0xc);
      }
      iVar1 = FUN_002193f2(param_1,param_3);
      if (iVar1 < 0) {
        FUN_0021919e(auStack_314,param_1);
      }
      else {
        FUN_0021a568(auStack_314,param_1,param_3);
      }
      FUN_0021bb40(auStack_314,auStack_338,param_3,local_33c,auStack_32c);
      iVar1 = FUN_0021919e(param_1,auStack_338);
      if (iVar1 == 0) {
        FUN_0021bc04(param_1,param_3,local_33c,auStack_32c);
        iVar1 = FUN_00219150(auStack_1a0,*(int *)(param_3 + 4) + 1);
        if ((iVar1 == 0) && (iVar1 = FUN_0021919e(auStack_1a0,auStack_314), iVar1 == 0)) {
          iVar1 = 5;
          do {
            FUN_0021bb40(auStack_1a0,auStack_1a0,param_3,local_33c,auStack_32c);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          puVar2 = auStack_194;
          do {
            iVar1 = FUN_00219150(puVar2,*(int *)(param_3 + 4) + 1);
            if ((iVar1 != 0) || (iVar1 = FUN_0021919e(puVar2,puVar2 + -0xc), iVar1 != 0))
            goto LAB_0021bad4;
            puVar6 = puVar2 + 0xc;
            FUN_0021bb40(puVar2,auStack_314,param_3,local_33c,auStack_32c);
            puVar2 = puVar6;
          } while (puVar6 != &stack0xffffffe0);
          uVar7 = 0;
          uVar8 = 0;
          iVar4 = 0;
          iVar9 = *(int *)(param_2 + 4);
          iVar10 = 0;
LAB_0021b9e2:
          iVar5 = iVar9;
          if (uVar8 == 0) {
            iVar5 = iVar9 + -1;
            if (iVar9 == 0) goto code_r0x0021b9f2;
            uVar8 = 0x20;
          }
          uVar8 = uVar8 - 1;
          uVar3 = *(uint *)(*(int *)(param_2 + 8) + iVar5 * 4) >> (uVar8 & 0xff) & 1;
          iVar9 = iVar5;
          if (uVar3 == 0) goto code_r0x0021ba18;
          goto LAB_0021ba3e;
        }
      }
    }
  }
LAB_0021bad4:
  puVar2 = auStack_1a0;
  do {
    puVar6 = puVar2 + 0xc;
    FUN_0021b80a(puVar2);
    puVar2 = puVar6;
  } while (puVar6 != &stack0xffffffe0);
  puVar2 = auStack_32c;
  if (param_4 == 0) {
    FUN_0021b80a(auStack_314);
    FUN_0021b80a(puVar2);
    puVar2 = auStack_338;
  }
  else {
    FUN_0021b80a(auStack_314);
  }
  FUN_0021b80a(puVar2);
  return iVar1;
code_r0x0021b9f2:
  for (iVar4 = 0; iVar4 < iVar10; iVar4 = iVar4 + 1) {
    FUN_0021bb40(param_1,param_1,param_3,local_33c,auStack_32c);
    if ((int)(uVar7 << 0x1a) < 0) {
      FUN_0021bb40(param_1,auStack_314,param_3,local_33c,auStack_32c);
    }
    uVar7 = uVar7 << 1;
  }
  FUN_0021bc04(param_1,param_3,local_33c,auStack_32c);
  goto LAB_0021bad4;
code_r0x0021ba18:
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_0021bb40(param_1,param_1,param_3,local_33c,auStack_32c);
    }
    else {
LAB_0021ba3e:
      uVar7 = uVar3 << (5U - iVar10 & 0xff) | uVar7;
      if (iVar10 + 1 == 6) {
        iVar4 = 6;
        do {
          FUN_0021bb40(param_1,param_1,param_3,local_33c,auStack_32c);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_0021bb40(param_1,auStack_320 + uVar7 * 0xc,param_3,local_33c,auStack_32c);
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
  goto LAB_0021b9e2;
}


// ==== FUN_0021bb12 @ 0021bb12 ====

void FUN_0021bb12(int *param_1,int param_2)

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


// ==== FUN_0021bb40 @ 0021bb40 ====

void FUN_0021bb40(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  FUN_00215820(*(undefined4 *)(param_5 + 8),0,*(int *)(param_5 + 4) << 2);
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
    FUN_0021972c(uVar5,*(int **)(param_2 + 8),piVar8,iVar10);
    FUN_0021972c(uVar7,*(undefined4 *)(param_3 + 8),piVar8,param_4 * (iVar3 * iVar10 + iVar6));
    *piVar8 = iVar10;
    (piVar8 + 1)[uVar7 + 1] = 0;
    piVar8 = piVar8 + 1;
  }
  FUN_00215830(*(undefined4 *)(param_1 + 8),piVar2 + (uVar7 & ~((int)uVar7 >> 0x1f)),(uVar7 + 1) * 4
              );
  iVar9 = FUN_0021938a(param_1,param_3);
  if (iVar9 < 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_5 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar4 = *(undefined4 *)(param_1 + 8);
  }
  FUN_00219570(uVar7,uVar1,uVar4);
  return;
}


// ==== FUN_0021bc04 @ 0021bc04 ====

void FUN_0021bc04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  
  local_14 = &local_20;
  local_20 = 1;
  local_1c = 1;
  local_18 = 1;
  FUN_0021bb40(param_1,&local_1c,param_2,param_3,param_4);
  return;
}


// ==== FUN_0021bcb0 @ 0021bcb0 ====

uint FUN_0021bcb0(void)

{
  return *DAT_0021bcbc & 1;
}


// ==== FUN_0021bcc0 @ 0021bcc0 ====

undefined4 FUN_0021bcc0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 0x29) {
    return **(undefined4 **)(*(int *)(DAT_0021bcf0 + 0x21bccc + DAT_0021bcf4) + param_1 * 4);
  }
  FUN_002134e8(DAT_0021bcf8 + 0x21bcde,param_1,param_3,DAT_0021bcf0 + 0x21bccc,param_4);
  FUN_002134e8(DAT_0021bcfc + 0x21bce8,0x29);
  return 0xffffffff;
}


// ==== FUN_0021bd00 @ 0021bd00 ====

void FUN_0021bd00(void)

{
  return;
}


// ==== FUN_0021bd04 @ 0021bd04 ====

undefined4 FUN_0021bd04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 8) & 0x3f) != 0) {
    uVar1 = FUN_002157d4(DAT_0021bd9c + 0x21bd18);
    FUN_0021bd00(param_1,uVar1);
    return 0xfffffffe;
  }
  iVar3 = DAT_0021bda0 + 0x21bd2e;
  uVar1 = FUN_002157d4(iVar3);
  iVar2 = FUN_00215842(param_1,iVar3,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_002157d4(iVar3);
    FUN_0021bd00(param_1,uVar1);
    return 0xfffffffd;
  }
  if (*(int *)(param_1 + 8) == 0x240) {
    if (*(char *)(param_1 + 0xc) != '\x01') {
      return 0xfffffffb;
    }
    if (*(byte *)(param_1 + 0xd) < 2) {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        *(uint *)(DAT_0021bda4 + 0x21bd7a) =
             (uint)CONCAT11(*(undefined1 *)(param_1 + 0xf),*(undefined1 *)(param_1 + 0x10));
        return 0;
      }
      return 0xfffffff9;
    }
    return 0xfffffffa;
  }
  return 0xfffffffc;
}


// ==== FUN_0021bda8 @ 0021bda8 ====

undefined2 FUN_0021bda8(void)

{
  return *(undefined2 *)(DAT_0021bdb0 + 0x21bdae);
}


// ==== FUN_0021bdb4 @ 0021bdb4 ====

undefined4 FUN_0021bdb4(int *param_1,undefined4 param_2)

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
    iVar1 = FUN_0021b774(0x100);
    if (iVar1 == 0) {
      uVar5 = 0xfffffffe;
    }
    else {
      iVar2 = FUN_0021b774(0x240);
      iVar3 = FUN_0021b774(0x100);
      if (iVar3 == 0) {
        FUN_0021b7fc(iVar1,0x100);
        uVar5 = 0xfffffffd;
        FUN_0021b7fc(iVar2,0x240);
      }
      else {
        FUN_00215830(iVar3,param_2,0x100);
        iVar6 = *param_1;
        FUN_00215830(iVar2,iVar6,0x240);
        iVar4 = FUN_0021bd04(iVar2);
        if (iVar4 == 0) {
          uVar5 = FUN_00215b08();
          FUN_00215820(iVar6 + 0x13c,0,0x100);
          iVar4 = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 8);
          iVar4 = FUN_0021c768(iVar6,iVar4,iVar4 + 0x48U & 0xffffffc0,auStack_40);
          if (iVar4 == 0) {
            FUN_00215b08(uVar5);
            uVar5 = FUN_00215b08(0);
            FUN_00218068(iVar2 + 0x13c,0x100);
            FUN_00218068(iVar3,0x100);
            FUN_0021895e(iVar2 + 0x13c,iVar3,iVar1);
            FUN_00218068(iVar1,0x100);
            FUN_00215b08(uVar5);
            local_44 = -7;
            uVar5 = FUN_00215b08(0);
            iVar4 = FUN_00218b10(auStack_40,0x20,iVar1,0x100,0x20,0x800,&local_44);
            if (iVar4 == 0) {
              FUN_00215b08(uVar5);
              if (local_44 == 1) {
                uVar5 = FUN_00215b08(0);
                iVar4 = FUN_0021c63c(*(int *)(iVar2 + 8) + iVar6,iVar6,*(undefined4 *)(iVar2 + 0x18)
                                     ,iVar2 + 0x1c);
                if (iVar4 == 0) {
                  FUN_00215b08(uVar5);
                  FUN_0021b7fc(iVar1,0x100);
                  FUN_0021b7fc(iVar2,0x240);
                  FUN_0021b7fc(iVar3,0x100);
                  uVar5 = 0;
                }
                else {
                  FUN_0021b7fc(iVar1,0x100);
                  uVar5 = 0xfffffff6;
                  FUN_0021b7fc(iVar2,0x240);
                  FUN_0021b7fc(iVar3,0x100);
                }
              }
              else {
                FUN_0021b7fc(iVar1,0x100);
                uVar5 = 0xfffffff7;
                FUN_0021b7fc(iVar2,0x240);
                FUN_0021b7fc(iVar3,0x100);
              }
            }
            else {
              FUN_0021b7fc(iVar1,0x100);
              uVar5 = 0xfffffff8;
              FUN_0021b7fc(iVar2,0x240);
              FUN_0021b7fc(iVar3,0x100);
            }
          }
          else {
            FUN_0021b7fc(iVar1,0x100);
            uVar5 = 0xfffffffb;
            FUN_0021b7fc(iVar2,0x240);
            FUN_0021b7fc(iVar3,0x100);
          }
        }
        else {
          FUN_0021b7fc(iVar1,0x100);
          uVar5 = 0xfffffffc;
          FUN_0021b7fc(iVar2,0x240);
          FUN_0021b7fc(iVar3,0x100);
        }
      }
    }
  }
  return uVar5;
}


// ==== FUN_0021bfea @ 0021bfea ====

undefined4 FUN_0021bfea(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(*param_1 + 0x23c) != param_2) && (*(int *)(*param_1 + 0x23c) != -1)) {
    return 0xfffffff5;
  }
  FUN_0021c604();
  uVar1 = FUN_0021bdb4(param_1,param_3);
  thunk_FUN_0021c544();
  return uVar1;
}


// ==== FUN_0021c01a @ 0021c01a ====

undefined4 FUN_0021c01a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  FUN_0021c604();
  uVar1 = FUN_0021c768(param_1,param_2,param_3,param_4,uVar1);
  thunk_FUN_0021c544();
  return uVar1;
}


// ==== FUN_0021c040 @ 0021c040 ====

undefined4 FUN_0021c040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_002134e8(DAT_0021c108 + 0x21c058,DAT_0021c10c + 0x21c05a);
    return 0xffffffff;
  }
  iVar1 = FUN_0021b774(0x100);
  if (iVar1 == 0) {
    FUN_002134e8(DAT_0021c110 + 0x21c078,DAT_0021c114 + 0x21c07a);
    return 0xfffffffe;
  }
  iVar2 = FUN_0021b774(0x100);
  if (iVar2 == 0) {
    FUN_0021b7fc(iVar1,0x100);
    FUN_002134e8(DAT_0021c118 + 0x21c0a2,DAT_0021c11c + 0x21c0a4);
    return 0xfffffffd;
  }
  FUN_00215830(iVar1,param_1,0x100);
  FUN_00215830(iVar2,param_2,0x100);
  FUN_00218068(iVar1,0x100);
  FUN_00218068(iVar2,0x100);
  uVar3 = FUN_0021895e(iVar1,iVar2,param_3);
  FUN_00218068(param_3,0x100);
  FUN_0021b7fc(iVar1,0x100);
  FUN_0021b7fc(iVar2,0x100);
  return uVar3;
}


// ==== FUN_0021c120 @ 0021c120 ====

undefined4
FUN_0021c120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  FUN_0021c604();
  uVar1 = FUN_00218b10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  thunk_FUN_0021c544();
  return uVar1;
}


// ==== FUN_0021c484 @ 0021c484 ====

undefined4 FUN_0021c484(byte *param_1,int param_2)

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
  *DAT_0021c530 = 1;
  puVar2 = DAT_0021c534;
  if (((*DAT_0021c534 & 1) == 0) && (*DAT_0021c534 = 1, -1 < (int)(*puVar2 << 0x1f))) {
    FUN_002134e8(DAT_0021c53c + 0x21c4b4);
    return 0xfffffffd;
  }
  puVar3 = DAT_0021c540;
  FUN_00215820(param_1,0,param_2);
  uVar6 = 0;
  do {
    while (-1 < (int)*puVar2) {
      thunk_FUN_00215aa8(1);
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
            *DAT_0021c538 = 1;
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


// ==== FUN_0021c544 @ 0021c544 ====

void FUN_0021c544(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0021c558;
  uVar2 = *DAT_0021c558;
  *DAT_0021c558 = uVar2 & 0xfffffff0;
  *puVar1 = uVar2 & 0xfffffff0 | 0xf;
  return;
}


// ==== FUN_0021c55c @ 0021c55c ====

undefined4 FUN_0021c55c(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = DAT_0021c5ac;
  puVar3 = DAT_0021c5a8;
  *DAT_0021c5ac = 3;
  *puVar3 = 3;
  puVar3 = DAT_0021c5b0 + -0x200;
  *DAT_0021c5b0 = param_1;
  piVar2 = DAT_0021c5b4;
  *puVar3 = 0;
  do {
    iVar4 = *piVar2;
  } while (iVar4 == 0);
  if (-1 < iVar4 << 0x1e) {
    do {
    } while (-1 < *DAT_0021c5b8 << 0x1f);
    *puVar1 = 3;
    return 0;
  }
  if (-1 < iVar4 << 0x1f) {
    do {
    } while (*DAT_0021c5b4 == 0);
  }
  *puVar1 = 3;
  return 0xffffffff;
}


// ==== FUN_0021c5bc @ 0021c5bc ====

void FUN_0021c5bc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(&DAT_10210c00 + iVar1 + param_1 * 4) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  return;
}


// ==== FUN_0021c5d4 @ 0021c5d4 ====

void FUN_0021c5d4(int param_1,byte *param_2)

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


// ==== FUN_0021c604 @ 0021c604 ====

void FUN_0021c604(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0021c544();
  puVar2 = DAT_0021c634;
  puVar1 = DAT_0021c630;
  uVar3 = *DAT_0021c630;
  uVar4 = *DAT_0021c634;
  *DAT_0021c634 = uVar4 & 0xffffffe0;
  *puVar1 = uVar3 | 0x10000;
  *puVar2 = uVar4 & 0xffffffe0 | 0x1f;
  *puVar1 = *puVar1 | 0x2000;
  return;
}


// ==== thunk_FUN_0021c544 @ 0021c638 ====

void thunk_FUN_0021c544(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0021c558;
  uVar2 = *DAT_0021c558;
  *DAT_0021c558 = uVar2 & 0xfffffff0;
  *puVar1 = uVar2 & 0xfffffff0 | 0xf;
  return;
}


// ==== FUN_0021c63c @ 0021c63c ====

undefined4 FUN_0021c63c(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [16];
  byte abStack_30 [16];
  
  iVar5 = DAT_0021c760;
  FUN_00215830(auStack_40,DAT_0021c760 + 0x21c650,0x10);
  FUN_00215830(abStack_30,iVar5 + 0x21c660,0x10);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && ((param_3 & 0xf) == 0)) {
    FUN_0021c5d4(0x12,auStack_40);
    puVar1 = DAT_0021c750;
    FUN_0021c5d4(0x16,param_4);
    piVar4 = DAT_0021c764;
    piVar2 = DAT_0021c754;
    *DAT_0021c754 = 0x12;
    *piVar4 = 1;
    *puVar1 = 0x16;
    *DAT_0021c758 = 0x1a;
    iVar5 = FUN_0021c55c(0x78);
    if (iVar5 == 0) {
      if (param_4 != -0x10) {
        iVar5 = 0;
        do {
          abStack_30[iVar5] = abStack_30[iVar5] ^ *(byte *)(param_4 + iVar5 + 0x10);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x10);
      }
      FUN_0021c5d4(0x12,abStack_30);
      *piVar4 = param_1;
      *piVar2 = param_2;
      puVar3 = DAT_0021c75c;
      *puVar1 = param_3 >> 4;
      *puVar3 = 0x12;
      puVar3[1] = 0x1a;
      puVar3[2] = 0x1a;
      iVar5 = FUN_0021c55c(0x7e);
      if (iVar5 != 0) {
        FUN_0021c5bc(0x12);
        FUN_0021c5bc(0x16);
        FUN_0021c5bc(0x1a);
        FUN_00215820(abStack_30,0,0x10);
        return 0xfffffffe;
      }
      FUN_0021c5bc(0x12);
      FUN_0021c5bc(0x16);
      FUN_0021c5bc(0x1a);
      FUN_00215820(abStack_30,0,0x10);
      return 0;
    }
  }
  return 0xffffffff;
}


// ==== FUN_0021c768 @ 0021c768 ====

undefined4 FUN_0021c768(int param_1,uint param_2,uint param_3,undefined1 *param_4)

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
      FUN_00215820(param_2 + 1 + param_1,0,(-9 - param_2) + uVar8,param_4,param_1,0,param_3);
      *(undefined1 *)(param_1 + param_2) = 0x80;
      *(byte *)(param_1 + (uVar8 - 8)) = (byte)(param_2 >> 0x1d);
      iVar5 = param_1 + (uVar8 - 8);
      iVar7 = (param_2 & 0x1fe0) * 0x800 + param_2 * 0x8000000 + ((param_2 & 0x1fffffff) >> 0x15) +
              ((param_2 & 0x1fffffff) >> 5 & 0xff00);
      *(char *)(iVar5 + 4) = (char)iVar7;
      *(char *)(iVar5 + 5) = (char)((uint)iVar7 >> 8);
      *(char *)(iVar5 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(iVar5 + 7) = (char)((uint)iVar7 >> 0x18);
      puVar3 = DAT_0021c864;
      piVar1 = DAT_0021c860;
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
      iVar5 = FUN_0021c55c(0x41);
      puVar2 = DAT_0021c868;
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


