#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6c40);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6e10);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd6385 _public_6bd6385
#define public_6bd63a7 _public_6bd63a7
#define public_6bd6429 _public_6bd6429
#define public_6bd6481 _public_6bd6481
#define public_6bd64f8 _public_6bd64f8
#define public_6bd6502 _public_6bd6502
#define public_6bd6532 _public_6bd6532
#define public_6bd65a6 _public_6bd65a6
#define public_6bd65ed _public_6bd65ed
#define public_6bd665b _public_6bd665b
#define public_6bd6664 _public_6bd6664
#define public_6bd6669 _public_6bd6669
#define public_6bd6684 _public_6bd6684

PROC_DECLARE(0x6bd6350, internal_6bd6350, public_6bd6350);
extern "C" NAKED register_t __cdecl internal_6bd6350()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        test esi, esi
        push edi
        je public_6bd6502
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6bd63a7
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_6bd63a7
        lea ecx, ds:[eax+4]
        cmp ecx, edx
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6bd6664
        lea ecx, ss:[esp+0x20]
        push ecx
        public_6bd6385 : nop
        push eax
        call public_6bd6ee0
        add esp, 8
        mov ecx, esi
        call public_6bd6c40
        mov eax, dword ptr ds : [esi+0x2C]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_6bd63a7 : nop
        push 0x1000
        call public_6c09d26
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6bd6429
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 2
        call public_6bd6e10
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 4
        push ecx
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+4]
        mov ebx, edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        push ecx
        jmp public_6bd6669
        public_6bd6429 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_6bd6481
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        push ecx
        jmp public_6bd6669
        public_6bd6481 : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea eax, ds:[ebx+ebx]
        push eax
        mov ecx, esi
        call public_6bd6e30
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        push ebx
        mov dword ptr ds : [edx+0xC], ecx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0x14]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x1C], edx
        public_6bd64f8 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6bd6669
        public_6bd6502 : nop
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        je public_6bd6684
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6bd6532
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_6bd6532
        lea ecx, ds:[eax+4]
        cmp ecx, edx
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6bd64f8
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_6bd6385
        public_6bd6532 : nop
        push 0x1000
        call public_6c09d26
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6bd65a6
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 2
        call public_6bd6e10
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 4
        push eax
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+4]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_6bd665b
        public_6bd65a6 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ds:[ecx+edx*4-4]
        cmp eax, edx
        jae public_6bd65ed
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_6bd665b
        public_6bd65ed : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea ecx, ds:[ebx+ebx]
        push ecx
        mov ecx, esi
        call public_6bd6e30
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        push ebx
        push edi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [eax+0xC], edx
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        public_6bd665b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x1C], ecx
        public_6bd6664 : nop
        lea edx, ss:[esp+0x20]
        push edx
        public_6bd6669 : nop
        push eax
        call public_6bd6ee0
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_6bd6684 : nop
        pop edi
        pop esi
        mov eax, 4
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6bd6350)
    }
}

#undef public_6bd6385
#undef public_6bd63a7
#undef public_6bd6429
#undef public_6bd6481
#undef public_6bd64f8
#undef public_6bd6502
#undef public_6bd6532
#undef public_6bd65a6
#undef public_6bd65ed
#undef public_6bd665b
#undef public_6bd6664
#undef public_6bd6669
#undef public_6bd6684
