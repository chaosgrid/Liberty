#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e0e0);
CLANG_FORWARD_PROC_SYMBOL(public_47e270);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_586510);
CLANG_FORWARD_PROC_SYMBOL(public_586560);
CLANG_FORWARD_PROC_SYMBOL(public_586800);

#define public_47e29e _public_47e29e
#define public_47e2f0 _public_47e2f0
#define public_47e2f5 _public_47e2f5
#define public_47e31d _public_47e31d
#define public_47e360 _public_47e360
#define public_47e375 _public_47e375
#define public_47e388 _public_47e388
#define public_47e38f _public_47e38f
#define public_47e3a0 _public_47e3a0
#define public_47e3a2 _public_47e3a2
#define public_47e3cb _public_47e3cb
#define public_47e40a _public_47e40a
#define public_47e414 _public_47e414

PROC_DECLARE(0x47e270, internal_47e270, public_47e270);
extern "C" NAKED register_t __cdecl internal_47e270()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        xor ebp, ebp
        cmp ebx, ebp
        push edi
        mov esi, ecx
        je public_47e40a
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebp
        je public_47e29e
        cmp dword ptr ds : [eax+0x978], 1
        je public_47e40a
        public_47e29e : nop
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x3A4], ebp
        mov dword ptr ds : [esi+0x4F4], ebp
        call public_4795f0
        mov ecx, esi
        call public_47e790
        mov edi, eax
        cmp edi, ebp
        je public_47e31d
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_47e31d
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebp
        je public_47e2f0
        mov eax, dword ptr ds : [eax+0x978]
        cmp eax, 2
        je public_47e2f0
        cmp eax, 3
        mov byte ptr ss : [esp+0x20], 0
        jne public_47e2f5
        public_47e2f0 : nop
        mov byte ptr ss : [esp+0x20], 1
        public_47e2f5 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_47e460
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push edi
        lea ecx, ds:[esi+0x330]
        call public_4c6a50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_47e31d : nop
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [esi+0x3A4]
        mov eax, dword ptr ds : [esi+0x32C]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [esi+0x330]
        push ebx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_586560
        mov ecx, dword ptr ds : [esi+0x330]
        push ebp
        call public_586800
        test al, al
        push 1
        je public_47e360
        push ebp
        jmp public_47e388
        public_47e360 : nop
        mov ecx, dword ptr ds : [esi+0x330]
        call public_586800
        test al, al
        push 1
        je public_47e375
        push 2
        jmp public_47e388
        public_47e375 : nop
        mov ecx, dword ptr ds : [esi+0x330]
        call public_586510
        test al, al
        je public_47e38f
        push 1
        push 3
        public_47e388 : nop
        mov ecx, esi
        call public_47f240
        public_47e38f : nop
        push 1
        push 0xFFFFFFFF
        mov ecx, esi
        call public_47e0e0
        mov dword ptr ds : [esi+0x3C4], ebp
        public_47e3a0 : nop
        xor ebp, ebp
        public_47e3a2 : nop
        push 1
        push ebp
        mov ecx, esi
        call public_47e0e0
        mov ecx, esi
        call public_47e790
        mov edi, eax
        test edi, edi
        je public_47e3cb
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_47e414
        public_47e3cb : nop
        inc ebp
        cmp ebp, 5
        jl public_47e3a2
        mov ecx, dword ptr ds : [esi+0x3C4]
        inc ecx
        test edi, edi
        mov dword ptr ds : [esi+0x3C4], ecx
        jne public_47e3a0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x3C4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x3A4], edx
        mov dword ptr ds : [esi+0x4F4], eax
        mov dword ptr ds : [esi+0x32C], ecx
        public_47e40a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        public_47e414 : nop
        mov ecx, dword ptr ds : [esi+0x3D0]
        test ecx, ecx
        je public_47e40a
        mov eax, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x47e270)
    }
}

#undef public_47e29e
#undef public_47e2f0
#undef public_47e2f5
#undef public_47e31d
#undef public_47e360
#undef public_47e375
#undef public_47e388
#undef public_47e38f
#undef public_47e3a0
#undef public_47e3a2
#undef public_47e3cb
#undef public_47e40a
#undef public_47e414
