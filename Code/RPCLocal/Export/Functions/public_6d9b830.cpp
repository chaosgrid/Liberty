#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b830);

PROC_DECLARE(0x6d9b830, internal_6d9b830, public_6d9b830);
extern "C" NAKED register_t __cdecl internal_6d9b830()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov word ptr ds : [eax+0x26], cx
        mov dword ptr ds : [eax], offset public_6db4438
        mov dword ptr ds : [eax+0xC], 0x10008
        ret 
        UNREACHABLE_TRAP(0x6d9b830)
    }
}
