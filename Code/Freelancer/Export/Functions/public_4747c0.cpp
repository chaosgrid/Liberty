#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6c0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbbe3);

#define public_474826 _public_474826
#define public_474828 _public_474828
#define public_474868 _public_474868

PROC_DECLARE(0x4747c0, internal_4747c0, public_4747c0);
extern "C" NAKED register_t __cdecl internal_4747c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbbe3 @0x4747c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbbe3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x330
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_474826
        mov ecx, esi
        call public_59f860
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi], offset public_5d08e4
        mov dword ptr ds : [esi+0x7C], offset public_5d08d8
        mov byte ptr ds : [esi+0x32C], 1
        call public_42d6c0
        inc dword ptr ds : [public_67dccc]
        jmp public_474828
        public_474826 : nop
        xor esi, esi
        public_474828 : nop
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
        jne public_474868
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
        public_474868 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4747c0)
    }
}

#undef public_474826
#undef public_474828
#undef public_474868
