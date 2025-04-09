#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e800);
CLANG_FORWARD_PROC_SYMBOL(public_45e940);
CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_57c9b0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);

#define public_45f73a _public_45f73a
#define public_45f7ad _public_45f7ad
#define public_45f7cf _public_45f7cf
#define public_45f7d6 _public_45f7d6
#define public_45f7ee _public_45f7ee
#define public_45f803 _public_45f803
#define public_45f818 _public_45f818

PROC_DECLARE(0x45f700, internal_45f700, public_45f700);
extern "C" NAKED register_t __cdecl internal_45f700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [ecx+0x18]
        test al, al
        je public_45f818
        test byte ptr ds : [esi+0x6C], 1
        je public_45f818
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0xFFFFFFF3
        cmp eax, 0x1B
        ja public_45f818
/*FIXUP movzx eax, byte ptr ds : [eax+public_45f83c] @0x45f72c*/
/*FIXUP jmp dword ptr ds : [eax*4+public_45f828] @0x45f733*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000a95c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000a95c : nop
        je public_45f73a
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000a958
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a958 : nop
        je public_45f818
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000a954
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a954 : nop
        je public_45f818
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000a950
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a950 : nop
        je public_45f818
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000a94c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a94c : nop
        je public_45f818
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000a948
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a948 : nop
        je public_45f818
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000a944
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a944 : nop
        je public_45f818
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000a940
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a940 : nop
        je public_45f818
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000a93c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a93c : nop
        je public_45f818
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000a938
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a938 : nop
        je public_45f818
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000a934
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a934 : nop
        je public_45f818
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000a930
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a930 : nop
        je public_45f818
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000a92c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a92c : nop
        je public_45f818
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000a928
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a928 : nop
        je public_45f818
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000a924
  JMPTB mov eax, 1
  JMPTB public_4c0000000000a924 : nop
        je public_45f7d6
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000a920
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a920 : nop
        je public_45f818
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000a91c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a91c : nop
        je public_45f818
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000a918
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a918 : nop
        je public_45f818
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000a914
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a914 : nop
        je public_45f818
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000a910
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a910 : nop
        je public_45f818
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000a90c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a90c : nop
        je public_45f818
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000a908
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a908 : nop
        je public_45f818
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000a904
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a904 : nop
        je public_45f818
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000a900
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a900 : nop
        je public_45f818
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000a8fc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a8fc : nop
        je public_45f818
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000a8f8
  JMPTB mov eax, 2
  JMPTB public_4c0000000000a8f8 : nop
        je public_45f7ee
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000a8f4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000a8f4 : nop
        je public_45f818
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000a8f0
  JMPTB mov eax, 3
  JMPTB public_4c0000000000a8f0 : nop
        je public_45f803
  JMPTB int 3
        public_45f73a : nop
        push 0
        push 0
        mov ecx, esi
        call public_57c2c0
        test eax, eax
        jle public_45f7ad
        mov edx, dword ptr ds : [esi+0x564]
        lea eax, ss:[esp+4]
        push eax
        push 0x400
        lea ecx, ds:[esi+0x564]
/*FIXUP push offset public_66d4e0 @0x45f75f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d4e0
        lea eax, ds:[esi+0x4E8]
        push eax
        call dword ptr ds : [edx]
        test al, al
        je public_45f7ad
        mov ecx, dword ptr ds : [public_67ecd4]
        test ecx, ecx
        je public_45f7ad
        mov dx, word ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        mov word ptr ss : [esp+0xC], dx
        mov edx, dword ptr ds : [esi+0x568]
        push 0xFFFFFFFF
        push edx
        mov edx, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_66d4e0 @0x45f796*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d4e0
        push edx
        mov byte ptr ss : [esp+0x1E], 0
        mov byte ptr ss : [esp+0x1F], 0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax]
        public_45f7ad : nop
        mov ecx, esi
        call public_57bff0
        mov al, byte ptr ds : [esi+0x539]
        test al, al
        je public_45f7cf
        push 0
        call public_46a3c0
        add esp, 4
        mov byte ptr ds : [esi+0x539], 0
        public_45f7cf : nop
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_45f7d6 : nop
        mov ecx, esi
        call public_57bff0
        push 0
        call public_46a3c0
        add esp, 4
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_45f7ee : nop
        mov ecx, esi
        call public_45e940
        mov ecx, esi
        call public_57d330
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_45f803 : nop
        mov ecx, esi
        call public_45e800
        mov ecx, esi
        call public_57d330
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_45f818 : nop
        push ecx
        mov ecx, esi
        call public_57c9b0
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x45f700)
        ASM_EXPORT_ENTRY_SINGLE(0x45f818, public_45f818)
    }
}

#undef public_45f73a
#undef public_45f7ad
#undef public_45f7cf
#undef public_45f7d6
#undef public_45f7ee
#undef public_45f803
#undef public_45f818

#pragma init_seg(compiler)
extern "C" void const* const public_45f818 = __AsmFindLabelExport(&internal_45f700, 0x45f818);
