#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32000);

PROC_DECLARE(0x6c32000, internal_6c32000, public_6c32000);
extern "C" NAKED register_t __cdecl internal_6c32000()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+edx*8+4], ecx
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6c32000)
    }
}
