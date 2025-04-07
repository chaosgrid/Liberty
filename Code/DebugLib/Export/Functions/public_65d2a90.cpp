#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2a90);

PROC_DECLARE(0x65d2a90, internal_65d2a90, public_65d2a90);
extern "C" NAKED register_t __cdecl internal_65d2a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x30]
        inc ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x65d2a90)
    }
}
