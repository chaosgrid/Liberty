#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202260);

PROC_DECLARE(0x6202260, internal_6202260, public_6202260);
extern "C" NAKED register_t __cdecl internal_6202260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6255064], eax
        mov dword ptr ds : [public_6257bd8], eax
        ret 
        UNREACHABLE_TRAP(0x6202260)
    }
}
