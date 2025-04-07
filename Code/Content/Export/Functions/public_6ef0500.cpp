#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0500);

PROC_DECLARE(0x6ef0500, internal_6ef0500, public_6ef0500);
extern "C" NAKED register_t __cdecl internal_6ef0500()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov dword ptr ds : [public_6fcf258], eax
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef0500)
    }
}
