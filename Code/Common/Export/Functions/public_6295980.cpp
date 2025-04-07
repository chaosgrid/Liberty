#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295980);

PROC_DECLARE(0x6295980, internal_6295980, public_6295980);
extern "C" NAKED register_t __cdecl internal_6295980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x4C], eax
        mov dword ptr ds : [eax+0x20], ecx
        ret 4
        UNREACHABLE_TRAP(0x6295980)
    }
}
