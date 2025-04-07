#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed730);

PROC_DECLARE(0x6293250, internal_6293250, public_6293250);
extern "C" NAKED register_t __cdecl internal_6293250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, eax
        mov dword ptr ds : [ecx+0x30], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_62ed730
        UNREACHABLE_TRAP(0x6293250)
    }
}
