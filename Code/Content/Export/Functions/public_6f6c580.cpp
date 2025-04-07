#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c580);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafda8);

#define public_6f6c5f7 _public_6f6c5f7
#define public_6f6c60a _public_6f6c60a
#define public_6f6c611 _public_6f6c611
#define public_6f6c618 _public_6f6c618
#define public_6f6c61f _public_6f6c61f
#define public_6f6c624 _public_6f6c624
#define public_6f6c637 _public_6f6c637
#define public_6f6c650 _public_6f6c650
#define public_6f6c65c _public_6f6c65c
#define public_6f6c662 _public_6f6c662
#define public_6f6c67a _public_6f6c67a
#define public_6f6c6a7 _public_6f6c6a7
#define public_6f6c6f0 _public_6f6c6f0
#define public_6f6c771 _public_6f6c771
#define public_6f6c7a4 _public_6f6c7a4
#define public_6f6c7ab _public_6f6c7ab
#define public_6f6c7b2 _public_6f6c7b2
#define public_6f6c7b9 _public_6f6c7b9
#define public_6f6c7be _public_6f6c7be
#define public_6f6c7d7 _public_6f6c7d7
#define public_6f6c7e5 _public_6f6c7e5
#define public_6f6c7f9 _public_6f6c7f9
#define public_6f6c7ff _public_6f6c7ff
#define public_6f6c818 _public_6f6c818
#define public_6f6c822 _public_6f6c822
#define public_6f6c824 _public_6f6c824
#define public_6f6c832 _public_6f6c832
#define public_6f6c83a _public_6f6c83a
#define public_6f6c845 _public_6f6c845
#define public_6f6c85b _public_6f6c85b
#define public_6f6c865 _public_6f6c865
#define public_6f6c86a _public_6f6c86a
#define public_6f6c875 _public_6f6c875
#define public_6f6c87f _public_6f6c87f
#define public_6f6c887 _public_6f6c887
#define public_6f6c891 _public_6f6c891
#define public_6f6c8a1 _public_6f6c8a1
#define public_6f6c8bc _public_6f6c8bc

PROC_DECLARE(0x6f6c580, internal_6f6c580, public_6f6c580);
extern "C" NAKED register_t __cdecl internal_6f6c580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fafda8 @0x6f6c582*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafda8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov al, byte ptr ss : [esp+0x54]
        push ebx
        push ebp
        push esi
        push edi
        xor esi, esi
        push esi
        push esi
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B], 0
        mov byte ptr ss : [esp+0x20], al
        call public_6f93790
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        mov edi, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edi]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x5C], esi
        jne public_6f6c771
        mov ebx, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ds : [public_6fb3564]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        push ebx
        mov dword ptr ss : [esp+0x20], esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6f6c818
        mov esi, dword ptr ss : [esp+0x64]
        public_6f6c5f7 : nop
        mov edx, dword ptr ss : [esp+0x50]
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_6f6c67a
/*FIXUP jmp dword ptr ds : [eax*4+public_6f6c8dc] @0x6f6c603*/
  JMPTB cmp eax, 0
  JMPTB je public_6f6c60a
  JMPTB cmp eax, 1
  JMPTB je public_6f6c60a
  JMPTB cmp eax, 2
  JMPTB je public_6f6c611
  JMPTB cmp eax, 3
  JMPTB je public_6f6c618
  JMPTB cmp eax, 4
  JMPTB je public_6f6c61f
  JMPTB cmp eax, 5
  JMPTB je public_6f6c60a
  JMPTB cmp eax, 6
  JMPTB je public_6f6c637
  JMPTB cmp eax, 7
  JMPTB je public_6f6c637
  JMPTB int 3
/*FIXUP public_6f6c60a : nop
        push offset public_6fd1cd8 @0x6f6c60a*/
  FIXUP public_6f6c60a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd8
        jmp public_6f6c624
/*FIXUP public_6f6c611 : nop
        push offset public_6fd1cd4 @0x6f6c611*/
  FIXUP public_6f6c611 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd4
        jmp public_6f6c624
/*FIXUP public_6f6c618 : nop
        push offset public_6fd1cd0 @0x6f6c618*/
  FIXUP public_6f6c618 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd0
        jmp public_6f6c624
