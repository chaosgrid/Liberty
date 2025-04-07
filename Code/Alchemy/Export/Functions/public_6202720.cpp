#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202720, internal_6202720, public_6202720);
extern "C" NAKED register_t __cdecl internal_6202720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x6202720)
    }
}
