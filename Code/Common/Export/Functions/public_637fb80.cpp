#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637fb80);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);

#define public_637fbb3 _public_637fbb3
#define public_637fbb9 _public_637fbb9
#define public_637fbe6 _public_637fbe6
#define public_637fbe9 _public_637fbe9
#define public_637fc09 _public_637fc09
#define public_637fc1a _public_637fc1a
#define public_637fc3a _public_637fc3a
#define public_637fc53 _public_637fc53
#define public_637fc61 _public_637fc61
#define public_637fcb9 _public_637fcb9
#define public_637fcc6 _public_637fcc6
#define public_637fccd _public_637fccd
#define public_637fd21 _public_637fd21
#define public_637fd27 _public_637fd27

PROC_DECLARE(0x637fb80, internal_637fb80, public_637fb80);
extern "C" NAKED register_t __cdecl internal_637fb80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        lea esi, ds:[eax+edx*8]
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x20], esi
        add esi, 0xFFFFFFF8
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_637fbb3
        fld qword ptr ds : [public_63a59b8]
        jmp public_637fbb9
        public_637fbb3 : nop
        fld qword ptr ds : [public_63a5940]
        public_637fbb9 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        fstp qword ptr ds : [esi]
        sub esi, 8
        test eax, eax
        lea ebx, ds:[eax-1]
        je public_637fcc6
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        lea edi, ds:[ebx+1]
        lea ecx, ds:[eax+ebx*4]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_637fbe9
        public_637fbe6 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        public_637fbe9 : nop
        cmp edi, edx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov ecx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ebx*8+8]
        lea eax, ds:[esi+8]
        jge public_637fc1a
        sub edx, edi
        public_637fc09 : nop
        fld qword ptr ds : [eax]
        add eax, 8
        fmul qword ptr ds : [ecx]
        add ecx, 8
        dec edx
        fsubr qword ptr ds : [esi]
        fstp qword ptr ds : [esi]
        jne public_637fc09
        public_637fc1a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        fld qword ptr ds : [eax+ebx*8]
        fst qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_63a58b0]
        fld qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_637fc3a
        fchs 
        public_637fc3a : nop
        fcomp qword ptr ds : [public_658b6e0]
        fnstsw ax
        test ah, 0x41
        jne public_637fccd
        fld qword ptr ds : [esi]
        fdiv qword ptr ss : [esp+0x28]
        fstp qword ptr ds : [esi]
        public_637fc53 : nop
        mov eax, dword ptr ss : [esp+0x10]
        sub esi, 8
        sub eax, 8
        mov dword ptr ss : [esp+0x10], eax
        public_637fc61 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, ebx
        dec ebx
        dec edi
        sub ecx, 4
        test edx, edx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_637fbe6
        cmp dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_637fcc6
        mov ecx, dword ptr ds : [public_658ba48]
        mov eax, dword ptr ss : [ebp+0x1C]
        inc ecx
        mov dword ptr ds : [public_658ba48], ecx
        mov dword ptr ds : [eax], 1
        cmp dword ptr ds : [public_658b078], 4
        jl public_637fcb9
        mov ecx, dword ptr ds : [public_658b7fc]
        push 0xFFFFFFFF
/*FIXUP push offset public_63f633c @0x637fcaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f633c
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
/*FIXUP public_637fcb9 : nop
        push offset public_63f6318 @0x637fcb9*/
  FIXUP public_637fcb9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6318
        call public_637f410
        add esp, 4
        public_637fcc6 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637fccd : nop
        mov edx, dword ptr ds : [public_658b6dc]
        mov eax, dword ptr ds : [public_658b6d8]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x34], 0
        call public_63829d0
        fstp qword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x1C
        test eax, eax
        je public_637fc53
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x20], ebx
        je public_637fd21
        fld qword ptr ds : [public_63a59b8]
        jmp public_637fd27
        public_637fd21 : nop
        fld qword ptr ds : [public_63a5940]
        public_637fd27 : nop
        mov edx, dword ptr ss : [esp+0x10]
        fstp qword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x24]
        sub edx, 8
        sub esi, 8
        cmp edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        jae public_637fc61
        sub ecx, edx
        add ecx, 7
        shr ecx, 2
        and ecx, 0x3FFFFFFE
        xor eax, eax
        mov edi, edx
        rep stosd
        mov edi, dword ptr ss : [esp+0x1C]
        jmp public_637fc61
        UNREACHABLE_TRAP(0x637fb80)
    }
}

#undef public_637fbb3
#undef public_637fbb9
#undef public_637fbe6
#undef public_637fbe9
#undef public_637fc09
#undef public_637fc1a
#undef public_637fc3a
#undef public_637fc53
#undef public_637fc61
#undef public_637fcb9
#undef public_637fcc6
#undef public_637fccd
#undef public_637fd21
#undef public_637fd27
