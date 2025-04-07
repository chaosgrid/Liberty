#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3080);

PROC_DECLARE(0x66f3080, internal_66f3080, public_66f3080);
extern "C" NAKED register_t __cdecl internal_66f3080()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f3080)
    }
}
