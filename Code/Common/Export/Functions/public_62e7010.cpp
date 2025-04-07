#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6a20);
CLANG_FORWARD_PROC_SYMBOL(public_62e6d40);
CLANG_FORWARD_PROC_SYMBOL(public_62e7010);

#define public_62e7041 _public_62e7041
#define public_62e7043 _public_62e7043
#define public_62e7048 _public_62e7048
#define public_62e7062 _public_62e7062
#define public_62e7081 _public_62e7081
#define public_62e7083 _public_62e7083
#define public_62e7088 _public_62e7088
#define public_62e70a2 _public_62e70a2
#define public_62e70c1 _public_62e70c1
#define public_62e70c3 _public_62e70c3
#define public_62e70c8 _public_62e70c8
#define public_62e70e2 _public_62e70e2
#define public_62e7101 _public_62e7101
#define public_62e7103 _public_62e7103
#define public_62e7108 _public_62e7108
#define public_62e7122 _public_62e7122
#define public_62e7141 _public_62e7141
#define public_62e7143 _public_62e7143
#define public_62e7148 _public_62e7148
#define public_62e7162 _public_62e7162
#define public_62e7181 _public_62e7181
#define public_62e7183 _public_62e7183
#define public_62e7188 _public_62e7188
#define public_62e71ae _public_62e71ae
#define public_62e71d3 _public_62e71d3
#define public_62e71d5 _public_62e71d5
#define public_62e71dd _public_62e71dd
#define public_62e7206 _public_62e7206
#define public_62e722b _public_62e722b
#define public_62e722d _public_62e722d
#define public_62e7235 _public_62e7235
#define public_62e725e _public_62e725e
#define public_62e72c1 _public_62e72c1

