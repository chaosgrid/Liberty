#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6359d10);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);

#define public_635a005 _public_635a005
#define public_635a039 _public_635a039
#define public_635a0d1 _public_635a0d1
#define public_635a0ef _public_635a0ef
#define public_635a153 _public_635a153

PROC_DECLARE(0x6359d10, internal_6359d10, public_6359d10);
extern "C" NAKED register_t __cdecl internal_6359d10()
{
    __asm
    {
        sub esp, 0xCC
        push ebx
        mov ebx, dword ptr ss : [esp+0xDC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xDC]
        lea eax, ss:[esp+0x14]
        push eax
        push ebx
        push edi
        mov esi, ecx
        call public_635bda0
        mov edx, edi
        lea ecx, ss:[esp+0x90]
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4e0]
        push ecx
        add eax, edi
        push ebx
        push eax
        call public_635bda0
        mov ebx, dword ptr ss : [esp+0x100]
        mov edi, dword ptr ss : [esp+0xF8]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push ebx
        push edi
        call public_635bda0
        mov eax, edi
        lea edx, ss:[esp+0x98]
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        push edx
        add ecx, edi
        push ebx
        push ecx
        call public_635bda0
        fld dword ptr ss : [esp+0xA4]
        fsub dword ptr ss : [esp+0x64]
        add esp, 0x30
        lea ecx, ss:[esp+0xB8]
        fstp dword ptr ss : [esp+0xB8]
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0xC0]
        call public_6347ef0
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x6C]
        call public_6347ef0
        lea edx, ss:[esp+0xB8]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_628bed0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fst dword ptr ss : [esp+0x94]
        fcomp dword ptr ds : [public_63a5494]
        fnstsw ax
        test ah, 0x41
        jne public_635a0ef
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x5C]
        call public_628bed0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_628bed0
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x78]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x74]
        faddp 
        fsubr st, st(1)
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsubr st, st(2)
        fmulp 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x88]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x84]
        faddp 
        fsubr st, st(1)
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsubr st, st(2)
        lea eax, ss:[esp+0x84]
        lea ecx, ss:[esp+0x14]
        fmulp 
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        fstp st(0)
        push eax
        push ecx
        lea ecx, ss:[esp+0xB4]
        call public_6347e00
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0xD4]
        call public_6347e00
        fld dword ptr ss : [esp+0xC8]
        fsub dword ptr ss : [esp+0xA8]
        lea ecx, ss:[esp+0x98]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0xCC]
        fsub dword ptr ss : [esp+0xAC]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0xD0]
        fsub dword ptr ss : [esp+0xB0]
        fstp dword ptr ss : [esp+0xA0]
        call public_6347e60
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_635a005
        mov ecx, dword ptr ss : [esp+0xEC]
        fst dword ptr ds : [esi+0x58]
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ss : [esp+0x98]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x9C]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xA0]
        jmp public_635a039
        public_635a005 : nop
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0xEC]
        fld dword ptr ss : [esp+0x94]
        mov dword ptr ds : [esi+0x58], 0
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        fld st(0)
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x2C]
        public_635a039 : nop
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        fstp dword ptr ds : [ecx+0x78]
        fld dword ptr ss : [esp+0x68]
        fstp dword ptr ds : [ecx+0x7C]
        fld dword ptr ss : [esp+0x6C]
        fstp dword ptr ds : [ecx+0x80]
        fld dword ptr ss : [esp+0xA8]
        fstp dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0xAC]
        fstp dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0xB0]
        fstp dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi+0x60]
        cmp al, 1
        jne public_635a153
        fld dword ptr ss : [esp+0xC]
        and eax, 0xFFFFFF00
        fcomp dword ptr ds : [public_63a53d4]
        mov dword ptr ds : [esi+0x60], eax
        fnstsw ax
        test ah, 1
        jne public_635a0d1
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_635a0d1
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_635a0d1
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_635a153
        public_635a0d1 : nop
        mov edx, dword ptr ds : [ecx+0x54]
        pop edi
        and edx, 0xFFFFFDFF
        or edx, 0x100
        pop esi
        mov dword ptr ds : [ecx+0x54], edx
        pop ebx
        add esp, 0xCC
        ret 0x18
        public_635a0ef : nop
        mov eax, dword ptr ss : [esp+0xEC]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x54]
        and ecx, 0xFFFFFDFF
        or ecx, 0x100
        mov dword ptr ds : [eax+0x54], ecx
        mov ecx, dword ptr ss : [esp+0xF0]
        xor edx, edx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [public_658ab20]
        mov dword ptr ds : [esi+0x58], ecx
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x78], edx
        mov dword ptr ds : [eax+0x7C], 0x3F800000
        mov dword ptr ds : [eax+0x80], edx
        public_635a153 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xCC
        ret 0x18
        UNREACHABLE_TRAP(0x6359d10)
    }
}

#undef public_635a005
#undef public_635a039
#undef public_635a0d1
#undef public_635a0ef
#undef public_635a153
