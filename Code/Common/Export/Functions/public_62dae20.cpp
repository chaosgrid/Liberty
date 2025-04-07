#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dae20);

PROC_DECLARE(0x62dae20, internal_62dae20, public_62dae20);
extern "C" NAKED register_t __cdecl internal_62dae20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e114
        mov dword ptr ds : [eax+0x1C], ecx
        mov edx, 3
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x54], 0xBF800000
        mov byte ptr ds : [eax+0x58], cl
        mov byte ptr ds : [eax+0x59], 1
        mov byte ptr ds : [eax+0x5A], cl
        mov byte ptr ds : [eax+0x5B], cl
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], 0x43480000
        mov dword ptr ds : [eax+0x68], ecx
        mov byte ptr ds : [eax+0x6C], cl
        mov edx, 0x43FA0000
        mov dword ptr ds : [eax+0x50], edx
        mov dword ptr ds : [eax+0x64], edx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x44], ecx
        ret 
        UNREACHABLE_TRAP(0x62dae20)
    }
}
