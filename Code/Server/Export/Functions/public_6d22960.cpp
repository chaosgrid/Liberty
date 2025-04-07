#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22960);

PROC_DECLARE(0x6d22960, internal_6d22960, public_6d22960);
extern "C" NAKED register_t __cdecl internal_6d22960()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68cd8
        ret 4
        UNREACHABLE_TRAP(0x6d22960)
    }
}
