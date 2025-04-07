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
CLANG_FORWARD_JUMP_SYMBOL(public_41ab9a);

#define public_4181f7 _public_4181f7
#define public_418266 _public_418266
#define public_4182d6 _public_4182d6
#define public_4182f7 _public_4182f7
#define public_418321 _public_418321
#define public_418333 _public_418333
#define public_41835f _public_41835f
#define public_41836c _public_41836c

PROC_DECLARE(0x418110, internal_418110, public_418110);
extern "C" NAKED register_t __cdecl internal_418110()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41ab9a @0x418118*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41ab9a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x83C
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax+0x10], 0xD
        jne public_41835f
        mov ecx, dword ptr ds : [edi+0x80]
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
        je public_418333
        mov eax, dword ptr ds : [edi+0x80]
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
        push 0xD681
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
        je public_4181f7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_4181f7 : nop
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
        je public_418266
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_418266 : nop
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x850], bl
        call dword ptr ds : [public_41b038]
        mov ecx, dword ptr ds : [public_41b03c]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x800
/*FIXUP push offset public_429e18 @0x418287*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_429e18
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        push eax
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_41b094]
        test al, al
        je public_4182d6
        mov ecx, dword ptr ds : [public_429e14]
        mov edx, dword ptr ss : [esp+0x24]
        push 0xFFFFFFFF
        push ecx
        mov ecx, dword ptr ds : [public_41bb70]
/*FIXUP push offset public_429e18 @0x4182b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_429e18
        mov word ptr ss : [esp+0x18], bx
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        add ecx, 4
        call public_4188f4
        public_4182d6 : nop
        push esi
        call public_40ce70
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x854], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_418321
        public_4182f7 : nop
        push ebx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_416d10
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_414ec0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_4182f7
        mov eax, dword ptr ss : [esp+0x18]
        public_418321 : nop
        push eax
        call public_418978
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        pop esi
        public_418333 : nop
        push 0xFFFFFFFF
        push ebx
        lea ecx, ds:[edi+0x60]
        call public_419050
        mov edx, dword ptr ds : [edi+0x80]
        push ebx
        push ebx
        push 0x303
        push edx
        call ebp
        mov eax, dword ptr ss : [esp+0x85C]
        pop ebp
        mov dword ptr ds : [eax], 1
        pop ebx
        jmp public_41836c
        public_41835f : nop
        mov ecx, dword ptr ss : [esp+0x854]
        mov dword ptr ds : [ecx], 0
        public_41836c : nop
        mov ecx, dword ptr ss : [esp+0x840]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x848
        ret 8
        UNREACHABLE_TRAP(0x418110)
    }
}

#undef public_4181f7
#undef public_418266
#undef public_4182d6
#undef public_4182f7
#undef public_418321
#undef public_418333
#undef public_41835f
#undef public_41836c
