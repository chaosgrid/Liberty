#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);

PROC_DECLARE(0x40fb60, internal_40fb60, public_40fb60);
extern "C" NAKED register_t __cdecl internal_40fb60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0xA4], eax
        mov dword ptr ds : [ecx+0xA8], edx
        ret 8
        UNREACHABLE_TRAP(0x40fb60)
    }
}
