#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62916e0);
CLANG_FORWARD_PROC_SYMBOL(public_62917c0);
CLANG_FORWARD_PROC_SYMBOL(public_6291fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6292340);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6292062 _public_6292062
#define public_6292064 _public_6292064
#define public_6292097 _public_6292097
#define public_6292099 _public_6292099
#define public_62920cf _public_62920cf
#define public_62920d1 _public_62920d1
#define public_6292107 _public_6292107
#define public_6292109 _public_6292109
#define public_629229f _public_629229f
#define public_6292304 _public_6292304
#define public_629231f _public_629231f

PROC_DECLARE(0x6291fe0, internal_6291fe0, public_6291fe0);
extern "C" NAKED register_t __cdecl internal_6291fe0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x54
        fld qword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, ecx
        fadd qword ptr ds : [esi+0x2C0]
        push edi
        push ebx
        lea ecx, ds:[esi+8]
        push eax
        fstp qword ptr ds : [esi+0x2C0]
        call public_62917c0
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        lea edi, ds:[esi+0xD8]
        push ecx
        mov ecx, edi
        call public_62917c0
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        lea ecx, ds:[esi+0x1A8]
        push edx
        call public_62917c0
        lea ebx, ds:[edi+0x60]
        mov ecx, ebx
        call public_6347e60
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_6292062
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        fld st(0)
        fmul dword ptr ds : [ebx+4]
        fstp dword ptr ds : [ebx+4]
        fmul dword ptr ds : [ebx+8]
        fstp dword ptr ds : [ebx+8]
        jmp public_6292064
        public_6292062 : nop
        fstp st(0)
        public_6292064 : nop
        add edi, 0x6C
        mov ecx, edi
        call public_6347e60
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_6292097
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        jmp public_6292099
        public_6292097 : nop
        fstp st(0)
        public_6292099 : nop
        lea edi, ds:[esi+0x208]
        mov ecx, edi
        call public_6347e60
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_62920cf
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        jmp public_62920d1
        public_62920cf : nop
        fstp st(0)
        public_62920d1 : nop
        lea edi, ds:[esi+0x214]
        mov ecx, edi
        call public_6347e60
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_6292107
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        jmp public_6292109
        public_6292107 : nop
        fstp st(0)
        public_6292109 : nop
        lea eax, ds:[esi+0x138]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        lea ecx, ds:[esi+0x208]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], edx
        fmul dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        faddp 
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x30]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [public_63fc100]
        test eax, eax
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x5C], ecx
        lea edi, ds:[esi+0x29C]
        jne public_629229f
        call public_6391cf0
        mov dword ptr ds : [public_63fc100], eax
        public_629229f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x50]
        fld qword ptr ds : [esi+0x2C0]
        fcomp qword ptr ds : [esi+0x2C8]
        lea edx, ds:[esi+0x68]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x2AC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        fnstsw ax
        test ah, 5
        jp public_6292304
        fld qword ptr ds : [esi+0x2C0]
        push ecx
        fdiv qword ptr ds : [esi+0x2C8]
        lea eax, ds:[esi+0x290]
        lea ecx, ds:[esi+0x284]
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        call public_6292340
        add esp, 0x10
        jmp public_629231f
        public_6292304 : nop
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov edx, dword ptr ds : [esi+0x2C0]
        push ecx
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ds:[esi+8]
        call public_62916e0
        public_629231f : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x278
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6291fe0)
    }
}

#undef public_6292062
#undef public_6292064
#undef public_6292097
#undef public_6292099
#undef public_62920cf
#undef public_62920d1
#undef public_6292107
#undef public_6292109
#undef public_629229f
#undef public_6292304
#undef public_629231f
