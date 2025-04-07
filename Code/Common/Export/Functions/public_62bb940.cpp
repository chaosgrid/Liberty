#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_62bb940);

#define public_62bb955 _public_62bb955

PROC_DECLARE(0x62bb940, internal_62bb940, public_62bb940);
extern "C" NAKED register_t __cdecl internal_62bb940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x18]
        je public_62bb955
        test eax, eax
        mov dword ptr ds : [ecx+0x18], eax
        je public_62bb955
        call public_6285c90
        public_62bb955 : nop
        ret 4
        UNREACHABLE_TRAP(0x62bb940)
    }
}

#undef public_62bb955
