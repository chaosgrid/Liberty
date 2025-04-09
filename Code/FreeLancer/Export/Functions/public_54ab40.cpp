#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4120d0);
CLANG_FORWARD_PROC_SYMBOL(public_42acb0);
CLANG_FORWARD_PROC_SYMBOL(public_45a100);
CLANG_FORWARD_PROC_SYMBOL(public_45b490);
CLANG_FORWARD_PROC_SYMBOL(public_46a4a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c73d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8110);
CLANG_FORWARD_PROC_SYMBOL(public_4fe1c0);
CLANG_FORWARD_PROC_SYMBOL(public_5020a0);
CLANG_FORWARD_PROC_SYMBOL(public_510f90);
CLANG_FORWARD_PROC_SYMBOL(public_5173c0);
CLANG_FORWARD_PROC_SYMBOL(public_5187d0);
CLANG_FORWARD_PROC_SYMBOL(public_51a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_51ad80);
CLANG_FORWARD_PROC_SYMBOL(public_52a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_538b20);
CLANG_FORWARD_PROC_SYMBOL(public_543350);
CLANG_FORWARD_PROC_SYMBOL(public_549830);
CLANG_FORWARD_PROC_SYMBOL(public_549bc0);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54b520);
CLANG_FORWARD_PROC_SYMBOL(public_5545a0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577490);
CLANG_FORWARD_PROC_SYMBOL(public_579290);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c12bb);

#define public_54abfc _public_54abfc
#define public_54ac13 _public_54ac13
#define public_54ac50 _public_54ac50
#define public_54ac58 _public_54ac58
#define public_54aca1 _public_54aca1
#define public_54acd5 _public_54acd5
#define public_54acd7 _public_54acd7
#define public_54ad19 _public_54ad19
#define public_54ad25 _public_54ad25
#define public_54add7 _public_54add7
#define public_54ae0c _public_54ae0c
#define public_54ae21 _public_54ae21
#define public_54ae56 _public_54ae56
#define public_54ae5d _public_54ae5d
#define public_54ae7b _public_54ae7b
#define public_54ae8d _public_54ae8d

PROC_DECLARE(0x54ab40, internal_54ab40, public_54ab40);
extern "C" NAKED register_t __cdecl internal_54ab40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c12bb @0x54ab42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c12bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x228
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+0xB]
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov byte ptr ss : [ebp], 1
        xor ebx, ebx
        mov dword ptr ss : [esp+0x240], ebx
        call public_579290
        push 1
        call public_45a100
        mov edi, dword ptr ds : [public_5c60f8]
        call edi
