#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ecc37d _public_6ecc37d
#define public_6ecc380 _public_6ecc380
#define public_6ecc393 _public_6ecc393
#define public_6ecc449 _public_6ecc449
#define public_6ecc44f _public_6ecc44f
#define public_6ecc461 _public_6ecc461
#define public_6ecc47e _public_6ecc47e
#define public_6ecc4c5 _public_6ecc4c5

PROC_DECLARE(0x6ecc2d0, internal_6ecc2d0, public_6ecc2d0);
extern "C" NAKED register_t __cdecl internal_6ecc2d0()
{
    __asm
    {
        mov eax, 0x21B8
        call public_6ed0c70
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x21C4]
        push esi
        xor ebx, ebx
        push edi
        push ebp
        mov edi, ecx
        xor esi, esi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x24], 0x14
        call dword ptr ds : [public_6ed1000]
        push 0x40
        mov dword ptr ss : [esp+0x20], eax
        push ebp
        mov ebp, dword ptr ds : [public_6ed1028]
        lea eax, ss:[esp+0x50]
        push eax
        call ebp
        lea ecx, ss:[esp+0x54]
        push ecx
        mov byte ptr ss : [esp+0x97], bl
        call dword ptr ds : [public_6ed1084]
        mov edx, dword ptr ss : [esp+0x21E4]
        push 0x40
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
        call ebp
        mov al, byte ptr ss : [esp+0x21F4]
        add esp, 0x20
        cmp al, bl
        mov byte ptr ss : [esp+0xC3], bl
        je public_6ecc37d
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0xC4]
        push edx
        push 0x104
        lea eax, ss:[esp+0x8C]
        push eax
        lea edx, ss:[esp+0x50]
        push edx
        push edi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jge public_6ecc393
        public_6ecc37d : nop
        xor eax, eax
        nop 
        public_6ecc380 : nop
        mov cl, byte ptr ss : [esp+eax+0x84]
        mov byte ptr ss : [esp+eax+0xC4], cl
        inc eax
        cmp cl, bl
        jne public_6ecc380
        public_6ecc393 : nop
        mov ecx, dword ptr ss : [esp+0x21D8]
        lea eax, ss:[esp+0xC4]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ecc47e
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6ed4268 @0x6ecc3da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4268
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ecc461
        mov edx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ecc44f
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x3C], edx
        call public_6ecaaf0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        lea esi, ds:[edx+0x10]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6ecc449
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ecc449 : nop
        mov dword ptr ds : [esi], 1
        public_6ecc44f : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6ecc461
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_6ecc461 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6ecc4c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x21B8
        ret 0x10
        public_6ecc47e : nop
        lea edx, ss:[esp+0xC4]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x1D4]
/*FIXUP push offset public_6ed50f4 @0x6ecc49a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed50f4
        push edx
        call public_6eb22b0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        push 0x14F
/*FIXUP push offset public_6ed50a0 @0x6ecc4b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed50a0
        mov ecx, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ecc4ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        public_6ecc4c5 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x21B8
        ret 0x10
        UNREACHABLE_TRAP(0x6ecc2d0)
    }
}

#undef public_6ecc37d
#undef public_6ecc380
#undef public_6ecc393
#undef public_6ecc449
#undef public_6ecc44f
#undef public_6ecc461
#undef public_6ecc47e
#undef public_6ecc4c5
