#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334810);
CLANG_FORWARD_PROC_SYMBOL(public_6334820);

PROC_DECLARE(0x6334820, internal_6334820, public_6334820);
extern "C" NAKED register_t __cdecl internal_6334820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
/*FIXUP push offset _public_6334810 @0x6334844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334810
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6334820)
    }
}
