#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b990);

PROC_DECLARE(0x629b990, internal_629b990, public_629b990);
extern "C" NAKED register_t __cdecl internal_629b990()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x629b990)
    }
}
