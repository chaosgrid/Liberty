#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52c830);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_JUMP_SYMBOL(public_5c044e);

#define public_52c8cb _public_52c8cb
#define public_52c8de _public_52c8de
#define public_52c903 _public_52c903
#define public_52c920 _public_52c920
#define public_52c92c _public_52c92c
#define public_52c92e _public_52c92e
#define public_52c937 _public_52c937
#define public_52c939 _public_52c939
#define public_52c95f _public_52c95f
#define public_52c990 _public_52c990
#define public_52c9a0 _public_52c9a0
#define public_52c9a4 _public_52c9a4
#define public_52c9d5 _public_52c9d5
#define public_52c9e1 _public_52c9e1
#define public_52c9e3 _public_52c9e3
#define public_52c9fc _public_52c9fc
#define public_52c9fe _public_52c9fe
#define public_52ca1b _public_52ca1b
#define public_52ca38 _public_52ca38

PROC_DECLARE(0x52c830, internal_52c830, public_52c830);
extern "C" NAKED register_t __cdecl internal_52c830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c044e @0x52c832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c044e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_531a30
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_5dd4bc
        mov eax, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [eax+0x9C]
        cmp byte ptr ds : [edi], bl
        mov byte ptr ss : [esp+0x1C], 2
        je public_52c8cb
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [eax+0x44]
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push edi
        push eax
        push ebp
        push ecx
        call dword ptr ds : [edx+0x24]
        mov dword ptr ds : [esi+0x10], eax
        public_52c8cb : nop
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        cmp eax, ebx
        je public_52c8de
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        je public_52c8de
        mov ecx, dword ptr ds : [eax+4]
        public_52c8de : nop
        mov ebp, dword ptr ds : [public_5c6040]
        add ecx, 0x80
        call ebp
        test al, al
        jne public_52c920
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        cmp eax, ebx
        je public_52c903
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        je public_52c903
        mov ecx, dword ptr ds : [eax+4]
        public_52c903 : nop
        add ecx, 0x80
        push ecx
        call public_42ae40
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x14], eax
        je public_52c920
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52c920 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_52c92c
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_52c92e
        public_52c92c : nop
        xor eax, eax
        public_52c92e : nop
        cmp eax, ebx
        je public_52c937
        mov eax, dword ptr ds : [eax+4]
        jmp public_52c939
        public_52c937 : nop
        xor eax, eax
        public_52c939 : nop
        lea edi, ds:[eax+0x5C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], eax
        call ebp
        test al, al
        jne public_52c95f
        push edi
        call public_42ae40
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x18], eax
        je public_52c95f
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52c95f : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea edi, ds:[eax+0x58]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52c9d5
        push edi
        call public_40f080
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x20], eax
        je public_52c990
        push 1
        mov ecx, eax
        call public_40e960
        jmp public_52c9d5
        lea ecx, ds:[ecx]
        public_52c990 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_52c9a0
        mov ecx, dword ptr ds : [eax+0x4C]
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_52c9a4
        public_52c9a0 : nop
        mov dword ptr ss : [esp+0x28], ebx
        public_52c9a4 : nop
        mov ecx, edi
        mov edi, dword ptr ds : [public_5c6044]
        mov ebp, 0x100001
        call edi
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ds:[edx+8]
        call edi
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x51
/*FIXUP push offset public_5dd484 @0x52c9c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd484
/*FIXUP push offset public_5dd430 @0x52c9ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd430
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x18
        public_52c9d5 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_52c9e1
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_52c9e3
        public_52c9e1 : nop
        xor eax, eax
        public_52c9e3 : nop
        lea ecx, ds:[eax+0x24]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52ca1b
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_52c9fc
        mov eax, dword ptr ds : [eax+0x4C]
        jmp public_52c9fe
        public_52c9fc : nop
        xor eax, eax
        public_52c9fe : nop
        add eax, 0x24
        push eax
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x24], eax
        je public_52ca1b
        push eax
        call public_536100
        add esp, 4
/*FIXUP public_52ca1b : nop
        push offset public_675448 @0x52ca1b*/
  FIXUP public_52ca1b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_675448
        call public_40f080
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x2C], eax
        je public_52ca38
        push 1
        mov ecx, eax
        call public_40e960
        public_52ca38 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x52c830)
    }
}

#undef public_52c8cb
#undef public_52c8de
#undef public_52c903
#undef public_52c920
#undef public_52c92c
#undef public_52c92e
#undef public_52c937
#undef public_52c939
#undef public_52c95f
#undef public_52c990
#undef public_52c9a0
#undef public_52c9a4
#undef public_52c9d5
#undef public_52c9e1
#undef public_52c9e3
#undef public_52c9fc
#undef public_52c9fe
#undef public_52ca1b
#undef public_52ca38
