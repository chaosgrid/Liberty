#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9cac0);

PROC_DECLARE(0x6f9cac0, internal_6f9cac0, public_6f9cac0);
extern "C" NAKED register_t __cdecl internal_6f9cac0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ds : [public_6fbcbc0]
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x6f9cac0)
    }
}
