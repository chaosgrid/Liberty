#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ec60);

PROC_DECLARE(0x6d9ec60, internal_6d9ec60, public_6d9ec60);
extern "C" NAKED register_t __cdecl internal_6d9ec60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6db4038
        mov dword ptr ds : [eax+0xC], 0x20052
        mov dword ptr ds : [eax+0x20], 3
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x2C], cl
        ret 
        UNREACHABLE_TRAP(0x6d9ec60)
    }
}
