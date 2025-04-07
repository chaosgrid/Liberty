#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ac50);
CLANG_FORWARD_PROC_SYMBOL(public_635abf0);

PROC_DECLARE(0x634ac50, internal_634ac50, public_634ac50);
extern "C" NAKED register_t __cdecl internal_634ac50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        call public_635abf0
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x634ac50)
    }
}
