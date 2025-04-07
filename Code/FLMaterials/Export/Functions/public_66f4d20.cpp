#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b20);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b80);
CLANG_FORWARD_JUMP_SYMBOL(public_6700bb8);

#define public_66f4d9e _public_66f4d9e
#define public_66f4dab _public_66f4dab
#define public_66f4e42 _public_66f4e42
#define public_66f4e4c _public_66f4e4c
#define public_66f4e50 _public_66f4e50
#define public_66f4e91 _public_66f4e91
#define public_66f4e9d _public_66f4e9d
#define public_66f4ea9 _public_66f4ea9
#define public_66f4eb3 _public_66f4eb3
#define public_66f4ee0 _public_66f4ee0
#define public_66f4ee8 _public_66f4ee8
#define public_66f4f09 _public_66f4f09
#define public_66f4f0b _public_66f4f0b
#define public_66f4f47 _public_66f4f47
#define public_66f4f70 _public_66f4f70
#define public_66f4f8a _public_66f4f8a
#define public_66f4fc0 _public_66f4fc0
#define public_66f4fda _public_66f4fda
#define public_66f4fe0 _public_66f4fe0
#define public_66f4ff8 _public_66f4ff8
#define public_66f4ffa _public_66f4ffa

PROC_DECLARE(0x66f4d20, internal_66f4d20, public_66f4d20);
extern "C" NAKED register_t __cdecl internal_66f4d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700bb8 @0x66f4d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700bb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [ebp+0x68]
        mov dword ptr ss : [esp+8], eax
        mov al, byte ptr ss : [ebp+0x6C]
        push esi
        xor ebx, ebx
        test al, 1
        push edi
        jne public_66f4ee8
        mov esi, dword ptr ss : [esp+0x88]
        cmp esi, ebx
        je public_66f4ee0
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_66f4ee0
        mov dword ptr ss : [esp+0x84], ebx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
/*FIXUP push offset public_67013f0 @0x66f4d7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x88], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        push esi
        jge public_66f4d9e
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        jmp public_66f4dab
        public_66f4d9e : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        public_66f4dab : nop
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push 5
        push eax
        mov byte ptr ss : [esp+0x88], 1
        call dword ptr ds : [ecx+0x44]
        test eax, eax
        jne public_66f4e50
        mov eax, dword ptr ss : [esp+0x2C]
        cmp byte ptr ds : [eax], 0x4F
        jne public_66f4e50
        cmp byte ptr ds : [eax+1], 0x63
        jne public_66f4e50
        mov eax, 2
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov byte ptr ss : [esp+0x80], al
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 5
        push eax
        call dword ptr ds : [ecx+0x48]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 5
        mov byte ptr ss : [esp+0x7C], 1
        fstp dword ptr ss : [esp+0x10]
        je public_66f4e42
        dec eax
        je public_66f4e91
        dec eax
        jne public_66f4e4c
        public_66f4e42 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        call public_66f1b20
        public_66f4e4c : nop
        mov dword ptr ss : [esp+0x18], ebx
        public_66f4e50 : nop
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x7C], 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_66f1ac0
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x7C], 3
        call public_66f1ac0
        mov eax, dword ptr ss : [esp+0x38]
        sub eax, 5
        mov byte ptr ss : [esp+0x7C], bl
        je public_66f4ea9
        dec eax
        je public_66f4e9d
        dec eax
        je public_66f4ea9
        jmp public_66f4eb3
        public_66f4e91 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        call public_66f1b80
        jmp public_66f4e4c
        public_66f4e9d : nop
        push ebx
        lea ecx, ss:[esp+0x3C]
        call public_66f1b80
        jmp public_66f4eb3
        public_66f4ea9 : nop
        push ebx
        lea ecx, ss:[esp+0x3C]
        call public_66f1b20
        public_66f4eb3 : nop
        mov eax, dword ptr ss : [esp+0x84]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        je public_66f4f8a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x84], ebx
        jmp public_66f4f8a
        public_66f4ee0 : nop
        or eax, 0xFFFFFFFF
        jmp public_66f4ffa
        public_66f4ee8 : nop
        mov edi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ebx
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_66f4f09
        add eax, 0xFFFFFFFC
        jmp public_66f4f0b
        public_66f4f09 : nop
        xor eax, eax
        public_66f4f0b : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push ebx
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push ebx
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push ebx
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ss : [ebp+4]
        mov esi, offset public_6701768
        mov eax, 1
        public_66f4f47 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4f47
        mov edi, dword ptr ss : [ebp+4]
        mov esi, offset public_6701768
        mov eax, 1
        lea ecx, ds:[ecx]
        public_66f4f70 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4f70
        public_66f4f8a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x2C], eax
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        fld dword ptr ss : [ebp+0x2C]
        fcomp qword ptr ds : [public_67016d8]
        mov edi, dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        mov eax, 0x89
        jp public_66f4fda
        mov esi, offset public_6701738
        mov edi, edi
        public_66f4fc0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4fc0
        jmp public_66f4ff8
        public_66f4fda : nop
        mov esi, offset public_6701718
        nop 
        public_66f4fe0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_66f4fe0
        public_66f4ff8 : nop
        xor eax, eax
        public_66f4ffa : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x66f4d20)
    }
}

#undef public_66f4d9e
#undef public_66f4dab
#undef public_66f4e42
#undef public_66f4e4c
#undef public_66f4e50
#undef public_66f4e91
#undef public_66f4e9d
#undef public_66f4ea9
#undef public_66f4eb3
#undef public_66f4ee0
#undef public_66f4ee8
#undef public_66f4f09
#undef public_66f4f0b
#undef public_66f4f47
#undef public_66f4f70
#undef public_66f4f8a
#undef public_66f4fc0
#undef public_66f4fda
#undef public_66f4fe0
#undef public_66f4ff8
#undef public_66f4ffa
