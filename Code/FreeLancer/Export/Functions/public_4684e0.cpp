#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ec50);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb4e2);

#define public_468553 _public_468553
#define public_4685a7 _public_4685a7
#define public_4685af _public_4685af
#define public_4685b5 _public_4685b5
#define public_4685ba _public_4685ba
#define public_4685d5 _public_4685d5
#define public_4685e0 _public_4685e0
#define public_468646 _public_468646
#define public_4686a1 _public_4686a1
#define public_4686b7 _public_4686b7

PROC_DECLARE(0x4684e0, internal_4684e0, public_4684e0);
extern "C" NAKED register_t __cdecl internal_4684e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb4e2 @0x4684e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb4e2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, edx
        imul edi, 0x3E8
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x38], edi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_53e430
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_46ec50
        add esp, 8
        test al, al
        jne public_4685af
        public_468553 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov ebx, dword ptr ds : [esi+0x3C]
        mov edx, edi
        sub edx, ecx
        cmp edx, ebx
        ja public_4685a7
        cmp ebp, dword ptr ds : [esi+0x40]
        jg public_4685a7
        mov dword ptr ds : [esi+0x38], ecx
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        inc ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_53e430
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_46ec50
        add esp, 8
        test al, al
        je public_468553
        mov eax, dword ptr ss : [esp+0x10]
        public_4685a7 : nop
        xor ebx, ebx
        cmp ebp, ebx
        jg public_4685ba
        jmp public_4685b5
        public_4685af : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        public_4685b5 : nop
        cmp dword ptr ds : [esi+0x34], ebx
        je public_4685d5
        public_4685ba : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x2C]
        push eax
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        call public_46c860
        inc dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        public_4685d5 : nop
        mov ebp, dword ptr ds : [public_5c62c8]
        nop 
        lea esp, ss:[esp]
        public_4685e0 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, dword ptr ds : [ecx]
        je public_4686b7
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x30]
        lea edi, ds:[esi+0x2C]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x44], 1
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x38], bl
        je public_468646
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_468646 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call ebp
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x1C], eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], 2
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x44], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x38], 2
        je public_4686a1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ebx
        public_4686a1 : nop
        mov ecx, dword ptr ds : [public_5c6300]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], ecx
        public_4686b7 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4685e0
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4684e0)
    }
}

#undef public_468553
#undef public_4685a7
#undef public_4685af
#undef public_4685b5
#undef public_4685ba
#undef public_4685d5
#undef public_4685e0
#undef public_468646
#undef public_4686a1
#undef public_4686b7
