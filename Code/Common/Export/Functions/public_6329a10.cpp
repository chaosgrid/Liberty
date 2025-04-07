#include "Common-PCH.h"

PROC_DECLARE(0x6329a10, internal_6329a10, public_6329a10);
extern "C" NAKED register_t __cdecl internal_6329a10()
{
    __asm
    {
        mov eax, ecx
        mov cx, word ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a442c
        mov word ptr ds : [eax+4], cx
        ret 4
        UNREACHABLE_TRAP(0x6329a10)
    }
}
