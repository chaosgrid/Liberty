#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb180);

PROC_DECLARE(0x6beb180, internal_6beb180, public_6beb180);
extern "C" NAKED register_t __cdecl internal_6beb180()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x20], cl
        mov dword ptr ds : [eax], offset public_6c0da40
        mov dword ptr ds : [eax+0xC], 0x3003A
        ret 
        UNREACHABLE_TRAP(0x6beb180)
    }
}
