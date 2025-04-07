#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff990);

#define public_62b6cb8 _public_62b6cb8

PROC_DECLARE(0x62b6ca0, internal_62b6ca0, public_62b6ca0);
extern "C" NAKED register_t __cdecl internal_62b6ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        xor esi, esi
        call public_62ff990
        test eax, eax
        je public_62b6cb8
        mov eax, dword ptr ds : [eax+4]
        pop esi
        ret 4
        public_62b6cb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b6ca0)
    }
}

#undef public_62b6cb8
