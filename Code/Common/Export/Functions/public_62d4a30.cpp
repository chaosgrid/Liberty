#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e7820);

PROC_DECLARE(0x62d4a30, internal_62d4a30, public_62d4a30);
extern "C" NAKED register_t __cdecl internal_62d4a30()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        add ecx, 0x34
        jmp public_62e7820
        UNREACHABLE_TRAP(0x62d4a30)
    }
}
