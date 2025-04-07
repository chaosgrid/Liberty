#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d940);
CLANG_FORWARD_PROC_SYMBOL(public_445e20);
CLANG_FORWARD_PROC_SYMBOL(public_445ea0);
CLANG_FORWARD_PROC_SYMBOL(public_445f40);
CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4478c0);
CLANG_FORWARD_PROC_SYMBOL(public_44a2f0);
CLANG_FORWARD_PROC_SYMBOL(public_44a380);
CLANG_FORWARD_PROC_SYMBOL(public_44e430);
CLANG_FORWARD_PROC_SYMBOL(public_455b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d79);

#define public_44e534 _public_44e534
#define public_44e55d _public_44e55d
#define public_44e5e0 _public_44e5e0
#define public_44e639 _public_44e639
#define public_44e6c2 _public_44e6c2
#define public_44e70e _public_44e70e
#define public_44e760 _public_44e760
#define public_44e7ab _public_44e7ab
#define public_44e7dc _public_44e7dc
#define public_44e7de _public_44e7de
#define public_44e829 _public_44e829
#define public_44e835 _public_44e835
#define public_44e83e _public_44e83e
#define public_44e852 _public_44e852

PROC_DECLARE(0x44e430, internal_44e430, public_44e430);
extern "C" NAKED register_t __cdecl internal_44e430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d79 @0x44e432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d79
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB0
        mov eax, dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ss : [esp+0xCC]
        push ebx
        xor ebx, ebx
        mov dword ptr ds : [eax], ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov dword ptr ds : [edx], 0xFFFFFFFF
        push edi
        mov edi, dword ptr ss : [esp+0xE0]
        mov ecx, ebx
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0xE8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edx], bl
        mov edx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ss : [ebp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [ecx+0x24]
        mov esi, eax
        mov al, byte ptr ds : [esi+4]
        and al, 1
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x17], al
        je public_44e55d
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x30]
        call public_44a2f0
        mov edi, eax
        cmp edi, ebx
        je public_44e534
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0x58]
        mov eax, dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ss : [esp+0xE4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xE8]
        mov dword ptr ds : [ecx], 6
        mov byte ptr ds : [edx], bl
        jmp public_44e852
        public_44e534 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x2B4
/*FIXUP push offset public_5cc32c @0x44e543*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5cc490 @0x44e54d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc490
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_44e852
        public_44e55d : nop
        mov eax, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ss : [ebp+0x3C]
/*FIXUP push offset public_5cc3f8 @0x44e567*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc3f8
        push eax
        push ecx
        call dword ptr ds : [public_5c625c]
        push eax
        call dword ptr ds : [public_5c6258]
        mov esi, dword ptr ss : [esp+0xF4]
        add esp, 0x10
        cmp eax, 1
        mov dword ptr ds : [esi], eax
        jne public_44e639
        mov edx, dword ptr ds : [public_611000]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x3C]
        push edx
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44e639
        call public_446be0
        mov esi, eax
        test esi, esi
        jne public_44e5e0
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cc47c @0x44e5c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc47c
        push 0x2D8
/*FIXUP push offset public_5cc32c @0x44e5cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x44e5d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_44e5e0 : nop
        mov eax, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [eax], esi
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        push eax
/*FIXUP push offset public_5cbe50 @0x44e60e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe50
        mov ecx, esi
        call public_43d940
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        call public_4478c0
        mov ecx, 0xC
        mov esi, eax
        add esp, 0x10
        rep movsd
        jmp public_44e852
        public_44e639 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0xE8]
        mov dword ptr ds : [esi], 6
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0xD0]
        mov byte ptr ds : [eax], 1
        mov eax, dword ptr ss : [ebp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x10], esi
        call public_445e20
        mov edi, dword ptr ds : [esi+0x3C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x18], edi
        repne scasb
        not ecx
        dec ecx
        mov dword ptr ss : [esp+0xC8], ebx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44e6c2
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ds : [ecx+ebx], 0
        public_44e6c2 : nop
        mov edi, dword ptr ds : [esi+0x38]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x18], edi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44e70e
        mov edi, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_44e70e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        lea edx, ds:[esi+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x54], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x58], edx
        add esi, 0x14
        mov ecx, 9
        lea edi, ss:[esp+0x5C]
/*FIXUP push offset public_5cc474 @0x44e740*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc474
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x3C]
        push eax
        push ecx
        call dword ptr ds : [public_5c625c]
        mov esi, eax
        add esp, 0xC
        test esi, esi
        jne public_44e760
        mov esi, offset public_5c865c
        public_44e760 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x88]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_44e7ab
        mov edi, dword ptr ss : [esp+0x84]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x88], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_44e7ab : nop
        push 0x80
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov byte ptr ss : [esp+0xC8], 1
        je public_44e7dc
        mov edx, dword ptr ss : [ebp+0x30]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov ecx, eax
        call public_445f40
        mov esi, eax
        jmp public_44e7de
        public_44e7dc : nop
        xor esi, esi
        public_44e7de : nop
        mov eax, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [eax], esi
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0xC8], 0
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xE8]
        mov byte ptr ds : [eax], 1
        mov al, byte ptr ss : [ebp+0x5C]
        test al, al
        jne public_44e835
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        jne public_44e829
        mov eax, dword ptr ds : [public_5c7078]
        public_44e829 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        push eax
        push esi
        call public_455b80
        jmp public_44e83e
        public_44e835 : nop
        mov ecx, dword ptr ss : [ebp+0x30]
        push esi
        call public_44a380
        public_44e83e : nop
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xC8], 0xFFFFFFFF
        call public_445ea0
        public_44e852 : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xBC
        ret 0x1C
        UNREACHABLE_TRAP(0x44e430)
    }
}

#undef public_44e534
#undef public_44e55d
#undef public_44e5e0
#undef public_44e639
#undef public_44e6c2
#undef public_44e70e
#undef public_44e760
#undef public_44e7ab
#undef public_44e7dc
#undef public_44e7de
#undef public_44e829
#undef public_44e835
#undef public_44e83e
#undef public_44e852
