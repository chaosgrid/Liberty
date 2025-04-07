#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62e5c00);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc8);

#define public_62e5d07 _public_62e5d07
#define public_62e5d83 _public_62e5d83
#define public_62e5daf _public_62e5daf
#define public_62e5dfd _public_62e5dfd
#define public_62e5e3f _public_62e5e3f
#define public_62e5f5d _public_62e5f5d
#define public_62e5fd8 _public_62e5fd8
#define public_62e5ffc _public_62e5ffc
#define public_62e5ffe _public_62e5ffe
#define public_62e6000 _public_62e6000

PROC_DECLARE(0x62e5c00, internal_62e5c00, public_62e5c00);
extern "C" NAKED register_t __cdecl internal_62e5c00()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        mov ebx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        call dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [esp+0x34]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, 0xC
        lea edi, ss:[esp+0x5C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x80]
        push eax
        mov dword ptr ss : [esp+0x88], ecx
        lea ecx, ss:[esp+0x24]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x94], edx
        call public_6288800
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x34]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fst dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0x18]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0xC]
        fmulp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a078c]
        fcom dword ptr ds : [public_639fb58]
        fnstsw ax
        test ah, 0x41
        je public_62e5d07
        fstp st(0)
        fld dword ptr ds : [public_639fb58]
        public_62e5d07 : nop
        fld st(1)
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e5ffc
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62e6000
        fld dword ptr ss : [esp+0x18]
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x98]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e5d83
        mov edx, dword ptr ds : [ebx]
        push 0x3F800000
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0xF0]
        fstp dword ptr ss : [esp+0x98]
        public_62e5d83 : nop
        fld dword ptr ss : [esp+0x9C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e5daf
        mov eax, dword ptr ds : [ebx]
        push 1
        push 0x3F800000
        mov ecx, ebx
        call dword ptr ds : [eax+0xD8]
        fstp dword ptr ss : [esp+0x9C]
        public_62e5daf : nop
        fld dword ptr ss : [esp+0x9C]
        fdiv dword ptr ss : [esp+0x98]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e6000
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        jne public_62e5dfd
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e5dfd : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_63fca48]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        jne public_62e5e3f
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e5e3f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x4C], ecx
        fld dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x38]
        fsub dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x30]
        push ecx
        fmul dword ptr ss : [esp+0x34]
        push esi
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fst dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x34]
        push edx
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call public_6288800
        fld dword ptr ss : [esp+0x40]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x40]
        add esp, 0xC
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fst dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x14]
        fmulp 
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62e5f5d
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_62e5f5d : nop
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_62e5ffe
        fmul dword ptr ss : [esp+0x98]
        sub esp, 0xC
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x88]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5fd8
        mov dword ptr ss : [esp+0x14], 0
        public_62e5fd8 : nop
        fld dword ptr ss : [esp+0x14]
        fld qword ptr ds : [public_639c420]
        call public_6391fc8
        fmul dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        fdiv dword ptr ss : [esp+0x94]
        pop ebx
        add esp, 0x80
        ret 
        public_62e5ffc : nop
        fstp st(0)
        public_62e5ffe : nop
        fstp st(0)
        public_62e6000 : nop
        fld dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x62e5c00)
    }
}

#undef public_62e5d07
#undef public_62e5d83
#undef public_62e5daf
#undef public_62e5dfd
#undef public_62e5e3f
#undef public_62e5f5d
#undef public_62e5fd8
#undef public_62e5ffc
#undef public_62e5ffe
#undef public_62e6000
