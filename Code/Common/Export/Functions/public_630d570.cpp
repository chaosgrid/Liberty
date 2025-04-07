#include "Common-PCH.h"

PROC_DECLARE(0x630d570, internal_630d570, public_630d570);
extern "C" NAKED register_t __cdecl internal_630d570()
{
    __asm
    {
        mov dx, word ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], dx
        mov byte ptr ds : [eax+0xA], cl
        ret 0xC
        UNREACHABLE_TRAP(0x630d570)
    }
}
