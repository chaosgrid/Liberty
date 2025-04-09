#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54c580);

PROC_DECLARE(0x54c580, internal_54c580, public_54c580);
extern "C" NAKED register_t __cdecl internal_54c580()
{
    __asm
    {
        mov eax, ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x2C], edx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], 0x447A0000
        mov dword ptr ds : [eax+0x64], 0x44BB8000
        mov dword ptr ds : [eax+0x68], 0x451C4000
        mov dword ptr ds : [eax+0x6C], 0x47C35000
        mov dword ptr ds : [eax+0x70], 0x47FDE800
        mov dword ptr ds : [eax+0x78], ecx
        mov byte ptr ds : [eax+0x74], cl
        mov dword ptr ds : [eax+0x40], edx
        mov dword ptr ds : [eax+0x4C], 1
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x54], edx
        ret 
        UNREACHABLE_TRAP(0x54c580)
    }
}