/*FIXUP public_6f6c61f : nop
        push offset public_6fd1ccc @0x6f6c61f*/
  FIXUP public_6f6c61f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1ccc
        public_6f6c624 : nop
        mov edi, dword ptr ds : [esi+8]
        mov ecx, esi
        call public_6eb5f30
        cmp eax, edi
        setne al
        test al, al
        je public_6f6c67a
        public_6f6c637 : nop
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x13], 1
        je public_6f6c662
        mov edx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6f6c650 : nop
        cmp dword ptr ds : [eax+0x14], edx
        jne public_6f6c65c
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, dword ptr ds : [ebx]
        je public_6f6c67a
        public_6f6c65c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6c650
        public_6f6c662 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f1e390
        public_6f6c67a : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x30]
        inc eax
        push ecx
        push eax
        push ebx
        mov dword ptr ss : [esp+0x20], eax
        call ebp
        add esp, 0xC
        test eax, eax
        je public_6f6c5f7
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov edi, dword ptr ss : [esp+0x70]
        je public_6f6c87f
        public_6f6c6a7 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6f6c875
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x64], 4
        jne public_6f6c83a
        mov edi, dword ptr ss : [esp+0x6C]
        test edi, edi
        je public_6f6c83a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ecx]
        or ebx, 0xFFFFFFFF
        cmp esi, ecx
        mov dword ptr ss : [esp+0x6C], 0x7F7FFFFF
        je public_6f6c832
        mov ebp, dword ptr ds : [public_6fb3578]
        nop 
        public_6f6c6f0 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_6fb3564]
        mov eax, dword ptr ss : [esp+0x74]
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call ebp
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [edi]
        add esp, 0x1C
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fcom dword ptr ss : [esp+0x6C]
        fnstsw ax
        test ah, 5
        jp public_6f6c822
        mov ebx, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x6C]
        jmp public_6f6c824
        public_6f6c771 : nop
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        jne public_6f6c818
        mov ecx, dword ptr ss : [esp+0x50]
        lea eax, ds:[ecx-1]
        cmp eax, 7
        ja public_6f6c87f
/*FIXUP jmp dword ptr ds : [eax*4+public_6f6c8fc] @0x6f6c79d*/
  JMPTB cmp eax, 0
  JMPTB je public_6f6c7a4
  JMPTB cmp eax, 1
  JMPTB je public_6f6c7a4
  JMPTB cmp eax, 2
  JMPTB je public_6f6c7ab
  JMPTB cmp eax, 3
  JMPTB je public_6f6c7b2
  JMPTB cmp eax, 4
  JMPTB je public_6f6c7b9
  JMPTB cmp eax, 5
  JMPTB je public_6f6c7a4
  JMPTB cmp eax, 6
  JMPTB je public_6f6c7d7
  JMPTB cmp eax, 7
  JMPTB je public_6f6c7d7
  JMPTB int 3
/*FIXUP public_6f6c7a4 : nop
        push offset public_6fd1cd8 @0x6f6c7a4*/
  FIXUP public_6f6c7a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd8
        jmp public_6f6c7be
/*FIXUP public_6f6c7ab : nop
        push offset public_6fd1cd4 @0x6f6c7ab*/
  FIXUP public_6f6c7ab : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd4
        jmp public_6f6c7be
/*FIXUP public_6f6c7b2 : nop
        push offset public_6fd1cd0 @0x6f6c7b2*/
  FIXUP public_6f6c7b2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1cd0
        jmp public_6f6c7be
