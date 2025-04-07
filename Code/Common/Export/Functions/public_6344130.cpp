#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344130);

PROC_DECLARE(0x6344130, internal_6344130, public_6344130);
extern "C" NAKED register_t __cdecl internal_6344130()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [ecx+0x10], 3
        mov word ptr ds : [ecx+0x12], ax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x6344130)
    }
}
