#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee780);

#define public_6eee796 _public_6eee796

PROC_DECLARE(0x6eee780, internal_6eee780, public_6eee780);
extern "C" NAKED register_t __cdecl internal_6eee780()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6eee796
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x11
        rep movsd
        pop esi
        public_6eee796 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eee780)
    }
}

#undef public_6eee796
