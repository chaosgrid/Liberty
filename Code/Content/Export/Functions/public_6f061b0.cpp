#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f061b0);

PROC_DECLARE(0x6f061b0, internal_6f061b0, public_6f061b0);
extern "C" NAKED register_t __cdecl internal_6f061b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x44], ecx
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x40], edx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax], offset public_6fb8224
        ret 
        UNREACHABLE_TRAP(0x6f061b0)
    }
}
