
void FUN_8000cc50(ushort *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_f4;
  double dVar8;
  uint uVar9;
  undefined8 in_f6;
  uint uVar10;
  undefined8 in_f10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack128;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 uStack96;
  ushort *puStack92;
  ushort *puStack88;
  float fStack76;
  float fStack72;
  float fStack68;
  undefined auStack64 [64];
  
  uVar10 = (uint)((ulonglong)in_f10 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_f4 >> 0x20);
  uVar9 = (uint)((ulonglong)in_f6 >> 0x20);
  if ((*param_1 & 0x100) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1a);
    guPerspectiveF(auStack64,param_1 + 0x12,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
    uVar2 = param_1[1];
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x1a);
    guOrthoF(auStack64,*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6]);
    uVar2 = param_1[1];
  }
  puVar3 = param_1 + 0x34;
  if ((uVar2 & 0x60) == 0) {
    FUN_80002da8(puVar3,param_1 + 0x26,param_1 + 0x20);
    puVar4 = *(ushort **)(param_1 + 8);
    if (puVar4 != (ushort *)0x0) {
      if (puVar4 != (ushort *)0x0) {
        uVar2 = *puVar4;
        while (((uVar2 & 0x80) != 0 && (puVar4 = *(ushort **)(puVar4 + 8), puVar4 != (ushort *)0x0))
              ) {
          uVar2 = *puVar4;
        }
      }
      if (puVar4 != (ushort *)0x0) {
        puStack92 = puVar4;
        FUN_8000c800();
        FUN_8000ca9c(puVar3,puStack92 + 0x34,puVar3);
      }
    }
    uStack104 = DAT_80093360;
    uStack100 = DAT_80093364;
    uStack96 = DAT_80093368;
    FUN_80002a98(&uStack104,puVar3,0xffffffff80387b30);
    fVar5 = *(float *)(param_1 + 0x4e);
    fVar13 = *(float *)(param_1 + 0x4c);
    fStack72 = DAT_80387b64 - fVar5;
    fStack68 = DAT_80387b60 - fVar13;
    fVar7 = *(float *)(param_1 + 0x50);
    fStack76 = DAT_80387b68 - fVar7;
    dVar8 = (double)CONCAT44(uVar6,fStack76);
    if ((double)((ulonglong)uVar9 << 0x20) == (double)fStack68) {
      DAT_80387b60 = (float)((double)DAT_80387b60 + DAT_800a2798);
      fVar7 = *(float *)(param_1 + 0x50);
      fVar5 = *(float *)(param_1 + 0x4e);
      fVar13 = *(float *)(param_1 + 0x4c);
      dVar8 = DAT_800a2798;
    }
    uVar9 = (uint)((ulonglong)dVar8 >> 0x20);
    guLookAtF(0xffffffff80387b30,fVar13,fVar5,fVar7,DAT_80387b60,DAT_80387b64,DAT_80387b68,0,
              0x3f800000,0);
    uVar6 = sqrtf(fStack68 * fStack68 + fStack76 * fStack76);
    uVar2 = FUN_80004394(fStack72,uVar6);
    param_1[0x29] = uVar2;
    dVar8 = (double)DAT_80387b58;
    fVar13 = DAT_80387b58;
    if (dVar8 < (double)((ulonglong)uVar9 << 0x20)) {
      fVar13 = -DAT_80387b58;
    }
    uVar2 = FUN_80004394(fVar13,DAT_80387b38);
    param_1[0x2a] = uVar2;
    if ((double)fStack76 < (double)((ulonglong)dVar8 & 0xffffffff00000000)) {
      param_1[0x2a] = -param_1[0x2a];
      uVar2 = param_1[0x2a];
    }
    else {
      uVar2 = param_1[0x2a];
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = uVar2 + 0x4000;
    FUN_8000ca9c(0xffffffff80387b30,auStack64);
  }
  else {
    puVar4 = param_1 + 0x34;
    FUN_80002da8(puVar4,param_1 + 0x26,param_1 + 0x20);
    puVar3 = *(ushort **)(param_1 + 8);
    if (puVar3 == (ushort *)0x0) {
      fVar13 = *(float *)(param_1 + 0x2e);
    }
    else {
      if (puVar3 != (ushort *)0x0) {
        uVar2 = *puVar3;
        while (((uVar2 & 0x80) != 0 && (puVar3 = *(ushort **)(puVar3 + 8), puVar3 != (ushort *)0x0))
              ) {
          uVar2 = *puVar3;
        }
      }
      if (puVar3 != (ushort *)0x0) {
        puStack88 = puVar3;
        FUN_8000c800(puVar3);
        FUN_8000ca9c(puVar4,puStack88 + 0x34,puVar4);
      }
      fVar13 = *(float *)(param_1 + 0x2e);
    }
    fVar7 = *(float *)(param_1 + 0x4e);
    fVar12 = *(float *)(param_1 + 0x2c);
    fVar5 = *(float *)(param_1 + 0x4c);
    fStack72 = fVar13 - fVar7;
    fStack68 = fVar12 - fVar5;
    fStack128 = *(float *)(param_1 + 0x30);
    fVar11 = *(float *)(param_1 + 0x50);
    fStack76 = fStack128 - fVar11;
    if ((double)((ulonglong)uVar10 << 0x20) == (double)fStack68) {
      fVar5 = *(float *)(param_1 + 0x4c);
      fStack128 = *(float *)(param_1 + 0x30);
      uVar9 = (uint)((ulonglong)(double)fVar12 >> 0x20);
      fVar13 = *(float *)(param_1 + 0x2e);
      fVar7 = *(float *)(param_1 + 0x4e);
      *(float *)(param_1 + 0x2c) = (float)((double)fVar12 + DAT_800a2790);
      fVar12 = *(float *)(param_1 + 0x2c);
      fVar11 = *(float *)(param_1 + 0x50);
    }
    guLookAtF(0xffffffff80387b30,fVar5,fVar7,fVar11,fVar12,fVar13,fStack128,0,0x3f800000,0);
    if (param_1 == DAT_8009b438) {
      FUN_800008d0(0xffffffff80387b30,0xffffffff80389e8c,0x40);
    }
    uVar6 = sqrtf(fStack68 * fStack68 + fStack76 * fStack76);
    uVar2 = FUN_80004394(fStack72,uVar6);
    param_1[0x29] = uVar2;
    dVar8 = (double)DAT_80387b58;
    fVar13 = DAT_80387b58;
    if (dVar8 < (double)((ulonglong)uVar9 << 0x20)) {
      fVar13 = -DAT_80387b58;
    }
    uVar2 = FUN_80004394(fVar13,DAT_80387b38);
    param_1[0x2a] = uVar2;
    if ((double)fStack76 < (double)((ulonglong)dVar8 & 0xffffffff00000000)) {
      param_1[0x2a] = -param_1[0x2a];
      uVar2 = param_1[0x2a];
    }
    else {
      uVar2 = param_1[0x2a];
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = uVar2 + 0x4000;
    FUN_8000ca9c(0xffffffff80387b30,auStack64,0xffffffff80387b30);
  }
  guMtxF2L(0xffffffff80387b30,((int)(param_1 + 0x3fe58aa4) / 0xa8) * 0x40 + DAT_80387ae8);
  return;
}
