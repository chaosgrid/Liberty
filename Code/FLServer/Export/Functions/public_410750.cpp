#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410750);

PROC_DECLARE(0x410750, internal_410750, public_410750);
extern "C" NAKED register_t __cdecl internal_410750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x410750)
    }
}
