#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455850);
CLANG_FORWARD_PROC_SYMBOL(public_4559b0);
CLANG_FORWARD_PROC_SYMBOL(public_4a6630);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ff9);

#define public_4558dc _public_4558dc
#define public_4558ef _public_4558ef
#define public_455909 _public_455909
#define public_455923 _public_455923
#define public_45592f _public_45592f
#define public_455966 _public_455966

PROC_DECLARE(0x455850, internal_455850, public_455850);
extern "C" NAKED register_t __cdecl internal_455850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9ff9 @0x455852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ff9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push ebx
/*FIXUP push offset public_5ce080 @0x45586f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce080
/*FIXUP push offset public_5ce0f4 @0x455874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce0f4
        mov esi, ecx
        call public_59db20
        add esp, 0x10
        mov dword ptr ds : [esi+0x108], eax
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov eax, dword ptr ds : [esi+0xC8]
        xor edi, edi
        cmp eax, 1
        mov dword ptr ss : [esp+0x2C], ebx
        jne public_4558ef
        mov edi, eax
        public_4558dc : nop
        lea eax, ds:[esi+0xD4]
        push eax
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c628c]
        jmp public_455966
        public_4558ef : nop
        cmp eax, 2
        jne public_455909
        lea ecx, ds:[esi+0xEC]
        push ecx
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call dword ptr ds : [public_5c628c]
        jmp public_455966
        public_455909 : nop
        cmp eax, 3
        jne public_455923
        lea edx, ds:[esi+0xD4]
        push edx
        lea ecx, ss:[esp+0x10]
        xor edi, edi
        call dword ptr ds : [public_5c628c]
        jmp public_455966
        public_455923 : nop
        cmp eax, 4
        jne public_45592f
        mov edi, 3
        jmp public_4558dc
        public_45592f : nop
        lea ecx, ds:[esi+0xD4]
        push ecx
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c628c]
        mov edx, dword ptr ds : [esi+0xC8]
        push edx
        push 0x38B
/*FIXUP push offset public_5ce0c0 @0x45594c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce0c0
        mov eax, 0x100002
/*FIXUP push offset public_5ce090 @0x455956*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce090
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_455966 : nop
        cmp byte ptr ss : [esp+0x38], bl
        sete cl
        push esi
/*FIXUP push offset _public_4559b0 @0x45596e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4559b0
        lea edx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0x108]
        push edx
        push edi
        call public_4a6630
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x455850)
    }
}

#undef public_4558dc
#undef public_4558ef
#undef public_455909
#undef public_455923
#undef public_45592f
#undef public_455966
