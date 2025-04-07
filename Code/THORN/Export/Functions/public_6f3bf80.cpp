#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bf80);

PROC_DECLARE(0x6f3bf80, internal_6f3bf80, public_6f3bf80);
extern "C" NAKED register_t __cdecl internal_6f3bf80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6f3bf80)
    }
}
