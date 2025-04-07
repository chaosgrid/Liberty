#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634f320);
CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6350140);
CLANG_FORWARD_PROC_SYMBOL(public_63609f0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);

#define public_634f3ae _public_634f3ae
#define public_634f421 _public_634f421
#define public_634f532 _public_634f532
#define public_634f5b0 _public_634f5b0
#define public_634f63e _public_634f63e
#define public_634f6b8 _public_634f6b8
#define public_634f6d9 _public_634f6d9
#define public_634f702 _public_634f702
#define public_634f721 _public_634f721
#define public_634f725 _public_634f725
#define public_634f72b _public_634f72b
#define public_634f733 _public_634f733
#define public_634f748 _public_634f748
#define public_634f78b _public_634f78b
#define public_634f7c1 _public_634f7c1
#define public_634f7d6 _public_634f7d6
#define public_634f82a _public_634f82a
#define public_634f84b _public_634f84b
#define public_634f874 _public_634f874
#define public_634f893 _public_634f893
#define public_634f897 _public_634f897
#define public_634f89d _public_634f89d
#define public_634f8a5 _public_634f8a5
#define public_634f8b7 _public_634f8b7
#define public_634f8fe _public_634f8fe
#define public_634f923 _public_634f923
#define public_634f92f _public_634f92f
#define public_634f933 _public_634f933
#define public_634f964 _public_634f964
#define public_634f9a0 _public_634f9a0
#define public_634f9aa _public_634f9aa

