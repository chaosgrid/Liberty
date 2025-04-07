#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e720);
CLANG_FORWARD_PROC_SYMBOL(public_6c31730);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c31802 _public_6c31802
#define public_6c31810 _public_6c31810
#define public_6c31824 _public_6c31824
#define public_6c31830 _public_6c31830
#define public_6c31849 _public_6c31849
#define public_6c3185f _public_6c3185f
#define public_6c31870 _public_6c31870
#define public_6c318be _public_6c318be
#define public_6c318fb _public_6c318fb
#define public_6c31905 _public_6c31905
#define public_6c31937 _public_6c31937

PROC_DECLARE(0x6c317b0, internal_6c317b0, public_6c317b0);
extern "C" NAKED register_t __cdecl internal_6c317b0()
{
    __asm
    {
        mov eax, 0x2014
        call public_6c34ec0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2020]
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov byte ptr ss : [esp+0xF], 0
        jne public_6c31830
        mov eax, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_6c2e720
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        add esp, 4
        cmp ecx, edi
        je public_6c31810
        cmp ecx, ebx
        je public_6c31802
        call public_6c2dff0
        mov dword ptr ds : [esi+0x10], ebx
        public_6c31802 : nop
        cmp edi, ebx
        mov dword ptr ds : [esi+0x10], edi
        je public_6c31810
        mov ecx, edi
        call public_6c2dfe0
        public_6c31810 : nop
        cmp dword ptr ds : [esi+0x10], ebx
        jne public_6c31824
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2014
        ret 4
        public_6c31824 : nop
        lea edx, ds:[esi+0x18]
        push edx
        lea ecx, ds:[esi-8]
        call public_6c31730
        public_6c31830 : nop
        mov edx, dword ptr ds : [public_6c37d54]
        cmp edx, ebx
        jne public_6c31849
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2014
        ret 4
        public_6c31849 : nop
        mov eax, dword ptr ds : [esi+0x14]
        xor ecx, ecx
        cmp word ptr ds : [eax+0x12], bx
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6c31937
        push ebp
        jmp public_6c31870
        public_6c3185f : nop
        mov edx, dword ptr ds : [public_6c37d54]
        mov ecx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6c31870 : nop
        mov eax, dword ptr ds : [esi+0x14]
        movzx eax, word ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [edi+0x34]
        add eax, ecx
        lea eax, ds:[eax+eax*2]
        lea ebp, ds:[edi+eax*4+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        movzx eax, word ptr ds : [eax+0x10]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [ecx+eax*4]
        lea edi, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6c318be
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+0x40]
        test eax, eax
        jge public_6c318fb
        public_6c318be : nop
        mov edx, dword ptr ss : [ebp]
        push edx
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6c37a00 @0x6c318c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a00
        push eax
        call public_6c21170
        push eax
        push 0x2B9
/*FIXUP push offset public_6c37778 @0x6c318d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37778
        mov ecx, 0x100003
/*FIXUP push offset public_6c3702c @0x6c318e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push ecx
        mov ecx, dword ptr ds : [public_6c36010]
        call dword ptr ds : [ecx]
        add esp, 0x20
        mov dword ptr ds : [edi], ebx
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6c31905
        public_6c318fb : nop
        test ebx, ebx
        je public_6c31905
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_6c31905 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        movzx edx, word ptr ds : [ecx+0x12]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6c3185f
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        pop ebp
        je public_6c31937
        pop edi
        pop esi
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x2014
        ret 4
        public_6c31937 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x2014
        ret 4
        UNREACHABLE_TRAP(0x6c317b0)
    }
}

#undef public_6c31802
#undef public_6c31810
#undef public_6c31824
#undef public_6c31830
#undef public_6c31849
#undef public_6c3185f
#undef public_6c31870
#undef public_6c318be
#undef public_6c318fb
#undef public_6c31905
#undef public_6c31937
