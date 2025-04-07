#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeb900);

PROC_DECLARE(0x6eeb900, internal_6eeb900, public_6eeb900);
extern "C" NAKED register_t __cdecl internal_6eeb900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        xor edx, edx
        mov ecx, 5
        div ecx
        neg edx
        sbb edx, edx
        inc edx
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x6eeb900)
    }
}
