#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd020);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x62bd280, internal_62bd280, public_62bd280);
extern "C" NAKED register_t __cdecl internal_62bd280()
{
    __asm
    {
        push ecx
        push esi
/*FIXUP push offset public_63997b0 @0x62bd282*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        mov esi, ecx
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        push 0xBF800000
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_62bd020
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bd280)
    }
}
