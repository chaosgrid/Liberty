#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332290);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63322a0 _public_63322a0
#define public_63322cc _public_63322cc
#define public_63322e1 _public_63322e1

PROC_DECLARE(0x6332290, internal_6332290, public_6332290);
extern "C" NAKED register_t __cdecl internal_6332290()
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
        je public_63322e1
        push esi
        public_63322a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_63322cc
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_63322cc : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_63322a0
        pop esi
        public_63322e1 : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6332290)
    }
}

#undef public_63322a0
#undef public_63322cc
#undef public_63322e1
