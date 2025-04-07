#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);

PROC_DECLARE(0x6309ae0, internal_6309ae0, public_6309ae0);
extern "C" NAKED register_t __cdecl internal_6309ae0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov dx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [eax+2], dx
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [public_63fcf0c]
        mov dword ptr ds : [eax+8], edx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax+0x10], 0x3F800000
        mov dword ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax+0x1C], ecx
        ret 
        UNREACHABLE_TRAP(0x6309ae0)
    }
}
