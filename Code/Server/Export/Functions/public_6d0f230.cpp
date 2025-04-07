#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f240 _public_6d0f240
#define public_6d0f271 _public_6d0f271

PROC_DECLARE(0x6d0f230, internal_6d0f230, public_6d0f230);
extern "C" NAKED register_t __cdecl internal_6d0f230()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6d0f271
        push esi
        public_6d0f240 : nop
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
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6d0f240
        pop esi
        public_6d0f271 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d0f230)
    }
}

#undef public_6d0f240
#undef public_6d0f271
