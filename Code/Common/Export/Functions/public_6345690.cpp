#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345690);

PROC_DECLARE(0x6345690, internal_6345690, public_6345690);
extern "C" NAKED register_t __cdecl internal_6345690()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6345690)
    }
}
