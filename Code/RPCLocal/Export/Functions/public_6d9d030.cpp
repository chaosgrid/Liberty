#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d030);

PROC_DECLARE(0x6d9d030, internal_6d9d030, public_6d9d030);
extern "C" NAKED register_t __cdecl internal_6d9d030()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x28], cl
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], 3
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x88], ecx
        mov dword ptr ds : [eax+0x8C], ecx
        mov dword ptr ds : [eax+0x90], ecx
        mov dword ptr ds : [eax+0x94], ecx
        mov dword ptr ds : [eax+0x98], ecx
        mov dword ptr ds : [eax+0x9C], ecx
        mov dword ptr ds : [eax+0xA0], ecx
        mov dword ptr ds : [eax+0xA4], ecx
        mov dword ptr ds : [eax+0xA8], ecx
        mov byte ptr ds : [eax+0xAC], cl
        mov byte ptr ds : [eax+0xAD], cl
        mov byte ptr ds : [eax+0xAE], cl
        mov byte ptr ds : [eax+0xAF], cl
        mov byte ptr ds : [eax+0xB0], cl
        mov dword ptr ds : [eax], offset public_6db509c
        mov dword ptr ds : [eax+0xC], 0x2004E
        ret 
        UNREACHABLE_TRAP(0x6d9d030)
    }
}
