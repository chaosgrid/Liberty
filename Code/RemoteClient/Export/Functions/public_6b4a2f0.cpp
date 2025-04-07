#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a2f0);

PROC_DECLARE(0x6b4a2f0, internal_6b4a2f0, public_6b4a2f0);
extern "C" NAKED register_t __cdecl internal_6b4a2f0()
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
        mov dword ptr ds : [eax], offset public_6b6d964
        mov dword ptr ds : [eax+0xC], 0x20002
        ret 
        UNREACHABLE_TRAP(0x6b4a2f0)
    }
}
