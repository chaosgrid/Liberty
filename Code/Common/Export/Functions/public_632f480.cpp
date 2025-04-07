#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887a0);
CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62e25c0);
CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632f480);
CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_632f920);
CLANG_FORWARD_PROC_SYMBOL(public_632f940);
CLANG_FORWARD_PROC_SYMBOL(public_632f980);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_632f4c0 _public_632f4c0
#define public_632f4d0 _public_632f4d0
#define public_632f512 _public_632f512
#define public_632f545 _public_632f545
#define public_632f59e _public_632f59e
#define public_632f5a0 _public_632f5a0
#define public_632f5a6 _public_632f5a6
#define public_632f5d5 _public_632f5d5
#define public_632f5f5 _public_632f5f5
#define public_632f611 _public_632f611
#define public_632f660 _public_632f660
#define public_632f685 _public_632f685
#define public_632f69d _public_632f69d
#define public_632f69f _public_632f69f
#define public_632f6b0 _public_632f6b0
#define public_632f6c7 _public_632f6c7
#define public_632f6e7 _public_632f6e7
#define public_632f706 _public_632f706
#define public_632f720 _public_632f720
#define public_632f7d7 _public_632f7d7
#define public_632f80d _public_632f80d
#define public_632f823 _public_632f823
#define public_632f840 _public_632f840
#define public_632f844 _public_632f844
#define public_632f862 _public_632f862
#define public_632f866 _public_632f866
#define public_632f87d _public_632f87d
#define public_632f898 _public_632f898

