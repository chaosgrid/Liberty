#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_4884ec _public_4884ec

PROC_DECLARE(0x4883b0, internal_4883b0, public_4883b0);
extern "C" NAKED register_t __cdecl internal_4883b0()
{
    __asm
    {
        sub esp, 0x3C
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x18]
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x18], 0xBC9374BC
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBF800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x24], 0x3CA3D70A
        mov dword ptr ss : [esp+0x28], 0x3C75C28F
        mov dword ptr ss : [esp+0x2C], 0
        call public_423b30
        add esp, 0xC
        lea eax, ss:[esp+0x24]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x5C]
        push ecx
        push 0
        lea edx, ss:[esp+0x70]
        push edx
/*FIXUP push offset public_5d04a8 @0x48845b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04a8
/*FIXUP push offset public_5d2400 @0x488460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2400
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5cb88c]
        mov dword ptr ds : [esi+0x330], eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x48]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_5d15b4]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [ebp+4]
        push 0
        push 0
        push 1
        push 0x4AD
        push 0x3F800000
        push 0x3DF5C28F
        push 0x3ECCCCCD
        push 0
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edx
/*FIXUP push offset public_5d23f0 @0x4884c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d23f0
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x334], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4884ec
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], 0
        public_4884ec : nop
        mov ecx, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5cb88c]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x48]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], 0x3DB851EC
        fsub dword ptr ds : [public_5d1f84]
        mov dword ptr ss : [esp+0x40], 0x3CAC0831
        mov dword ptr ss : [esp+0x44], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        push 0
/*FIXUP push offset public_5d23dc @0x488559*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d23dc
        mov ecx, esi
        call public_5a0d00
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5cb88c]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x48]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x338], eax
        fadd dword ptr ds : [public_5d0434]
        mov dword ptr ss : [esp+0x3C], 0x3DB851EC
        mov dword ptr ss : [esp+0x40], 0x3CAC0831
        mov dword ptr ss : [esp+0x44], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        push 0
/*FIXUP push offset public_5d23c8 @0x4885c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d23c8
        mov ecx, esi
        call public_5a0d00
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_5cb88c]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x48]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x33C], eax
        fsub dword ptr ds : [public_5d1f84]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 1
        push 0x4DC
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea edx, ss:[esp+0x5C]
        push edx
/*FIXUP push offset public_5d0410 @0x488624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d23b0 @0x488629*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d23b0
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [public_5d0434]
        push 0
        push 0
        push 1
        push 0x4DD
        push 0x3F800000
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x28]
        push 0x3E8A3D71
        fsub dword ptr ds : [public_5cb88c]
        push 0
        mov dword ptr ds : [esi+0x340], eax
        lea eax, ss:[esp+0x50]
        push eax
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d0410 @0x48867c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x60]
/*FIXUP push offset public_5d2398 @0x488685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2398
        mov ecx, esi
        call public_5a0e30
        lea edi, ds:[esi+0x32C]
        push 0x13
        mov ecx, edi
        mov dword ptr ds : [esi+0x344], eax
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 7
        call public_5760d0
        push 0x12
        mov ecx, edi
        call public_5760d0
        push 0xF
        mov ecx, edi
        call public_5760d0
        push 0x11
        mov ecx, edi
        call public_5760d0
        push esi
        call public_59d8c0
        mov eax, dword ptr ds : [public_67dccc]
        mov ecx, dword ptr ss : [esp+0x50]
        add esp, 4
        push ebp
        inc eax
        push ecx
        mov ecx, esi
        mov dword ptr ds : [public_67dccc], eax
        call public_4b5060
        pop edi
        test al, al
        pop esi
        setne al
        pop ebp
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x4883b0)
    }
}

#undef public_4884ec
