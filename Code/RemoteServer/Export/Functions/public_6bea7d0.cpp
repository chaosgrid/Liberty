#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea7d0);

PROC_DECLARE(0x6bea7d0, internal_6bea7d0, public_6bea7d0);
extern "C" NAKED register_t __cdecl internal_6bea7d0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov byte ptr ds : [eax+0x30], cl
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax], offset public_6c0bd50
        mov dword ptr ds : [eax+0xC], 0x30018
        ret 
        UNREACHABLE_TRAP(0x6bea7d0)
    }
}
