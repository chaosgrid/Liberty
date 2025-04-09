#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dec0);

PROC_DECLARE(0x55dec0, internal_55dec0, public_55dec0);
extern "C" NAKED register_t __cdecl internal_55dec0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_5e18f8
        mov byte ptr ds : [eax+0x18], cl
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x55dec0)
    }
}
