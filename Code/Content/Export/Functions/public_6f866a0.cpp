#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f866a0);

PROC_DECLARE(0x6f866a0, internal_6f866a0, public_6f866a0);
extern "C" NAKED register_t __cdecl internal_6f866a0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax+0x3C], 2
        mov dword ptr ds : [eax+0x40], ecx
        mov edx, dword ptr ds : [public_6fbc2e8]
        mov dword ptr ds : [eax+0x44], edx
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov byte ptr ds : [eax+0x50], dl
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax], offset public_6fbc7c8
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f866a0)
    }
}
