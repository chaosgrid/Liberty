#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348770);

PROC_DECLARE(0x6348770, internal_6348770, public_6348770);
extern "C" NAKED register_t __cdecl internal_6348770()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_658a9e8], ax
        mov word ptr ds : [public_658a9ea], ax
        mov dword ptr ds : [public_658a9ec], eax
        ret 
        UNREACHABLE_TRAP(0x6348770)
    }
}
