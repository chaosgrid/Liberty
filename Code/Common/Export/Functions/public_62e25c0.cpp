#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e25c0);

PROC_DECLARE(0x62e25c0, internal_62e25c0, public_62e25c0);
extern "C" NAKED register_t __cdecl internal_62e25c0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, ecx
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62e25c0)
    }
}
