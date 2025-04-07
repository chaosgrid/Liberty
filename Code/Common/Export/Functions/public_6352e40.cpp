#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352e40);
CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_635b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_635b570);
CLANG_FORWARD_PROC_SYMBOL(public_635b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_635ba10);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);
CLANG_FORWARD_PROC_SYMBOL(public_6363350);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6364890);
CLANG_FORWARD_PROC_SYMBOL(public_63651c0);

#define public_6352e65 _public_6352e65
#define public_6352e74 _public_6352e74
#define public_6352ef2 _public_6352ef2
#define public_6352ef4 _public_6352ef4
#define public_6352f6e _public_6352f6e
#define public_6352f72 _public_6352f72
#define public_6352f9c _public_6352f9c
#define public_6353036 _public_6353036
#define public_6353038 _public_6353038
#define public_635306e _public_635306e
#define public_6353072 _public_6353072
#define public_635308e _public_635308e
#define public_63530aa _public_63530aa
#define public_6353116 _public_6353116
#define public_6353118 _public_6353118
#define public_6353171 _public_6353171
#define public_6353180 _public_6353180
#define public_635320a _public_635320a
#define public_635320c _public_635320c
#define public_6353270 _public_6353270
#define public_6353298 _public_6353298
#define public_63532bd _public_63532bd
#define public_63532db _public_63532db
#define public_63532f5 _public_63532f5
#define public_635331b _public_635331b
#define public_6353335 _public_6353335
#define public_635334f _public_635334f

