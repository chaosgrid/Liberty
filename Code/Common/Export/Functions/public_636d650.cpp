#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635abf0);
CLANG_FORWARD_PROC_SYMBOL(public_636d650);
CLANG_FORWARD_PROC_SYMBOL(public_636d6f0);
CLANG_FORWARD_JUMP_SYMBOL(public_63988b8);

#define public_636d6d8 _public_636d6d8

PROC_DECLARE(0x636d650, internal_636d650, public_636d650);
extern "C" NAKED register_t __cdecl internal_636d650()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63988b8 @0x636d652*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63988b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push 0x200
        mov dword ptr ss : [esp+8], 0x80
        mov dword ptr ss : [esp+0xC], 0
        call public_6343f70
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        call public_635abf0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636d6f0
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x28]
        add esp, 0x18
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_636d6d8
        test eax, eax
        je public_636d6d8
        push eax
        call public_6343fb0
        add esp, 4
        public_636d6d8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x636d650)
    }
}

#undef public_636d6d8
