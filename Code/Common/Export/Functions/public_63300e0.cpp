#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_632f940);
CLANG_FORWARD_PROC_SYMBOL(public_63300e0);

#define public_6330110 _public_6330110
#define public_633012d _public_633012d
#define public_633012f _public_633012f
#define public_63301a3 _public_63301a3
#define public_6330250 _public_6330250
#define public_6330252 _public_6330252
#define public_633025e _public_633025e
#define public_633028b _public_633028b
#define public_63302d5 _public_63302d5

PROC_DECLARE(0x63300e0, internal_63300e0, public_63300e0);
extern "C" NAKED register_t __cdecl internal_63300e0()
{
    __asm
    {
        sub esp, 0x30
        fld dword ptr ds : [public_6399408]
        push ebp
        fld dword ptr ds : [public_6399408]
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [public_6399408]
        test ecx, ecx
        fst dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        jle public_633012d
        lea eax, ds:[esi+0xC]
        mov edx, ecx
        mov edi, edi
        public_6330110 : nop
        fxch st(2)
        add eax, 0x14
        dec edx
        fadd dword ptr ds : [eax-0x1C]
        fxch st(2)
        fxch 
        fadd dword ptr ds : [eax-0x18]
        fxch 
        fadd dword ptr ds : [eax-0x14]
        jne public_6330110
        fstp dword ptr ss : [esp+0x1C]
        jmp public_633012f
        public_633012d : nop
        fstp st(0)
        public_633012f : nop
        cmp ecx, 2
        fild dword ptr ss : [esp+0x40]
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x40]
        fxch 
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x1C]
        je public_633028b
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        jle public_633025e
        push ebx
        push edi
        lea edi, ds:[esi+8]
        mov ebx, ecx
        public_63301a3 : nop
        fld dword ptr ds : [edi+4]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi-4]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fcom qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_6330250
        fdivr dword ptr ds : [public_639a1d0]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x18]
        jmp public_6330252
        public_6330250 : nop
        fstp st(0)
        public_6330252 : nop
        add edi, 0x14
        dec ebx
        jne public_63301a3
        pop edi
        pop ebx
        public_633025e : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fcom qword ptr ds : [public_63a0618]
        fnstsw ax
        test ah, 0x41
        je public_63302d5
        fstp st(0)
        public_633028b : nop
        fld dword ptr ds : [esi+0xC]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        public_63302d5 : nop
        fdivr dword ptr ds : [public_639a1d0]
        mov esi, ebp
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], eax
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], ecx
        fmul st, st(1)
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edx
        fstp st(0)
        call public_632f940
        lea ecx, ss:[esp+0x14]
        push ebp
        push ecx
        call public_62c47a0
        fstp dword ptr ss : [ebp+0xC]
        add esp, 8
        pop esi
        pop ebp
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x63300e0)
    }
}

#undef public_6330110
#undef public_633012d
#undef public_633012f
#undef public_63301a3
#undef public_6330250
#undef public_6330252
#undef public_633025e
#undef public_633028b
#undef public_63302d5
