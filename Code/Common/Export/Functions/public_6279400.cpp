#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6279400);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6279440 _public_6279440
#define public_6279442 _public_6279442
#define public_627946f _public_627946f
#define public_6279474 _public_6279474
#define public_627947c _public_627947c
#define public_6279481 _public_6279481
#define public_627948d _public_627948d
#define public_627950c _public_627950c
#define public_6279550 _public_6279550
#define public_6279571 _public_6279571
#define public_6279586 _public_6279586
#define public_6279595 _public_6279595
#define public_62795a0 _public_62795a0
#define public_62795ad _public_62795ad

PROC_DECLARE(0x6279400, internal_6279400, public_6279400);
extern "C" NAKED register_t __cdecl internal_6279400()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6391d9c
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6279440
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ebx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        jmp public_6279442
        public_6279440 : nop
        xor eax, eax
        public_6279442 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_627950c
        mov edx, dword ptr ds : [esi+4]
        cmp edx, ebx
        je public_627946f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6279474
        public_627946f : nop
        mov ecx, 1
        public_6279474 : nop
        cmp edx, ebx
        jne public_627947c
        xor eax, eax
        jmp public_6279481
        public_627947c : nop
        sub eax, edx
        sar eax, 2
        public_6279481 : nop
        push ebp
        lea ebp, ds:[eax+ecx]
        cmp ebp, ebx
        mov eax, ebp
        jge public_627948d
        xor eax, eax
        public_627948d : nop
        shl eax, 2
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_627f7b0
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add eax, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        pop ebp
        lea eax, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_627950c : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6279571
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0xC]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62795ad
        lea ecx, ds:[ecx]
        public_6279550 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6279550
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6279571 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6279595
        public_6279586 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6279586
        public_6279595 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_62795ad
        mov edi, edi
        public_62795a0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62795a0
        public_62795ad : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6279400)
    }
}

#undef public_6279440
#undef public_6279442
#undef public_627946f
#undef public_6279474
#undef public_627947c
#undef public_6279481
#undef public_627948d
#undef public_627950c
#undef public_6279550
#undef public_6279571
#undef public_6279586
#undef public_6279595
#undef public_62795a0
#undef public_62795ad
