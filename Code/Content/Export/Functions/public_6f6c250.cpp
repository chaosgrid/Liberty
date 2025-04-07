#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6efec20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c250);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e810);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafd8b);

#define public_6f6c2ac _public_6f6c2ac
#define public_6f6c2b0 _public_6f6c2b0
#define public_6f6c329 _public_6f6c329
#define public_6f6c361 _public_6f6c361
#define public_6f6c397 _public_6f6c397
#define public_6f6c3a2 _public_6f6c3a2
#define public_6f6c3d7 _public_6f6c3d7
#define public_6f6c3e0 _public_6f6c3e0
#define public_6f6c3e7 _public_6f6c3e7
#define public_6f6c404 _public_6f6c404
#define public_6f6c40c _public_6f6c40c
#define public_6f6c41e _public_6f6c41e
#define public_6f6c43c _public_6f6c43c
#define public_6f6c451 _public_6f6c451
#define public_6f6c45e _public_6f6c45e
#define public_6f6c465 _public_6f6c465
#define public_6f6c483 _public_6f6c483
#define public_6f6c487 _public_6f6c487
#define public_6f6c489 _public_6f6c489
#define public_6f6c48d _public_6f6c48d
#define public_6f6c4e0 _public_6f6c4e0
#define public_6f6c525 _public_6f6c525
#define public_6f6c539 _public_6f6c539
#define public_6f6c54b _public_6f6c54b
#define public_6f6c55a _public_6f6c55a

PROC_DECLARE(0x6f6c250, internal_6f6c250, public_6f6c250);
extern "C" NAKED register_t __cdecl internal_6f6c250()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6fafd8b @0x6f6c258*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafd8b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x90
        mov al, byte ptr ss : [esp+7]
        push ebx
        push esi
        xor esi, esi
        push edi
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xA4], esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6f6c55a
        mov ebx, 1
        jmp public_6f6c2b0
        public_6f6c2ac : nop
        xor esi, esi
        mov edi, edi
        public_6f6c2b0 : nop
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_6f6c3a2
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_6f6c3a2
        call public_6efec10
        fstp qword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0xC]
        add ecx, 0x20
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_6efec20
        fcomp qword ptr ds : [public_6fbbd20]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6f6c3a2
        add eax, 8
        push eax
        call public_6f75f30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        add esp, 4
        push edx
        mov ecx, eax
        call public_6f73930
        cmp eax, esi
        je public_6f6c361
        cmp dword ptr ds : [eax+0x14C], esi
        je public_6f6c329
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        jne public_6f6c397
        public_6f6c329 : nop
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x60], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x58]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x6C], edx
        mov byte ptr ss : [esp+0x70], bl
        call public_6f6eed0
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        jmp public_6f6c489
        public_6f6c361 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x44], esi
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x48], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x44]
        push eax
        push ebx
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x5C], edx
        mov byte ptr ss : [esp+0x60], 0
        call public_6eedcc0
        public_6f6c397 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        jmp public_6f6c489
        public_6f6c3a2 : nop
        lea ecx, ds:[eax+0x14]
        push ecx
        lea edx, ds:[eax+0x10]
        push edx
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ds:[eax+0xC]
        push ecx
        push edx
        call public_6f6bdd0
        add esp, 0x10
        test al, al
        je public_6f6c41e
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [public_6fd1c8c]
        mov ecx, dword ptr ds : [public_6fd1c90]
        cmp eax, ecx
        je public_6f6c3e7
        public_6f6c3d7 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f6c3e0
        cmp dword ptr ds : [eax+4], edx
        je public_6f6c40c
        public_6f6c3e0 : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f6c3d7
        public_6f6c3e7 : nop
        lea eax, ss:[esp+0x38]
        push eax
        push ebx
        push ecx
        mov ecx, offset public_6fd1c88
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], edx
        mov byte ptr ss : [esp+0x4C], bl
        call public_6f6f3e0
        public_6f6c404 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        jmp public_6f6c489
        public_6f6c40c : nop
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_6f6c404
        mov byte ptr ds : [eax+8], bl
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        jmp public_6f6c489
        public_6f6c41e : nop
        mov edi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        je public_6f6c43c
        lea edx, ss:[esp+0xC]
        push edx
        call public_6f6e9d0
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        jmp public_6f6c48d
        public_6f6c43c : nop
        mov eax, dword ptr ds : [public_6fd1c8c]
        mov ecx, dword ptr ds : [public_6fd1c90]
        cmp eax, ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [edi+0x10]
        je public_6f6c465
        public_6f6c451 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f6c45e
        cmp dword ptr ds : [eax+4], edx
        je public_6f6c525
        public_6f6c45e : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f6c451
        public_6f6c465 : nop
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        push ecx
        mov ecx, offset public_6fd1c88
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], edx
        mov byte ptr ss : [esp+0x38], 0
        call public_6f6f3e0
        public_6f6c483 : nop
        mov edi, dword ptr ss : [esp+0xC]
        public_6f6c487 : nop
        mov eax, dword ptr ds : [edi]
        public_6f6c489 : nop
        mov dword ptr ss : [esp+0xC], eax
        public_6f6c48d : nop
        cmp eax, dword ptr ds : [public_6fd1bcc]
        jne public_6f6c2ac
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_6f6c55a
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x30], edx
        je public_6f6c55a
        cmp esi, edi
        je public_6f6c55a
        mov ebx, dword ptr ds : [public_6fb31b4]
        mov edi, dword ptr ds : [public_6fb3408]
        lea esp, ss:[esp]
        public_6f6c4e0 : nop
        cmp dword ptr ds : [esi], 0
        je public_6f6c539
        lea ecx, ss:[esp+0x24]
        call ebx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x24]
        push edx
        push ecx
        call edi
        mov al, byte ptr ds : [esi+0x10]
        add esp, 8
        test al, al
        je public_6f6c54b
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_6fb31a0]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [ecx+4]
        push eax
        push edx
        call edi
        add esp, 8
        jmp public_6f6c54b
        public_6f6c525 : nop
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        jne public_6f6c487
        mov byte ptr ds : [eax+8], 0
        jmp public_6f6c483
        public_6f6c539 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push 0
        push eax
        push ecx
        call public_6f6e810
        add esp, 0xC
        public_6f6c54b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 0x14
        cmp esi, eax
        jne public_6f6c4e0
        mov esi, dword ptr ss : [esp+0x18]
        public_6f6c55a : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xA0]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f6c250)
    }
}

#undef public_6f6c2ac
#undef public_6f6c2b0
#undef public_6f6c329
#undef public_6f6c361
#undef public_6f6c397
#undef public_6f6c3a2
#undef public_6f6c3d7
#undef public_6f6c3e0
#undef public_6f6c3e7
#undef public_6f6c404
#undef public_6f6c40c
#undef public_6f6c41e
#undef public_6f6c43c
#undef public_6f6c451
#undef public_6f6c45e
#undef public_6f6c465
#undef public_6f6c483
#undef public_6f6c487
#undef public_6f6c489
#undef public_6f6c48d
#undef public_6f6c4e0
#undef public_6f6c525
#undef public_6f6c539
#undef public_6f6c54b
#undef public_6f6c55a
