#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca760);

PROC_DECLARE(0x6eca760, internal_6eca760, public_6eca760);
extern "C" NAKED register_t __cdecl internal_6eca760()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6eca760)
    }
}
