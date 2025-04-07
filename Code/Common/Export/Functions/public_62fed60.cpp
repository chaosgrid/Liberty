#include "Common-PCH.h"

PROC_DECLARE(0x62fed60, internal_62fed60, public_62fed60);
extern "C" NAKED register_t __cdecl internal_62fed60()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63a22fc]
        fptan 
        fstp st(0)
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [public_63a22fc]
        fptan 
        fstp st(0)
        fxch 
        fxch 
        fdivp 
        fmul dword ptr ss : [esp+4]
        ret 0xC
        UNREACHABLE_TRAP(0x62fed60)
    }
}
