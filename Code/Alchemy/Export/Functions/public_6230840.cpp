#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230840);

PROC_DECLARE(0x6230840, internal_6230840, public_6230840);
extern "C" NAKED register_t __cdecl internal_6230840()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_624bd80
        ret 
        UNREACHABLE_TRAP(0x6230840)
    }
}
