#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30f70, internal_6c30f70, public_6c30f70);
extern "C" NAKED register_t __cdecl internal_6c30f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        movzx edx, word ptr ds : [ecx+0xE]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c30f70)
    }
}
