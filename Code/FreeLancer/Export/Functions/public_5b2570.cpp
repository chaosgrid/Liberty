#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e890);
CLANG_FORWARD_PROC_SYMBOL(public_41eac0);
CLANG_FORWARD_PROC_SYMBOL(public_41ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_424c60);
CLANG_FORWARD_PROC_SYMBOL(public_424cb0);
CLANG_FORWARD_PROC_SYMBOL(public_425160);
CLANG_FORWARD_PROC_SYMBOL(public_471f30);
CLANG_FORWARD_PROC_SYMBOL(public_473be0);
CLANG_FORWARD_PROC_SYMBOL(public_473ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2570);

#define public_5b25b6 _public_5b25b6
#define public_5b25df _public_5b25df
#define public_5b25f7 _public_5b25f7
#define public_5b2610 _public_5b2610
#define public_5b2629 _public_5b2629
#define public_5b263c _public_5b263c
#define public_5b264c _public_5b264c
#define public_5b267b _public_5b267b
#define public_5b2686 _public_5b2686
#define public_5b268d _public_5b268d
#define public_5b26d1 _public_5b26d1
#define public_5b26fb _public_5b26fb
#define public_5b270f _public_5b270f
#define public_5b2727 _public_5b2727
#define public_5b275d _public_5b275d
#define public_5b2764 _public_5b2764
#define public_5b276c _public_5b276c
#define public_5b277e _public_5b277e

PROC_DECLARE(0x5b2570, internal_5b2570, public_5b2570);
extern "C" NAKED register_t __cdecl internal_5b2570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_5c6e80]
        test eax, eax
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        je public_5b25b6
        mov edx, dword ptr ds : [public_67eca0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebp
        push edi
        push esi
        push edx
        mov ecx, eax
        mov dword ptr ss : [esp+0x30], 0
        call dword ptr ds : [public_5c6ec8]
        test al, al
        je public_5b25b6
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_5b25b6 : nop
        cmp esi, 0x1C
        ja public_5b26d1
        je public_5b264c
        lea eax, ds:[esi-2]
        cmp eax, 0x12
        ja public_5b277e
/*FIXUP movzx eax, byte ptr ds : [eax+public_5b27ac] @0x5b25d1*/
/*FIXUP jmp dword ptr ds : [eax*4+public_5b2794] @0x5b25d8*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d848
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d848 : nop
        je public_5b263c
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d844
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d844 : nop
        je public_5b277e
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d840
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d840 : nop
        je public_5b277e
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d83c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d83c : nop
        je public_5b277e
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d838
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d838 : nop
        je public_5b277e
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d834
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d834 : nop
        je public_5b25f7
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d830
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d830 : nop
        je public_5b2610
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d82c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d82c : nop
        je public_5b277e
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d828
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d828 : nop
        je public_5b277e
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d824
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d824 : nop
        je public_5b277e
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d820
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d820 : nop
        je public_5b277e
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d81c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d81c : nop
        je public_5b277e
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d818
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d818 : nop
        je public_5b277e
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d814
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d814 : nop
        je public_5b277e
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d810
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d810 : nop
        je public_5b2629
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d80c
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d80c : nop
        je public_5b277e
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d808
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d808 : nop
        je public_5b277e
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d804
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d804 : nop
        je public_5b277e
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d800
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d800 : nop
        je public_5b25df
  JMPTB int 3
        public_5b25df : nop
        call public_425160
        test al, al
        je public_5b277e
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        ret 0x10
        public_5b25f7 : nop
        call public_41eac0
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push esi
        push edx
        call dword ptr ds : [public_5c7278]
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_5b2610 : nop
        call public_41ecf0
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push esi
        push edx
        call dword ptr ds : [public_5c7278]
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_5b2629 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_5c72dc]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b263c : nop
        push 0
        call dword ptr ds : [public_5c727c]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b264c : nop
        cmp edi, 1
        sete dl
        mov byte ptr ds : [public_615ba9], dl
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov al, byte ptr ds : [public_615ba9]
        je public_5b2686
        mov cl, byte ptr ds : [public_67a438]
        test cl, cl
        je public_5b267b
        mov cl, byte ptr ds : [public_679be5]
        test cl, cl
        je public_5b2686
        public_5b267b : nop
        test al, al
        mov byte ptr ds : [public_615ba8], 0
        je public_5b268d
        public_5b2686 : nop
        mov byte ptr ds : [public_615ba8], 1
        public_5b268d : nop
        push eax
        call public_424c60
        mov al, byte ptr ds : [public_615ba9]
        add esp, 4
        test al, al
        jne public_5b277e
        mov al, byte ptr ds : [public_679be5]
        test al, al
        je public_5b277e
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push esi
        push edx
        call dword ptr ds : [public_5c7278]
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_5b26d1 : nop
        cmp esi, 0x112
        ja public_5b276c
        je public_5b270f
        cmp esi, 0x84
        je public_5b26fb
        cmp esi, 0x105
        jne public_5b277e
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b26fb : nop
        mov al, byte ptr ds : [public_679be5]
        test al, al
        je public_5b277e
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        ret 0x10
        public_5b270f : nop
        cmp edi, 0xF060
        je public_5b2727
        cmp edi, 0xF140
        jne public_5b277e
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b2727 : nop
        call public_424cb0
        test al, al
        je public_5b277e
        call public_473ca0
        test eax, eax
        jne public_5b2764
        call public_473be0
        test al, al
        jne public_5b2764
        mov al, byte ptr ds : [public_67ecc8]
        test al, al
        je public_5b275d
        push 0
        call public_471f30
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b275d : nop
        mov byte ptr ds : [public_67ecc9], 1
        public_5b2764 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_5b276c : nop
        cmp esi, 0x200
        jne public_5b277e
        push ebp
        push edi
        call public_41e890
        add esp, 8
        public_5b277e : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push esi
        push edx
        call dword ptr ds : [public_5c7278]
        pop edi
        pop esi
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x5b2570)
        ASM_EXPORT_ENTRY_SINGLE(0x5b277e, public_5b277e)
    }
}

#undef public_5b25b6
#undef public_5b25df
#undef public_5b25f7
#undef public_5b2610
#undef public_5b2629
#undef public_5b263c
#undef public_5b264c
#undef public_5b267b
#undef public_5b2686
#undef public_5b268d
#undef public_5b26d1
#undef public_5b26fb
#undef public_5b270f
#undef public_5b2727
#undef public_5b275d
#undef public_5b2764
#undef public_5b276c
#undef public_5b277e

#pragma init_seg(compiler)
extern "C" void const* const public_5b277e = __AsmFindLabelExport(&internal_5b2570, 0x5b277e);
