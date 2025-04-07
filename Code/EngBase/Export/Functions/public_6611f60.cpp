#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611f60);

PROC_DECLARE(0x6611f60, internal_6611f60, public_6611f60);
extern "C" NAKED register_t __cdecl internal_6611f60()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+8], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6611f60)
    }
}
