#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afb00);

PROC_DECLARE(0x62acd40, internal_62acd40, public_62acd40);
extern "C" NAKED register_t __cdecl internal_62acd40()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x100]
        mov dword ptr ss : [esp+4], edx
        fstp dword ptr ds : [ecx+0x100]
        jmp public_62afb00
        UNREACHABLE_TRAP(0x62acd40)
    }
}
