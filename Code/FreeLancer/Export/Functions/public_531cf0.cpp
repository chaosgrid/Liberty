#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd9d0);
CLANG_FORWARD_PROC_SYMBOL(public_4fda00);
CLANG_FORWARD_PROC_SYMBOL(public_531cf0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c06fb);

#define public_531d3a _public_531d3a
#define public_531d3c _public_531d3c
#define public_531da4 _public_531da4
#define public_531da6 _public_531da6
#define public_531dd5 _public_531dd5
#define public_531dee _public_531dee
#define public_531dfe _public_531dfe
#define public_531e0d _public_531e0d
#define public_531e1d _public_531e1d
#define public_531e39 _public_531e39
#define public_531e45 _public_531e45
#define public_531e53 _public_531e53
#define public_531e5c _public_531e5c

PROC_DECLARE(0x531cf0, internal_531cf0, public_531cf0);
extern "C" NAKED register_t __cdecl internal_531cf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c06fb @0x531cf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c06fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x8C
        push ebx
        push ebp
        push esi
        push 0x9C
        mov ebx, ecx
        call public_4f79a0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_531d3a
        call public_54baf0
        cmp dword ptr ds : [ebx+8], eax
        sete al
        mov ecx, esi
        push eax
        call public_4fd9d0
        mov ebp, eax
        jmp public_531d3c
        public_531d3a : nop
        xor ebp, ebp
        public_531d3c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x50]
        push eax
        call dword ptr ds : [edx+0x68]
        test al, al
        je public_531e53
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        push edi
        mov ecx, 9
        lea esi, ss:[esp+0x64]
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [ecx]
        xor edi, edi
        push edi
        call dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        push ecx
        mov ecx, ebp
        call public_4f7d20
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        je public_531da4
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_531da6
        public_531da4 : nop
        xor eax, eax
        public_531da6 : nop
        push eax
        mov ecx, ebp
        call public_4fda00
        test al, al
        mov byte ptr ss : [esp+0x13], al
        je public_531e45
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edi
        je public_531dd5
        mov ecx, ebp
        call public_4f7a80
        public_531dd5 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, edi
        lea esi, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0xA4], edi
        je public_531dee
        call public_4f7a90
        mov dword ptr ds : [esi+8], edi
        public_531dee : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_531dfe
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], edi
        public_531dfe : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        je public_531e0d
        call public_537ad0
        mov dword ptr ds : [esi+0xC], edi
        public_531e0d : nop
        cmp ebp, edi
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+8], ebp
        je public_531e1d
        mov ecx, ebp
        call public_4f7a80
        public_531e1d : nop
        cmp ebp, edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ss : [esp+0xA4], 0xFFFFFFFF
        je public_531e39
        mov ecx, ebp
        call public_4f7a90
        public_531e39 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        add ecx, 0x28
        call public_4fcea0
        public_531e45 : nop
        mov ecx, ebp
        call public_4f7a90
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        jmp public_531e5c
        public_531e53 : nop
        mov ecx, ebp
        call public_4f7a90
        xor al, al
        public_531e5c : nop
        mov ecx, dword ptr ss : [esp+0x98]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x531cf0)
    }
}

#undef public_531d3a
#undef public_531d3c
#undef public_531da4
#undef public_531da6
#undef public_531dd5
#undef public_531dee
#undef public_531dfe
#undef public_531e0d
#undef public_531e1d
#undef public_531e39
#undef public_531e45
#undef public_531e53
#undef public_531e5c
