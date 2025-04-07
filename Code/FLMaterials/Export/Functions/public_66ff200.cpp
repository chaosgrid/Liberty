#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff200);

PROC_DECLARE(0x66ff200, internal_66ff200, public_66ff200);
extern "C" NAKED register_t __cdecl internal_66ff200()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x66ff200)
    }
}
