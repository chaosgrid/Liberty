#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1900);

PROC_DECLARE(0x65d1900, internal_65d1900, public_65d1900);
extern "C" NAKED register_t __cdecl internal_65d1900()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_65e11f4
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x65d1900)
    }
}
