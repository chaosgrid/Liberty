#include "Common-PCH.h"

PROC_DECLARE(0x63111c0, internal_63111c0, public_63111c0);
extern "C" NAKED register_t __cdecl internal_63111c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a36f4]
        mov dword ptr ds : [public_63fd29c], eax
        ret 
        UNREACHABLE_TRAP(0x63111c0)
    }
}
