#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aa50);

PROC_DECLARE(0x635aa50, internal_635aa50, public_635aa50);
extern "C" NAKED register_t __cdecl internal_635aa50()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x635aa50)
    }
}
