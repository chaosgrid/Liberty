#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48980);

PROC_DECLARE(0x6b48980, internal_6b48980, public_6b48980);
extern "C" NAKED register_t __cdecl internal_6b48980()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6cc40
        mov dword ptr ds : [eax+0xC], 0x30042
        ret 
        UNREACHABLE_TRAP(0x6b48980)
    }
}
