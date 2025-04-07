#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_46ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7480);
CLANG_FORWARD_PROC_SYMBOL(public_4f7810);
CLANG_FORWARD_PROC_SYMBOL(public_4f9de0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcb40);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf490);

#define public_4f7580 _public_4f7580
#define public_4f758f _public_4f758f
#define public_4f75d6 _public_4f75d6
#define public_4f7600 _public_4f7600
#define public_4f7642 _public_4f7642
#define public_4f7644 _public_4f7644
#define public_4f7655 _public_4f7655
#define public_4f7663 _public_4f7663
#define public_4f76b2 _public_4f76b2
#define public_4f76b7 _public_4f76b7
#define public_4f76d5 _public_4f76d5
#define public_4f77eb _public_4f77eb
#define public_4f77fe _public_4f77fe

PROC_DECLARE(0x4f7480, internal_4f7480, public_4f7480);
extern "C" NAKED register_t __cdecl internal_4f7480()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf490 @0x4f7488*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf490
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4f77eb
        mov edi, dword ptr ss : [esp+0x50]
        push edi
        call public_422910
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x3C]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push 0x1A
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], 0x1A
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        push ecx
        mov dword ptr ss : [esp+0x54], esp
        mov esi, esp
/*FIXUP push offset public_5d9aa0 @0x4f7538*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9aa0
        mov byte ptr ss : [esp+0x50], 1
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [esi], eax
        call public_402d30
        mov eax, dword ptr ds : [public_5c6ddc]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        test ecx, ecx
        je public_4f75d6
        push 0x43
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f7580
        mov ecx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x7C]
        jmp public_4f758f
        public_4f7580 : nop
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x7C]
        public_4f758f : nop
        push 0x44
        mov byte ptr ss : [esp+0x54], 1
        mov byte ptr ss : [esp+0x55], 1
        call public_5792b0
        dec eax
        neg eax
        sbb al, al
        inc al
        push 0x45
        mov byte ptr ss : [esp+0x58], al
        call public_5792b0
        mov edx, dword ptr ds : [public_5c6ddc]
        add esp, 8
        dec eax
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x51], al
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        public_4f75d6 : nop
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5d3ee0]
        fnstsw ax
        test ah, 0x41
        jne public_4f7600
        mov dword ptr ss : [esp+0x54], 0x3DCCCCCD
        public_4f7600 : nop
        mov ebx, dword ptr ss : [esp+0x58]
        cmp ebx, 0x2B
        mov ebp, dword ptr ss : [esp+0x54]
        jge public_4f7663
        push 0x26
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4f7663
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_4f7663
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x74]
        test eax, eax
        jl public_4f7663
        test ebx, ebx
        jl public_4f7642
        push ebx
        push ebp
        push edi
        call public_4f7810
        add esp, 0xC
        jmp public_4f7655
        public_4f7642 : nop
        xor esi, esi
        public_4f7644 : nop
        push esi
        push ebp
        push edi
        call public_4f7810
        add esp, 0xC
        inc esi
        cmp esi, 0x2B
        jl public_4f7644
        public_4f7655 : nop
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x78]
        public_4f7663 : nop
        xor eax, eax
        cmp ebx, eax
        jge public_4f76d5
        cmp dword ptr ds : [public_674f58], eax
        je public_4f77fe
        cmp dword ptr ds : [public_674f54], eax
        je public_4f77fe
        mov ecx, offset public_674c7c
        mov bl, 1
        mov dword ptr ds : [public_674c84], eax
        mov byte ptr ds : [public_674ca5], al
        mov byte ptr ds : [public_674ca4], al
        mov dword ptr ds : [public_674ca8], eax
        mov dword ptr ds : [public_674c90], eax
        call public_46ecd0
        push 1
        mov ecx, offset public_674c7c
        call public_4fcb40
        public_4f76b2 : nop
        mov esi, 0x2C
        public_4f76b7 : nop
        push esi
        push ebp
        push edi
        call public_4f7810
        add esp, 0xC
        inc esi
        cmp esi, 0x2F
        jl public_4f76b7
        test bl, bl
        je public_4f76d5
        push edi
        call public_4f9de0
        add esp, 4
        public_4f76d5 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x24]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0xE
        mov ecx, dword ptr ds : [eax]
        mov ebx, 2
        push eax
        mov byte ptr ss : [esp+0x54], bl
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_674f3c]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        mov byte ptr ss : [esp+0x50], 3
        call public_403ea0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov byte ptr ss : [esp+0x54], bl
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov byte ptr ss : [esp+0x54], 1
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 1
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x54], 0
        call dword ptr ds : [edx+0xF0]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        public_4f77eb : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x3C
        ret 
        public_4f77fe : nop
        xor bl, bl
        jmp public_4f76b2
        UNREACHABLE_TRAP(0x4f7480)
    }
}

#undef public_4f7580
#undef public_4f758f
#undef public_4f75d6
#undef public_4f7600
#undef public_4f7642
#undef public_4f7644
#undef public_4f7655
#undef public_4f7663
#undef public_4f76b2
#undef public_4f76b7
#undef public_4f76d5
#undef public_4f77eb
#undef public_4f77fe
