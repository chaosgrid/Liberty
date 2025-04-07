#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d072c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07570);
CLANG_FORWARD_PROC_SYMBOL(public_6d075f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f390);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f970);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);

#define public_6d072e4 _public_6d072e4
#define public_6d072ed _public_6d072ed
#define public_6d072ef _public_6d072ef
#define public_6d0730e _public_6d0730e
#define public_6d07320 _public_6d07320
#define public_6d07330 _public_6d07330
#define public_6d07340 _public_6d07340
#define public_6d07349 _public_6d07349
#define public_6d0734b _public_6d0734b
#define public_6d0736a _public_6d0736a
#define public_6d07374 _public_6d07374
#define public_6d07384 _public_6d07384
#define public_6d07390 _public_6d07390
#define public_6d07399 _public_6d07399
#define public_6d0739b _public_6d0739b
#define public_6d073ba _public_6d073ba
#define public_6d073c4 _public_6d073c4
#define public_6d073d4 _public_6d073d4
#define public_6d073e0 _public_6d073e0
#define public_6d073ec _public_6d073ec
#define public_6d073ee _public_6d073ee
#define public_6d0740d _public_6d0740d
#define public_6d07420 _public_6d07420
#define public_6d07430 _public_6d07430
#define public_6d07440 _public_6d07440
#define public_6d0744c _public_6d0744c
#define public_6d0744e _public_6d0744e
#define public_6d0746d _public_6d0746d
#define public_6d07480 _public_6d07480
#define public_6d07490 _public_6d07490
#define public_6d074a0 _public_6d074a0
#define public_6d074ac _public_6d074ac
#define public_6d074ae _public_6d074ae
#define public_6d074cd _public_6d074cd
#define public_6d074e0 _public_6d074e0
#define public_6d074f0 _public_6d074f0
#define public_6d07513 _public_6d07513
#define public_6d07527 _public_6d07527
#define public_6d07539 _public_6d07539

PROC_DECLARE(0x6d072c0, internal_6d072c0, public_6d072c0);
extern "C" NAKED register_t __cdecl internal_6d072c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[ebp+8]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d0f390
        xor ebx, ebx
        xor eax, eax
        mov dword ptr ss : [esp+0xC], eax
        public_6d072e4 : nop
        cmp eax, ebx
        jne public_6d072ed
        mov eax, dword ptr ss : [ebp+0x38]
        jmp public_6d072ef
        public_6d072ed : nop
        mov eax, dword ptr ds : [eax]
        public_6d072ef : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_6d0730e
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d072e4
        mov edx, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6d072e4
        public_6d0730e : nop
        mov esi, dword ptr ss : [ebp+0x38]
        cmp esi, ebx
        push edi
        lea edi, ss:[ebp+0x34]
        je public_6d07330
        lea esp, ss:[esp]
        public_6d07320 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d07320
        public_6d07330 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_6d07340 : nop
        cmp eax, ebx
        jne public_6d07349
        mov eax, dword ptr ss : [ebp+0x4C]
        jmp public_6d0734b
        public_6d07349 : nop
        mov eax, dword ptr ds : [eax]
        public_6d0734b : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d0736a
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d07340
        mov eax, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d07340
        public_6d0736a : nop
        mov esi, dword ptr ss : [ebp+0x4C]
        cmp esi, ebx
        lea edi, ss:[ebp+0x48]
        je public_6d07384
        public_6d07374 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d07374
        public_6d07384 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x10], eax
        public_6d07390 : nop
        cmp eax, ebx
        jne public_6d07399
        mov eax, dword ptr ss : [ebp+0x74]
        jmp public_6d0739b
        public_6d07399 : nop
        mov eax, dword ptr ds : [eax]
        public_6d0739b : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d073ba
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d07390
        mov edx, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d07390
        public_6d073ba : nop
        mov esi, dword ptr ss : [ebp+0x74]
        cmp esi, ebx
        lea edi, ss:[ebp+0x70]
        je public_6d073d4
        public_6d073c4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d073c4
        public_6d073d4 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x10], eax
        public_6d073e0 : nop
        cmp eax, ebx
        jne public_6d073ec
        mov eax, dword ptr ss : [ebp+0x88]
        jmp public_6d073ee
        public_6d073ec : nop
        mov eax, dword ptr ds : [eax]
        public_6d073ee : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d0740d
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d073e0
        mov eax, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d073e0
        public_6d0740d : nop
        mov esi, dword ptr ss : [ebp+0x88]
        cmp esi, ebx
        lea edi, ss:[ebp+0x84]
        je public_6d07430
        lea ecx, ds:[ecx]
        public_6d07420 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d07420
        public_6d07430 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_6d07440 : nop
        cmp eax, ebx
        jne public_6d0744c
        mov eax, dword ptr ss : [ebp+0x9C]
        jmp public_6d0744e
        public_6d0744c : nop
        mov eax, dword ptr ds : [eax]
        public_6d0744e : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d0746d
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d07440
        mov edx, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d07440
        public_6d0746d : nop
        mov esi, dword ptr ss : [ebp+0x9C]
        cmp esi, ebx
        lea edi, ss:[ebp+0x98]
        je public_6d07490
        lea ecx, ds:[ecx]
        public_6d07480 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d07480
        public_6d07490 : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_6d074a0 : nop
        cmp eax, ebx
        jne public_6d074ac
        mov eax, dword ptr ss : [ebp+0xB0]
        jmp public_6d074ae
        public_6d074ac : nop
        mov eax, dword ptr ds : [eax]
        public_6d074ae : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d074cd
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d074a0
        mov eax, dword ptr ds : [ecx+0xC]
        add ecx, 0xC
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d074a0
        public_6d074cd : nop
        mov esi, dword ptr ss : [ebp+0xB0]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        je public_6d074f0
        lea ecx, ds:[ecx]
        public_6d074e0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp esi, ebx
        jne public_6d074e0
        public_6d074f0 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        lea esi, ss:[ebp+0xE8]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        pop edi
        je public_6d07539
        public_6d07513 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, ebx
        je public_6d07527
        lea ecx, ds:[eax+0xC]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d07527 : nop
        push 1
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6d16120
        test al, al
        jne public_6d07513
        public_6d07539 : nop
        mov ecx, esi
        call public_6d17170
        mov ecx, ebp
        call public_6d07570
        mov ecx, ebp
        call public_6d075f0
        lea ecx, ss:[ebp+0x24]
        call public_6d0f2f0
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d64674]
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d072c0)
    }
}

#undef public_6d072e4
#undef public_6d072ed
#undef public_6d072ef
#undef public_6d0730e
#undef public_6d07320
#undef public_6d07330
#undef public_6d07340
#undef public_6d07349
#undef public_6d0734b
#undef public_6d0736a
#undef public_6d07374
#undef public_6d07384
#undef public_6d07390
#undef public_6d07399
#undef public_6d0739b
#undef public_6d073ba
#undef public_6d073c4
#undef public_6d073d4
#undef public_6d073e0
#undef public_6d073ec
#undef public_6d073ee
#undef public_6d0740d
#undef public_6d07420
#undef public_6d07430
#undef public_6d07440
#undef public_6d0744c
#undef public_6d0744e
#undef public_6d0746d
#undef public_6d07480
#undef public_6d07490
#undef public_6d074a0
#undef public_6d074ac
#undef public_6d074ae
#undef public_6d074cd
#undef public_6d074e0
#undef public_6d074f0
#undef public_6d07513
#undef public_6d07527
#undef public_6d07539
