#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f720);

PROC_DECLARE(0x661f720, internal_661f720, public_661f720);
extern "C" NAKED register_t __cdecl internal_661f720()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_662b114], 0x48
        mov dword ptr ds : [public_662b118], eax
        mov dword ptr ds : [public_662b11c], 0x40
        mov dword ptr ds : [public_662b120], eax
        ret 
        UNREACHABLE_TRAP(0x661f720)
    }
}
