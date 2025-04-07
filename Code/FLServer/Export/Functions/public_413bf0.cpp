#include "FLServer-PCH.h"

PROC_DECLARE(0x413bf0, internal_413bf0, public_413bf0);
extern "C" NAKED register_t __cdecl internal_413bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e284]
        mov dword ptr ds : [public_428cd0], eax
        ret 
        UNREACHABLE_TRAP(0x413bf0)
    }
}
