#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42dc40);
CLANG_FORWARD_PROC_SYMBOL(public_42de30);
CLANG_FORWARD_PROC_SYMBOL(public_42eaa0);

#define public_42dc60 _public_42dc60
#define public_42dca8 _public_42dca8
#define public_42dcb4 _public_42dcb4
#define public_42dcc1 _public_42dcc1

PROC_DECLARE(0x42dc40, internal_42dc40, public_42dc40);
extern "C" NAKED register_t __cdecl internal_42dc40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, edi
        xor esi, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42dcc1
        push ebx
        mov ebx, dword ptr ds : [public_5c6698]
        nop 
        lea esp, ss:[esp]
        public_42dc60 : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c69a0]
/*FIXUP push offset public_5c866c @0x42dc6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_42dca8
        mov ecx, edi
        call ebx
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_667df0
        call public_42eaa0
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, eax
        mov dword ptr ds : [esi], ecx
        jmp public_42dcb4
        public_42dca8 : nop
        test esi, esi
        je public_42dcb4
        push edi
        mov ecx, esi
        call public_42de30
        public_42dcb4 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_42dc60
        pop ebx
        public_42dcc1 : nop
        xor eax, eax
        test esi, esi
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42dc40)
    }
}

#undef public_42dc60
#undef public_42dca8
#undef public_42dcb4
#undef public_42dcc1