PROC_DECLARE(0x634f320, internal_634f320, public_634f320);
extern "C" NAKED register_t __cdecl internal_634f320()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, eax
        shr ecx, 8
        and ecx, 3
        xor eax, 0x100
        lea edx, ds:[ecx*8]
        sub edx, ecx
        mov ecx, dword ptr ds : [esi+edx*4+0x28]
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ds : [esi+edx*4+0x28]
        mov ebx, dword ptr ds : [eax+0x98]
        cmp dword ptr ds : [esi+4], 0xFFFF
        push edi
        mov edi, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [edi+0x14C]
        mov ecx, dword ptr ds : [esi+0x28]
        fadd dword ptr ds : [ebx+0x14C]
        mov ebp, dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x144]
        fadd dword ptr ds : [edi+0x144]
        fadd dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_63a561c]
        fstp dword ptr ss : [esp+0x2C]
        je public_634f3ae
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        call public_63609f0
        mov dword ptr ds : [esi+4], 0xFFFF
        public_634f3ae : nop
        fld dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [esi+0x14]
        fld dword ptr ss : [ebp+0xAC]
        mov edx, ecx
        shr edx, 0x16
        fmul dword ptr ss : [esp+0x2C]
        and edx, 0xFF
        mov eax, dword ptr ds : [edx*4+public_658aa18]
        fmul dword ptr ds : [public_63a5618]
        lea edx, ds : [edx*4+public_658aa18]
        mov dword ptr ss : [esp+0x10], eax
        fadd dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_634f421
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        je public_634f9a0
        mov ecx, dword ptr ss : [ebp+0x10]
        push esi
        call public_634fec0
        fld dword ptr ds : [esi+0x54]
        fsub dword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_6350140
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        public_634f421 : nop
        fld dword ptr ds : [esi+0x68]
        fmul dword ptr ds : [ebx+0xAC]
        fld dword ptr ds : [esi+0x64]
        fmul dword ptr ds : [ebx+0xA8]
        faddp 
        fld dword ptr ds : [ebx+0xA4]
        fmul dword ptr ds : [esi+0x60]
        faddp 
        fld dword ptr ds : [esi+0x68]
        fmul dword ptr ds : [edi+0xAC]
        fld dword ptr ds : [esi+0x64]
        fmul dword ptr ds : [edi+0xA8]
        faddp 
        fld dword ptr ds : [esi+0x60]
        fmul dword ptr ds : [edi+0xA4]
        faddp 
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+0x13C]
        fmul dword ptr ds : [esi+0x68]
        fld dword ptr ds : [edi+0x138]
        fmul dword ptr ds : [esi+0x64]
        faddp 
        fld dword ptr ds : [edi+0x134]
        fmul dword ptr ds : [esi+0x60]
        faddp 
        fld dword ptr ds : [ebx+0x13C]
        fmul dword ptr ds : [esi+0x68]
        fld dword ptr ds : [ebx+0x138]
        fmul dword ptr ds : [esi+0x64]
        faddp 
        fld dword ptr ds : [ebx+0x134]
        fmul dword ptr ds : [esi+0x60]
        faddp 
        fstp dword ptr ss : [esp+0x58]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_63a5614]
        fsqrt 
        fmul dword ptr ds : [edi+0x14C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        fsubr dword ptr ds : [public_63a5614]
        fsqrt 
        fxch 
        fxch 
        fmul dword ptr ds : [ebx+0x14C]
        faddp 
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp+0xF8]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [ebp+0xFC]
        fcomp dword ptr ds : [public_658ab24]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp+0x100]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [ebp+0x104]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x58], eax
        fnstsw ax
        test ah, 1
        je public_634f532
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        jne public_634f9a0
        public_634f532 : nop
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_634f9a0
        mov edx, ecx
        and edx, 0x3000
        cmp edx, 0x1000
        je public_634f9a0
        test ecx, 0x3FC00000
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], ebp
        jbe public_634f5b0
        mov eax, dword ptr ds : [public_658ab44]
        mov ecx, eax
        inc eax
        cmp ecx, 2
        mov dword ptr ds : [public_658ab44], eax
        jle public_634f5b0
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, eax
        and edx, 0xFFC00000
        dec edx
        xor edx, eax
        and edx, 0x3FC00000
        xor edx, eax
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [public_658ab44], 0
        public_634f5b0 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, ecx
        xor eax, 0x100
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        movsx eax, word ptr ds : [esi+edx*4+0x32]
        shr ecx, 8
        and ecx, 3
        lea edx, ds:[ecx*8]
        sub edx, ecx
        movsx ecx, word ptr ds : [esi+edx*4+0x32]
        lea edx, ds:[eax+ecx*4]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx*4+public_658af9c]
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        test ecx, ecx
        je public_634f9a0
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 1
        je public_634f964
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        jne public_634f63e
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jmp public_634f964
        public_634f63e : nop
        cmp eax, 2
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ds : [public_658aa10]
        fstp dword ptr ss : [esp+0x58]
        je public_634f7d6
        test cl, 0xF
        jne public_634f7d6
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 1
        jne public_634f748
        mov ecx, dword ptr ss : [ebp+0xF8]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [ebp+0xFC]
        fmul dword ptr ds : [public_63a5464]
        mov eax, dword ptr ss : [ebp+0xAC]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x5C], eax
        fdiv dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_634f721
        public_634f6b8 : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f6b8
        fstp dword ptr ss : [esp+0x1C]
        public_634f6d9 : nop
        fst dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_658ab40]
        fmul dword ptr ds : [public_63a560c]
        fmul dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_634f725
        public_634f702 : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f702
        jmp public_634f72b
        public_634f721 : nop
        fstp st(0)
        jmp public_634f6d9
        public_634f725 : nop
        fstp st(0)
        fstp st(0)
        jmp public_634f733
        public_634f72b : nop
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x10]
        public_634f733 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        jmp public_634f933
        public_634f748 : nop
        mov edx, dword ptr ss : [ebp+0xF8]
        mov eax, dword ptr ss : [ebp+0xFC]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ds : [public_658ab40]
        fmul dword ptr ds : [public_63a5608]
        fmul dword ptr ss : [ebp+0xAC]
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_634f7c1
        public_634f78b : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f78b
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x4C], ecx
        jmp public_634f92f
        public_634f7c1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x14]
        fstp st(0)
        mov dword ptr ss : [esp+0x4C], ecx
        jmp public_634f92f
        public_634f7d6 : nop
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 1
        jne public_634f8b7
        mov ecx, dword ptr ss : [ebp+0xF8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [ebp+0xFC]
        fdiv dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp+0xAC]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x5C], eax
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_634f893
        public_634f82a : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f82a
        fstp dword ptr ss : [esp+0x1C]
        public_634f84b : nop
        fst dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_658ab40]
        fmul dword ptr ds : [public_63a547c]
        fmul dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_634f897
        public_634f874 : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f874
        jmp public_634f89d
        public_634f893 : nop
        fstp st(0)
        jmp public_634f84b
        public_634f897 : nop
        fstp st(0)
        fstp st(0)
        jmp public_634f8a5
        public_634f89d : nop
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x10]
        public_634f8a5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        jmp public_634f933
        public_634f8b7 : nop
        mov edx, dword ptr ss : [ebp+0xF8]
        mov eax, dword ptr ss : [ebp+0xFC]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ds : [public_658ab40]
        fmul dword ptr ds : [public_63a5604]
        fmul dword ptr ss : [ebp+0xAC]
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_634f9aa
        public_634f8fe : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_634f8fe
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x10]
        public_634f923 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], ecx
        public_634f92f : nop
        mov dword ptr ss : [esp+0x50], edx
        public_634f933 : nop
        mov eax, dword ptr ss : [ebp+0x100]
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x104]
        mov dword ptr ss : [esp+0x18], eax
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        fadd dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_634f9a0
        public_634f964 : nop
        mov ebp, dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        fadd dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push esi
        call public_6362f90
        mov ebx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, eax
        xor ecx, ebx
        and ecx, 0xFF
        xor ecx, eax
        mov dword ptr ds : [esi+0x14], ecx
        public_634f9a0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 8
        public_634f9aa : nop
        fstp st(0)
        fstp st(0)
        jmp public_634f923
        UNREACHABLE_TRAP(0x634f320)
    }
}

#undef public_634f3ae
#undef public_634f421
#undef public_634f532
#undef public_634f5b0
#undef public_634f63e
#undef public_634f6b8
#undef public_634f6d9
#undef public_634f702
#undef public_634f721
#undef public_634f725
#undef public_634f72b
#undef public_634f733
#undef public_634f748
#undef public_634f78b
#undef public_634f7c1
#undef public_634f7d6
#undef public_634f82a
#undef public_634f84b
#undef public_634f874
#undef public_634f893
#undef public_634f897
#undef public_634f89d
#undef public_634f8a5
#undef public_634f8b7
#undef public_634f8fe
#undef public_634f923
#undef public_634f92f
#undef public_634f933
#undef public_634f964
#undef public_634f9a0
#undef public_634f9aa
