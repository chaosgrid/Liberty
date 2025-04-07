#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c10);

PROC_DECLARE(0x6206c10, internal_6206c10, public_6206c10);
extern "C" NAKED register_t __cdecl internal_6206c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6206c10)
    }
}
