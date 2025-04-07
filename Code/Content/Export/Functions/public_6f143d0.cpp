#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f143d0);

PROC_DECLARE(0x6f143d0, internal_6f143d0, public_6f143d0);
extern "C" NAKED register_t __cdecl internal_6f143d0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        ret 
        UNREACHABLE_TRAP(0x6f143d0)
    }
}
