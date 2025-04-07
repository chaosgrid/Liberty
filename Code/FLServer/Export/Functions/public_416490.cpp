#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409880);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_416890);
CLANG_FORWARD_PROC_SYMBOL(public_419056);

#define public_416541 _public_416541
#define public_41654c _public_41654c

PROC_DECLARE(0x416490, internal_416490, public_416490);
extern "C" NAKED register_t __cdecl internal_416490()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_429da4
        mov dword ptr ss : [esp+0x18], eax
        call public_416890
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_429da8]
        je public_41654c
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_41654c
        push ebx
        push edi
        call public_40cdc0
        mov eax, dword ptr ds : [esi+0xC4]
        mov edi, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0xBA
        push eax
        call edi
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0xC4]
        push ecx
        push edx
        mov ebx, eax
        call public_409880
        mov eax, dword ptr ds : [esi+0xC4]
/*FIXUP push offset public_4259c4 @0x416501*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259c4
        push eax
        call public_409880
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0x10
        push 0
        push 0
        push 0xBA
        push ecx
        call edi
        mov edi, eax
        call dword ptr ds : [public_41bbc0]
        cmp eax, dword ptr ds : [esi+0xC4]
        je public_416541
        push 0
        sub edi, ebx
        push edi
        lea ecx, ds:[esi+0xA4]
        call public_419056
        public_416541 : nop
        pop edi
        pop ebx
        pop esi
        add esp, 4
        jmp public_40ce70
        public_41654c : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x416490)
    }
}

#undef public_416541
#undef public_41654c
