#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40f80);

PROC_DECLARE(0x6f40f80, internal_6f40f80, public_6f40f80);
extern "C" NAKED register_t __cdecl internal_6f40f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xC8], edx
        ret 4
        UNREACHABLE_TRAP(0x6f40f80)
    }
}
