#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60760);

PROC_DECLARE(0x6f60760, internal_6f60760, public_6f60760);
extern "C" NAKED register_t __cdecl internal_6f60760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6f60760)
    }
}
