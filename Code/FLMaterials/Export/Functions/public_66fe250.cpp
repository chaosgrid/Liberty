#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fe250, internal_66fe250, public_66fe250);
extern "C" NAKED register_t __cdecl internal_66fe250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax*4+public_6704608]
        mov ecx, dword ptr ss : [esp+0xC]
        xor edx, edx
        test eax, eax
        setne dl
        mov dword ptr ds : [ecx], eax
        dec edx
        mov eax, edx
        ret 0xC
        UNREACHABLE_TRAP(0x66fe250)
    }
}
