#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44ba0);

PROC_DECLARE(0x6b44ba0, internal_6b44ba0, public_6b44ba0);
extern "C" NAKED register_t __cdecl internal_6b44ba0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6b44ba0)
    }
}
