#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef06d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabff5);

#define public_6ef0720 _public_6ef0720
#define public_6ef072b _public_6ef072b
#define public_6ef072d _public_6ef072d
#define public_6ef0752 _public_6ef0752
#define public_6ef0775 _public_6ef0775
#define public_6ef0790 _public_6ef0790
#define public_6ef07af _public_6ef07af
#define public_6ef07b1 _public_6ef07b1

PROC_DECLARE(0x6ef06d0, internal_6ef06d0, public_6ef06d0);
extern "C" NAKED register_t __cdecl internal_6ef06d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabff5 @0x6ef06d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabff5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6fb7744
        mov dword ptr ds : [edi+4], offset public_6fb7738
        mov edx, dword ptr ds : [edi+0x60]
        test edx, edx
        mov dword ptr ss : [esp+0x1C], 2
        je public_6ef0752
        mov esi, dword ptr ds : [public_6fcf258]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef072b
        lea esp, ss:[esp]
        public_6ef0720 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef072d
        add eax, 4
        cmp eax, ecx
        jne public_6ef0720
        public_6ef072b : nop
        mov eax, ecx
        public_6ef072d : nop
        cmp eax, ecx
        je public_6ef0752
        push eax
        push ecx
        add eax, 4
        push eax
        call public_6f6a640
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6ea1490
        add dword ptr ds : [esi+8], 0xFFFFFFFC
        public_6ef0752 : nop
        lea esi, ds:[edi+0x7C]
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        je public_6ef0790
        public_6ef0775 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        jne public_6ef0775
        public_6ef0790 : nop
        mov ecx, esi
        call public_6ecfec0
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        call public_6f15350
        lea eax, ds:[edi+0x68]
        test eax, eax
        je public_6ef07af
        lea esi, ds:[eax+4]
        jmp public_6ef07b1
        public_6ef07af : nop
        xor esi, esi
        public_6ef07b1 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        lea ecx, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x1C], 5
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], offset public_6fb43f8
        mov dword ptr ds : [edi], offset public_6fb4338
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ef06d0)
    }
}

#undef public_6ef0720
#undef public_6ef072b
#undef public_6ef072d
#undef public_6ef0752
#undef public_6ef0775
#undef public_6ef0790
#undef public_6ef07af
#undef public_6ef07b1
