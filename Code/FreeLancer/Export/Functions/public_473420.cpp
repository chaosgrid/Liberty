#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);

#define public_473479 _public_473479
#define public_4734ef _public_4734ef
#define public_4734ff _public_4734ff
#define public_473510 _public_473510
#define public_473522 _public_473522
#define public_47353f _public_47353f
#define public_4735b7 _public_4735b7
#define public_4735d0 _public_4735d0
#define public_47362d _public_47362d
#define public_473646 _public_473646
#define public_4736a4 _public_4736a4
#define public_4736b4 _public_4736b4
#define public_4736c5 _public_4736c5
#define public_4736d7 _public_4736d7
#define public_4736f4 _public_4736f4
#define public_473733 _public_473733
#define public_473743 _public_473743
#define public_473756 _public_473756

PROC_DECLARE(0x473420, internal_473420, public_473420);
extern "C" NAKED register_t __cdecl internal_473420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x800
        cmp eax, 0x26
        push ebx
        push esi
        push edi
        mov esi, ecx
        je public_473479
        cmp eax, 0x42
        jne public_473756
        mov ecx, dword ptr ss : [esp+0x814]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x800
        ret 0xC
        public_473479 : nop
        mov eax, dword ptr ss : [esp+0x814]
        cmp eax, dword ptr ds : [esi+0x348]
        jne public_47353f
        mov ecx, dword ptr ds : [esi+0x344]
        test ecx, ecx
        je public_4734ef
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4734ef
        push 0x400
        lea edx, ss:[esp+0x10]
        push edx
        call public_57c2c0
        mov edi, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        push 1
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4734ef
        mov edx, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c7054]
        public_4734ef : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_4734ff
        mov dword ptr ds : [eax], 0
        public_4734ff : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_473522
        public_473510 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_473510
        public_473522 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x800
        ret 0xC
        public_47353f : nop
        cmp eax, dword ptr ds : [esi+0x34C]
        jne public_473646
        cmp dword ptr ds : [esi+0x33C], 2
        mov ecx, dword ptr ds : [esi+0x344]
        jne public_4735d0
        test ecx, ecx
        je public_4735b7
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4735b7
        push 0x400
        lea edx, ss:[esp+0x10]
        push edx
        call public_57c2c0
        mov edi, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        push 1
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4735b7
        mov edx, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c7054]
        public_4735b7 : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_473743
        mov dword ptr ds : [eax], 3
        jmp public_473743
        public_4735d0 : nop
        test ecx, ecx
        je public_47362d
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_47362d
        push 0x400
        lea edx, ss:[esp+0x10]
        push edx
        call public_57c2c0
        mov edi, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        push 1
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_47362d
        mov edx, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c7054]
        public_47362d : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_473743
        mov dword ptr ds : [eax], 0
        jmp public_473743
        public_473646 : nop
        cmp eax, dword ptr ds : [esi+0x350]
        jne public_473756
        cmp dword ptr ds : [esi+0x33C], 2
        mov ecx, dword ptr ds : [esi+0x344]
        jne public_4736f4
        test ecx, ecx
        je public_4736a4
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_4736a4
        push 0x400
        lea edx, ss:[esp+0x10]
        push edx
        call public_57c2c0
        mov edi, dword ptr ds : [esi+0x338]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6fb0]
        public_4736a4 : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_4736b4
        mov dword ptr ds : [eax], 2
        public_4736b4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4736d7
        public_4736c5 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4736c5
        public_4736d7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0x800
        ret 0xC
        public_4736f4 : nop
        test ecx, ecx
        je public_473733
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_473733
        push 0x400
        lea eax, ss:[esp+0x10]
        push eax
        call public_57c2c0
        mov edi, dword ptr ds : [esi+0x338]
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c6fb0]
        public_473733 : nop
        mov eax, dword ptr ds : [esi+0x334]
        test eax, eax
        je public_473743
        mov dword ptr ds : [eax], 1
        public_473743 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        push esi
        call public_43d2a0
        add esp, 4
        public_473756 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x800
        ret 0xC
        UNREACHABLE_TRAP(0x473420)
    }
}

#undef public_473479
#undef public_4734ef
#undef public_4734ff
#undef public_473510
#undef public_473522
#undef public_47353f
#undef public_4735b7
#undef public_4735d0
#undef public_47362d
#undef public_473646
#undef public_4736a4
#undef public_4736b4
#undef public_4736c5
#undef public_4736d7
#undef public_4736f4
#undef public_473733
#undef public_473743
#undef public_473756
