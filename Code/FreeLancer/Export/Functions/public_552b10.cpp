#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552b10);

PROC_DECLARE(0x552b10, internal_552b10, public_552b10);
extern "C" NAKED register_t __cdecl internal_552b10()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        add edx, ecx
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x552b10)
    }
}
