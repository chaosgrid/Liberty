#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_4147c0);
CLANG_FORWARD_PROC_SYMBOL(public_414820);
CLANG_FORWARD_PROC_SYMBOL(public_414ec0);
CLANG_FORWARD_PROC_SYMBOL(public_416d10);
CLANG_FORWARD_PROC_SYMBOL(public_4188f4);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_419050);
CLANG_FORWARD_JUMP_SYMBOL(public_41ab0a);

#define public_416667 _public_416667
#define public_4166d6 _public_4166d6
#define public_416748 _public_416748
#define public_416770 _public_416770
#define public_41679a _public_41679a
#define public_4167ac _public_4167ac
#define public_4167d8 _public_4167d8
#define public_4167e5 _public_4167e5

PROC_DECLARE(0x416580, internal_416580, public_416580);
extern "C" NAKED register_t __cdecl internal_416580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41ab0a @0x416588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41ab0a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x83C
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax+0x10], 0xD
        jne public_4167d8
        mov ecx, dword ptr ds : [esi+0x84]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_41bbe8]
        xor ebx, ebx
        push ebx
        push ebx
        push 0xE
        push ecx
        call ebp
        test eax, eax
        je public_4167ac
        mov eax, dword ptr ds : [esi+0x84]
        push 0x800
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call public_409800
        add esp, 0xC
        call public_40cdc0
        mov cl, byte ptr ss : [esp+0x1F]
        push ebx
        mov byte ptr ss : [esp+0x14], cl
        push ebx
        lea ecx, ss:[esp+0x18]
        call public_414820
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        push 0xD801
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x854], ebx
        call dword ptr ds : [public_41b02c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x850], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x85C], 2
        call public_4147c0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x850], 1
        je public_416667
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_416667 : nop
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x850], bl
        call dword ptr ds : [public_41b030]
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_41b034]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x850], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x85C], 4
        call public_4147c0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x850], 3
        je public_4166d6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_4166d6 : nop
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x850], bl
        call dword ptr ds : [public_41b038]
        mov ecx, dword ptr ds : [public_41b03c]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x800
/*FIXUP push offset public_429590 @0x4166f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_429590
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        push eax
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_41b094]
        test al, al
        je public_416748
        mov ecx, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [public_42958c]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        mov edx, dword ptr ds : [public_41bb70]
/*FIXUP push offset public_429590 @0x416728*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_429590
        mov word ptr ss : [esp+0x18], bx
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea ecx, ds:[edx+4]
        call public_4188f4
        public_416748 : nop
        push edi
        call public_40ce70
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x854], 0xFFFFFFFF
        mov edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_41679a
        lea esp, ss:[esp]
        public_416770 : nop
        push ebx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_416d10
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_414ec0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_416770
        mov eax, dword ptr ss : [esp+0x18]
        public_41679a : nop
        push eax
        call public_418978
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        pop edi
        public_4167ac : nop
        push 0xFFFFFFFF
        push ebx
        lea ecx, ds:[esi+0x64]
        call public_419050
        mov eax, dword ptr ds : [esi+0x84]
        push ebx
        push ebx
        push 0x303
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x85C]
        pop ebp
        mov dword ptr ds : [ecx], 1
        pop ebx
        jmp public_4167e5
        public_4167d8 : nop
        mov edx, dword ptr ss : [esp+0x854]
        mov dword ptr ds : [edx], 0
        public_4167e5 : nop
        mov ecx, dword ptr ss : [esp+0x840]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x848
        ret 8
        UNREACHABLE_TRAP(0x416580)
    }
}

#undef public_416667
#undef public_4166d6
#undef public_416748
#undef public_416770
#undef public_41679a
#undef public_4167ac
#undef public_4167d8
#undef public_4167e5
