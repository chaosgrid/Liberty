#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9070);

PROC_DECLARE(0x6be9070, internal_6be9070, public_6be9070);
extern "C" NAKED register_t __cdecl internal_6be9070()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d108
        mov dword ptr ds : [eax+0xC], 0x10012
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x34], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov byte ptr ds : [eax+0x30], cl
        ret 
        UNREACHABLE_TRAP(0x6be9070)
    }
}
