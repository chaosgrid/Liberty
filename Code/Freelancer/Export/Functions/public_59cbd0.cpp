#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4d7b);

#define public_59cc1f _public_59cc1f
#define public_59cc21 _public_59cc21
#define public_59cc61 _public_59cc61

PROC_DECLARE(0x59cbd0, internal_59cbd0, public_59cbd0);
extern "C" NAKED register_t __cdecl internal_59cbd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4d7b @0x59cbd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4d7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x498
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_59cc1f
        mov ecx, esi
        call public_57b1b0
        mov dword ptr ds : [esi], offset public_5e58d4
        mov dword ptr ds : [esi+0x7C], offset public_5e58c8
        jmp public_59cc21
        public_59cc1f : nop
        xor esi, esi
        public_59cc21 : nop
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
        jne public_59cc61
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
        public_59cc61 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x59cbd0)
    }
}

#undef public_59cc1f
#undef public_59cc21
#undef public_59cc61
