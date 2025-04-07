#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f80);

PROC_DECLARE(0x6209f80, internal_6209f80, public_6209f80);
extern "C" NAKED register_t __cdecl internal_6209f80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx*8]
        ret 4
        UNREACHABLE_TRAP(0x6209f80)
    }
}
