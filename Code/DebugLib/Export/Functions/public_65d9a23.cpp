#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a23);

PROC_DECLARE(0x65d9a23, internal_65d9a23, public_65d9a23);
extern "C" NAKED register_t __cdecl internal_65d9a23()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 8
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx-8]
        mov edx, dword ptr ds : [ecx-4]
        ret 
        UNREACHABLE_TRAP(0x65d9a23)
    }
}
