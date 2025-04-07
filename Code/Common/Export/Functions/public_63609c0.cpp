#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63609c0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);

PROC_DECLARE(0x63609c0, internal_63609c0, public_63609c0);
extern "C" NAKED register_t __cdecl internal_63609c0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        fsub dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push esi
        call public_6362f90
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x63609c0)
    }
}
