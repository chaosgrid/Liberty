#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4780);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f30820);
CLANG_FORWARD_PROC_SYMBOL(public_6f35bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f36050);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f63cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f65f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f66c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac3ac);

#define public_6ef4f37 _public_6ef4f37
#define public_6ef5037 _public_6ef5037
#define public_6ef5084 _public_6ef5084
#define public_6ef50b2 _public_6ef50b2
#define public_6ef50cb _public_6ef50cb
#define public_6ef50dd _public_6ef50dd
#define public_6ef510d _public_6ef510d
#define public_6ef5175 _public_6ef5175
#define public_6ef518a _public_6ef518a
#define public_6ef51bd _public_6ef51bd
#define public_6ef51d0 _public_6ef51d0
#define public_6ef51f2 _public_6ef51f2
#define public_6ef5203 _public_6ef5203
#define public_6ef52af _public_6ef52af

PROC_DECLARE(0x6ef4eb0, internal_6ef4eb0, public_6ef4eb0);
extern "C" NAKED register_t __cdecl internal_6ef4eb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac3ac @0x6ef4eb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac3ac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi+4]
        push edi
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        mov ebp, eax
        push ecx
        mov ecx, ebp
        call public_6f72cb0
        mov edx, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ss : [esp+0x78]
        push ecx
        push eax
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6ef4780
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6ef4f37
        mov edx, dword ptr ss : [esp+0x70]
        cmp byte ptr ds : [edx], 0
        je public_6ef4f37
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6ef4f37
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x110], 0x42980000
        public_6ef4f37 : nop
        mov edx, dword ptr ss : [esp+0x74]
        push ebx
        lea eax, ds:[edi+0x24]
        push eax
        push edx
        sub esp, 0x10
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ds:[edi+0x44]
        mov ecx, esp
        mov dword ptr ss : [esp+0x38], esp
        push eax
        call public_6ef65e0
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x8C]
        lea ecx, ds:[edi+0x58]
        push ecx
        push edx
        push ebp
        push eax
        call public_6f65f10
        add esp, 0x2C
        test al, al
        je public_6ef51f2
        push edi
        push ebx
        call public_6ef4cf0
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x7C]
        add eax, 8
        push eax
        push esi
        push ebp
        call public_6f63cc0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x104]
        add esp, 0x14
        test edx, edx
        je public_6ef510d
        mov eax, ecx
        mov edi, dword ptr ds : [eax+0x104]
        add edi, 0x10
        mov ecx, 0xE
        rep movsd
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x104]
        cmp dword ptr ds : [eax+8], 2
        jne public_6ef510d
        lea ecx, ss:[esp+0x74]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6ead6a0
        mov eax, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        add eax, 8
        push eax
        xor esi, esi
        push ebp
        mov dword ptr ss : [esp+0x74], esi
        call public_6f36050
        mov edi, dword ptr ss : [esp+0x30]
        add esp, 0xC
        cmp edi, esi
        je public_6ef50dd
        mov ecx, dword ptr ss : [esp+0x28]
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        je public_6ef50dd
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, eax
        je public_6ef50dd
/*FIXUP public_6ef5037 : nop
        push offset public_6fb78e0 @0x6ef5037*/
  FIXUP public_6ef5037 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb78e0
        call dword ptr ds : [public_6fb3000]
        mov edi, dword ptr ss : [ebp+0x60]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        lea esi, ss:[ebp+0x58]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6eb5f30
        cmp eax, edi
        jne public_6ef5084
/*FIXUP push offset public_6fb78d0 @0x6ef505f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb78d0
        call dword ptr ds : [public_6fb3000]
        mov edi, dword ptr ds : [esi+8]
        add esp, 4
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5f30
        cmp eax, edi
        je public_6ef50cb
        public_6ef5084 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [eax+4], 1
        mov eax, dword ptr ss : [ebp+0x7C]
        push ecx
        push eax
        call public_6f35bf0
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 8
        cmp esi, eax
        je public_6ef50cb
        lea edi, ss:[ebp+0x88]
        public_6ef50b2 : nop
        mov eax, dword ptr ds : [edi+8]
        push esi
        push 1
        push eax
        mov ecx, edi
        call public_6f96770
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xC
        cmp esi, eax
        jne public_6ef50b2
        public_6ef50cb : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ebx+4]
        jne public_6ef5037
        mov edi, dword ptr ss : [esp+0x24]
        xor esi, esi
        public_6ef50dd : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push edi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        public_6ef510d : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x98]
        add eax, 0xBC
        mov ecx, 9
        lea edi, ss:[esp+0x30]
        rep movsd
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x58], ecx
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x5C], edx
        call dword ptr ds : [public_6fb3030]
        mov edi, dword ptr ss : [esp+0x78]
        lea esi, ds:[edi+0x3C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ef5175
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x7C]
        push eax
        push esi
        push ecx
        call public_6f50650
        add esp, 4
        mov ecx, eax
        call public_6f4f3d0
        jmp public_6ef518a
        public_6ef5175 : nop
        add edi, 0x38
        mov ecx, edi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ef518a
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x7C], edx
        public_6ef518a : nop
        lea ecx, ss:[esp+0x7C]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ef51bd
        cmp dword ptr ds : [ebx+8], 1
        jbe public_6ef51bd
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        call public_6efd1a0
        add esp, 4
        push eax
        push ebx
        call public_6f66c80
        add esp, 0xC
        public_6ef51bd : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ef52af
        lea ebx, ds:[ebx]
        public_6ef51d0 : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ds:[esi+8]
        push edx
        push ecx
        call public_6f5a5d0
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 8
        cmp esi, eax
        jne public_6ef51d0
        jmp public_6ef52af
        public_6ef51f2 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x70], eax
        je public_6ef52af
        public_6ef5203 : nop
        mov edi, ebx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        lea ebp, ds:[edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x74], ebp
        lea ecx, ss:[ebp+0x118]
        mov dword ptr ss : [esp+0x68], 3
        call public_6f15350
        lea ecx, ss:[ebp+0xFC]
        mov byte ptr ss : [esp+0x68], 2
        call public_6f28e10
        mov edx, dword ptr ss : [ebp+0x88]
        mov eax, dword ptr ss : [ebp+0x84]
        lea esi, ss:[ebp+0x80]
        push edx
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x70], 1
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        push ecx
        push eax
        mov ecx, esi
        call public_6f30820
        xor eax, eax
        mov ecx, ebp
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_6ef4ab0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        cmp ebx, dword ptr ss : [esp+0x70]
        jne public_6ef5203
        public_6ef52af : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x5C
        ret 0x10
        UNREACHABLE_TRAP(0x6ef4eb0)
    }
}

#undef public_6ef4f37
#undef public_6ef5037
#undef public_6ef5084
#undef public_6ef50b2
#undef public_6ef50cb
#undef public_6ef50dd
#undef public_6ef510d
#undef public_6ef5175
#undef public_6ef518a
#undef public_6ef51bd
#undef public_6ef51d0
#undef public_6ef51f2
#undef public_6ef5203
#undef public_6ef52af
