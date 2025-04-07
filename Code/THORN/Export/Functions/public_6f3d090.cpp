#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d090);

PROC_DECLARE(0x6f3d090, internal_6f3d090, public_6f3d090);
extern "C" NAKED register_t __cdecl internal_6f3d090()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6f3d090)
    }
}
