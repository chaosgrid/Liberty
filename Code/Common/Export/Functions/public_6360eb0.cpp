#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360eb0);

PROC_DECLARE(0x6360eb0, internal_6360eb0, public_6360eb0);
extern "C" NAKED register_t __cdecl internal_6360eb0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a5784
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6360eb0)
    }
}
