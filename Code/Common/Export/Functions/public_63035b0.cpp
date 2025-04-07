#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63035b0);

PROC_DECLARE(0x63035b0, internal_63035b0, public_63035b0);
extern "C" NAKED register_t __cdecl internal_63035b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], edx
        add dword ptr ds : [eax], 4
        ret 
        UNREACHABLE_TRAP(0x63035b0)
    }
}
