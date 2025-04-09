#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_46b520);
CLANG_FORWARD_PROC_SYMBOL(public_4c2510);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

PROC_DECLARE(0x5a5fc0, internal_5a5fc0, public_5a5fc0);
extern "C" NAKED register_t __cdecl internal_5a5fc0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        call public_45a460
        push 0
        push 0
/*FIXUP push offset public_5d0228 @0x5a5fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
/*FIXUP push offset public_5d0228 @0x5a5fd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59db20
        mov ecx, dword ptr ds : [public_6724b4]
        add esp, 0x10
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0x3EB33333
        mov dword ptr ss : [esp+0xC], 0xBFB33333
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_6724b4]
        mov cl, byte ptr ds : [eax+0x6C]
        mov esi, dword ptr ss : [esp+0x18]
        or cl, 3
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [public_6724b4]
        push esi
        call public_4c2510
        push esi
        call public_46b520
        add esp, 4
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x5a5fc0)
    }
}
