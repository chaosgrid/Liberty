#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23fa0);

#define public_6d23fb4 _public_6d23fb4
#define public_6d23fc3 _public_6d23fc3

PROC_DECLARE(0x6d23fa0, internal_6d23fa0, public_6d23fa0);
extern "C" NAKED register_t __cdecl internal_6d23fa0()
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
        je public_6d23fc3
        push ebx
        public_6d23fb4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        add edx, 4
        add esi, 4
        cmp edx, edi
        jne public_6d23fb4
        pop ebx
        public_6d23fc3 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d23fa0)
    }
}

#undef public_6d23fb4
#undef public_6d23fc3
