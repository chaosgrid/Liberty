#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65fb090);
CLANG_FORWARD_PROC_SYMBOL(public_65fb900);
CLANG_FORWARD_PROC_SYMBOL(public_65fbb90);

#define public_65fb994 _public_65fb994
#define public_65fb9ba _public_65fb9ba
#define public_65fba28 _public_65fba28
#define public_65fba42 _public_65fba42
#define public_65fba59 _public_65fba59
#define public_65fba70 _public_65fba70
#define public_65fba87 _public_65fba87
#define public_65fba9e _public_65fba9e
#define public_65fbab5 _public_65fbab5
#define public_65fbabd _public_65fbabd
#define public_65fbb65 _public_65fbb65
#define public_65fbb70 _public_65fbb70

PROC_DECLARE(0x65fb900, internal_65fb900, public_65fb900);
extern "C" NAKED register_t __cdecl internal_65fb900()
{
    __asm
    {
        sub esp, 0x54
        push esi
        mov esi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_65f4580
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x38]
        call public_65f4580
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_65f4580
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_66013a8]
        fnstsw ax
        test ah, 0x41
        jne public_65fb994
        fld dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x28]
        fpatan 
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fxch 
        fpatan 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fpatan 
        fstp dword ptr ss : [esp+0xC]
        jmp public_65fb9ba
        public_65fb994 : nop
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xC], 0
        fchs 
        fld dword ptr ss : [esp+0x30]
        fpatan 
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fxch 
        fpatan 
        fstp dword ptr ss : [esp+8]
        public_65fb9ba : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x68]
        mov edi, dword ptr ss : [esp+0x64]
        push ebx
        push eax
        push ecx
        push edx
        push edi
        call public_65fb090
        mov ebx, eax
        add esp, 0x10
        test ebx, ebx
        je public_65fba28
        push 1
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        call public_65fbb90
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x7C]
        push eax
        push ecx
        push edx
        push edi
        call public_65fb090
        add esp, 0x24
        cmp eax, ebx
        jg public_65fba28
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], edx
        public_65fba28 : nop
        fld dword ptr ss : [esp+0x6C]
        xor cl, cl
        fcomp dword ptr ds : [edi+0x4C]
        pop ebx
        fnstsw ax
        test ah, 5
        jp public_65fba42
        mov eax, dword ptr ds : [edi+0x4C]
        mov dword ptr ss : [esp+0x68], eax
        mov cl, 1
        public_65fba42 : nop
        fld dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [edi+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_65fba59
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0x68], ecx
        mov cl, 1
        public_65fba59 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [edi+0x54]
        fnstsw ax
        test ah, 5
        jp public_65fba70
        mov edx, dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+8], edx
        mov cl, 1
        public_65fba70 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [edi+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_65fba87
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ss : [esp+8], eax
        mov cl, 1
        public_65fba87 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [edi+0x40]
        fnstsw ax
        test ah, 5
        jp public_65fba9e
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [esp+0xC], ecx
        mov cl, 1
        public_65fba9e : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [edi+0x44]
        fnstsw ax
        test ah, 0x41
        jne public_65fbab5
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_65fbabd
        public_65fbab5 : nop
        test cl, cl
        je public_65fbb65
        public_65fbabd : nop
        fld dword ptr ss : [esp+0x68]
        fsin 
        fld dword ptr ss : [esp+0x68]
        fcos 
        fld dword ptr ss : [esp+8]
        fsin 
        fld dword ptr ss : [esp+8]
        fcos 
        fstp qword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fsin 
        fld dword ptr ss : [esp+0xC]
        fcos 
        fld st(2)
        fmul st, st(5)
        fld st(2)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x64]
        fld st(1)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x68]
        fld st(1)
        fmul qword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(2)
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x68]
        fmul st, st(4)
        fld st(3)
        fmul st, st(7)
        faddp 
        fstp dword ptr ss : [esp+0x40]
        fld st(2)
        fmul qword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x44]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(3)
        fxch 
        fmul st, st(5)
        fsubp 
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        fchs 
        fstp dword ptr ss : [esp+0x50]
        fld qword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x54]
        fld qword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        fstp st(0)
        jmp public_65fbb70
        public_65fbb65 : nop
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        public_65fbb70 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x65fb900)
    }
}

#undef public_65fb994
#undef public_65fb9ba
#undef public_65fba28
#undef public_65fba42
#undef public_65fba59
#undef public_65fba70
#undef public_65fba87
#undef public_65fba9e
#undef public_65fbab5
#undef public_65fbabd
#undef public_65fbb65
#undef public_65fbb70
