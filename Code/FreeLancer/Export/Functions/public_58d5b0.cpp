#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d5b0);

PROC_DECLARE(0x58d5b0, internal_58d5b0, public_58d5b0);
extern "C" NAKED register_t __cdecl internal_58d5b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x570], eax
        mov dword ptr ds : [ecx+0x574], edx
        ret 8
        UNREACHABLE_TRAP(0x58d5b0)
    }
}
