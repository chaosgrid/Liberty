#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711a90, internal_6711a90, public_6711a90);
extern "C" NAKED register_t __cdecl internal_6711a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x3F
        add ecx, 0x34
        push eax
        push ecx
        call dword ptr ds : [public_6719378]
        ret 4
        UNREACHABLE_TRAP(0x6711a90)
    }
}
