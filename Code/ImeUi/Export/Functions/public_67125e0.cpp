#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67125e0);

PROC_DECLARE(0x67125e0, internal_67125e0, public_67125e0);
extern "C" NAKED register_t __cdecl internal_67125e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 4
        UNREACHABLE_TRAP(0x67125e0)
    }
}
