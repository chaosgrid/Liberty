#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d09b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62df830);
CLANG_FORWARD_PROC_SYMBOL(public_62e6a80);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62d0081 _public_62d0081
#define public_62d00bb _public_62d00bb
#define public_62d00e2 _public_62d00e2
#define public_62d0171 _public_62d0171
#define public_62d01af _public_62d01af
#define public_62d01b1 _public_62d01b1
#define public_62d0200 _public_62d0200
#define public_62d0252 _public_62d0252
#define public_62d0263 _public_62d0263
#define public_62d02d2 _public_62d02d2
#define public_62d02e3 _public_62d02e3
#define public_62d02e5 _public_62d02e5
#define public_62d0324 _public_62d0324
#define public_62d034b _public_62d034b
#define public_62d036d _public_62d036d
#define public_62d0379 _public_62d0379
#define public_62d0435 _public_62d0435
#define public_62d0456 _public_62d0456
#define public_62d0558 _public_62d0558
#define public_62d0572 _public_62d0572
#define public_62d0591 _public_62d0591
#define public_62d0593 _public_62d0593
#define public_62d05b2 _public_62d05b2
#define public_62d05b4 _public_62d05b4
#define public_62d0692 _public_62d0692
#define public_62d06a3 _public_62d06a3
#define public_62d06a5 _public_62d06a5
#define public_62d06e6 _public_62d06e6
#define public_62d070d _public_62d070d
#define public_62d0719 _public_62d0719
#define public_62d077b _public_62d077b
#define public_62d07ae _public_62d07ae
#define public_62d0821 _public_62d0821
#define public_62d0839 _public_62d0839
#define public_62d087b _public_62d087b
#define public_62d0883 _public_62d0883
#define public_62d0887 _public_62d0887
#define public_62d08fd _public_62d08fd
#define public_62d0905 _public_62d0905
#define public_62d095a _public_62d095a
#define public_62d0972 _public_62d0972

