#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db7a0);

PROC_DECLARE(0x62db7a0, internal_62db7a0, public_62db7a0);
extern "C" NAKED register_t __cdecl internal_62db7a0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], 3
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+8], eax
        mov byte ptr ds : [ecx+0x14], al
        mov byte ptr ds : [ecx+0x15], al
        ret 
        UNREACHABLE_TRAP(0x62db7a0)
    }
}
