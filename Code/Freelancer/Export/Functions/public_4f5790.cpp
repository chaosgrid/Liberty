#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5790);

#define public_4f579e _public_4f579e
#define public_4f57a6 _public_4f57a6
#define public_4f57c0 _public_4f57c0
#define public_4f57db _public_4f57db
#define public_4f57e0 _public_4f57e0
#define public_4f57ec _public_4f57ec
#define public_4f5808 _public_4f5808
#define public_4f5814 _public_4f5814
#define public_4f5880 _public_4f5880
#define public_4f58a0 _public_4f58a0
#define public_4f58b5 _public_4f58b5
#define public_4f58dc _public_4f58dc
#define public_4f58f1 _public_4f58f1
#define public_4f590a _public_4f590a

PROC_DECLARE(0x4f5790, internal_4f5790, public_4f5790);
extern "C" NAKED register_t __cdecl internal_4f5790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        sub esp, 0x20
        test eax, eax
        jne public_4f579e
        xor edx, edx
        jmp public_4f57a6
        public_4f579e : nop
        mov edx, dword ptr ds : [ecx+0x10]
        sub edx, eax
        sar edx, 2
        public_4f57a6 : nop
        push ebx
        push ebp
        push esi
        xor eax, eax
        test edx, edx
        push edi
        jle public_4f57e0
        mov edi, dword ptr ds : [ecx+0xC]
        mov ebx, dword ptr ss : [esp+0x34]
        mov esi, edi
        lea esp, ss:[esp]
        public_4f57c0 : nop
        mov ebp, dword ptr ds : [esi]
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_4f57db
        inc eax
        add esi, 4
        cmp eax, edx
        jl public_4f57c0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 0xC
        public_4f57db : nop
        cmp eax, 0xFFFFFFFF
        jne public_4f57ec
        public_4f57e0 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 0xC
        public_4f57ec : nop
        mov edi, dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x14], edi
        jne public_4f5808
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4f5814
        public_4f5808 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 4
        mov dword ptr ss : [esp+0x10], edi
        public_4f5814 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_4f590a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f590a
        add eax, 0xC
        test eax, eax
        je public_4f590a
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4f590a
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4f590a
        push 0xE0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x20]
        lea ecx, ds:[esi+0xE4]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        call dword ptr ds : [public_5c64f0]
        mov edi, eax
        test edi, edi
        je public_4f590a
        public_4f5880 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x60]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        test eax, eax
        jle public_4f58f1
        xor esi, esi
        lea ebx, ds:[ebx]
        public_4f58a0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+4]
        add eax, esi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4f58b5
        mov eax, dword ptr ds : [public_5c7078]
        public_4f58b5 : nop
        push ebp
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4f58dc
        mov eax, dword ptr ss : [esp+0x3C]
        cmp dword ptr ss : [esp+0x34], eax
        jge public_4f58f1
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        add esi, 0x10
        cmp ebx, eax
        jl public_4f58a0
        jmp public_4f58f1
        public_4f58dc : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov cx, word ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x38]
        mov word ptr ds : [edx+eax*2], cx
        inc eax
        mov dword ptr ss : [esp+0x34], eax
        public_4f58f1 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_5c64f0]
        mov edi, eax
        test edi, edi
        jne public_4f5880
        public_4f590a : nop
        mov eax, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x4f5790)
    }
}

#undef public_4f579e
#undef public_4f57a6
#undef public_4f57c0
#undef public_4f57db
#undef public_4f57e0
#undef public_4f57ec
#undef public_4f5808
#undef public_4f5814
#undef public_4f5880
#undef public_4f58a0
#undef public_4f58b5
#undef public_4f58dc
#undef public_4f58f1
#undef public_4f590a
