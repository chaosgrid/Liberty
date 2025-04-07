#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f849f0);

PROC_DECLARE(0x6f849f0, internal_6f849f0, public_6f849f0);
extern "C" NAKED register_t __cdecl internal_6f849f0()
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
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax], offset public_6fbc660
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f849f0)
    }
}
