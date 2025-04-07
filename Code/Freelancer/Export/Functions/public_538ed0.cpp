#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538ed0);

PROC_DECLARE(0x538ed0, internal_538ed0, public_538ed0);
extern "C" NAKED register_t __cdecl internal_538ed0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_5de718
        mov byte ptr ds : [eax+0xC], cl
        ret 4
        UNREACHABLE_TRAP(0x538ed0)
    }
}
