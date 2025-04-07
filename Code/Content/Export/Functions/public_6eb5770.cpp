#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb57af _public_6eb57af
#define public_6eb57b4 _public_6eb57b4
#define public_6eb57bc _public_6eb57bc
#define public_6eb57c1 _public_6eb57c1
#define public_6eb57cd _public_6eb57cd
#define public_6eb57f0 _public_6eb57f0
#define public_6eb5804 _public_6eb5804
#define public_6eb586f _public_6eb586f
#define public_6eb58b0 _public_6eb58b0
#define public_6eb58bd _public_6eb58bd
#define public_6eb58d4 _public_6eb58d4
#define public_6eb58e3 _public_6eb58e3
#define public_6eb58f0 _public_6eb58f0
#define public_6eb58fb _public_6eb58fb

PROC_DECLARE(0x6eb5770, internal_6eb5770, public_6eb5770);
extern "C" NAKED register_t __cdecl internal_6eb5770()
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
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6eb586f
        test edx, edx
        je public_6eb57af
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6eb57b4
        public_6eb57af : nop
        mov ecx, 1
        public_6eb57b4 : nop
        test edx, edx
        jne public_6eb57bc
        xor eax, eax
        jmp public_6eb57c1
        public_6eb57bc : nop
        sub eax, edx
        sar eax, 2
        public_6eb57c1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6eb57cd
        xor eax, eax
        public_6eb57cd : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6eb5804
        lea ebx, ds:[ebx]
        public_6eb57f0 : nop
        push ebx
        push ebp
        call public_6eb6740
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6eb57f0
        public_6eb5804 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6eb6740
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa3db0
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6eb586f : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6eb58bd
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 2
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6eb58fb
        public_6eb58b0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6eb58b0
        jmp public_6eb58fb
        public_6eb58bd : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6eb58e3
        public_6eb58d4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6eb58d4
        public_6eb58e3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6eb58fb
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6eb58f0 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6eb58f0
        public_6eb58fb : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6eb5770)
    }
}

#undef public_6eb57af
#undef public_6eb57b4
#undef public_6eb57bc
#undef public_6eb57c1
#undef public_6eb57cd
#undef public_6eb57f0
#undef public_6eb5804
#undef public_6eb586f
#undef public_6eb58b0
#undef public_6eb58bd
#undef public_6eb58d4
#undef public_6eb58e3
#undef public_6eb58f0
#undef public_6eb58fb
