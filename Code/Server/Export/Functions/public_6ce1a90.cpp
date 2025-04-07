#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a90);

PROC_DECLARE(0x6ce1a90, internal_6ce1a90, public_6ce1a90);
extern "C" NAKED register_t __cdecl internal_6ce1a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        imul edx, 0x418
        lea eax, ds:[edx+eax-0x418]
        ret 4
        UNREACHABLE_TRAP(0x6ce1a90)
    }
}
