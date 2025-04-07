#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eac0);

PROC_DECLARE(0x6d4eac0, internal_6d4eac0, public_6d4eac0);
extern "C" NAKED register_t __cdecl internal_6d4eac0()
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
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d4eac0)
    }
}
