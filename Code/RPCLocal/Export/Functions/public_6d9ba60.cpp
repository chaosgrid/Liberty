#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ba60);

PROC_DECLARE(0x6d9ba60, internal_6d9ba60, public_6d9ba60);
extern "C" NAKED register_t __cdecl internal_6d9ba60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov word ptr ds : [eax+0x28], cx
        mov word ptr ds : [eax+0x2A], cx
        mov dword ptr ds : [eax], offset public_6db4488
        mov dword ptr ds : [eax+0xC], 0x10004
        ret 
        UNREACHABLE_TRAP(0x6d9ba60)
    }
}
