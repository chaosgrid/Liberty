#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f660);

PROC_DECLARE(0x6d0f660, internal_6d0f660, public_6d0f660);
extern "C" NAKED register_t __cdecl internal_6d0f660()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6d67d00
        mov byte ptr ds : [eax+0xC], cl
        ret 4
        UNREACHABLE_TRAP(0x6d0f660)
    }
}
