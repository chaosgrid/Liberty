#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c60);

PROC_DECLARE(0x446c60, internal_446c60, public_446c60);
extern "C" NAKED register_t __cdecl internal_446c60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0xFFFFFFFF
        mov byte ptr ds : [eax+0x3C], cl
        mov dword ptr ds : [eax+0x40], ecx
        ret 
        UNREACHABLE_TRAP(0x446c60)
    }
}
