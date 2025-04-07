#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d573e0);

#define public_6d573f4 _public_6d573f4
#define public_6d57409 _public_6d57409

PROC_DECLARE(0x6d573e0, internal_6d573e0, public_6d573e0);
extern "C" NAKED register_t __cdecl internal_6d573e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_6d57409
        push ebx
        public_6d573f4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        add edx, 8
        add esi, 8
        cmp edx, edi
        jne public_6d573f4
        pop ebx
        public_6d57409 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d573e0)
    }
}

#undef public_6d573f4
#undef public_6d57409
