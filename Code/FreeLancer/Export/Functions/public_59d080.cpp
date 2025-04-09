#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d080);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4e18);

#define public_59d110 _public_59d110

PROC_DECLARE(0x59d080, internal_59d080, public_59d080);
extern "C" NAKED register_t __cdecl internal_59d080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4e18 @0x59d082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4e18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        xor esi, esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ds : [edi], offset public_5e5dcc
        mov dword ptr ss : [esp+0xC], 5
        mov dword ptr ss : [esp+0x10], 4
        mov dword ptr ss : [esp+0x14], 6
        mov dword ptr ss : [esp+0x18], 7
        mov dword ptr ss : [esp+0x1C], 8
        mov dword ptr ss : [esp+0x20], 9
        mov dword ptr ss : [esp+0x24], 0xA
        mov dword ptr ss : [esp+0x28], 0xB
        mov dword ptr ss : [esp+0x2C], 0xC
        mov dword ptr ss : [esp+0x30], 0xD
        mov dword ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x38], 2
        lea esp, ss:[esp]
        public_59d110 : nop
        mov eax, dword ptr ss : [esp+esi*4+0xC]
        push eax
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 0xC
        jb public_59d110
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x59d080)
    }
}

#undef public_59d110
