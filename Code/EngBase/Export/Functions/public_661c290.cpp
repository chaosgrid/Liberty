#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c290);

PROC_DECLARE(0x661c290, internal_661c290, public_661c290);
extern "C" NAKED register_t __cdecl internal_661c290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x661c290)
    }
}
