#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb000);

PROC_DECLARE(0x6beb000, internal_6beb000, public_6beb000);
extern "C" NAKED register_t __cdecl internal_6beb000()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0da00
        mov dword ptr ds : [eax+0xC], 0x30005
        ret 
        UNREACHABLE_TRAP(0x6beb000)
    }
}
