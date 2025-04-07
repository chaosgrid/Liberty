#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347dd0);

PROC_DECLARE(0x6347dd0, internal_6347dd0, public_6347dd0);
extern "C" NAKED register_t __cdecl internal_6347dd0()
{
    __asm
    {
        mov dx, word ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        mov word ptr ds : [eax], dx
        mov word ptr ds : [eax+2], 0
        ret 8
        UNREACHABLE_TRAP(0x6347dd0)
    }
}
