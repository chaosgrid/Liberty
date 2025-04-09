#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438c00);
CLANG_FORWARD_PROC_SYMBOL(public_43bc90);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_441a40);
CLANG_FORWARD_PROC_SYMBOL(public_44d240);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_440590 _public_440590
#define public_4405a2 _public_4405a2
#define public_4405b9 _public_4405b9
#define public_4405dc _public_4405dc
#define public_440635 _public_440635
#define public_44065e _public_44065e
#define public_44068e _public_44068e
#define public_4406e6 _public_4406e6
#define public_440714 _public_440714
#define public_440730 _public_440730
#define public_440746 _public_440746
#define public_44075b _public_44075b
#define public_440768 _public_440768
#define public_440772 _public_440772
#define public_440780 _public_440780
#define public_44079d _public_44079d
#define public_4407c6 _public_4407c6
#define public_440814 _public_440814
#define public_44084a _public_44084a
#define public_440867 _public_440867

PROC_DECLARE(0x440560, internal_440560, public_440560);
extern "C" NAKED register_t __cdecl internal_440560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xA0]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_440714
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, ebx
        je public_4405b9
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_4405a2
        lea ebx, ds:[ebx]
        public_440590 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_440590
        public_4405a2 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x9C], ebx
        public_4405b9 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [eax+0x30]
        add eax, 0xFFFFFFFE
        cmp eax, 0xA
        ja public_440867
