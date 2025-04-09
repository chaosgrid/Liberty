#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44eab0);
CLANG_FORWARD_PROC_SYMBOL(public_44ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9dbe);

PROC_DECLARE(0x44eab0, internal_44eab0, public_44eab0);
extern "C" NAKED register_t __cdecl internal_44eab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9dbe @0x44eab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9dbe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x28
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+0xA8], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xAC], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xB0], eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_44ebf0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x44eab0)
    }
}
