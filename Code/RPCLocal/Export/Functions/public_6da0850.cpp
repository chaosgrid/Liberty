#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0850);

PROC_DECLARE(0x6da0850, internal_6da0850, public_6da0850);
extern "C" NAKED register_t __cdecl internal_6da0850()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_6db5b84
        mov dword ptr ds : [eax+0xC], 0x30020
        ret 
        UNREACHABLE_TRAP(0x6da0850)
    }
}