/*FIXUP movzx ecx, byte ptr ds : [eax+public_440884] @0x4405ce*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_440870] @0x4405d5*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_44068e
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_4406e6
  JMPTB cmp eax, 2
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 3
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 4
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_440635
  JMPTB cmp eax, 6
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_440867
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 3
  JMPTB je public_4405dc
  JMPTB int 3
        public_4405dc : nop
        mov edx, dword ptr ds : [public_5cb4d0]
        lea edi, ds:[esi-0x20]
        push edx
        mov ecx, edi
        call public_55e120
        mov eax, dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ds : [eax+0x18]
        lea ecx, ds:[eax+0x24]
        push ecx
/*FIXUP push offset public_668804 @0x4405fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_668804
        push edx
        mov ecx, edi
        call public_55dee0
        mov eax, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [eax], bl
        mov ecx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xA0]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+0x20], bl
        pop ebx
        add esp, 0x10
        ret 
        public_440635 : nop
        mov ecx, dword ptr ds : [public_5cb4d0]
        lea edi, ds:[esi-0x20]
        push ecx
        mov ecx, edi
        call public_55e120
        mov edx, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [edx+0x20], bl
        mov eax, dword ptr ds : [esi+0xA0]
        lea ecx, ds:[eax+0x24]
        push ecx
/*FIXUP push offset public_6687f8 @0x440659*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687f8
        public_44065e : nop
        mov edx, dword ptr ds : [eax+0x18]
        push edx
        mov ecx, edi
        call public_55dee0
        mov eax, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [eax], bl
        mov ecx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_44068e : nop
        mov eax, dword ptr ds : [public_5cb4d0]
        lea edi, ds:[esi-0x20]
        push eax
        mov ecx, edi
        call public_55e120
        mov ecx, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [ecx+0x20], bl
        mov eax, dword ptr ds : [esi+0xA0]
        lea edx, ds:[eax+0x24]
        mov eax, dword ptr ds : [eax+0x18]
        push edx
/*FIXUP push offset public_6687ec @0x4406b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687ec
        push eax
        mov ecx, edi
        call public_55dee0
        mov ecx, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [ecx], bl
        mov edx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 2
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_4406e6 : nop
        mov ecx, dword ptr ds : [public_5cb4d0]
        lea edi, ds:[esi-0x20]
        push ecx
        mov ecx, edi
        call public_55e120
        mov edx, dword ptr ds : [esi+0xA0]
        mov byte ptr ds : [edx+0x20], bl
        mov eax, dword ptr ds : [esi+0xA0]
        lea ecx, ds:[eax+0x24]
        push ecx
/*FIXUP push offset public_6687e0 @0x44070a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6687e0
        jmp public_44065e
        public_440714 : nop
        mov edi, dword ptr ds : [esi+0x9C]
        cmp edi, ebx
        lea ebp, ds:[esi-0x34C]
        mov dword ptr ss : [esp+0x10], ebp
        je public_44075b
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_440746
        nop 
        public_440730 : nop
        mov ebp, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp ebp, ebx
        mov eax, ebp
        jne public_440730
        mov ebp, dword ptr ss : [esp+0x10]
        public_440746 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp+0x3E8], ebx
        public_44075b : nop
        mov esi, dword ptr ds : [esi+0x34]
        mov edi, dword ptr ds : [esi]
        cmp edi, esi
        je public_440867
        public_440768 : nop
        cmp byte ptr ds : [edi+9], bl
        jne public_440772
        cmp byte ptr ds : [edi+0x28], bl
        jne public_440780
        public_440772 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, esi
        jne public_440768
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_440780 : nop
        mov eax, dword ptr ds : [edi+0x38]
        add eax, 0xFFFFFFFE
        cmp eax, 0xA
        ja public_440867
/*FIXUP movzx eax, byte ptr ds : [eax+public_4408a0] @0x44078f*/
/*FIXUP jmp dword ptr ds : [eax*4+public_440890] @0x440796*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a23b
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a23b : nop
        je public_44079d
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a237
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a237 : nop
        je public_44079d
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a233
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a233 : nop
        je public_440867
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a22f
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a22f : nop
        je public_440867
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a22b
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a22b : nop
        je public_440867
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a227
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a227 : nop
        je public_440814
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a223
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a223 : nop
        je public_440867
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a21f
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a21f : nop
        je public_440867
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a21b
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a21b : nop
        je public_440867
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a217
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a217 : nop
        je public_440867
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a213
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a213 : nop
        je public_4407c6
  JMPTB int 3
        public_44079d : nop
        call public_45a460
        call public_438c00
        cmp eax, ebx
        je public_440867
        mov ecx, dword ptr ds : [edi+0x38]
        push ecx
        push 3
        push 0xFFFFFFFF
        mov ecx, eax
        call public_44d240
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_4407c6 : nop
        push ebx
        push ebx
/*FIXUP push offset public_5cb6cc @0x4407c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6cc
/*FIXUP push offset public_5cb6cc @0x4407cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6cc
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        je public_440867
        mov edx, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x42
        mov ecx, eax
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBF8CCCCD
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_440814 : nop
        mov ecx, offset public_668708
        call public_43bc90
        mov esi, eax
        cmp esi, ebx
        je public_44084a
        push ebx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        mov byte ptr ss : [esp+0x20], bl
        call public_4c4da0
        or byte ptr ss : [esp+0x20], 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push 1
        push eax
        push esi
        call public_4c4e00
        add esp, 0x1C
        public_44084a : nop
        push ebx
        push ebx
/*FIXUP push offset public_5cb6bc @0x44084c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
/*FIXUP push offset public_5cb6bc @0x440851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        call public_59db20
        add esp, 0x10
        push 1
        mov ecx, ebp
        call public_441a40
        public_440867 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x440560)
        ASM_EXPORT_ENTRY_SINGLE(0x440867, public_440867)
    }
}

#undef public_440590
#undef public_4405a2
#undef public_4405b9
#undef public_4405dc
#undef public_440635
#undef public_44065e
#undef public_44068e
#undef public_4406e6
#undef public_440714
#undef public_440730
#undef public_440746
#undef public_44075b
#undef public_440768
#undef public_440772
#undef public_440780
#undef public_44079d
#undef public_4407c6
#undef public_440814
#undef public_44084a
#undef public_440867

#pragma init_seg(compiler)
extern "C" void const* const public_440867 = __AsmFindLabelExport(&internal_440560, 0x440867);
