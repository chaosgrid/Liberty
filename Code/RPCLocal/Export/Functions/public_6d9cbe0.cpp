#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cbe0);

PROC_DECLARE(0x6d9cbe0, internal_6d9cbe0, public_6d9cbe0);
extern "C" NAKED register_t __cdecl internal_6d9cbe0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], 0x3F800000
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax], offset public_6db505c
        mov dword ptr ds : [eax+0xC], 0x20022
        ret 
        UNREACHABLE_TRAP(0x6d9cbe0)
    }
}
