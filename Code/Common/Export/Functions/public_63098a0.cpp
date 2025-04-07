#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63098a0);

PROC_DECLARE(0x63098a0, internal_63098a0, public_63098a0);
extern "C" NAKED register_t __cdecl internal_63098a0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_639b5bc
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x63098a0)
    }
}
