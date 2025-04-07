#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f18c10);

PROC_DECLARE(0x6f18c10, internal_6f18c10, public_6f18c10);
extern "C" NAKED register_t __cdecl internal_6f18c10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov byte ptr ds : [eax+0x60], 1
        mov byte ptr ds : [eax+0x61], cl
        mov dword ptr ds : [eax+0x64], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x48], edx
        mov dword ptr ds : [eax+0x38], edx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        ret 
        UNREACHABLE_TRAP(0x6f18c10)
    }
}
