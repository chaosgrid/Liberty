#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba2db);

#define public_45b58c _public_45b58c
#define public_45b58e _public_45b58e
#define public_45b5ce _public_45b5ce

PROC_DECLARE(0x45b530, internal_45b530, public_45b530);
extern "C" NAKED register_t __cdecl internal_45b530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba2db @0x45b532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba2db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x33C
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_45b58c
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi], offset public_5ce85c
        mov dword ptr ds : [esi+0x7C], offset public_5ce850
        mov dword ptr ds : [public_66d398], esi
        mov byte ptr ds : [esi+0x338], 0
        jmp public_45b58e
        public_45b58c : nop
        xor esi, esi
        public_45b58e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_45b5ce
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_45b5ce : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x45b530)
    }
}

#undef public_45b58c
#undef public_45b58e
#undef public_45b5ce
