#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5301d0);
CLANG_FORWARD_PROC_SYMBOL(public_530620);
CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c063b);

#define public_530690 _public_530690
#define public_530692 _public_530692

PROC_DECLARE(0x530620, internal_530620, public_530620);
extern "C" NAKED register_t __cdecl internal_530620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c063b @0x530622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c063b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0xC0
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_530690
        push 0xA
        mov ecx, esi
        call public_5392d0
        mov dword ptr ds : [esi+0xB4], 0
        mov dword ptr ds : [esi+0xB8], 0
        mov byte ptr ds : [esi+0xBC], 1
        mov dword ptr ds : [esi], offset public_5dddd4
        mov dword ptr ds : [esi+4], offset public_5ddd54
        mov dword ptr ds : [esi+0xC], offset public_5ddd4c
        jmp public_530692
        public_530690 : nop
        xor esi, esi
        public_530692 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push 1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c67e8]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5301d0
        push 0
        push esi
        call public_540c30
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x530620)
    }
}

#undef public_530690
#undef public_530692
