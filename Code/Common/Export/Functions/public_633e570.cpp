#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6323900);
CLANG_FORWARD_PROC_SYMBOL(public_633e570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633e5af _public_633e5af
#define public_633e5b4 _public_633e5b4
#define public_633e5bc _public_633e5bc
#define public_633e5c1 _public_633e5c1
#define public_633e5cd _public_633e5cd
#define public_633e5f0 _public_633e5f0
#define public_633e604 _public_633e604
#define public_633e66f _public_633e66f
#define public_633e6b0 _public_633e6b0
#define public_633e6c3 _public_633e6c3
#define public_633e6e0 _public_633e6e0
#define public_633e6f5 _public_633e6f5
#define public_633e702 _public_633e702
#define public_633e713 _public_633e713

PROC_DECLARE(0x633e570, internal_633e570, public_633e570);
extern "C" NAKED register_t __cdecl internal_633e570()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 3
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_633e66f
        test edx, edx
        je public_633e5af
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_633e5b4
        public_633e5af : nop
        mov ecx, 1
        public_633e5b4 : nop
        test edx, edx
        jne public_633e5bc
        xor eax, eax
        jmp public_633e5c1
        public_633e5bc : nop
        sub eax, edx
        sar eax, 3
        public_633e5c1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_633e5cd
        xor eax, eax
        public_633e5cd : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_633e604
        lea ebx, ds:[ebx]
        public_633e5f0 : nop
        push ebx
        push ebp
        call public_62bee40
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_633e5f0
        public_633e604 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_62bee40
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 8
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_62b9530
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a5e0
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_633e66f : nop
        mov edx, eax
        sub edx, edi
        sar edx, 3
        cmp edx, 1
        jae public_633e6c3
        lea ecx, ds:[edi+8]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_62b9530
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 3
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6323900
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_633e713
        public_633e6b0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_633e6b0
        jmp public_633e713
        public_633e6c3 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, esi
        call public_62b9530
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_633e6f5
        lea ebx, ds:[ebx]
        public_633e6e0 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_633e6e0
        public_633e6f5 : nop
        lea edx, ds:[edi+8]
        cmp edi, edx
        mov eax, edi
        je public_633e713
        mov ecx, dword ptr ss : [esp+0x20]
        public_633e702 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, edx
        jne public_633e702
        public_633e713 : nop
        add dword ptr ds : [esi+8], 8
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*8]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x633e570)
    }
}

#undef public_633e5af
#undef public_633e5b4
#undef public_633e5bc
#undef public_633e5c1
#undef public_633e5cd
#undef public_633e5f0
#undef public_633e604
#undef public_633e66f
#undef public_633e6b0
#undef public_633e6c3
#undef public_633e6e0
#undef public_633e6f5
#undef public_633e702
#undef public_633e713
