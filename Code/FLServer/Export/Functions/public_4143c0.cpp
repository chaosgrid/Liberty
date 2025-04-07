#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409880);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_414710);
CLANG_FORWARD_PROC_SYMBOL(public_41895a);
CLANG_FORWARD_PROC_SYMBOL(public_419056);

#define public_414477 _public_414477

PROC_DECLARE(0x4143c0, internal_4143c0, public_4143c0);
extern "C" NAKED register_t __cdecl internal_4143c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call public_40cdc0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_41baf8]
        push eax
        call public_41895a
        test eax, eax
        je public_414477
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_4294ec
        call public_414710
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_4294f0]
        je public_414477
        mov esi, dword ptr ds : [eax+0x1C]
        test esi, esi
        je public_414477
        mov edx, dword ptr ds : [esi+0xD0]
        mov edi, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0xBA
        push edx
        call edi
        mov ecx, dword ptr ds : [esi+0xD0]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_409880
        mov edx, dword ptr ds : [esi+0xD0]
/*FIXUP push offset public_4259c4 @0x414437*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259c4
        push edx
        call public_409880
        mov eax, dword ptr ds : [esi+0xD0]
        add esp, 0x10
        push 0
        push 0
        push 0xBA
        push eax
        call edi
        mov edi, eax
        call dword ptr ds : [public_41bbc0]
        cmp eax, dword ptr ds : [esi+0xD0]
        je public_414477
        push 0
        sub edi, ebx
        push edi
        lea ecx, ds:[esi+0xB0]
        call public_419056
        public_414477 : nop
        pop edi
        pop esi
        pop ebx
        jmp public_40ce70
        UNREACHABLE_TRAP(0x4143c0)
    }
}

#undef public_414477
