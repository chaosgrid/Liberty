#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5fe0);

PROC_DECLARE(0x62b5fe0, internal_62b5fe0, public_62b5fe0);
extern "C" NAKED register_t __cdecl internal_62b5fe0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xB8]
        mov eax, dword ptr ds : [ecx+0x88]
        fdiv dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x62b5fe0)
    }
}
