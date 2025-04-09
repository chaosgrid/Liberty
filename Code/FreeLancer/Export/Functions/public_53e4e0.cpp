#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_53e4e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0cc8);

#define public_53e52c _public_53e52c

PROC_DECLARE(0x53e4e0, internal_53e4e0, public_53e4e0);
extern "C" NAKED register_t __cdecl internal_53e4e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0cc8 @0x53e4e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0cc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi-0xC], offset public_5df5d4
        mov dword ptr ds : [esi-8], offset public_5df554
        mov dword ptr ds : [esi], offset public_5df548
        mov eax, dword ptr ds : [esi+0xA0]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_53e52c
        push eax
        call public_536170
        add esp, 4
        public_53e52c : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_5394b0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x53e4e0)
    }
}

#undef public_53e52c