PROC_DECLARE(0x62e7010, internal_62e7010, public_62e7010);
extern "C" NAKED register_t __cdecl internal_62e7010()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62e6d40
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        xor edx, edx
        mov cl, 1
        fnstsw ax
        test ah, 0x41
        jne public_62e7041
        fcomp dword ptr ds : [esi+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_62e7043
        mov byte ptr ds : [esi+0x28], cl
        jmp public_62e7048
        public_62e7041 : nop
        fstp st(0)
        public_62e7043 : nop
        cmp byte ptr ds : [esi+0x28], dl
        je public_62e7062
        public_62e7048 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x34]
        fst dword ptr ds : [esi+0x34]
        fcomp dword ptr ds : [esi+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_62e7062
        mov dword ptr ds : [esi+0x34], edx
        mov byte ptr ds : [esi+0x28], dl
        public_62e7062 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e7081
        fcomp dword ptr ds : [esi+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_62e7083
        mov byte ptr ds : [esi+0x38], cl
        jmp public_62e7088
        public_62e7081 : nop
        fstp st(0)
        public_62e7083 : nop
        cmp byte ptr ds : [esi+0x38], dl
        je public_62e70a2
        public_62e7088 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x44]
        fst dword ptr ds : [esi+0x44]
        fcomp dword ptr ds : [esi+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_62e70a2
        mov dword ptr ds : [esi+0x44], edx
        mov byte ptr ds : [esi+0x38], dl
        public_62e70a2 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e70c1
        fcomp dword ptr ds : [esi+0x4C]
        fnstsw ax
        test ah, 0x41
        jne public_62e70c3
        mov byte ptr ds : [esi+0x48], cl
        jmp public_62e70c8
        public_62e70c1 : nop
        fstp st(0)
        public_62e70c3 : nop
        cmp byte ptr ds : [esi+0x48], dl
        je public_62e70e2
        public_62e70c8 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x54]
        fst dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [esi+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_62e70e2
        mov dword ptr ds : [esi+0x54], edx
        mov byte ptr ds : [esi+0x48], dl
        public_62e70e2 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e7101
        fcomp dword ptr ds : [esi+0x5C]
        fnstsw ax
        test ah, 0x41
        jne public_62e7103
        mov byte ptr ds : [esi+0x58], cl
        jmp public_62e7108
        public_62e7101 : nop
        fstp st(0)
        public_62e7103 : nop
        cmp byte ptr ds : [esi+0x58], dl
        je public_62e7122
        public_62e7108 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x64]
        fst dword ptr ds : [esi+0x64]
        fcomp dword ptr ds : [esi+0x60]
        fnstsw ax
        test ah, 0x41
        jne public_62e7122
        mov dword ptr ds : [esi+0x64], edx
        mov byte ptr ds : [esi+0x58], dl
        public_62e7122 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e7141
        fcomp dword ptr ds : [esi+0x6C]
        fnstsw ax
        test ah, 0x41
        jne public_62e7143
        mov byte ptr ds : [esi+0x68], cl
        jmp public_62e7148
        public_62e7141 : nop
        fstp st(0)
        public_62e7143 : nop
        cmp byte ptr ds : [esi+0x68], dl
        je public_62e7162
        public_62e7148 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x74]
        fst dword ptr ds : [esi+0x74]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x41
        jne public_62e7162
        mov dword ptr ds : [esi+0x74], edx
        mov byte ptr ds : [esi+0x68], dl
        public_62e7162 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e7181
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x41
        jne public_62e7183
        mov byte ptr ds : [esi+0x78], cl
        jmp public_62e7188
        public_62e7181 : nop
        fstp st(0)
        public_62e7183 : nop
        cmp byte ptr ds : [esi+0x78], dl
        je public_62e71ae
        public_62e7188 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x84]
        fst dword ptr ds : [esi+0x84]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x41
        jne public_62e71ae
        mov dword ptr ds : [esi+0x84], edx
        mov byte ptr ds : [esi+0x78], dl
        public_62e71ae : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e71d3
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 0x41
        jne public_62e71d5
        mov byte ptr ds : [esi+0x88], cl
        jmp public_62e71dd
        public_62e71d3 : nop
        fstp st(0)
        public_62e71d5 : nop
        cmp byte ptr ds : [esi+0x88], dl
        je public_62e7206
        public_62e71dd : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x94]
        fst dword ptr ds : [esi+0x94]
        fcomp dword ptr ds : [esi+0x90]
        fnstsw ax
        test ah, 0x41
        jne public_62e7206
        mov dword ptr ds : [esi+0x94], edx
        mov byte ptr ds : [esi+0x88], dl
        public_62e7206 : nop
        fld dword ptr ds : [esi+0x24]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e722b
        fcomp dword ptr ds : [esi+0x9C]
        fnstsw ax
        test ah, 0x41
        jne public_62e722d
        mov byte ptr ds : [esi+0x98], cl
        jmp public_62e7235
        public_62e722b : nop
        fstp st(0)
        public_62e722d : nop
        cmp byte ptr ds : [esi+0x98], dl
        je public_62e725e
        public_62e7235 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0xA4]
        fst dword ptr ds : [esi+0xA4]
        fcomp dword ptr ds : [esi+0xA0]
        fnstsw ax
        test ah, 0x41
        jne public_62e725e
        mov dword ptr ds : [esi+0xA4], edx
        mov byte ptr ds : [esi+0x98], dl
        public_62e725e : nop
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        push edi
        lea ecx, ds:[esi+0xA8]
        call public_62e6a20
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        push edi
        lea ecx, ds:[esi+0xB8]
        call public_62e6a20
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        push edi
        lea ecx, ds:[esi+0xC8]
        call public_62e6a20
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e72c1
        fld dword ptr ds : [esi+0xD8]
        fmul dword ptr ds : [esi+0x20]
        fmul dword ptr ss : [esp+0xC]
        fsubr dword ptr ds : [esi+0x24]
        fst dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e72c1
        mov dword ptr ds : [esi+0x24], edx
        public_62e72c1 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62e7010)
    }
}

#undef public_62e7041
#undef public_62e7043
#undef public_62e7048
#undef public_62e7062
#undef public_62e7081
#undef public_62e7083
#undef public_62e7088
#undef public_62e70a2
#undef public_62e70c1
#undef public_62e70c3
#undef public_62e70c8
#undef public_62e70e2
#undef public_62e7101
#undef public_62e7103
#undef public_62e7108
#undef public_62e7122
#undef public_62e7141
#undef public_62e7143
#undef public_62e7148
#undef public_62e7162
#undef public_62e7181
#undef public_62e7183
#undef public_62e7188
#undef public_62e71ae
#undef public_62e71d3
#undef public_62e71d5
#undef public_62e71dd
#undef public_62e7206
#undef public_62e722b
#undef public_62e722d
#undef public_62e7235
#undef public_62e725e
#undef public_62e72c1
