#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48c20);

PROC_DECLARE(0x6f48c20, internal_6f48c20, public_6f48c20);
extern "C" NAKED register_t __cdecl internal_6f48c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xE4], eax
        ret 4
        UNREACHABLE_TRAP(0x6f48c20)
    }
}
