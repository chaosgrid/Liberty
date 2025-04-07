#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6382a80);
CLANG_FORWARD_PROC_SYMBOL(public_63831f0);

#define public_6383212 _public_6383212
#define public_638322f _public_638322f
#define public_6383262 _public_6383262
#define public_638328e _public_638328e
#define public_63832d2 _public_63832d2
#define public_6383312 _public_6383312
#define public_638333e _public_638333e
#define public_6383355 _public_6383355
#define public_6383357 _public_6383357
#define public_6383362 _public_6383362

PROC_DECLARE(0x63831f0, internal_63831f0, public_63831f0);
extern "C" NAKED register_t __cdecl internal_63831f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b1cc]
        test eax, eax
        push esi
        je public_6383212
/*FIXUP push offset public_63f6e84 @0x6383203*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6e84
        call public_6356960
        add esp, 4
        jmp public_638322f
        public_6383212 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_638322f
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f6e4c @0x6383220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6e4c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638322f : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        mov dword ptr ds : [public_658b8d8], 0
        mov dword ptr ds : [public_658b8dc], 0
        mov dword ptr ds : [public_658b8d0], 0
        mov dword ptr ds : [public_658b8d4], 0
        je public_6383362
        public_6383262 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6383362
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6383357
        test dword ptr ds : [esi+0x50], 0x10000
        je public_638328e
        mov eax, dword ptr ds : [public_658b028]
        test eax, eax
        jne public_6383357
        public_638328e : nop
        push esi
        call public_6382a80
        fst qword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x50]
        fst qword ptr ss : [esp+0xC]
        or ecx, 0x80000
        mov dword ptr ds : [esi+0x50], ecx
        mov eax, dword ptr ds : [public_658b050]
        add esp, 4
        test eax, eax
        je public_63832d2
        mov eax, dword ptr ds : [public_658b21c]
        shr ecx, 0x10
        and ecx, 1
        cmp ecx, eax
        jne public_6383312
        fld qword ptr ds : [public_658b8d0]
        fadd st, st(1)
        fstp qword ptr ds : [public_658b8d0]
        jmp public_6383312
        public_63832d2 : nop
        fld qword ptr ds : [public_658b8d0]
        mov eax, dword ptr ds : [public_658b800]
        fadd st, st(1)
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        fstp qword ptr ds : [public_658b8d0]
        push eax
        fstp st(0)
        call public_637fd60
        fld qword ptr ss : [esp+0x14]
        add esp, 0xC
        fld qword ptr ss : [esp+0x10]
        fmul st, st(1)
        fidiv dword ptr ds : [public_658b24c]
        fsubr qword ptr ds : [public_658b8d8]
        fstp qword ptr ds : [public_658b8d8]
        public_6383312 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_6383355
        fld qword ptr ds : [public_658ba18]
        fadd st, st(1)
        fstp qword ptr ds : [public_658ba18]
        fld qword ptr ds : [public_658ba20]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638333e
        fst qword ptr ds : [public_658ba20]
        public_638333e : nop
        fld qword ptr ds : [public_658ba28]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6383355
        fstp qword ptr ds : [public_658ba28]
        jmp public_6383357
        public_6383355 : nop
        fstp st(0)
        public_6383357 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6383262
        public_6383362 : nop
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63831f0)
    }
}

#undef public_6383212
#undef public_638322f
#undef public_6383262
#undef public_638328e
#undef public_63832d2
#undef public_6383312
#undef public_638333e
#undef public_6383355
#undef public_6383357
#undef public_6383362
