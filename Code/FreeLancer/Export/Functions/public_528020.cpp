#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_528240);
CLANG_FORWARD_PROC_SYMBOL(public_532000);

#define public_528062 _public_528062
#define public_528064 _public_528064
#define public_528087 _public_528087
#define public_52808f _public_52808f
#define public_528093 _public_528093
#define public_5280dd _public_5280dd
#define public_5280e4 _public_5280e4
#define public_528102 _public_528102
#define public_528109 _public_528109
#define public_528165 _public_528165
#define public_528171 _public_528171
#define public_52817f _public_52817f
#define public_52818b _public_52818b
#define public_52818f _public_52818f
#define public_5281a0 _public_5281a0
#define public_5281c2 _public_5281c2
#define public_5281ca _public_5281ca
#define public_5281d4 _public_5281d4
#define public_5281f6 _public_5281f6
#define public_5281fe _public_5281fe
#define public_528208 _public_528208
#define public_52820f _public_52820f
#define public_528225 _public_528225

PROC_DECLARE(0x528020, internal_528020, public_528020);
extern "C" NAKED register_t __cdecl internal_528020()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_528225
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        push ebx
        push esi
        je public_528062
        add eax, 0xC
        test eax, eax
        je public_528062
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_528062
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_528062
        mov esi, eax
        jmp public_528064
        public_528062 : nop
        xor esi, esi
        public_528064 : nop
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+4]
        test al, al
        je public_52808f
        mov ecx, dword ptr ds : [edi+4]
        mov al, byte ptr ds : [ecx+0x54]
        test al, al
        je public_528087
        fld dword ptr ds : [public_5c75dc]
        jmp public_528093
        public_528087 : nop
        fld dword ptr ds : [esi+0x29C]
        jmp public_528093
        public_52808f : nop
        fld dword ptr ss : [esp+0x18]
        public_528093 : nop
        mov edx, dword ptr ds : [public_5c682c]
        fld st(0)
        fsub dword ptr ds : [edi+0x20]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx]
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fabs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_5280e4
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5280dd
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x20]
        jmp public_5280e4
        public_5280dd : nop
        fld dword ptr ds : [edi+0x20]
        fsub dword ptr ss : [esp+0x14]
        public_5280e4 : nop
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [edi+0x20]
        fnstsw ax
        test ah, 0x44
        jp public_528102
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [edi+0x24]
        fstp dword ptr ds : [edi+0x24]
        jmp public_528109
        public_528102 : nop
        mov dword ptr ds : [edi+0x24], 0
        public_528109 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov al, byte ptr ds : [ecx+0x54]
        test al, al
        je public_52817f
        fld dword ptr ds : [ecx+0x50]
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_528171
        call dword ptr ds : [public_5c6508]
        fld dword ptr ds : [eax+0x80]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_528165
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_5c6828]
        fdiv st, st(1)
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [eax]
        fmulp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jmp public_52818f
        public_528165 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x20], eax
        jmp public_52818f
        public_528171 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_5c6828]
        fmul dword ptr ds : [ecx]
        jmp public_52818b
        public_52817f : nop
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_5c6828]
        fmul dword ptr ds : [edx]
        public_52818b : nop
        fstp dword ptr ss : [esp+0x20]
        public_52818f : nop
        mov ebx, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebx
        je public_52820f
        lea esp, ss:[esp]
        public_5281a0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5281d4
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5281c2
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_5281ca
        public_5281c2 : nop
        mov dword ptr ss : [esp+0x14], 0
        public_5281ca : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        public_5281d4 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_528208
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5281f6
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_5281fe
        public_5281f6 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_5281fe : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        public_528208 : nop
        add esi, 0xC
        cmp esi, ebx
        jne public_5281a0
        public_52820f : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push eax
        mov ecx, edi
        call public_528240
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [edi+0x20], ecx
        pop ebx
        public_528225 : nop
        push ebp
        mov ecx, edi
        call public_532000
        pop edi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x528020)
    }
}

#undef public_528062
#undef public_528064
#undef public_528087
#undef public_52808f
#undef public_528093
#undef public_5280dd
#undef public_5280e4
#undef public_528102
#undef public_528109
#undef public_528165
#undef public_528171
#undef public_52817f
#undef public_52818b
#undef public_52818f
#undef public_5281a0
#undef public_5281c2
#undef public_5281ca
#undef public_5281d4
#undef public_5281f6
#undef public_5281fe
#undef public_528208
#undef public_52820f
#undef public_528225
