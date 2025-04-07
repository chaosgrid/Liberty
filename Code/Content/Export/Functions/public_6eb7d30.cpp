#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfc80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfd60);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecff00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0d80);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa508);

#define public_6eb7d90 _public_6eb7d90
#define public_6eb7db6 _public_6eb7db6
#define public_6eb7de5 _public_6eb7de5
#define public_6eb7df6 _public_6eb7df6
#define public_6eb7e0e _public_6eb7e0e
#define public_6eb7e42 _public_6eb7e42
#define public_6eb7e67 _public_6eb7e67
#define public_6eb7e71 _public_6eb7e71

PROC_DECLARE(0x6eb7d30, internal_6eb7d30, public_6eb7d30);
extern "C" NAKED register_t __cdecl internal_6eb7d30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa508 @0x6eb7d32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa508
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fb4710
        lea ebx, ds:[esi+0x1C4]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], 0xC
        call public_6ecfec0
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+0x1B0]
        push eax
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+0x1B4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6eb7db6
        nop 
        lea esp, ss:[esp]
        public_6eb7d90 : nop
        lea ecx, ds:[eax+0x10]
        call public_6ebb7f0
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6ecfe20
        mov ecx, dword ptr ds : [esi+0x1B4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6eb7d90
        public_6eb7db6 : nop
        lea ecx, ds:[esi+0x1B0]
        call public_6ed0d80
        mov ecx, esi
        call public_6eb8b70
        lea edx, ss:[esp+0x10]
        lea edi, ds:[esi+0x204]
        push edx
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6eb7e0e
        public_6eb7de5 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6eb7df6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        public_6eb7df6 : nop
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6ecfc80
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb7de5
        public_6eb7e0e : nop
        mov edi, dword ptr ds : [esi+0x300]
        lea ebp, ds:[esi+0x2FC]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_6fa8370
        mov eax, dword ptr ds : [esi+0x314]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eb7e71
        public_6eb7e42 : nop
        mov ecx, dword ptr ds : [edi+0x8C]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[edi+0x8C]
        je public_6eb7e67
        push eax
        call dword ptr ds : [public_6fb34e0]
        add esp, 4
        mov dword ptr ds : [edi+0x8C], 0xFFFFFFFF
        public_6eb7e67 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x314]
        jne public_6eb7e42
        public_6eb7e71 : nop
        mov eax, dword ptr ds : [esi+0x314]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x310]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6fa8370
        lea ecx, ds:[esi+0x31C]
        mov byte ptr ss : [esp+0x28], 0xB
        call public_6eec8d0
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xA
        mov dword ptr ss : [esp+0x14], eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov edi, dword ptr ss : [ebp+4]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 9
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_6fa8370
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        lea edi, ds:[esi+0x2F0]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov ebp, dword ptr ds : [edi+4]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 8
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        add esp, 4
        lea ecx, ds:[esi+0x2D4]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov byte ptr ss : [esp+0x28], 7
        call public_6eec8d0
        lea edi, ds:[esi+0x21C]
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ds:[edi+0x5C]
        mov byte ptr ss : [esp+0x28], 0xD
        call public_6f15350
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 6
        call public_6eb7900
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x28], 5
        call public_6ecfca0
        mov edx, dword ptr ds : [esi+0x1FC]
        lea edi, ds:[esi+0x1F8]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x14], edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x1E4]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov byte ptr ss : [esp+0x28], 3
        call public_6ecff00
        lea ecx, ds:[esi+0x1D0]
        mov byte ptr ss : [esp+0x28], 2
        call public_6ecff00
        mov edi, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x2C], 1
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_6fa8370
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x1B0]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ss : [esp+0x28], 0
        call public_6ecfd60
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6f0ed00
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6eb7d30)
    }
}

#undef public_6eb7d90
#undef public_6eb7db6
#undef public_6eb7de5
#undef public_6eb7df6
#undef public_6eb7e0e
#undef public_6eb7e42
#undef public_6eb7e67
#undef public_6eb7e71
