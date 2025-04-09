#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559c10);
CLANG_FORWARD_PROC_SYMBOL(public_559c20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_4a5da3 _public_4a5da3
#define public_4a5dcd _public_4a5dcd
#define public_4a5dd4 _public_4a5dd4
#define public_4a5df7 _public_4a5df7
#define public_4a5dfe _public_4a5dfe
#define public_4a5e05 _public_4a5e05

PROC_DECLARE(0x4a5d80, internal_4a5d80, public_4a5d80);
extern "C" NAKED register_t __cdecl internal_4a5d80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x578]
        mov ebx, dword ptr ds : [esi+0x580]
        mov ebp, dword ptr ds : [esi+0x660]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        sub ebx, eax
        sub ebp, eax
        test edi, edi
        je public_4a5e05
        public_4a5da3 : nop
        mov dword ptr ds : [edi+0x70], 0x64
        mov eax, dword ptr ds : [esi+0x660]
        test eax, eax
        jl public_4a5dd4
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [esi+ebp*4+0x5D0]
        je public_4a5dcd
        cmp eax, dword ptr ds : [esi+ebp*4+0x5E4]
        jne public_4a5dd4
        public_4a5dcd : nop
        mov dword ptr ds : [edi+0x70], 0x65
        public_4a5dd4 : nop
        mov eax, dword ptr ds : [esi+0x664]
        test eax, eax
        jl public_4a5dfe
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        cmp eax, dword ptr ds : [esi+ebx*4+0x5D0]
        je public_4a5df7
        cmp eax, dword ptr ds : [esi+ebx*4+0x5E4]
        jne public_4a5dfe
        public_4a5df7 : nop
        mov dword ptr ds : [edi+0x70], 0x66
        public_4a5dfe : nop
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_4a5da3
        public_4a5e05 : nop
        lea eax, ds:[esi+0x5E4]
        push 5
        push eax
        call public_5a4b50
        mov ecx, dword ptr ds : [esi+0x670]
        mov dword ptr ds : [ecx+0x70], 0x63
        mov edx, dword ptr ds : [esi+0x650]
        add esp, 8
        mov ecx, esi
        mov dword ptr ds : [edx+0x70], 0x67
        call public_5a0760
        call public_559c20
        pop edi
        pop esi
        pop ebp
        pop ebx
        jmp public_559c10
        UNREACHABLE_TRAP(0x4a5d80)
    }
}

#undef public_4a5da3
#undef public_4a5dcd
#undef public_4a5dd4
#undef public_4a5df7
#undef public_4a5dfe
#undef public_4a5e05
