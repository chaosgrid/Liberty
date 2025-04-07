#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a16);

PROC_DECLARE(0x65d9a16, internal_65d9a16, public_65d9a16);
extern "C" NAKED register_t __cdecl internal_65d9a16()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 4
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x65d9a16)
    }
}
