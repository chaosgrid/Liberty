#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f38140);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f810);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f7f0);

#define public_6f6d5f7 _public_6f6d5f7
#define public_6f6d606 _public_6f6d606
#define public_6f6d620 _public_6f6d620
#define public_6f6d633 _public_6f6d633
#define public_6f6d650 _public_6f6d650
#define public_6f6d674 _public_6f6d674
#define public_6f6d686 _public_6f6d686
#define public_6f6d691 _public_6f6d691
#define public_6f6d694 _public_6f6d694
#define public_6f6d6a0 _public_6f6d6a0
#define public_6f6d6b3 _public_6f6d6b3
#define public_6f6d6bf _public_6f6d6bf
#define public_6f6d6c2 _public_6f6d6c2
#define public_6f6d6de _public_6f6d6de
#define public_6f6d6f0 _public_6f6d6f0
#define public_6f6d720 _public_6f6d720
#define public_6f6d726 _public_6f6d726
#define public_6f6d736 _public_6f6d736
#define public_6f6d744 _public_6f6d744
#define public_6f6d753 _public_6f6d753
#define public_6f6d768 _public_6f6d768
#define public_6f6d773 _public_6f6d773
#define public_6f6d775 _public_6f6d775
#define public_6f6d782 _public_6f6d782
#define public_6f6d796 _public_6f6d796
#define public_6f6d7a2 _public_6f6d7a2
#define public_6f6d7a4 _public_6f6d7a4
#define public_6f6d7c2 _public_6f6d7c2
#define public_6f6d7d5 _public_6f6d7d5
#define public_6f6d7e4 _public_6f6d7e4
#define public_6f6d7fa _public_6f6d7fa
#define public_6f6d7ff _public_6f6d7ff
#define public_6f6d810 _public_6f6d810

PROC_DECLARE(0x6f6d5d0, internal_6f6d5d0, public_6f6d5d0);
extern "C" NAKED register_t __cdecl internal_6f6d5d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        push ebx
        push esi
        push edi
        jne public_6f6d650
        mov esi, dword ptr ds : [public_6fd1cac]
        mov ecx, dword ptr ds : [public_6fd1cb0]
        cmp esi, ecx
        je public_6f6d810
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        public_6f6d5f7 : nop
        cmp dword ptr ds : [esi], eax
        je public_6f6d606
        add esi, 0x14
        cmp esi, ecx
        jne public_6f6d5f7
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f6d606 : nop
        cmp esi, ecx
        je public_6f6d810
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6f6d633
        lea edi, ds:[esi+4]
        lea esp, ss:[esp]
        public_6f6d620 : nop
        push eax
        mov ecx, edi
        call public_6f69a10
        cmp eax, dword ptr ds : [esi+0xC]
        jne public_6f6d620
        mov ecx, dword ptr ds : [public_6fd1cb0]
        public_6f6d633 : nop
        push esi
        push ecx
        add esi, 0x14
        push esi
        call public_6f6f810
        mov eax, dword ptr ds : [public_6fd1cb0]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFEC
        push eax
        jmp public_6f6d7ff
        public_6f6d650 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        mov eax, dword ptr ds : [public_6fd1cb0]
        jne public_6f6d736
        mov ebx, dword ptr ds : [public_6fd1cac]
        cmp ebx, eax
        je public_6f6d810
        lea esi, ds:[ebx+0xC]
        public_6f6d674 : nop
        mov eax, dword ptr ds : [esi-4]
        mov ecx, dword ptr ds : [esi]
        cmp eax, ecx
        lea edi, ds:[esi-8]
        je public_6f6d691
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx]
        public_6f6d686 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d694
        add eax, 4
        cmp eax, ecx
        jne public_6f6d686
        public_6f6d691 : nop
        mov eax, dword ptr ds : [edi+8]
        public_6f6d694 : nop
        cmp eax, ecx
        je public_6f6d6a0
        push eax
        mov ecx, edi
        call public_6f69a10
        public_6f6d6a0 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f6d6de
        mov eax, dword ptr ds : [esi-4]
        mov ecx, dword ptr ds : [esi]
        cmp eax, ecx
        je public_6f6d6bf
        public_6f6d6b3 : nop
        cmp dword ptr ds : [eax], 0
        je public_6f6d6c2
        add eax, 4
        cmp eax, ecx
        jne public_6f6d6b3
        public_6f6d6bf : nop
        mov eax, dword ptr ds : [edi+8]
        public_6f6d6c2 : nop
        cmp eax, ecx
        je public_6f6d6de
