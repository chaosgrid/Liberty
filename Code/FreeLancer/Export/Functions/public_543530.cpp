#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503440);
CLANG_FORWARD_PROC_SYMBOL(public_503a80);
CLANG_FORWARD_PROC_SYMBOL(public_542f10);
CLANG_FORWARD_PROC_SYMBOL(public_543530);
CLANG_FORWARD_PROC_SYMBOL(public_5437d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0e27);

#define public_543570 _public_543570
#define public_54359c _public_54359c
#define public_54359e _public_54359e
#define public_5435c7 _public_5435c7
#define public_543608 _public_543608
#define public_54360a _public_54360a

PROC_DECLARE(0x543530, internal_543530, public_543530);
extern "C" NAKED register_t __cdecl internal_543530()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0e27 @0x543538*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0e27
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x188]
        test edi, edi
        je public_543570
        mov ecx, edi
        call public_503a80
        push edi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x188], 0
        public_543570 : nop
        push 0xDC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], 0
        je public_54359c
        push edi
        push esi
        mov ecx, eax
        call public_503440
        jmp public_54359e
        public_54359c : nop
        xor eax, eax
        public_54359e : nop
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x188], eax
        mov dword ptr ss : [esp+8], 0
        je public_5435c7
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        public_5435c7 : nop
        push 1
        mov ecx, esi
        call public_5437d0
        push 0x64
        call dword ptr ds : [public_5c69b8]
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 1
        je public_543608
        mov edx, dword ptr ds : [esi+0x188]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+8]
        push edx
        push ecx
        mov dword ptr ss : [esp+0x28], ecx
        push esi
        mov ecx, eax
        call public_542f10
        jmp public_54360a
        public_543608 : nop
        xor eax, eax
        public_54360a : nop
        push eax
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c67f4]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x543530)
    }
}

#undef public_543570
#undef public_54359c
#undef public_54359e
#undef public_5435c7
#undef public_543608
#undef public_54360a
