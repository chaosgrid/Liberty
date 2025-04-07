#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0b20);

PROC_DECLARE(0x6da0b20, internal_6da0b20, public_6da0b20);
extern "C" NAKED register_t __cdecl internal_6da0b20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db5c54
        mov dword ptr ds : [eax+0xC], 0x30042
        ret 
        UNREACHABLE_TRAP(0x6da0b20)
    }
}
