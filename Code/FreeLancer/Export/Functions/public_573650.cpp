#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

PROC_DECLARE(0x573650, internal_573650, public_573650);
extern "C" NAKED register_t __cdecl internal_573650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_591cd0
        push 1
        push 0
/*FIXUP push offset public_5d4764 @0x573663*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
/*FIXUP push offset public_5d4764 @0x573668*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
        mov dword ptr ds : [esi+0xB4], 0
        call public_59db20
        mov edx, dword ptr ds : [eax]
        add esp, 0x10
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xB8], eax
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x573650)
    }
}
