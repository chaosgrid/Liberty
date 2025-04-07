#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);

PROC_DECLARE(0x623fb80, internal_623fb80, public_623fb80);
extern "C" NAKED register_t __cdecl internal_623fb80()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x6C], edx
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x4C], edx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x88], 0x42C80000
        mov dword ptr ds : [eax+0x8C], ecx
        mov dword ptr ds : [eax+0x90], edx
        mov byte ptr ds : [eax+0x94], cl
        mov byte ptr ds : [eax+0x95], cl
        mov byte ptr ds : [eax+0x96], cl
        mov dword ptr ds : [eax], offset public_624f930
        ret 
        UNREACHABLE_TRAP(0x623fb80)
    }
}
