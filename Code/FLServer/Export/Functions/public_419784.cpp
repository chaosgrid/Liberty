#include "FLServer-PCH.h"

PROC_DECLARE(0x419784, internal_419784, public_419784);
extern "C" NAKED register_t __cdecl internal_419784()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc18]
        UNREACHABLE_TRAP(0x419784)
    }
}
