#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502de0);

PROC_DECLARE(0x502de0, internal_502de0, public_502de0);
extern "C" NAKED register_t __cdecl internal_502de0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x502de0)
    }
}
