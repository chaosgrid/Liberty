#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21ff0);

PROC_DECLARE(0x6f21ff0, internal_6f21ff0, public_6f21ff0);
extern "C" NAKED register_t __cdecl internal_6f21ff0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6f21ff0)
    }
}
