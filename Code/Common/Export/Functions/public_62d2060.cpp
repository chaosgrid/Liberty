#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62d2079 _public_62d2079

PROC_DECLARE(0x62d2060, internal_62d2060, public_62d2060);
extern "C" NAKED register_t __cdecl internal_62d2060()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a02c4
        je public_62d2079
        push esi
        call public_6391d5a
        add esp, 4
        public_62d2079 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d2060)
    }
}

#undef public_62d2079
