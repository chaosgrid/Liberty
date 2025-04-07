#include "Content-PCH.h"

PROC_DECLARE(0x6f4b030, internal_6f4b030, public_6f4b030);
extern "C" NAKED register_t __cdecl internal_6f4b030()
{
    __asm
    {
        fld dword ptr ds : [public_6fbb230]
        fsub dword ptr ds : [public_6fb5810]
        fmul dword ptr ds : [public_6fb605c]
        fadd dword ptr ds : [public_6fb5810]
        fstp dword ptr ds : [public_6fd0c34]
        ret 
        UNREACHABLE_TRAP(0x6f4b030)
    }
}
