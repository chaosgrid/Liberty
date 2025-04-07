#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);

PROC_DECLARE(0x62d20d0, internal_62d20d0, public_62d20d0);
extern "C" NAKED register_t __cdecl internal_62d20d0()
{
    __asm
    {
        mov eax, 1
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        and byte ptr ds : [ecx+0x28], 0xFE
        mov dword ptr ds : [ecx+0x1C], 0
        ret 
        UNREACHABLE_TRAP(0x62d20d0)
    }
}
