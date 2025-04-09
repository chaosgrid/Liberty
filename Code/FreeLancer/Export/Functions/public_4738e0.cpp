#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4738e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbb39);

#define public_47394f _public_47394f

PROC_DECLARE(0x4738e0, internal_4738e0, public_4738e0);
extern "C" NAKED register_t __cdecl internal_4738e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbb39 @0x4738e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbb39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x340]
        test ecx, ecx
        je public_47394f
        call public_57b370
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x340]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call public_57b470
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x340]
        call public_57b3e0
        public_47394f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x4738e0)
    }
}

#undef public_47394f
