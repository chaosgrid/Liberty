#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4488d0);

PROC_DECLARE(0x4488d0, internal_4488d0, public_4488d0);
extern "C" NAKED register_t __cdecl internal_4488d0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4488d0)
    }
}
