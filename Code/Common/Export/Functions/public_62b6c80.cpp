#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff9f0);

#define public_62b6c97 _public_62b6c97

PROC_DECLARE(0x62b6c80, internal_62b6c80, public_62b6c80);
extern "C" NAKED register_t __cdecl internal_62b6c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        xor esi, esi
        call public_62ff9f0
        test eax, eax
        je public_62b6c97
        mov eax, dword ptr ds : [eax]
        pop esi
        ret 4
        public_62b6c97 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b6c80)
    }
}

#undef public_62b6c97
