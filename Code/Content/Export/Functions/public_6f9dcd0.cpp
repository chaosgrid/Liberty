#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9dce6 _public_6f9dce6
#define public_6f9dd17 _public_6f9dd17

PROC_DECLARE(0x6f9dcd0, internal_6f9dcd0, public_6f9dcd0);
extern "C" NAKED register_t __cdecl internal_6f9dcd0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        mov dword ptr ds : [ebx], offset public_6fbd50c
        mov ebp, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f9dd17
        push esi
        public_6f9dce6 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6f9dce6
        pop esi
        public_6f9dd17 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f9dcd0)
    }
}

#undef public_6f9dce6
#undef public_6f9dd17
