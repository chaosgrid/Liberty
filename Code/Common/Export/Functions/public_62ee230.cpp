#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee230);

PROC_DECLARE(0x62ee230, internal_62ee230, public_62ee230);
extern "C" NAKED register_t __cdecl internal_62ee230()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x62ee230)
    }
}
