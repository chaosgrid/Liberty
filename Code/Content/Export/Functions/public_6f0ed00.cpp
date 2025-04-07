#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0470);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d560);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d680);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dd70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1de30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e060);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e120);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e890);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e970);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad5a0);

#define public_6f0ed80 _public_6f0ed80
#define public_6f0edb1 _public_6f0edb1
#define public_6f0edc0 _public_6f0edc0
#define public_6f0edd6 _public_6f0edd6
#define public_6f0eddc _public_6f0eddc
#define public_6f0ede3 _public_6f0ede3

PROC_DECLARE(0x6f0ed00, internal_6f0ed00, public_6f0ed00);
extern "C" NAKED register_t __cdecl internal_6f0ed00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad5a0 @0x6f0ed02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad5a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_6fb85d8
        mov ebx, dword ptr ds : [esi+0x9C]
        lea edi, ds:[esi+0x98]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0x17
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6ed0470
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0x3C]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        cmp ecx, eax
        je public_6f0edb1
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6f0edb1
        nop 
        lea esp, ss:[esp]
        public_6f0ed80 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f0edb1
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        jne public_6f0ed80
        public_6f0edb1 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f0ede3
        lea ebx, ds:[ebx]
        public_6f0edc0 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_6f0eddc
        cmp dword ptr ds : [edi+0xC], ebx
        je public_6f0eddc
        cmp ecx, ebx
        je public_6f0edd6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6f0edd6 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        public_6f0eddc : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x20]
        jne public_6f0edc0
        public_6f0ede3 : nop
        lea ecx, ds:[esi+0x198]
        mov byte ptr ss : [esp+0x24], 0x16
        call public_6f1d560
        lea ecx, ds:[esi+0x184]
        mov byte ptr ss : [esp+0x24], 0x15
        call public_6f1e2d0
        lea ecx, ds:[esi+0x174]
        mov byte ptr ss : [esp+0x24], 0x14
        call public_6eec8d0
        mov eax, dword ptr ds : [esi+0x16C]
        mov ecx, dword ptr ds : [esi+0x168]
        lea edi, ds:[esi+0x164]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0x13
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov ebp, dword ptr ds : [esi+0x15C]
        add esp, 4
        lea edi, ds:[esi+0x158]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x12
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x150]
        add esp, 4
        lea edi, ds:[esi+0x14C]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x11
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x144]
        add esp, 4
        lea edi, ds:[esi+0x140]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x10
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x138]
        add esp, 4
        lea edi, ds:[esi+0x134]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xF
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x12C]
        add esp, 4
        lea edi, ds:[esi+0x128]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xE
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6f1e7b0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x114]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x24], 0xD
        call public_6f1e120
        lea ecx, ds:[esi+0x100]
        mov byte ptr ss : [esp+0x24], 0xC
        call public_6f1e060
        lea ecx, ds:[esi+0xEC]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_6f1dfa0
        mov edx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [esi+0xE0]
        lea edi, ds:[esi+0xDC]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xA
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov ebp, dword ptr ds : [esi+0xD4]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0xD0]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 9
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push ebp
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f1e970
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0xC8]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0xC4]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 8
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push ebp
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f1e890
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0xB8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x24], 7
        call public_6f1de30
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x24], 6
        call public_6f1dd70
        lea ecx, ds:[esi+0x98]
        mov byte ptr ss : [esp+0x24], 5
        call public_6f1dd10
        lea ecx, ds:[esi+0x8C]
        mov byte ptr ss : [esp+0x24], 4
        call public_6f1dc70
        mov edi, dword ptr ds : [public_6fb3034]
        lea ecx, ds:[esi+0x68]
        mov byte ptr ss : [esp+0x24], 3
        call edi
        lea ecx, ds:[esi+0x50]
        mov byte ptr ss : [esp+0x24], 2
        call edi
        lea ecx, ds:[esi+0x3C]
        mov byte ptr ss : [esp+0x24], 1
        call public_6f1d680
        lea ecx, ds:[esi+0x1C]
        mov byte ptr ss : [esp+0x24], bl
        call public_6f15350
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi], offset public_6fb385c
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f0ed00)
    }
}

#undef public_6f0ed80
#undef public_6f0edb1
#undef public_6f0edc0
#undef public_6f0edd6
#undef public_6f0eddc
#undef public_6f0ede3
