#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29350);

PROC_DECLARE(0x6d29350, internal_6d29350, public_6d29350);
extern "C" NAKED register_t __cdecl internal_6d29350()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        setne dl
        mov byte ptr ds : [eax], dl
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6d29350)
    }
}