PROC_DECLARE(0x6352e40, internal_6352e40, public_6352e40);
extern "C" NAKED register_t __cdecl internal_6352e40()
{
    __asm
    {
        sub esp, 0xD0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], 0x60AD78EC
        mov dword ptr ss : [esp+0x10], 3
        public_6352e65 : nop
        mov esi, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x14], 3
        public_6352e74 : nop
        mov ebx, dword ptr ss : [esp+0xF0]
        lea eax, ss:[esp+0x34]
        push eax
        push ebx
        push esi
        call public_635bda0
        mov ebp, dword ptr ss : [esp+0xF8]
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push edi
        call public_635bda0
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x4C]
        add esp, 0x18
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_6352ef2
        mov eax, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov dword ptr ds : [eax+0x14], edi
        mov word ptr ds : [eax+0x1A], cx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+0x14], esi
        mov word ptr ds : [eax+0x1A], cx
        jmp public_6352ef4
        public_6352ef2 : nop
        fstp st(0)
        public_6352ef4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, esi
        and edx, 0xC
        add esi, dword ptr ds : [edx+public_63ee4e0]
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6352e74
        mov eax, edi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ss : [esp+0x10]
        add edi, ecx
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6352e65
        mov ecx, dword ptr ss : [esp+0xEC]
        mov eax, dword ptr ss : [esp+0xF0]
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0xE4]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6352f72
        public_6352f6e : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6352f72 : nop
        mov edi, dword ptr ss : [esp+ebp+0x50]
        mov edx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [esp+ebp+0x44]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        push ebx
        call public_635b8d0
        mov esi, dword ptr ss : [esp+ebp+0x6C]
        mov ebp, dword ptr ss : [esp+ebp+0x64]
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 3
        public_6352f9c : nop
        lea eax, ss:[esp+0x34]
        push eax
        push edi
        push ebp
        push esi
        call public_635ae60
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        push ebx
        push eax
        call public_635b210
        mov ecx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x88]
        or ecx, eax
        or ecx, edx
        add esp, 0x20
        test ecx, 0x80000000
        jne public_6353038
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fadd dword ptr ss : [esp+0x30]
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [public_63a5650]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_6353036
        mov eax, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x14], esi
        mov word ptr ds : [eax+0x1A], 0
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+0x14], ebx
        mov word ptr ds : [eax+0x1A], 2
        jmp public_6353038
        public_6353036 : nop
        fstp st(0)
        public_6353038 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, esi
        and edx, 0xC
        add esi, dword ptr ds : [edx+public_63ee4e0]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6352f9c
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 4
        cmp eax, 8
        mov dword ptr ss : [esp+0x14], eax
        jl public_6352f6e
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6353072
        public_635306e : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6353072 : nop
        mov ecx, dword ptr ss : [esp+eax+0x60]
        mov edi, dword ptr ss : [esp+eax+0x44]
        mov ebp, dword ptr ss : [esp+eax+0x50]
        mov ebx, dword ptr ss : [esp+eax+0x58]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x20], 3
        public_635308e : nop
        lea edx, ss:[esp+0x68]
        push edx
        push ebx
        push ebp
        push edi
        call public_635ae60
        mov esi, dword ptr ss : [esp+0x5C]
        add esp, 0x10
        mov dword ptr ss : [esp+0x10], 3
        public_63530aa : nop
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea eax, ds:[ebx+4]
        push esi
        push edx
        call public_635b150
        mov eax, dword ptr ss : [esp+0x48]
        or eax, dword ptr ss : [esp+0x44]
        add esp, 0x10
        test eax, 0x80000000
        jne public_6353118
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x68]
        push ecx
        push esi
        push eax
        call public_635ba10
        fld st(0)
        fmul dword ptr ds : [public_63a5650]
        add esp, 0xC
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_6353116
        mov eax, dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x14], esi
        mov word ptr ds : [eax+0x1A], 1
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x14], edi
        mov word ptr ds : [eax+0x1A], 0
        jmp public_6353118
        public_6353116 : nop
        fstp st(0)
        public_6353118 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, esi
        and edx, 0xC
        add esi, dword ptr ds : [edx+public_63ee4e0]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_63530aa
        mov eax, edi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ss : [esp+0x20]
        add edi, ecx
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_635308e
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 4
        cmp eax, 8
        mov dword ptr ss : [esp+0x14], eax
        jl public_635306e
        mov edi, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x10], 3
        public_6353171 : nop
        mov esi, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x20], 3
        public_6353180 : nop
        mov ebx, dword ptr ss : [esp+0xF0]
        mov ebp, dword ptr ss : [esp+0xEC]
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x88]
        call public_635b3b0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_635b570
        mov eax, dword ptr ss : [esp+0x30]
        or eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        test eax, 0x80000000
        jne public_635320c
        mov ecx, dword ptr ss : [esp+0x2C]
        or ecx, dword ptr ss : [esp+0x30]
        test ecx, 0x80000000
        jne public_635320c
        lea ecx, ss:[esp+0x78]
        call public_635b4d0
        fld st(0)
        fmul dword ptr ds : [public_63a5650]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_635320a
        mov eax, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, 1
        mov dword ptr ds : [eax+0x14], edi
        mov word ptr ds : [eax+0x1A], cx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+0x14], esi
        mov word ptr ds : [eax+0x1A], cx
        jmp public_635320c
        public_635320a : nop
        fstp st(0)
        public_635320c : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, esi
        and edx, 0xC
        add esi, dword ptr ds : [edx+public_63ee4e0]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6353180
        mov eax, edi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ss : [esp+0x10]
        add edi, ecx
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6353171
        mov ecx, dword ptr ss : [esp+0xF0]
        mov eax, dword ptr ss : [esp+0xEC]
        mov edx, dword ptr ds : [ecx+0x10]
        cmp word ptr ds : [edx+0x1A], 0
        mov esi, dword ptr ds : [eax+0x10]
        mov edi, eax
        jne public_6353270
        cmp word ptr ds : [esi+0x1A], 0
        je public_6353270
        mov edi, esi
        mov esi, edx
        mov edx, edi
        mov edi, ecx
        mov ecx, eax
        public_6353270 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x14]
        shr eax, 8
        and eax, 3
        lea ebp, ds:[eax*8]
        sub ebp, eax
        lea eax, ds:[ebx+ebp*4+0x18]
        cmp dword ptr ds : [edi+0x10], eax
        je public_6353298
        xor dword ptr ds : [ebx+0x14], 0x100
        public_6353298 : nop
        mov ebx, dword ptr ds : [esi+0x14]
        movsx esi, word ptr ds : [esi+0x1A]
        mov ebp, dword ptr ds : [edx+0x14]
        xor eax, eax
        sub esi, eax
        je public_63532f5
        dec esi
        je public_63532bd
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [0], eax
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_63532bd : nop
        movsx edx, word ptr ds : [edx+0x1A]
        dec edx
        je public_63532db
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [0], 0
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_63532db : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ebp
        push ebx
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_63532f5 : nop
        movsx edx, word ptr ds : [edx+0x1A]
        sub edx, 0
        je public_635334f
        dec edx
        je public_6353335
        dec edx
        je public_635331b
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [0], 0
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_635331b : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ebp
        push ebx
        call public_6363350
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_6353335 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ebp
        push ebx
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 0x10
        public_635334f : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ebp
        push ebx
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD0
        ret 0x10
        UNREACHABLE_TRAP(0x6352e40)
    }
}

#undef public_6352e65
#undef public_6352e74
#undef public_6352ef2
#undef public_6352ef4
#undef public_6352f6e
#undef public_6352f72
#undef public_6352f9c
#undef public_6353036
#undef public_6353038
#undef public_635306e
#undef public_6353072
#undef public_635308e
#undef public_63530aa
#undef public_6353116
#undef public_6353118
#undef public_6353171
#undef public_6353180
#undef public_635320a
#undef public_635320c
#undef public_6353270
#undef public_6353298
#undef public_63532bd
#undef public_63532db
#undef public_63532f5
#undef public_635331b
#undef public_6353335
#undef public_635334f
