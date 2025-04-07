#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f240d0);

#define public_6f240e4 _public_6f240e4
#define public_6f240f3 _public_6f240f3

PROC_DECLARE(0x6f240d0, internal_6f240d0, public_6f240d0);
extern "C" NAKED register_t __cdecl internal_6f240d0()
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
        je public_6f240f3
        push ebx
        public_6f240e4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        add edx, 4
        add esi, 4
        cmp edx, edi
        jne public_6f240e4
        pop ebx
        public_6f240f3 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f240d0)
    }
}

#undef public_6f240e4
#undef public_6f240f3
