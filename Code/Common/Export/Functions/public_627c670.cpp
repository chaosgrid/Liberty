#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c670);

PROC_DECLARE(0x627c670, internal_627c670, public_627c670);
extern "C" NAKED register_t __cdecl internal_627c670()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639b59c
        mov byte ptr ds : [eax+0xC], cl
        ret 4
        UNREACHABLE_TRAP(0x627c670)
    }
}
