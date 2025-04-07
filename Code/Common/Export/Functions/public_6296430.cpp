#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d60);
CLANG_FORWARD_PROC_SYMBOL(public_62b3730);

#define public_6296468 _public_6296468
#define public_629646a _public_629646a
#define public_62964a8 _public_62964a8
#define public_62964ba _public_62964ba
#define public_62964e4 _public_62964e4
#define public_62964e6 _public_62964e6
#define public_6296503 _public_6296503
#define public_6296505 _public_6296505
#define public_6296524 _public_6296524
#define public_629654f _public_629654f
#define public_6296553 _public_6296553
#define public_6296577 _public_6296577
#define public_6296585 _public_6296585
#define public_62965ee _public_62965ee
#define public_62965f0 _public_62965f0

PROC_DECLARE(0x6296430, internal_6296430, public_6296430);
extern "C" NAKED register_t __cdecl internal_6296430()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi-0x20]
        lea ebx, ds:[edi-0x20]
        mov ecx, ebx
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_62965f0
        mov ecx, dword ptr ds : [edi-0x1C]
        test ecx, ecx
        je public_6296468
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6296468
        mov esi, ecx
        jmp public_629646a
        public_6296468 : nop
        xor esi, esi
        public_629646a : nop
        mov al, byte ptr ds : [edi+0x34]
        test al, al
        mov ebp, dword ptr ss : [esp+0x28]
        je public_6296524
        mov edx, dword ptr ds : [edi-0x14]
        fld dword ptr ds : [edi+0x30]
        fcomp dword ptr ds : [edx+0x80]
        fnstsw ax
        test ah, 5
        jp public_62964ba
        fld dword ptr ds : [esi+0x29C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62964a8
        mov eax, dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [eax+0x88]
        public_62964a8 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [ecx+0x70]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx+0x7C]
        jmp public_6296585
        public_62964ba : nop
        fld dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [esp+0x28], 0x3F800000
        fadd dword ptr ss : [ebp]
        fst dword ptr ds : [edi+0x2C]
        fcom dword ptr ds : [public_63eb5d0]
        fnstsw ax
        test ah, 5
        jp public_62964e4
        fdiv dword ptr ds : [public_63eb5d0]
        fstp dword ptr ss : [esp+0x28]
        jmp public_62964e6
        public_62964e4 : nop
        fstp st(0)
        public_62964e6 : nop
        test ecx, ecx
        mov edx, dword ptr ds : [esi+0x29C]
        mov dword ptr ss : [esp+0x10], edx
        je public_6296503
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_6296505
        public_6296503 : nop
        xor ecx, ecx
        public_6296505 : nop
        call public_62b3730
        mov ecx, dword ptr ds : [edi-0x14]
        fmul dword ptr ds : [public_63eb5cc]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x7C]
        jmp public_6296585
        public_6296524 : nop
        mov edx, dword ptr ds : [esi+0x29C]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629654f
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0xC]
        fabs 
        fmul dword ptr ds : [ecx+0x78]
        jmp public_6296553
        public_629654f : nop
        fld dword ptr ss : [esp+0x14]
        public_6296553 : nop
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6296577
        mov edx, dword ptr ds : [ebx+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x88]
        public_6296577 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [eax+0x70]
        mov ebp, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x10]
        public_6296585 : nop
        fld dword ptr ds : [esi+0x198]
        fxch 
        fmul dword ptr ss : [ebp]
        fsubp 
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62965ee
        fstp dword ptr ds : [esi+0x198]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62965f0
        fld dword ptr ds : [esi+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x1C]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [ebp]
        fchs 
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, edi
        call public_6285d60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_62965ee : nop
        fstp st(0)
        public_62965f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6296430)
    }
}

#undef public_6296468
#undef public_629646a
#undef public_62964a8
#undef public_62964ba
#undef public_62964e4
#undef public_62964e6
#undef public_6296503
#undef public_6296505
#undef public_6296524
#undef public_629654f
#undef public_6296553
#undef public_6296577
#undef public_6296585
#undef public_62965ee
#undef public_62965f0
