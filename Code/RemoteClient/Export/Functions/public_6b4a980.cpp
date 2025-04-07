#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a980);

PROC_DECLARE(0x6b4a980, internal_6b4a980, public_6b4a980);
extern "C" NAKED register_t __cdecl internal_6b4a980()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6b4a980)
    }
}
