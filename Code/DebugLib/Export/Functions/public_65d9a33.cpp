#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a33);

PROC_DECLARE(0x65d9a33, internal_65d9a33, public_65d9a33);
extern "C" NAKED register_t __cdecl internal_65d9a33()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 4
        mov eax, dword ptr ds : [eax]
        mov ax, word ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x65d9a33)
    }
}