/*FIXUP public_6f6c7b9 : nop
        push offset public_6fd1ccc @0x6f6c7b9*/
  FIXUP public_6f6c7b9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1ccc
        public_6f6c7be : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov esi, dword ptr ds : [ecx+8]
        call public_6eb5f30
        cmp eax, esi
        setne al
        test al, al
        je public_6f6c87f
        public_6f6c7d7 : nop
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f6c7ff
        mov edx, dword ptr ds : [edi]
        public_6f6c7e5 : nop
        cmp dword ptr ds : [eax+0x14], edx
        jne public_6f6c7f9
        mov ebx, dword ptr ss : [esp+0x68]
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, dword ptr ds : [ebx]
        je public_6f6c6a7
        public_6f6c7f9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6c7e5
        public_6f6c7ff : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edi
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f1e390
        jmp public_6f6c6a7
        public_6f6c818 : nop
        mov dword ptr ss : [esp+0x64], 5
        jmp public_6f6c887
        public_6f6c822 : nop
        fstp st(0)
        public_6f6c824 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp esi, ecx
        jne public_6f6c6f0
        public_6f6c832 : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edx], ebx
        jmp public_6f6c891
        public_6f6c83a : nop
        lea esi, ds:[eax-1]
        test esi, esi
        jne public_6f6c845
        xor eax, eax
        jmp public_6f6c85b
        public_6f6c845 : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f6c85b : nop
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        jbe public_6f6c86a
        public_6f6c865 : nop
        dec eax
        mov edx, dword ptr ds : [edx]
        jne public_6f6c865
        public_6f6c86a : nop
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edx], eax
        jmp public_6f6c891
        public_6f6c875 : nop
        mov dword ptr ss : [esp+0x64], 3
        jmp public_6f6c887
        public_6f6c87f : nop
        mov dword ptr ss : [esp+0x64], 2
        public_6f6c887 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6f6c891 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov edi, ecx
        je public_6f6c8bc
        public_6f6c8a1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f6c8a1
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f6c8bc : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x68]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6f6c580)
        ASM_EXPORT_ENTRY_FIRST(0x6f6c60a, public_6f6c60a)
        ASM_EXPORT_ENTRY(0x6f6c611, public_6f6c611)
        ASM_EXPORT_ENTRY(0x6f6c618, public_6f6c618)
        ASM_EXPORT_ENTRY(0x6f6c61f, public_6f6c61f)
        ASM_EXPORT_ENTRY(0x6f6c637, public_6f6c637)
        ASM_EXPORT_ENTRY(0x6f6c7a4, public_6f6c7a4)
        ASM_EXPORT_ENTRY(0x6f6c7ab, public_6f6c7ab)
        ASM_EXPORT_ENTRY(0x6f6c7b2, public_6f6c7b2)
        ASM_EXPORT_ENTRY(0x6f6c7b9, public_6f6c7b9)
        ASM_EXPORT_ENTRY_LAST(0x6f6c7d7, public_6f6c7d7)
    }
}

#undef public_6f6c5f7
#undef public_6f6c60a
#undef public_6f6c611
#undef public_6f6c618
#undef public_6f6c61f
#undef public_6f6c624
#undef public_6f6c637
#undef public_6f6c650
#undef public_6f6c65c
#undef public_6f6c662
#undef public_6f6c67a
#undef public_6f6c6a7
#undef public_6f6c6f0
#undef public_6f6c771
#undef public_6f6c7a4
#undef public_6f6c7ab
#undef public_6f6c7b2
#undef public_6f6c7b9
#undef public_6f6c7be
#undef public_6f6c7d7
#undef public_6f6c7e5
#undef public_6f6c7f9
#undef public_6f6c7ff
#undef public_6f6c818
#undef public_6f6c822
#undef public_6f6c824
#undef public_6f6c832
#undef public_6f6c83a
#undef public_6f6c845
#undef public_6f6c85b
#undef public_6f6c865
#undef public_6f6c86a
#undef public_6f6c875
#undef public_6f6c87f
#undef public_6f6c887
#undef public_6f6c891
#undef public_6f6c8a1
#undef public_6f6c8bc

#pragma init_seg(compiler)
extern "C" void const* const public_6f6c60a = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c60a);
extern "C" void const* const public_6f6c611 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c611);
extern "C" void const* const public_6f6c618 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c618);
extern "C" void const* const public_6f6c61f = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c61f);
extern "C" void const* const public_6f6c637 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c637);
extern "C" void const* const public_6f6c7a4 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c7a4);
extern "C" void const* const public_6f6c7ab = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c7ab);
extern "C" void const* const public_6f6c7b2 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c7b2);
extern "C" void const* const public_6f6c7b9 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c7b9);
extern "C" void const* const public_6f6c7d7 = __AsmFindLabelExport(&internal_6f6c580, 0x6f6c7d7);
