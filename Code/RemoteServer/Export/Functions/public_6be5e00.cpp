#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5e00);

PROC_DECLARE(0x6be5e00, internal_6be5e00, public_6be5e00);
extern "C" NAKED register_t __cdecl internal_6be5e00()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], 0x3F800000
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax], offset public_6c0c9f8
        mov dword ptr ds : [eax+0xC], 0x20007
        ret 
        UNREACHABLE_TRAP(0x6be5e00)
    }
}
