#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4a7560);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_47182a _public_47182a
#define public_471849 _public_471849
#define public_4719a7 _public_4719a7

PROC_DECLARE(0x471810, internal_471810, public_471810);
extern "C" NAKED register_t __cdecl internal_471810()
{
    __asm
    {
        mov al, byte ptr ds : [public_66d359]
        sub esp, 0x134
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        jne public_47182a
        call public_45a460
        public_47182a : nop
        push 1
        call public_4424f0
/*FIXUP push offset public_5d04d4 @0x471831*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04d4
        call public_59da10
        add esp, 8
        test eax, eax
        je public_471849
        mov ecx, eax
        call public_4a7560
        public_471849 : nop
        push 0
/*FIXUP push offset public_5cb128 @0x47184b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 8
        push 0xBF800000
        push 0
        push 0
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        lea eax, ss:[esp+0x1C]
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
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x60]
        push edx
/*FIXUP push offset public_5d04a8 @0x4718bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04a8
/*FIXUP push offset public_5d049c @0x4718c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d049c
        mov ecx, esi
        call public_5a0db0
        push 0xBF800000
        push 0x3CF5C288
        push 0
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        call public_422b80
        lea eax, ss:[esp+0x10]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 0
        push 1
        push 0
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
        push 0
        lea edx, ss:[esp+0x60]
        push edx
/*FIXUP push offset public_5d046c @0x47193a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d046c
/*FIXUP push offset public_5d045c @0x47193f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d045c
        mov ecx, esi
        call public_5a0db0
        push 0xBF800000
        push 0x3D0B4394
        push 0
        lea ecx, ss:[esp+0x38]
        call public_422b80
        push 0
        push 0
        push 1
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3EB851EC
        push 0
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5ce91c @0x47197e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d0450 @0x471983*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0450
        mov ecx, esi
        call public_5a0e30
        mov ebp, dword ptr ds : [public_5c71ec]
        xor edi, edi
        mov dword ptr ds : [esi+0x33C], eax
        mov dword ptr ss : [esp+0x28], edi
        lea ebx, ds:[esi+0x348]
        public_4719a7 : nop
        fild dword ptr ss : [esp+0x28]
        push edi
        lea ecx, ss:[esp+0x48]
/*FIXUP push offset public_5d0440 @0x4719b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0440
        fmul dword ptr ds : [public_5d043c]
        push ecx
        fsub dword ptr ds : [public_5d0438]
        fstp dword ptr ss : [esp+0x38]
        call ebp
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [public_5d0434]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_5ced30 @0x4719e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea ecx, ss:[esp+0x64]
        push ecx
        fstp dword ptr ss : [esp+0x40]
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x3DB645A2
        mov dword ptr ss : [esp+0x38], 0x3CAC0831
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x44], 0xBD99999A
        mov dword ptr ss : [esp+0x48], 0xBF800000
        call public_5a0d00
        push edi
        lea edx, ss:[esp+0x48]
/*FIXUP push offset public_5d0420 @0x471a2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0420
        push edx
        mov dword ptr ds : [ebx-8], eax
        call ebp
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [public_5d041c]
        add esp, 0xC
        push 0
        push 0
        push 1
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea eax, ss:[esp+0x58]
        push eax
/*FIXUP push offset public_5d0410 @0x471a61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        lea ecx, ss:[esp+0x6C]
        push ecx
        fstp dword ptr ss : [esp+0x64]
        mov ecx, esi
        mov dword ptr ss : [esp+0x68], 0xBD916873
        mov dword ptr ss : [esp+0x6C], 0xBF800000
        call public_5a0e30
        inc edi
        mov dword ptr ds : [ebx], eax
        add ebx, 4
        cmp edi, 2
        mov dword ptr ss : [esp+0x28], edi
        jl public_4719a7
        mov ecx, dword ptr ds : [esi+0x33C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x726
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x348]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x727
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x728
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [esi+0x70], 0x6E
        mov dword ptr ds : [esi+0x78], 6
        call public_4a7670
        lea edi, ds:[esi+0x32C]
        push edi
        mov byte ptr ds : [esi+0x339], al
        call public_577b40
        add esp, 4
        push 0x13
        mov ecx, edi
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
        mov eax, dword ptr ss : [esp+0x14C]
        mov ecx, dword ptr ss : [esp+0x148]
        push eax
        push ecx
        mov ecx, esi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x134
        ret 8
        UNREACHABLE_TRAP(0x471810)
    }
}

#undef public_47182a
#undef public_471849
#undef public_4719a7
