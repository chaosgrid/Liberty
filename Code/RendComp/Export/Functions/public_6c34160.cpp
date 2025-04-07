#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34160);

PROC_DECLARE(0x6c34160, internal_6c34160, public_6c34160);
extern "C" NAKED register_t __cdecl internal_6c34160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6c34160)
    }
}
