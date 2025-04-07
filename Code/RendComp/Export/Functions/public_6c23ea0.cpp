#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c23f90);
CLANG_FORWARD_PROC_SYMBOL(public_6c27720);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c23f00 _public_6c23f00
#define public_6c23f16 _public_6c23f16
#define public_6c23f1f _public_6c23f1f
#define public_6c23f30 _public_6c23f30
#define public_6c23f3e _public_6c23f3e

PROC_DECLARE(0x6c23ea0, internal_6c23ea0, public_6c23ea0);
extern "C" NAKED register_t __cdecl internal_6c23ea0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6c2e3e0
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x28]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov dword ptr ds : [esi+0x1B4], ebx
        mov dword ptr ds : [esi+0x1B0], ebx
        xor eax, eax
        mov ecx, 6
        lea edi, ds:[esi+0x1BC]
        rep stosd
        mov dword ptr ds : [esi+0x1DC], ebx
        mov dword ptr ds : [esi+0x1D8], ebx
        mov dword ptr ds : [esi+0x1D4], ebx
        mov ebp, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebp
        mov dword ptr ds : [esi+0x1E0], 0xBF800000
        je public_6c23f1f
        lea ebx, ds:[ebx]
        public_6c23f00 : nop
        mov ebx, dword ptr ds : [edi]
        test ebx, ebx
        je public_6c23f16
        mov ecx, ebx
        call public_6c27720
        push ebx
        call public_6c34ea0
        add esp, 4
        public_6c23f16 : nop
        add edi, 4
        cmp edi, ebp
        jne public_6c23f00
        xor ebx, ebx
        public_6c23f1f : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, edx
        cmp eax, edx
        je public_6c23f3e
        nop 
        lea esp, ss:[esp]
        public_6c23f30 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6c23f30
        public_6c23f3e : nop
        mov dword ptr ds : [esi+0x14], ecx
        lea ecx, ds:[esi+0x1C]
        push ecx
        call public_6c23f90
        mov edx, dword ptr ds : [esi+0x90]
        lea edi, ds:[esi+0x8C]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6c34ea0
        add esp, 0xC
        mov ecx, 7
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0x218], ebx
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c23ea0)
    }
}

#undef public_6c23f00
#undef public_6c23f16
#undef public_6c23f1f
#undef public_6c23f30
#undef public_6c23f3e
