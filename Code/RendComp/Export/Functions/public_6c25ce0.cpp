#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25ce0);

PROC_DECLARE(0x6c25ce0, internal_6c25ce0, public_6c25ce0);
extern "C" NAKED register_t __cdecl internal_6c25ce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6c25ce0)
    }
}
