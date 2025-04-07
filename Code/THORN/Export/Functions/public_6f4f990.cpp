#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f990);

PROC_DECLARE(0x6f4f990, internal_6f4f990, public_6f4f990);
extern "C" NAKED register_t __cdecl internal_6f4f990()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x6f4f990)
    }
}
