#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_4293e0);
CLANG_FORWARD_PROC_SYMBOL(public_527b20);
CLANG_FORWARD_JUMP_SYMBOL(public_5c01f8);

PROC_DECLARE(0x527b20, internal_527b20, public_527b20);
extern "C" NAKED register_t __cdecl internal_527b20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c01f8 @0x527b22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c01f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5dd084
        mov dword ptr ss : [esp+0x10], 0
        call public_4293e0
        mov ecx, dword ptr ds : [esi+0x64]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c9efc
        call public_429140
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x527b20)
    }
}
