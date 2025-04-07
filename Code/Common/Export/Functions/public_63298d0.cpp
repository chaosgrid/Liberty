#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63298d0);

PROC_DECLARE(0x63298d0, internal_63298d0, public_63298d0);
extern "C" NAKED register_t __cdecl internal_63298d0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a431c
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x63298d0)
    }
}
