#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);

#define public_43d273 _public_43d273
#define public_43d286 _public_43d286
#define public_43d29c _public_43d29c

PROC_DECLARE(0x43d260, internal_43d260, public_43d260);
extern "C" NAKED register_t __cdecl internal_43d260()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+8]
        test edi, edi
        je public_43d29c
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_43d286
        push esi
        public_43d273 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_43d273
        pop esi
        public_43d286 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+8], 0
        public_43d29c : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43d260)
    }
}

#undef public_43d273
#undef public_43d286
#undef public_43d29c