/*FIXUP push offset public_5e0808 @0x54ab89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0808
        mov byte ptr ds : [esi+8], 1
        call public_577490
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        add esp, 8
        push edx
        call dword ptr ds : [eax+0x100]
        push 0x42700000
        push 0x40A00000
/*FIXUP push offset public_678b95 @0x54abb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678b95
        mov byte ptr ds : [public_678b95], bl
        mov byte ptr ds : [public_678b94], bl
        call public_5a89b0
        mov al, byte ptr ds : [public_678b95]
        add esp, 0xC
        cmp al, bl
        jne public_54ac13
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_54abfc
        mov byte ptr ds : [public_67ecbd], 1
        mov dword ptr ds : [public_679778], ebx
        mov byte ptr ss : [ebp], bl
        mov al, 1
        jmp public_54ae8d
        public_54abfc : nop
        mov byte ptr ds : [public_67ecbe], 1
        mov dword ptr ds : [public_679778], ebx
        mov byte ptr ss : [ebp], bl
        mov al, 1
        jmp public_54ae8d
        public_54ac13 : nop
        call edi
        call public_5020a0
        call public_510f90
        call edi
        mov eax, dword ptr ds : [public_679788]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c6068]
        je public_54ac58
        mov eax, dword ptr ds : [eax+8]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_5c601c]
        mov ecx, dword ptr ds : [public_679788]
        add esp, 8
        cmp ecx, ebx
        je public_54ac50
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_54ac50 : nop
        mov dword ptr ds : [public_679788], ebx
        jmp public_54aca1
        public_54ac58 : nop
        push ebx
        lea eax, ss:[esp+0x138]
/*FIXUP push offset public_5e07f4 @0x54ac60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e07f4
        push eax
        call ebp
        lea ecx, ss:[esp+0x140]
        push ecx
        call public_538b20
        call public_52a7a0
        push ebx
        lea edx, ss:[esp+0x148]
/*FIXUP push offset public_67a22c @0x54ac82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67a22c
        push edx
        call ebp
        lea eax, ss:[esp+0x150]
        push eax
        call public_4fe1c0
        push 1
        call public_42acb0
        add esp, 0x24
        public_54aca1 : nop
        call edi
        call public_4c4830
        push eax
        call public_5545a0
        add esp, 4
        call edi
        call public_54b520
        call edi
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        call edi
        mov eax, dword ptr ds : [public_679744]
        cmp eax, ebx
        je public_54acd5
        lea ecx, ds:[eax-8]
        jmp public_54acd7
        public_54acd5 : nop
        xor ecx, ecx
        public_54acd7 : nop
        call public_543350
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0x60]
        cmp byte ptr ds : [eax], bl
        jne public_54ad19
/*FIXUP push offset public_5e07d4 @0x54ace6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e07d4
        push 0x5D5
/*FIXUP push offset public_5e0704 @0x54acf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0704
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x54acfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x48]
/*FIXUP push offset public_5e07bc @0x54ad0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e07bc
        push ecx
        call ebp
        add esp, 0x20
        jmp public_54ad25
        public_54ad19 : nop
        push ebx
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        call ebp
        add esp, 0xC
        public_54ad25 : nop
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_5173c0
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ds:[esi+0x1B0]
        call public_5187d0
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[esi+0x3C8]
        call public_51a2b0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ds:[esi+0x500]
        call public_51ad80
        call public_4c73d0
        mov byte ptr ds : [esi+0xBAA], bl
        call edi
        push ebx
        push ebx
        mov ecx, esi
        call public_549bc0
        mov dword ptr ds : [public_675294], 0
        call edi
        mov ecx, esi
        call public_549830
        call edi
        push 1
        call public_4120d0
        add esp, 4
        mov byte ptr ds : [esi+9], bl
        mov byte ptr ds : [esi+0xA], bl
        mov dword ptr ss : [esp+0x14], 0xC3
        mov dword ptr ss : [esp+0x18], 0xC4
        mov dword ptr ss : [esp+0x1C], 0xF
        mov dword ptr ss : [esp+0x20], 0x31
        mov dword ptr ss : [esp+0x24], 0x39
        mov dword ptr ss : [esp+0x28], 0x38
        mov dword ptr ss : [esp+0x2C], 0xBF
        xor ebp, ebp
        public_54add7 : nop
        mov ecx, dword ptr ss : [esp+ebp*4+0x14]
        push ecx
        lea ecx, ds:[esi+4]
        call public_5760d0
        inc ebp
        cmp ebp, 7
        jb public_54add7
        call edi
        call public_45b490
        push 8
        mov byte ptr ds : [esi+0xBA9], 1
        call public_4c8110
        add esp, 4
        test al, al
        je public_54ae0c
        mov dword ptr ds : [esi+0xBA4], ebx
        public_54ae0c : nop
        cmp dword ptr ds : [esi+0xBA0], ebx
        jne public_54ae21
        push ebx
/*FIXUP push offset public_5cc404 @0x54ae15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        mov ecx, esi
        call public_549e70
        public_54ae21 : nop
        push 0x42700000
        push 0x40A00000
/*FIXUP push offset public_678b96 @0x54ae2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678b96
        call public_5a89b0
        mov al, byte ptr ds : [public_678b96]
        mov esi, dword ptr ds : [public_5c60d0]
        add esp, 0xC
        cmp al, bl
        jne public_54ae5d
        call esi
        test al, al
        je public_54ae56
        mov byte ptr ds : [public_67ecbd], 1
        jmp public_54ae5d
        public_54ae56 : nop
        mov byte ptr ds : [public_67ecbe], 1
        public_54ae5d : nop
        mov dword ptr ds : [public_679778], ebx
        call esi
        test al, al
        jne public_54ae7b
        cmp dword ptr ds : [public_679778], ebx
        jne public_54ae7b
        push 1
        call public_46a4a0
        add esp, 4
        public_54ae7b : nop
        call edi
        mov eax, dword ptr ds : [public_679778]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        sete al
        mov byte ptr ds : [edx], bl
        public_54ae8d : nop
        mov ecx, dword ptr ss : [esp+0x238]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x234
        ret 4
        UNREACHABLE_TRAP(0x54ab40)
    }
}

#undef public_54abfc
#undef public_54ac13
#undef public_54ac50
#undef public_54ac58
#undef public_54aca1
#undef public_54acd5
#undef public_54acd7
#undef public_54ad19
#undef public_54ad25
#undef public_54add7
#undef public_54ae0c
#undef public_54ae21
#undef public_54ae56
#undef public_54ae5d
#undef public_54ae7b
#undef public_54ae8d
