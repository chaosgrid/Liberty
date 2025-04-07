#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_537960);
CLANG_FORWARD_PROC_SYMBOL(public_537ac0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_538e80);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf988);

#define public_5030e6 _public_5030e6
#define public_5030f6 _public_5030f6
#define public_503111 _public_503111
#define public_50312e _public_50312e
#define public_503140 _public_503140
#define public_50314f _public_50314f
#define public_50316e _public_50316e
#define public_50319f _public_50319f
#define public_5031ad _public_5031ad
#define public_503221 _public_503221
#define public_503245 _public_503245
#define public_503263 _public_503263
#define public_503279 _public_503279
#define public_50329e _public_50329e
#define public_5032b3 _public_5032b3
#define public_5032c3 _public_5032c3
#define public_5032c7 _public_5032c7
#define public_5032e0 _public_5032e0
#define public_5032fd _public_5032fd
#define public_50330b _public_50330b
#define public_503318 _public_503318

PROC_DECLARE(0x503070, internal_503070, public_503070);
extern "C" NAKED register_t __cdecl internal_503070()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf988 @0x503078*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf988
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        push 0x25
        mov edi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_503263
        mov esi, dword ptr ss : [esp+0x2C]
        xor ebx, ebx
        cmp esi, ebx
        je public_503263
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        push 0x26
        mov dword ptr ss : [esp+0x28], ebx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5030e6
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_5030e6
        mov eax, dword ptr ds : [eax]
        cmp byte ptr ds : [eax], bl
        je public_5030e6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        public_5030e6 : nop
        cmp dword ptr ds : [esi+0x18], ebx
        je public_5030f6
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], eax
        public_5030f6 : nop
        fld dword ptr ds : [esi+0x48]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_503111
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        public_503111 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov edi, dword ptr ss : [esp+0x38]
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        je public_50312e
        mov eax, dword ptr ss : [esp+0x34]
        push edi
        push ebp
        push eax
        call public_4f7d20
        public_50312e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        je public_503140
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+0x94]
        public_503140 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, ebx
        je public_50314f
        push edi
        push ebp
        call public_5377c0
        public_50314f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        pop ebp
        je public_50316e
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax]
        cmp al, bl
        jne public_50316e
        mov ecx, dword ptr ss : [esp+0x14]
        call public_4f7a90
        mov dword ptr ss : [esp+0x14], ebx
        public_50316e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_5031ad
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x50]
        and eax, 0xFFFFFF01
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_50319f
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+0x58]
        test al, al
        jne public_5031ad
        public_50319f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_5031ad : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        je public_503245
        push 1
        push 1
        call public_4110c0
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+0x4C]
        push edx
        call public_4115b0
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        call public_411300
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp al, bl
        jne public_503221
        lea ecx, ds:[esi+4]
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xCE
/*FIXUP push offset public_5daa7c @0x503202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa7c
/*FIXUP push offset public_5daa50 @0x503207*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa50
        push edi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        call public_537ad0
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_503245
        public_503221 : nop
        cmp dword ptr ds : [esi+0x1C], ebx
        je public_503245
        lea ecx, ds:[esi+0x20]
        push ecx
        call public_538e80
        mov edx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x40]
        add esp, 4
        push ebx
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        call public_537960
        public_503245 : nop
        lea ecx, ss:[esp+0xC]
        call public_503330
        test al, al
        jne public_503279
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_502d90
        public_503263 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x14
        public_503279 : nop
        mov esi, dword ptr ss : [esp+0x3C]
        cmp esi, ebx
        je public_5032c3
        mov ecx, esi
        call public_502d90
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+8], ecx
        je public_50329e
        call public_4f7a80
        public_50329e : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+4], eax
        je public_5032b3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x10]
        public_5032b3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0xC], ecx
        je public_5032c7
        call public_537ac0
        public_5032c3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_5032c7 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, ebx
        je public_5032e0
        lea edx, ss:[esp+0xC]
        push edx
        add ecx, 0x28
        call public_4fcea0
        mov eax, dword ptr ss : [esp+0x10]
        public_5032e0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_5032fd
        call public_4f7a90
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ebx
        public_5032fd : nop
        cmp eax, ebx
        je public_50330b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_50330b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        je public_503318
        call public_537ad0
        public_503318 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x14
        UNREACHABLE_TRAP(0x503070)
    }
}

#undef public_5030e6
#undef public_5030f6
#undef public_503111
#undef public_50312e
#undef public_503140
#undef public_50314f
#undef public_50316e
#undef public_50319f
#undef public_5031ad
#undef public_503221
#undef public_503245
#undef public_503263
#undef public_503279
#undef public_50329e
#undef public_5032b3
#undef public_5032c3
#undef public_5032c7
#undef public_5032e0
#undef public_5032fd
#undef public_50330b
#undef public_503318
