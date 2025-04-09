#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6790);

PROC_DECLARE(0x4b6790, internal_4b6790, public_4b6790);
extern "C" NAKED register_t __cdecl internal_4b6790()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x4C], edx
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xF8
        or cl, 8
        mov byte ptr ds : [eax+0x6C], cl
        mov dword ptr ds : [eax], offset public_5d5544
        inc dword ptr ds : [public_67dcd4]
        ret 
        UNREACHABLE_TRAP(0x4b6790)
    }
}
