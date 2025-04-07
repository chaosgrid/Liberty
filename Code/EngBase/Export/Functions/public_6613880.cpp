#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613880);

#define public_6613894 _public_6613894
#define public_66138a3 _public_66138a3

PROC_DECLARE(0x6613880, internal_6613880, public_6613880);
extern "C" NAKED register_t __cdecl internal_6613880()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov esi, eax
        cmp edx, edi
        je public_66138a3
        push ebx
        public_6613894 : nop
        mov ebx, dword ptr ds : [edx]
        add edx, 4
        mov dword ptr ds : [esi], ebx
        add esi, 4
        cmp edx, edi
        jne public_6613894
        pop ebx
        public_66138a3 : nop
        mov dword ptr ds : [ecx+8], esi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6613880)
    }
}

#undef public_6613894
#undef public_66138a3
