#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9c440);

PROC_DECLARE(0x6d9c440, internal_6d9c440, public_6d9c440);
extern "C" NAKED register_t __cdecl internal_6d9c440()
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
        mov byte ptr ds : [eax+0x39], cl
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], offset public_6db3ee4
        mov dword ptr ds : [eax+0xC], 0x2002E
        ret 
        UNREACHABLE_TRAP(0x6d9c440)
    }
}
