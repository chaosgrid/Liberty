#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);

PROC_DECLARE(0x6fa6e30, internal_6fa6e30, public_6fa6e30);
extern "C" NAKED register_t __cdecl internal_6fa6e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        and eax, ecx
        sub eax, ecx
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6fa6e30)
    }
}
