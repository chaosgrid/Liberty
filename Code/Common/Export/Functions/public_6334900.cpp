#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334880);
CLANG_FORWARD_PROC_SYMBOL(public_6334900);

PROC_DECLARE(0x6334900, internal_6334900, public_6334900);
extern "C" NAKED register_t __cdecl internal_6334900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push eax
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov dword ptr ds : [eax+0x14], edi
        mov dword ptr ds : [eax+0x18], esi
        mov edx, dword ptr ds : [public_6399064]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push esi
/*FIXUP push offset _public_6334880 @0x633492c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334880
        push ecx
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6334900)
    }
}
