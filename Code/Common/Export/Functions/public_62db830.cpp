#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62db830);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);

#define public_62db857 _public_62db857
#define public_62db859 _public_62db859
#define public_62db898 _public_62db898
#define public_62db8ae _public_62db8ae
#define public_62db8cd _public_62db8cd
#define public_62db95e _public_62db95e
#define public_62db96b _public_62db96b
#define public_62db96d _public_62db96d
#define public_62db97f _public_62db97f
#define public_62db996 _public_62db996
#define public_62db9d6 _public_62db9d6
#define public_62db9da _public_62db9da
#define public_62db9e8 _public_62db9e8

PROC_DECLARE(0x62db830, internal_62db830, public_62db830);
extern "C" NAKED register_t __cdecl internal_62db830()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_62db9e8
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62db857
        add eax, 0xFFFFFFF8
        jmp public_62db859
        public_62db857 : nop
        xor eax, eax
        public_62db859 : nop
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_62e60e0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        xor cl, cl
        sub eax, 0
        je public_62db97f
        dec eax
        je public_62db8cd
        dec eax
        jne public_62db96d
        mov ecx, dword ptr ds : [esi+0x1C0]
        mov ecx, dword ptr ds : [ecx+0xEC]
        test ecx, ecx
        jne public_62db898
        xor al, al
        pop esi
        add esp, 0x3C
        ret 8
        public_62db898 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x60]
        push eax
        call dword ptr ds : [edx+4]
        test eax, eax
        jne public_62db8ae
        xor al, al
        pop esi
        add esp, 0x3C
        ret 8
        public_62db8ae : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        jmp public_62db996
        public_62db8cd : nop
        mov edx, dword ptr ss : [esp+0x44]
        push ebx
        push edi
        lea edi, ds:[esi+0x24]
        lea ecx, ds:[edi+0x24]
        push ecx
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x34]
        push edi
        push edx
        call public_62dbb90
        add esp, 0x18
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_62dba00
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        mov bl, al
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        pop edi
        fmul dword ptr ss : [esp+0xC]
        test bl, bl
        fld dword ptr ss : [esp+0x10]
        pop ebx
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        jne public_62db95e
        fchs 
        public_62db95e : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62db9d6
        public_62db96b : nop
        xor cl, cl
        public_62db96d : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_62db9da
        xor eax, eax
        mov al, cl
        pop esi
        add esp, 0x3C
        ret 8
        public_62db97f : nop
        lea edx, ds:[esi+0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        public_62db996 : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x20]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62db96b
        public_62db9d6 : nop
        mov cl, 1
        jmp public_62db96d
        public_62db9da : nop
        xor eax, eax
        test cl, cl
        sete al
        pop esi
        add esp, 0x3C
        ret 8
        public_62db9e8 : nop
        mov al, 1
        pop esi
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x62db830)
    }
}

#undef public_62db857
#undef public_62db859
#undef public_62db898
#undef public_62db8ae
#undef public_62db8cd
#undef public_62db95e
#undef public_62db96b
#undef public_62db96d
#undef public_62db97f
#undef public_62db996
#undef public_62db9d6
#undef public_62db9da
#undef public_62db9e8
