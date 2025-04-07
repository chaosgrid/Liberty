#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d0f);

#define public_579676 _public_579676
#define public_579685 _public_579685
#define public_5796d2 _public_5796d2
#define public_5796ed _public_5796ed
#define public_579709 _public_579709
#define public_57971a _public_57971a
#define public_579727 _public_579727
#define public_579774 _public_579774
#define public_579798 _public_579798
#define public_5797c1 _public_5797c1
#define public_5797d6 _public_5797d6

PROC_DECLARE(0x579620, internal_579620, public_579620);
extern "C" NAKED register_t __cdecl internal_579620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3d0f @0x579622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d0f
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
        mov dword ptr ds : [esi], offset public_5e459c
        mov dword ptr ds : [esi+0x7C], offset public_5e4590
        xor ebp, ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov edi, dword ptr ds : [esi+0x32C]
        cmp edi, ebp
        je public_579685
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebp
        mov dword ptr ds : [edi], offset public_5e465c
        je public_579676
        push eax
        call dword ptr ds : [public_5c72dc]
        mov dword ptr ds : [edi+8], ebp
        public_579676 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x32C], ebp
        public_579685 : nop
        lea edi, ds:[esi+0x40C]
        mov dword ptr ss : [esp+0x10], edi
        lea ebx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x18], ebx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 8
        call public_4144f0
        lea ecx, ds:[ebx+0xC]
        mov byte ptr ss : [esp+0x28], 7
        call public_445d70
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 6
        call public_444e20
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebp
        je public_5796d2
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        public_5796d2 : nop
        mov eax, dword ptr ds : [esi+0x3EC]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 4
        je public_5796ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x3EC], ebp
        public_5796ed : nop
        mov ecx, dword ptr ds : [esi+0x3D4]
        cmp ecx, ebp
        je public_579727
        mov eax, dword ptr ds : [esi+0x3DC]
        cmp eax, ebp
        je public_579709
        push eax
        push ecx
        call dword ptr ds : [public_5c6e0c]
        public_579709 : nop
        mov eax, dword ptr ds : [esi+0x3D8]
        cmp eax, ebp
        je public_57971a
        push eax
        call dword ptr ds : [public_5c6e3c]
        public_57971a : nop
        mov edx, dword ptr ds : [esi+0x3D4]
        push edx
        call dword ptr ds : [public_5c6e38]
        public_579727 : nop
        or eax, 0xFFFFFFFF
        lea ecx, ds:[esi+0x384]
        mov dword ptr ds : [esi+0x3E4], eax
        mov dword ptr ds : [esi+0x3E0], eax
        mov dword ptr ds : [esi+0x3DC], ebp
        mov dword ptr ds : [esi+0x3D8], ebp
        mov dword ptr ds : [esi+0x3D4], ebp
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [public_5c6c14]
        mov ebx, dword ptr ds : [esi+0x378]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        lea edi, ds:[esi+0x374]
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_579798
        public_579774 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_46d680
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_579774
        public_579798 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov ebx, dword ptr ds : [esi+0x36C]
        mov edi, dword ptr ds : [ebx]
        lea ebp, ds:[esi+0x368]
        add esp, 4
        cmp edi, ebx
        mov byte ptr ss : [esp+0x28], 0
        je public_5797d6
        public_5797c1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_46d680
        cmp edi, ebx
        jne public_5797c1
        public_5797d6 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x579620)
    }
}

#undef public_579676
#undef public_579685
#undef public_5796d2
#undef public_5796ed
#undef public_579709
#undef public_57971a
#undef public_579727
#undef public_579774
#undef public_579798
#undef public_5797c1
#undef public_5797d6
