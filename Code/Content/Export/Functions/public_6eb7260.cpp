#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7260);

PROC_DECLARE(0x6eb7260, internal_6eb7260, public_6eb7260);
extern "C" NAKED register_t __cdecl internal_6eb7260()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6eb7260)
    }
}
