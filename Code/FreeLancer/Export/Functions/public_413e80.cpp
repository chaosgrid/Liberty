#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413e80);
CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_413ea0 _public_413ea0
#define public_413ead _public_413ead
#define public_413eb1 _public_413eb1
#define public_413eef _public_413eef
#define public_413ef4 _public_413ef4
#define public_413efc _public_413efc
#define public_413f01 _public_413f01
#define public_413f0d _public_413f0d
#define public_413f30 _public_413f30
#define public_413f44 _public_413f44
#define public_413fa3 _public_413fa3
#define public_413fb9 _public_413fb9
#define public_413ff8 _public_413ff8
#define public_414007 _public_414007
#define public_414020 _public_414020
#define public_41402f _public_41402f
#define public_414036 _public_414036
#define public_414043 _public_414043
#define public_414049 _public_414049
#define public_414062 _public_414062

PROC_DECLARE(0x413e80, internal_413e80, public_413e80);
extern "C" NAKED register_t __cdecl internal_413e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        je public_414062
        mov ecx, dword ptr ds : [eax+0x24]
        push ebp
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_413eb1
        public_413ea0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_413eb1
        public_413ead : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_413eb1 : nop
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x24], ebx
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x10], edx
        mov edi, eax
        jae public_413fb9
        mov edx, dword ptr ds : [esi+4]
        cmp edx, ebx
        je public_413eef
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_413ef4
        public_413eef : nop
        mov ecx, 1
        public_413ef4 : nop
        cmp edx, ebx
        jne public_413efc
        xor eax, eax
        jmp public_413f01
        public_413efc : nop
        sub eax, edx
        sar eax, 2
        public_413f01 : nop
        add eax, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jge public_413f0d
        xor eax, eax
        public_413f0d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, eax
        je public_413f44
        lea ebx, ds:[ebx]
        public_413f30 : nop
        push ebp
        push ebx
        call public_5999b0
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_413f30
        public_413f44 : nop
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_413fa3
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+4], edx
        xor ebx, ebx
        jmp public_414049
        public_413fa3 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+4], edx
        xor ebx, ebx
        jmp public_414049
        public_413fb9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_414007
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x24]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_427730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_414043
        public_413ff8 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_413ff8
        jmp public_414043
        public_414007 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_41402f
        lea esp, ss:[esp]
        public_414020 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_414020
        public_41402f : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_414043
        public_414036 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_414036
        public_414043 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_414049 : nop
        mov dword ptr ds : [esi+8], eax
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_413ead
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_413ea0
        pop edi
        pop ebp
        public_414062 : nop
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x413e80)
    }
}

#undef public_413ea0
#undef public_413ead
#undef public_413eb1
#undef public_413eef
#undef public_413ef4
#undef public_413efc
#undef public_413f01
#undef public_413f0d
#undef public_413f30
#undef public_413f44
#undef public_413fa3
#undef public_413fb9
#undef public_413ff8
#undef public_414007
#undef public_414020
#undef public_41402f
#undef public_414036
#undef public_414043
#undef public_414049
#undef public_414062
