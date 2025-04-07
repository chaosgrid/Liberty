#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f6e0);

PROC_DECLARE(0x661f6e0, internal_661f6e0, public_661f6e0);
extern "C" NAKED register_t __cdecl internal_661f6e0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_662b158], 0xEC
        mov dword ptr ds : [public_662b15c], eax
        mov dword ptr ds : [public_662b160], 0x40
        mov dword ptr ds : [public_662b164], eax
        ret 
        UNREACHABLE_TRAP(0x661f6e0)
    }
}
