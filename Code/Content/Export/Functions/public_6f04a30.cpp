#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04a30);

PROC_DECLARE(0x6f04a30, internal_6f04a30, public_6f04a30);
extern "C" NAKED register_t __cdecl internal_6f04a30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        ret 
        UNREACHABLE_TRAP(0x6f04a30)
    }
}
