#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cda0);

PROC_DECLARE(0x6d9cda0, internal_6d9cda0, public_6d9cda0);
extern "C" NAKED register_t __cdecl internal_6d9cda0()
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
        UNREACHABLE_TRAP(0x6d9cda0)
    }
}
