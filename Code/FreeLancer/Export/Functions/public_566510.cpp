#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5b737a);

#define public_566530 _public_566530
#define public_56653f _public_56653f
#define public_566544 _public_566544
#define public_56654a _public_56654a
#define public_566576 _public_566576
#define public_56659b _public_56659b
#define public_56659d _public_56659d
#define public_5665a9 _public_5665a9
#define public_5665e8 _public_5665e8
#define public_566612 _public_566612
#define public_56668b _public_56668b
#define public_5666d1 _public_5666d1
#define public_566739 _public_566739
#define public_566741 _public_566741
#define public_566772 _public_566772
#define public_5667eb _public_5667eb
#define public_566831 _public_566831
#define public_56688a _public_56688a
#define public_5668b6 _public_5668b6
#define public_5668e4 _public_5668e4

PROC_DECLARE(0x566510, internal_566510, public_566510);
extern "C" NAKED register_t __cdecl internal_566510()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebp, ebp
        cmp ecx, ebp
        push edi
        mov bl, 1
        je public_56654a
        lea ebx, ds:[ebx]
        public_566530 : nop
        test byte ptr ds : [ecx+0x6C], bl
        mov edi, dword ptr ds : [ecx+8]
        je public_56653f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_566544
        public_56653f : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_566544 : nop
        cmp edi, ebp
        mov ecx, edi
        jne public_566530
        public_56654a : nop
        call dword ptr ds : [public_5c72ec]
        mov edx, dword ptr ds : [esi+0x558]
        mov ecx, dword ptr ds : [esi+0x554]
        mov edi, eax
        sub eax, edx
        cmp eax, ecx
        jbe public_5665a9
        mov ecx, offset public_67e7bc
        call public_5b737a
        test eax, eax
        jne public_566576
        xor al, al
        jmp public_56659d
        public_566576 : nop
        mov al, byte ptr ds : [public_614ae0]
        test al, al
        jne public_56659b
        mov eax, dword ptr ds : [esi+0x550]
        cmp eax, ebp
        je public_56659b
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], ebp
        call eax
        test eax, eax
        setne al
        jmp public_56659d
        public_56659b : nop
        mov al, bl
        public_56659d : nop
        mov byte ptr ds : [esi+0x34A], al
        mov dword ptr ds : [esi+0x558], edi
        public_5665a9 : nop
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        mov al, byte ptr ds : [esi+0x56C]
        test ah, 0x41
        jp public_566739
        test al, al
        jne public_566741
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_5665e8
        fstp st(0)
        fld qword ptr ds : [public_5c75e8]
        public_5665e8 : nop
        fmul qword ptr ds : [public_5d3c48]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], 6
        lea ebx, ds:[esi+0x534]
        fadd qword ptr ds : [esi+0x560]
        lea edi, ds:[esi+0x84]
        fstp qword ptr ds : [esi+0x560]
        public_566612 : nop
        fld dword ptr ds : [public_5c7500]
        mov edx, dword ptr ds : [edi]
        fild dword ptr ss : [esp+0x14]
        mov ecx, edi
        fmul qword ptr ds : [public_5c7720]
        fst qword ptr ss : [esp+0x18]
        fadd qword ptr ds : [esi+0x560]
        fsub qword ptr ds : [public_5e28d0]
        fcom qword ptr ds : [public_5e28c8]
        fnstsw ax
        test ah, 0x41
        jne public_56668b
        fstp st(0)
        lea eax, ss:[esp+0x20]
        fild dword ptr ss : [esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x24], 0xBEE8F5C3
        fmul dword ptr ds : [public_5e28c4]
        fsubr dword ptr ds : [public_5e28c0]
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        lea eax, ss:[esp+0x2C]
        jmp public_5666d1
        public_56668b : nop
        fstp dword ptr ss : [esp+0x38]
        fild dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x38]
        push eax
        fmul dword ptr ds : [public_5e28c4]
        fsubr dword ptr ds : [public_5e28c0]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], 0
        fadd qword ptr ds : [esi+0x560]
        mov dword ptr ss : [esp+0x4C], 0
        lea eax, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        public_5666d1 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebp
        add ebx, 4
        add edi, 0xF0
        dec ecx
        cmp ebp, 5
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ecx
        jb public_566612
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5d5078]
        fnstsw ax
        test ah, 0x41
        jne public_5668e4
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_5668e4
        push 0x1B
        call public_564570
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_566739 : nop
        test al, al
        je public_5668e4
        public_566741 : nop
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        fsubr qword ptr ds : [esi+0x560]
        mov dword ptr ss : [esp+0x10], 6
        lea ebp, ds:[esi+0x534]
        lea edi, ds:[esi+0x84]
        fstp qword ptr ds : [esi+0x560]
        public_566772 : nop
        fld dword ptr ds : [public_5c7500]
        mov edx, dword ptr ds : [edi]
        fild dword ptr ss : [esp+0x10]
        mov ecx, edi
        fmul qword ptr ds : [public_5c7720]
        fst qword ptr ss : [esp+0x18]
        fadd qword ptr ds : [esi+0x560]
        fsub qword ptr ds : [public_5e28d0]
        fcom qword ptr ds : [public_5e28c8]
        fnstsw ax
        test ah, 0x41
        jne public_5667eb
        fstp st(0)
        lea eax, ss:[esp+0x44]
        fild dword ptr ss : [esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x48], 0xBEE8F5C3
        fmul dword ptr ds : [public_5e28c4]
        fsubr dword ptr ds : [public_5e28c0]
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        lea eax, ss:[esp+0x38]
        jmp public_566831
        public_5667eb : nop
        fstp dword ptr ss : [esp+0x2C]
        fild dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x2C]
        push eax
        fmul dword ptr ds : [public_5e28c4]
        fsubr dword ptr ds : [public_5e28c0]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], 0
        fadd qword ptr ds : [esi+0x560]
        mov dword ptr ss : [esp+0x28], 0
        lea eax, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        public_566831 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        inc ebx
        add ebp, 4
        add edi, 0xF0
        dec ecx
        cmp ebx, 5
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ecx
        jb public_566772
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_56688a
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5e28b8]
        fnstsw ax
        test ah, 0x41
        jne public_56688a
        push 0x1B
        call public_564570
        add esp, 4
        public_56688a : nop
        fld qword ptr ds : [esi+0x560]
        fcomp qword ptr ds : [public_5e1b90]
        fnstsw ax
        test ah, 0x41
        jp public_5668e4
        inc dword ptr ds : [esi+0x570]
        lea edx, ds:[esi+0x534]
        lea eax, ds:[esi+0xF0]
        mov edi, 5
        mov bl, 0xFC
        public_5668b6 : nop
        and byte ptr ds : [eax], bl
        mov ecx, dword ptr ds : [edx]
        and byte ptr ds : [ecx+0x6C], bl
        add edx, 4
        add eax, 0xF0
        dec edi
        jne public_5668b6
        cmp dword ptr ds : [esi+0x570], 2
        jl public_5668e4
        mov ecx, dword ptr ds : [esi+0x568]
        mov dword ptr ds : [esi+0x80], ecx
        mov byte ptr ds : [esi+0x56C], 0
        public_5668e4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x566510)
    }
}

#undef public_566530
#undef public_56653f
#undef public_566544
#undef public_56654a
#undef public_566576
#undef public_56659b
#undef public_56659d
#undef public_5665a9
#undef public_5665e8
#undef public_566612
#undef public_56668b
#undef public_5666d1
#undef public_566739
#undef public_566741
#undef public_566772
#undef public_5667eb
#undef public_566831
#undef public_56688a
#undef public_5668b6
#undef public_5668e4
