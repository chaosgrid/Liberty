#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4cf030);
CLANG_FORWARD_PROC_SYMBOL(public_4d4120);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdc44);

#define public_4cf076 _public_4cf076
#define public_4cf078 _public_4cf078
#define public_4cf085 _public_4cf085
#define public_4cf0bd _public_4cf0bd
#define public_4cf0bf _public_4cf0bf
#define public_4cf0d6 _public_4cf0d6
#define public_4cf0e2 _public_4cf0e2
#define public_4cf0e4 _public_4cf0e4
#define public_4cf0fd _public_4cf0fd
#define public_4cf0ff _public_4cf0ff
#define public_4cf167 _public_4cf167
#define public_4cf186 _public_4cf186
#define public_4cf228 _public_4cf228
#define public_4cf25a _public_4cf25a
#define public_4cf287 _public_4cf287
#define public_4cf29b _public_4cf29b
#define public_4cf365 _public_4cf365
#define public_4cf375 _public_4cf375
#define public_4cf378 _public_4cf378

PROC_DECLARE(0x4cf030, internal_4cf030, public_4cf030);
extern "C" NAKED register_t __cdecl internal_4cf030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdc44 @0x4cf032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdc44
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+4]
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], 1
        je public_4cf076
        add eax, 8
        jmp public_4cf078
        public_4cf076 : nop
        xor eax, eax
        public_4cf078 : nop
        cmp eax, dword ptr ds : [edi]
        je public_4cf085
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4cf085 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], eax
        mov byte ptr ds : [esi+0x18], bl
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_4cf167
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4cf167
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_4cf0bd
        lea ecx, ds:[eax-8]
        jmp public_4cf0bf
        public_4cf0bd : nop
        xor ecx, ecx
        public_4cf0bf : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ds : [esi+0x10], eax
        cmp dword ptr ds : [public_674900], eax
        jne public_4cf0d6
        mov byte ptr ds : [public_6748fc], 1
        public_4cf0d6 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        push ebp
        je public_4cf0e2
        lea ebp, ds:[eax-8]
        jmp public_4cf0e4
        public_4cf0e2 : nop
        xor ebp, ebp
        public_4cf0e4 : nop
        call public_54baf0
        cmp ebp, eax
        pop ebp
        je public_4cf365
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        je public_4cf0fd
        lea ecx, ds:[edi-8]
        jmp public_4cf0ff
        public_4cf0fd : nop
        xor ecx, ecx
        public_4cf0ff : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [public_674904]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_674908]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_67490c]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fsubrp 
        fst dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4cf365
        mov dword ptr ds : [esi+0xC], ebx
        jmp public_4cf365
        public_4cf167 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        jne public_4cf25a
        mov edi, dword ptr ds : [esi+0x14]
        call public_4c4690
        cmp edi, eax
        jl public_4cf186
        mov dword ptr ds : [esi+0xC], ebx
        jmp public_4cf228
        public_4cf186 : nop
        push edi
        call public_4c46a0
        mov edx, eax
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_674904]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_674908]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        add esp, 4
        fsub dword ptr ds : [public_67490c]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        fstp st(0)
        fstp st(0)
        fstp st(0)
        je public_4cf228
        push ebx
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        je public_4cf228
        fld dword ptr ds : [esi+0xC]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x38], eax
        fild dword ptr ss : [esp+0x38]
        mov ecx, edi
        fstp dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        fld dword ptr ds : [esi+0xC]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0xC]
        fstp st(0)
        public_4cf228 : nop
        cmp byte ptr ds : [public_6748fc], bl
        jne public_4cf365
        mov edx, dword ptr ds : [public_674900]
        push 1
        push edx
        push esi
        call public_4d4120
        add esp, 0xC
        test al, al
        je public_4cf365
        mov byte ptr ds : [public_6748fc], 1
        jmp public_4cf365
        public_4cf25a : nop
        cmp eax, 3
        jne public_4cf365
        cmp byte ptr ds : [public_6748fc], bl
        jne public_4cf287
        mov eax, dword ptr ds : [public_674900]
        push 1
        push eax
        push esi
        call public_4d4120
        add esp, 0xC
        test al, al
        je public_4cf287
        mov byte ptr ds : [public_6748fc], 1
        public_4cf287 : nop
        mov edi, dword ptr ds : [esi+0x14]
        call public_4c4fb0
        cmp edi, eax
        jl public_4cf29b
        mov dword ptr ds : [esi+0xC], ebx
        jmp public_4cf365
        public_4cf29b : nop
        push edi
        call public_4c4ff0
        add esp, 4
        lea ecx, ss:[esp+0x38]
        push ecx
        mov edi, eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_4c52d0
        test al, al
        je public_4cf375
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx]
        cmp dword ptr ss : [esp+0x38], eax
        jne public_4cf375
        fld dword ptr ss : [esp+0x10]
        mov ecx, edi
        fsub dword ptr ds : [public_674904]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_674908]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [public_67490c]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fstp dword ptr ds : [esi+0xC]
        call public_4c5110
        mov edi, eax
        cmp edi, ebx
        je public_4cf365
        fld dword ptr ds : [esi+0xC]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x3C], eax
        fild dword ptr ss : [esp+0x3C]
        mov ecx, edi
        fstp dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        fld dword ptr ds : [esi+0xC]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0xC]
        fstp st(0)
        public_4cf365 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4cf378
        public_4cf375 : nop
        mov dword ptr ds : [esi+0xC], ebx
        public_4cf378 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x14
        UNREACHABLE_TRAP(0x4cf030)
    }
}

#undef public_4cf076
#undef public_4cf078
#undef public_4cf085
#undef public_4cf0bd
#undef public_4cf0bf
#undef public_4cf0d6
#undef public_4cf0e2
#undef public_4cf0e4
#undef public_4cf0fd
#undef public_4cf0ff
#undef public_4cf167
#undef public_4cf186
#undef public_4cf228
#undef public_4cf25a
#undef public_4cf287
#undef public_4cf29b
#undef public_4cf365
#undef public_4cf375
#undef public_4cf378