PROC_DECLARE(0x632f480, internal_632f480, public_632f480);
extern "C" NAKED register_t __cdecl internal_632f480()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x90]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        jle public_632f4d0
        mov eax, dword ptr ss : [esp+0x94]
        lea esi, ds:[eax+4]
        mov ebx, ebp
        nop 
        public_632f4c0 : nop
        push esi
        lea ecx, ss:[esp+0x38]
        call public_62887a0
        add esi, 0x14
        dec ebx
        jne public_632f4c0
        public_632f4d0 : nop
        fild dword ptr ss : [esp+0x98]
        push ecx
        lea ecx, ss:[esp+0x38]
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp]
        call public_62e25c0
        cmp ebp, 2
        jne public_632f512
        mov edx, dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+0x34]
        push ecx
        add edx, 4
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x4C]
        jmp public_632f5f5
        public_632f512 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x58]
        call public_628b030
        test ebp, ebp
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        jle public_632f5a6
        mov ecx, dword ptr ss : [esp+0x94]
        lea esi, ds:[ecx+4]
        mov ebx, ebp
        public_632f545 : nop
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x44]
        push esi
        push eax
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x40]
        call public_6347e60
        fcom qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_632f59e
        fld dword ptr ds : [public_639a1d0]
        push ecx
        fdiv st, st(1)
        lea ecx, ss:[esp+0x44]
        lea edx, ss:[esp+0x50]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        fstp st(0)
        call public_6288830
        add esp, 0xC
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_62887a0
        jmp public_632f5a0
        public_632f59e : nop
        fstp st(0)
        public_632f5a0 : nop
        add esi, 0x14
        dec ebx
        jne public_632f545
        public_632f5a6 : nop
        lea ecx, ss:[esp+0x28]
        call public_6347e60
        fcom qword ptr ds : [public_63a0618]
        fnstsw ax
        test ah, 0x41
        jne public_632f5d5
        fld dword ptr ds : [public_639a1d0]
        push ecx
        fdiv st, st(1)
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_62e25c0
        jmp public_632f611
        public_632f5d5 : nop
        mov edx, dword ptr ss : [esp+0x94]
        fstp st(0)
        lea ecx, ss:[esp+0x34]
        push ecx
        add edx, 4
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x58]
        public_632f5f5 : nop
        add esp, 0xC
        call public_632f940
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        public_632f611 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, edi
        call public_632f8b0
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [eax+0xC]
        xor eax, eax
        cmp ebp, eax
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x58], eax
        jle public_632f6b0
        mov eax, dword ptr ss : [esp+0x94]
        lea esi, ds:[eax+4]
        mov ebx, ebp
        lea ecx, ds:[ecx]
        public_632f660 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        push esi
        lea ecx, ss:[esp+0x68]
        call public_632f920
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_632f685
        fstp st(0)
        mov eax, 1
        jmp public_632f69f
        public_632f685 : nop
        fld dword ptr ss : [esp+0x14]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_632f69d
        mov eax, 2
        jmp public_632f69f
        public_632f69d : nop
        xor eax, eax
        public_632f69f : nop
        mov edx, dword ptr ss : [esp+eax*4+0x58]
        lea eax, ss:[esp+eax*4+0x58]
        inc edx
        add esi, 0x14
        dec ebx
        mov dword ptr ds : [eax], edx
        jne public_632f660
        public_632f6b0 : nop
        lea ecx, ss:[esp+0x58]
        call public_632f980
        test al, al
        jne public_632f6c7
        mov dword ptr ss : [esp+0x10], 0x270F
        jmp public_632f6e7
        public_632f6c7 : nop
        mov eax, dword ptr ss : [esp+0x60]
        sub eax, dword ptr ss : [esp+0x5C]
        cdq 
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x58]
        lea eax, ds:[eax+edx*2]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_632f898
        public_632f6e7 : nop
        test ebp, ebp
        jle public_632f87d
        mov ecx, dword ptr ss : [esp+0x94]
        mov eax, 1
        lea ebx, ds:[ecx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        public_632f706 : nop
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        jge public_632f866
        lea edx, ds:[ebx+0x14]
        mov dword ptr ss : [esp+0x14], edx
        lea esp, ss:[esp]
        public_632f720 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        add esp, 0xC
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_632f844
        fld dword ptr ds : [ebx+0xC]
        push ecx
        fadd dword ptr ds : [public_639d20c]
        lea edx, ss:[esp+0x50]
        fstp dword ptr ss : [esp]
        push edi
        push edx
        call public_6288830
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x50]
        push ebx
        push ecx
        call public_62887d0
        add esp, 0x18
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, edi
        call public_632f8b0
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x88], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x74], eax
        mov edi, ebp
        public_632f7d7 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        push esi
        lea ecx, ss:[esp+0x88]
        call public_632f3f0
        mov edx, dword ptr ss : [esp+eax*4+0x74]
        lea eax, ss:[esp+eax*4+0x74]
        inc edx
        add esi, 0x14
        dec edi
        mov dword ptr ds : [eax], edx
        jne public_632f7d7
        lea ecx, ss:[esp+0x74]
        call public_632f980
        test al, al
        jne public_632f80d
        mov eax, 0x270F
        jmp public_632f823
        public_632f80d : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x74]
        sub eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        lea eax, ds:[eax+ecx*2]
        public_632f823 : nop
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_632f840
        test eax, eax
        mov ecx, 7
        lea esi, ss:[esp+0x74]
        lea edi, ss:[esp+0x58]
        rep movsd
        mov dword ptr ss : [esp+0x10], eax
        je public_632f862
        public_632f840 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_632f844 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        inc eax
        add edx, 0x14
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_632f720
        jmp public_632f866
        public_632f862 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_632f866 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc eax
        lea edx, ds:[eax-1]
        add ebx, 0x14
        cmp edx, ebp
        mov dword ptr ss : [esp+0x20], eax
        jl public_632f706
        public_632f87d : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], eax
        public_632f898 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 8
        UNREACHABLE_TRAP(0x632f480)
    }
}

#undef public_632f4c0
#undef public_632f4d0
#undef public_632f512
#undef public_632f545
#undef public_632f59e
#undef public_632f5a0
#undef public_632f5a6
#undef public_632f5d5
#undef public_632f5f5
#undef public_632f611
#undef public_632f660
#undef public_632f685
#undef public_632f69d
#undef public_632f69f
#undef public_632f6b0
#undef public_632f6c7
#undef public_632f6e7
#undef public_632f706
#undef public_632f720
#undef public_632f7d7
#undef public_632f80d
#undef public_632f823
#undef public_632f840
#undef public_632f844
#undef public_632f862
#undef public_632f866
#undef public_632f87d
#undef public_632f898
