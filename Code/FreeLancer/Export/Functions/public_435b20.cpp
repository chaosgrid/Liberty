#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435b20);

PROC_DECLARE(0x435b20, internal_435b20, public_435b20);
extern "C" NAKED register_t __cdecl internal_435b20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+ecx*8+4], 0
        ret 4
        UNREACHABLE_TRAP(0x435b20)
    }
}
