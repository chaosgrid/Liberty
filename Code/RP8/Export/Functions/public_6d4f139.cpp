#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f139);

PROC_DECLARE(0x6d4f139, internal_6d4f139, public_6d4f139);
extern "C" NAKED register_t __cdecl internal_6d4f139()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x2D
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d4f139)
    }
}
