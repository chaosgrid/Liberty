#include "FLServer-PCH.h"

PROC_DECLARE(0x413c00, internal_413c00, public_413c00);
extern "C" NAKED register_t __cdecl internal_413c00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e284]
        mov dword ptr ds : [public_428cdc], eax
        ret 
        UNREACHABLE_TRAP(0x413c00)
    }
}
