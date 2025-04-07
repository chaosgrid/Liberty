#include "Common-PCH.h"

PROC_DECLARE(0x62835a0, internal_62835a0, public_62835a0);
extern "C" NAKED register_t __cdecl internal_62835a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2E0], al
        ret 4
        UNREACHABLE_TRAP(0x62835a0)
    }
}
