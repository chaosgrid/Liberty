#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62925f8 _public_62925f8
#define public_629266c _public_629266c
#define public_629266e _public_629266e
#define public_62926ca _public_62926ca
#define public_6292743 _public_6292743
#define public_6292794 _public_6292794
#define public_62927aa _public_62927aa

PROC_DECLARE(0x62925c0, internal_62925c0, public_62925c0);
extern "C" NAKED register_t __cdecl internal_62925c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x40
        push ebx
        push esi
        mov esi, ecx
        fld qword ptr ds : [esi+0x2C0]
        fcomp qword ptr ds : [esi+0x2D8]
        fnstsw ax
        test ah, 0x41
        jne public_62925f8
        fld qword ptr ds : [esi+0x2D8]
        mov al, 1
        fadd st(0), st
        fstp qword ptr ds : [esi+0x2D8]
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_62925f8 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        mov dword ptr ss : [esp+8], 0
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], 0x3FF00000
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom qword ptr ds : [public_639c488]
        fnstsw ax
        test ah, 0x41
        jne public_629266c
        fmul qword ptr ds : [public_639c480]
        fst qword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c478]
        fnstsw ax
        test ah, 0x41
        jne public_629266e
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0x40240000
        jmp public_629266e
        public_629266c : nop
        fstp st(0)
        public_629266e : nop
        lea eax, ds:[esi+0x74]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        xor bl, bl
        call public_6288800
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fld qword ptr ds : [public_63eb390]
        fmul qword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_6292794
        mov eax, dword ptr ds : [public_63fc100]
        test eax, eax
        jne public_62926ca
        call public_6391cf0
        mov dword ptr ds : [public_63fc100], eax
        public_62926ca : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        fld dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x30]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x24]
        fsub dword ptr ds : [esi+0x14C]
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x148]
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ds : [esi+0x144]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld qword ptr ds : [public_63eb398]
        fmul qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6292743
        fstp st(0)
        jmp public_6292794
        public_6292743 : nop
        fld dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fsub dword ptr ds : [esi+0x214]
        fstp dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x218]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x21C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62927aa
        public_6292794 : nop
        mov bl, 1
        mov dword ptr ds : [esi+0x2D8], 0
        mov dword ptr ds : [esi+0x2DC], 0x40140000
        public_62927aa : nop
        pop esi
        mov al, bl
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62925c0)
    }
}

#undef public_62925f8
#undef public_629266c
#undef public_629266e
#undef public_62926ca
#undef public_6292743
#undef public_6292794
#undef public_62927aa
