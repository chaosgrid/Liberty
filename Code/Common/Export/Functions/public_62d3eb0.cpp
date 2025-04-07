#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3eb0);

#define public_62d3ec0 _public_62d3ec0
#define public_62d3ed8 _public_62d3ed8

PROC_DECLARE(0x62d3eb0, internal_62d3eb0, public_62d3eb0);
extern "C" NAKED register_t __cdecl internal_62d3eb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor eax, eax
        lea esi, ds:[ecx+0xFC]
        mov edi, edi
        public_62d3ec0 : nop
        mov edx, dword ptr ds : [esi]
        test edx, edx
        je public_62d3ed8
        cmp edx, edi
        je public_62d3ed8
        inc eax
        add esi, 4
        cmp eax, 5
        jb public_62d3ec0
        pop edi
        pop esi
        ret 4
        public_62d3ed8 : nop
        mov dword ptr ds : [ecx+eax*4+0xFC], edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d3eb0)
    }
}

#undef public_62d3ec0
#undef public_62d3ed8
