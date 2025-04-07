#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43940);

PROC_DECLARE(0x6f43940, internal_6f43940, public_6f43940);
extern "C" NAKED register_t __cdecl internal_6f43940()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_6f5b1ac
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_6f61e24]
        mov dword ptr ds : [eax+0xC], edx
        inc dword ptr ds : [public_6f61e24]
        or edx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        ret 
        UNREACHABLE_TRAP(0x6f43940)
    }
}