PROC_DECLARE(0x62d0050, internal_62d0050, public_62d0050);
extern "C" NAKED register_t __cdecl internal_62d0050()
{
    __asm
    {
        sub esp, 0xD4
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        push esi
        push edi
        add ecx, 0x142C
        call public_62ed5a0
        xor edi, edi
        cmp eax, edi
        jne public_62d0081
        pop edi
        mov eax, 2
        pop esi
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD4
        ret 
        public_62d0081 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_62d09b0
        fld dword ptr ds : [ebx+0x16C]
        fsub dword ptr ds : [ebx+0x1C]
        mov byte ptr ss : [esp+0x27], 0
        fst dword ptr ds : [ebx+0x16C]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jp public_62d00bb
        mov dword ptr ds : [ebx+0x16C], edi
        mov byte ptr ss : [esp+0x27], 1
        public_62d00bb : nop
        mov al, byte ptr ss : [esp+0xD5]
        test al, al
        jne public_62d00e2
        mov ecx, dword ptr ss : [esp+0xDC]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x60]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ss : [esp+0xD5], 1
        public_62d00e2 : nop
        test dword ptr ss : [esp+0x60], 0x280100
        je public_62d0171
        lea ecx, ss:[esp+0x58]
        call public_62c47c0
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_639f55c]
        mov dword ptr ss : [esp+0x30], ecx
        lea esi, ds:[ebx+0x30]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], edx
        call public_62a66b0
        push edi
        mov ecx, esi
        call public_62d5980
        mov ecx, dword ptr ds : [public_639f554]
        push ecx
        mov ecx, esi
        call public_62a33e0
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ds:[ebx+0xA8]
        call public_62d7560
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_62d5840
        mov ecx, dword ptr ds : [public_639f550]
        pop edi
        mov eax, 1
        pop esi
        mov dword ptr ds : [ebx+0x16C], ecx
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD4
        ret 
        public_62d0171 : nop
        fld dword ptr ds : [ebx+0x168]
        push ebp
        fsub dword ptr ds : [ebx+0x1C]
        fst dword ptr ds : [ebx+0x168]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62d0972
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [public_639f54c]
        add eax, 8
        mov dword ptr ds : [ebx+0x168], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_62d01af
        lea ecx, ds:[eax-8]
        jmp public_62d01b1
        public_62d01af : nop
        xor ecx, ecx
        public_62d01b1 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [esp+0x50], edx
        mov eax, dword ptr ds : [eax+8]
        add ecx, 0x34
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x48], edi
        call public_62e7580
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x58], ebp
        je public_62d0263
        mov edi, edi
        public_62d0200 : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        call public_62e6a80
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_639f540]
        fnstsw ax
        test ah, 0x41
        jp public_62d0252
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+0x24]
        add eax, 0x24
        inc edi
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x24]
        public_62d0252 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62d0200
        mov dword ptr ss : [esp+0x48], edi
        public_62d0263 : nop
        test edi, edi
        mov byte ptr ss : [esp+0x17], 0
        jle public_62d095a
        fild dword ptr ss : [esp+0x48]
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        je public_62d095a
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        je public_62d0558
        public_62d02d2 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62d02e3
        lea edi, ds:[eax-8]
        jmp public_62d02e5
        public_62d02e3 : nop
        xor edi, edi
        public_62d02e5 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, eax
        je public_62d0456
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62d0324
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62d0324 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 0x80000
        lea edi, ds:[esi+8]
        je public_62d0379
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62d034b
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62d034b : nop
        cmp dword ptr ds : [edi], 0x100000
        je public_62d0379
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62d036d
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62d036d : nop
        cmp dword ptr ds : [edi], 0x200000
        jne public_62d0456
        public_62d0379 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x2C]
        fsub dword ptr ss : [esp+0x54]
        add eax, 0x24
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x30]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fst dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ds : [public_639ff94]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62d0456
        mov ecx, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [esi+0x7E]
        inc ecx
        test al, al
        mov dword ptr ss : [esp+0x18], ecx
        jne public_62d0435
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d0435 : nop
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x44]
        public_62d0456 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62d02d2
        cmp dword ptr ss : [esp+0x18], 1
        jle public_62d0558
        fild dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x48]
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x50]
        fmul st, st(3)
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_639ff90]
        fstp st(1)
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [public_639ff90]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_639ff90]
        fld dword ptr ss : [esp+0x30]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ds:[ebx+0x170]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_62d0572
        public_62d0558 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ds:[ebx+0x170]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        public_62d0572 : nop
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [public_639e6d4]
        fcom dword ptr ds : [ebx+0x174]
        fnstsw ax
        test ah, 5
        jp public_62d0591
        fstp dword ptr ds : [ebx+0x174]
        jmp public_62d0593
        public_62d0591 : nop
        fstp st(0)
        public_62d0593 : nop
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [public_639e6d4]
        fcom dword ptr ds : [ebx+0x174]
        fnstsw ax
        test ah, 0x41
        jne public_62d05b2
        fstp dword ptr ds : [ebx+0x174]
        jmp public_62d05b4
        public_62d05b2 : nop
        fstp st(0)
        public_62d05b4 : nop
        fld dword ptr ds : [ebx+0x178]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x174]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x170]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x30]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fst dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ds : [public_639fb58]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_62d0972
        fld dword ptr ds : [ebx+0x178]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x174]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x170]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_62d0905
        public_62d0692 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62d06a3
        add eax, 0xFFFFFFF8
        jmp public_62d06a5
        public_62d06a3 : nop
        xor eax, eax
        public_62d06a5 : nop
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+0x84]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_62d0887
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62d06e6
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62d06e6 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, 0xFDFF
        lea edi, ds:[esi+8]
        jne public_62d0719
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62d070d
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62d070d : nop
        cmp dword ptr ds : [edi], 0x200000
        jne public_62d0887
        public_62d0719 : nop
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        fstp st(0)
        jne public_62d077b
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d077b : nop
        fld dword ptr ds : [esi+0x18]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        lea edi, ds:[esi+0x18]
        fadd dword ptr ds : [public_639ff90]
        mov dword ptr ss : [esp+0x48], 0
        fstp dword ptr ss : [esp+0x2C]
        jne public_62d07ae
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x2C]
        public_62d07ae : nop
        fld dword ptr ss : [esp+0x4C]
        lea ebp, ds:[esi+0xC]
        fsub dword ptr ss : [ebp]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [esi+0x14]
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
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62d0821
        mov byte ptr ss : [esp+0x17], 1
        jmp public_62d0883
        public_62d0821 : nop
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62d0839
        mov ecx, dword ptr ds : [esi+0x84]
        push ebp
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x2C]
        public_62d0839 : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        push ebp
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call public_62df830
        add esp, 0x14
        cmp eax, 1
        jne public_62d0883
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_62d087b
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_62d0883
        public_62d087b : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x18], edx
        public_62d0883 : nop
        mov ebp, dword ptr ss : [esp+0x58]
        public_62d0887 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62d0692
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62d08fd
        fld dword ptr ss : [esp+0x1C]
        lea eax, ds:[ebx+0x170]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x44]
        fxch 
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], ecx
        public_62d08fd : nop
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        jne public_62d095a
        public_62d0905 : nop
        mov edx, dword ptr ds : [public_639f558]
        lea esi, ds:[ebx+0x30]
        push edx
        mov ecx, esi
        call public_62a66b0
        push 0
        mov ecx, esi
        call public_62d5980
        mov eax, dword ptr ds : [public_639f554]
        push eax
        mov ecx, esi
        call public_62a33e0
        lea edi, ds:[ebx+0x170]
        push edi
        lea ecx, ds:[ebx+0xA8]
        call public_62d7560
        push edi
        mov ecx, esi
        call public_62d5840
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        mov ecx, dword ptr ds : [public_639f550]
        mov dword ptr ds : [ebx+0x16C], ecx
        je public_62d0972
        public_62d095a : nop
        mov edx, dword ptr ds : [ebx+0x30]
        lea ecx, ds:[ebx+0x30]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ebx+0xA8]
        lea ecx, ds:[ebx+0xA8]
        call dword ptr ds : [eax+0x10]
        public_62d0972 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ebx+0xA8]
        lea ecx, ds:[ebx+0xA8]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ebx+0x30]
        lea ecx, ds:[ebx+0x30]
        push eax
        call dword ptr ds : [edx+4]
        pop ebp
        pop edi
        mov eax, 1
        pop esi
        mov dword ptr ds : [ebx+0x10], eax
        pop ebx
        add esp, 0xD4
        ret 
        UNREACHABLE_TRAP(0x62d0050)
    }
}

#undef public_62d0081
#undef public_62d00bb
#undef public_62d00e2
#undef public_62d0171
#undef public_62d01af
#undef public_62d01b1
#undef public_62d0200
#undef public_62d0252
#undef public_62d0263
#undef public_62d02d2
#undef public_62d02e3
#undef public_62d02e5
#undef public_62d0324
#undef public_62d034b
#undef public_62d036d
#undef public_62d0379
#undef public_62d0435
#undef public_62d0456
#undef public_62d0558
#undef public_62d0572
#undef public_62d0591
#undef public_62d0593
#undef public_62d05b2
#undef public_62d05b4
#undef public_62d0692
#undef public_62d06a3
#undef public_62d06a5
#undef public_62d06e6
#undef public_62d070d
#undef public_62d0719
#undef public_62d077b
#undef public_62d07ae
#undef public_62d0821
#undef public_62d0839
#undef public_62d087b
#undef public_62d0883
#undef public_62d0887
#undef public_62d08fd
#undef public_62d0905
#undef public_62d095a
#undef public_62d0972
