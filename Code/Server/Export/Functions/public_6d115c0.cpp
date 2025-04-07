#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115c0);

PROC_DECLARE(0x6d115c0, internal_6d115c0, public_6d115c0);
extern "C" NAKED register_t __cdecl internal_6d115c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_6d68324
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        ret 
        UNREACHABLE_TRAP(0x6d115c0)
    }
}
