#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404490);

PROC_DECLARE(0x404490, internal_404490, public_404490);
extern "C" NAKED register_t __cdecl internal_404490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        mov word ptr ds : [ecx+eax*2], 0
        ret 4
        UNREACHABLE_TRAP(0x404490)
    }
}
