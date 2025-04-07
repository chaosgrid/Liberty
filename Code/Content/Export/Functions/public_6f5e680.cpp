#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f579c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5e550);
CLANG_FORWARD_PROC_SYMBOL(public_6f5e680);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f66ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf9a8);

#define public_6f5e6c1 _public_6f5e6c1
#define public_6f5e720 _public_6f5e720
#define public_6f5e75c _public_6f5e75c
#define public_6f5e76a _public_6f5e76a
#define public_6f5e76f _public_6f5e76f
#define public_6f5e77a _public_6f5e77a
#define public_6f5e790 _public_6f5e790
#define public_6f5e7af _public_6f5e7af
#define public_6f5e83d _public_6f5e83d
#define public_6f5e843 _public_6f5e843
#define public_6f5e87c _public_6f5e87c
#define public_6f5e886 _public_6f5e886
#define public_6f5e8eb _public_6f5e8eb
#define public_6f5e8ed _public_6f5e8ed

PROC_DECLARE(0x6f5e680, internal_6f5e680, public_6f5e680);
extern "C" NAKED register_t __cdecl internal_6f5e680()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf9a8 @0x6f5e688*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf9a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x60]
        xor ebx, ebx
        cmp edi, ebx
        mov ebp, ecx
        je public_6f5e8eb
        cmp dword ptr ds : [edi+0x14C], ebx
        je public_6f5e6c1
        cmp dword ptr ds : [edi+0x154], 0xFFFFFFFF
        jne public_6f5e8eb
        public_6f5e6c1 : nop
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6ead6a0
        lea ecx, ss:[esp+0x12]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x58], ebx
        call public_6f93460
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x58], 1
        call public_6f93460
        mov eax, dword ptr ds : [edi+0x154]
        push eax
        lea eax, ss:[esp+0x40]
        push eax
        mov byte ptr ss : [esp+0x5C], 2
        call public_6f66220
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 8
        cmp esi, eax
        je public_6f5e77a
        lea esp, ss:[esp]
        public_6f5e720 : nop
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax+0x14C], ebx
        je public_6f5e76f
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        je public_6f5e76f
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        push esi
        jne public_6f5e75c
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        jmp public_6f5e76a
        public_6f5e75c : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x3C]
        public_6f5e76a : nop
        call public_6f1e390
        public_6f5e76f : nop
        mov eax, dword ptr ss : [esp+0x44]
        add esi, 4
        cmp esi, eax
        jne public_6f5e720
        public_6f5e77a : nop
        cmp dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ss : [esp+0x34]
        je public_6f5e83d
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f5e7af
        mov edi, edi
        public_6f5e790 : nop
        lea eax, ds:[esi+8]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6f1e390
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x34]
        jne public_6f5e790
        public_6f5e7af : nop
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6f5e550
        mov esi, eax
        mov eax, dword ptr ds : [edi+0x150]
        push ebx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f66ec0
        add esp, 0xC
        push edi
        mov ecx, esi
        call public_6f579c0
        mov eax, dword ptr ds : [edi+0x178]
        push ebx
        push 1
        push eax
        mov ecx, esi
        call public_6f34b70
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x1009
/*FIXUP push offset public_6fbbb78 @0x6f5e7f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb78
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], edi
        call public_6f24070
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x54], 1
        call public_6f15350
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x54], bl
        call public_6f15350
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_6eec8d0
        mov al, 1
        jmp public_6f5e8ed
        public_6f5e83d : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f5e886
        public_6f5e843 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx+4]
        call public_6eea860
        push esi
        mov ecx, eax
        call public_6f73930
        mov esi, eax
        cmp esi, ebx
        je public_6f5e87c
        mov eax, dword ptr ds : [esi+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f5e87c
        push eax
        push esi
        call public_6f6ee40
        add esp, 8
        push ebx
        push ebx
        push 0xFFFFFFFF
        mov ecx, esi
        call public_6f576c0
        public_6f5e87c : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x34]
        cmp edi, eax
        jne public_6f5e843
        public_6f5e886 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x60], 1
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x60], bl
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6fa8fe0
        add esp, 8
        public_6f5e8eb : nop
        xor al, al
        public_6f5e8ed : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6f5e680)
    }
}

#undef public_6f5e6c1
#undef public_6f5e720
#undef public_6f5e75c
#undef public_6f5e76a
#undef public_6f5e76f
#undef public_6f5e77a
#undef public_6f5e790
#undef public_6f5e7af
#undef public_6f5e83d
#undef public_6f5e843
#undef public_6f5e87c
#undef public_6f5e886
#undef public_6f5e8eb
#undef public_6f5e8ed
