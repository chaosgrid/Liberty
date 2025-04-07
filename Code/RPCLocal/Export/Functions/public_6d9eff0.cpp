#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9eff0);

PROC_DECLARE(0x6d9eff0, internal_6d9eff0, public_6d9eff0);
extern "C" NAKED register_t __cdecl internal_6d9eff0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db534c
        mov dword ptr ds : [eax+0xC], 0x20058
        ret 
        UNREACHABLE_TRAP(0x6d9eff0)
    }
}
