#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c00);

PROC_DECLARE(0x6f57c00, internal_6f57c00, public_6f57c00);
extern "C" NAKED register_t __cdecl internal_6f57c00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x15C]
        mov dword ptr ds : [ecx+0x164], eax
        jmp public_6f57b00
        UNREACHABLE_TRAP(0x6f57c00)
    }
}