/*FIXUP push offset public_6fbbcf0 @0x6f6d6c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcf0
        mov ecx, edi
        call public_6eb5f30
        cmp eax, dword ptr ds : [esi]
        je public_6f6d6de
        push eax
        mov ecx, edi
        call public_6f69a10
        public_6f6d6de : nop
        mov ecx, dword ptr ds : [esi-4]
        test ecx, ecx
        je public_6f6d6f0
        mov eax, dword ptr ds : [esi]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6f6d720
        public_6f6d6f0 : nop
        mov eax, dword ptr ds : [public_6fd1cb0]
        push ebx
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        call public_6f6f810
        mov eax, dword ptr ds : [public_6fd1cb0]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFEC
        push eax
        mov ecx, offset public_6fd1ca8
        call public_6f38140
        sub dword ptr ds : [public_6fd1cb0], 0x14
        jmp public_6f6d726
        public_6f6d720 : nop
        add ebx, 0x14
        add esi, 0x14
        public_6f6d726 : nop
        cmp ebx, dword ptr ds : [public_6fd1cb0]
        jne public_6f6d674
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f6d736 : nop
        mov edi, dword ptr ds : [public_6fd1cac]
        cmp edi, eax
        je public_6f6d810
        public_6f6d744 : nop
        cmp dword ptr ds : [edi], ecx
        je public_6f6d753
        add edi, 0x14
        cmp edi, eax
        jne public_6f6d744
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f6d753 : nop
        cmp edi, eax
        je public_6f6d810
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        cmp eax, ecx
        lea esi, ds:[edi+4]
        je public_6f6d773
        public_6f6d768 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d775
        add eax, 4
        cmp eax, ecx
        jne public_6f6d768
        public_6f6d773 : nop
        mov eax, ecx
        public_6f6d775 : nop
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6f6d782
        push eax
        mov ecx, esi
        call public_6f69a10
        public_6f6d782 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f6d7c2
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f6d7a2
        public_6f6d796 : nop
        cmp dword ptr ds : [eax], 0
        je public_6f6d7a4
        add eax, 4
        cmp eax, ecx
        jne public_6f6d796
        public_6f6d7a2 : nop
        mov eax, ecx
        public_6f6d7a4 : nop
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6f6d7c2
/*FIXUP push offset public_6fbbcf0 @0x6f6d7a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcf0
        mov ecx, esi
        call public_6eb5f30
        cmp eax, dword ptr ds : [esi+8]
        je public_6f6d7c2
        push eax
        mov ecx, esi
        call public_6f69a10
        public_6f6d7c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f6d7d5
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6f6d810
        public_6f6d7d5 : nop
        mov ebx, dword ptr ds : [public_6fd1cb0]
        lea esi, ds:[edi+0x14]
        cmp esi, ebx
        je public_6f6d7fa
        sub edi, esi
        public_6f6d7e4 : nop
        push esi
        lea ecx, ds:[edi+esi]
        call public_6f7f7f0
        add esi, 0x14
        cmp esi, ebx
        jne public_6f6d7e4
        mov ebx, dword ptr ds : [public_6fd1cb0]
        public_6f6d7fa : nop
        push ebx
        add ebx, 0xFFFFFFEC
        push ebx
        public_6f6d7ff : nop
        mov ecx, offset public_6fd1ca8
        call public_6f38140
        sub dword ptr ds : [public_6fd1cb0], 0x14
        public_6f6d810 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6d5d0)
    }
}

#undef public_6f6d5f7
#undef public_6f6d606
#undef public_6f6d620
#undef public_6f6d633
#undef public_6f6d650
#undef public_6f6d674
#undef public_6f6d686
#undef public_6f6d691
#undef public_6f6d694
#undef public_6f6d6a0
#undef public_6f6d6b3
#undef public_6f6d6bf
#undef public_6f6d6c2
#undef public_6f6d6de
#undef public_6f6d6f0
#undef public_6f6d720
#undef public_6f6d726
#undef public_6f6d736
#undef public_6f6d744
#undef public_6f6d753
#undef public_6f6d768
#undef public_6f6d773
#undef public_6f6d775
#undef public_6f6d782
#undef public_6f6d796
#undef public_6f6d7a2
#undef public_6f6d7a4
#undef public_6f6d7c2
#undef public_6f6d7d5
#undef public_6f6d7e4
#undef public_6f6d7fa
#undef public_6f6d7ff
#undef public_6f6d810
