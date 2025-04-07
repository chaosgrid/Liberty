#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7090);

PROC_DECLARE(0x6ec7090, internal_6ec7090, public_6ec7090);
extern "C" NAKED register_t __cdecl internal_6ec7090()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6ec7090)
    }
}
