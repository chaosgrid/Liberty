#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e3b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e468);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e522);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e5a6);

#define public_6d3f808 _public_6d3f808
#define public_6d3f8b0 _public_6d3f8b0
#define public_6d3f958 _public_6d3f958

PROC_DECLARE(0x6d3f72b, internal_6d3f72b, public_6d3f72b);
extern "C" NAKED register_t __cdecl internal_6d3f72b()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x5C]
        sub esp, 0xA0
        push esi
        mov esi, dword ptr ss : [ebp+0x70]
        push edi
        lea edi, ss:[ebp-0x24]
        movsd 
        movsd 
        movsd 
        movsd 
        mov esi, dword ptr ss : [ebp+0x74]
        lea edi, ss:[ebp+0xC]
        movsd 
        movsd 
        movsd 
        movsd 
        fld dword ptr ss : [ebp+0xC]
        fadd dword ptr ss : [ebp-0x24]
        fld dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0x78]
        fadd dword ptr ss : [ebp-0x20]
        lea edi, ss:[ebp+0x3C]
        fld dword ptr ss : [ebp+0x14]
        movsd 
        fadd dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp+0x18]
        fadd dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-0x24]
        movsd 
        fsub dword ptr ss : [ebp+0xC]
        fld dword ptr ss : [ebp-0x20]
        fsub dword ptr ss : [ebp+0x10]
        movsd 
        fstp dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp-0x1C]
        fsub dword ptr ss : [ebp+0x14]
        movsd 
        mov esi, dword ptr ss : [ebp+0x7C]
        fstp dword ptr ss : [ebp+0x54]
        lea edi, ss:[ebp-0x14]
        fld dword ptr ss : [ebp-0x18]
        movsd 
        fsub dword ptr ss : [ebp+0x18]
        movsd 
        fstp dword ptr ss : [ebp+0x58]
        fld st(1)
        fmul st, st(2)
        movsd 
        fld st(3)
        fmul st, st(4)
        movsd 
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [ebp+0x58]
        fmul dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x54]
        fmul dword ptr ss : [ebp+0x54]
        faddp 
        fld dword ptr ss : [ebp+0x50]
        fmul dword ptr ss : [ebp+0x50]
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        fstp st(0)
        test ah, 0x41
        jne public_6d3f808
        fld dword ptr ss : [ebp-0x24]
        lea esi, ss:[ebp+0x2C]
        fchs 
        lea edi, ss:[ebp-0x24]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp-0x20]
        fchs 
        fstp dword ptr ss : [ebp+0x30]
        fld dword ptr ss : [ebp-0x1C]
        fchs 
        fstp dword ptr ss : [ebp+0x34]
        fld dword ptr ss : [ebp-0x18]
        fchs 
        fstp dword ptr ss : [ebp+0x38]
        movsd 
        movsd 
        movsd 
        movsd 
        public_6d3f808 : nop
        fld dword ptr ss : [ebp+0x3C]
        fadd dword ptr ss : [ebp+0xC]
        fld dword ptr ss : [ebp+0x40]
        fadd dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0x44]
        fadd dword ptr ss : [ebp+0x14]
        fld dword ptr ss : [ebp+0x48]
        fadd dword ptr ss : [ebp+0x18]
        fld dword ptr ss : [ebp+0xC]
        fsub dword ptr ss : [ebp+0x3C]
        fld dword ptr ss : [ebp+0x10]
        fsub dword ptr ss : [ebp+0x40]
        fstp dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x14]
        fsub dword ptr ss : [ebp+0x44]
        fstp dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x58]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [ebp+0x58]
        fmul dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x54]
        fmul dword ptr ss : [ebp+0x54]
        faddp 
        fld dword ptr ss : [ebp+0x50]
        fmul dword ptr ss : [ebp+0x50]
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6d3f8b0
        fld dword ptr ss : [ebp+0x3C]
        lea esi, ss:[ebp+0x2C]
        fchs 
        lea edi, ss:[ebp+0x3C]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp+0x40]
        fchs 
        fstp dword ptr ss : [ebp+0x30]
        fld dword ptr ss : [ebp+0x44]
        fchs 
        fstp dword ptr ss : [ebp+0x34]
        fld dword ptr ss : [ebp+0x48]
        fchs 
        fstp dword ptr ss : [ebp+0x38]
        movsd 
        movsd 
        movsd 
        movsd 
        public_6d3f8b0 : nop
        fld dword ptr ss : [ebp-0x14]
        fadd dword ptr ss : [ebp+0x3C]
        fld dword ptr ss : [ebp-0x10]
        fadd dword ptr ss : [ebp+0x40]
        fld dword ptr ss : [ebp-0xC]
        fadd dword ptr ss : [ebp+0x44]
        fld dword ptr ss : [ebp-8]
        fadd dword ptr ss : [ebp+0x48]
        fld dword ptr ss : [ebp+0x3C]
        fsub dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp+0x40]
        fsub dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x44]
        fsub dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x48]
        fsub dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp+0x58]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [ebp+0x58]
        fmul dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x54]
        fmul dword ptr ss : [ebp+0x54]
        faddp 
        fld dword ptr ss : [ebp+0x50]
        fmul dword ptr ss : [ebp+0x50]
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6d3f958
        fld dword ptr ss : [ebp-0x14]
        lea esi, ss:[ebp+0x2C]
        fchs 
        lea edi, ss:[ebp-0x14]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp-0x10]
        fchs 
        fstp dword ptr ss : [ebp+0x30]
        fld dword ptr ss : [ebp-0xC]
        fchs 
        fstp dword ptr ss : [ebp+0x34]
        fld dword ptr ss : [ebp-8]
        fchs 
        fstp dword ptr ss : [ebp+0x38]
        movsd 
        movsd 
        movsd 
        movsd 
        public_6d3f958 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        call public_6d3e468
        lea eax, ss:[ebp-0x24]
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        lea esi, ss:[ebp+0x1C]
        lea edi, ss:[ebp-4]
        movsd 
        movsd 
        lea eax, ss:[ebp-4]
        movsd 
        push eax
        lea eax, ss:[ebp-0x34]
        push eax
        movsd 
        call public_6d3e522
        lea eax, ss:[ebp+0x3C]
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        lea esi, ss:[ebp+0x1C]
        lea edi, ss:[ebp-4]
        movsd 
        movsd 
        lea eax, ss:[ebp-4]
        movsd 
        push eax
        lea eax, ss:[ebp+0x4C]
        push eax
        movsd 
        call public_6d3e522
        lea eax, ss:[ebp-4]
        fld dword ptr ss : [ebp-0x34]
        push eax
        fadd dword ptr ss : [ebp+0x4C]
        lea eax, ss:[ebp-0x44]
        fld dword ptr ss : [ebp-0x30]
        push eax
        fadd dword ptr ss : [ebp+0x50]
        fstp dword ptr ss : [ebp+0x20]
        fld dword ptr ss : [ebp-0x2C]
        fadd dword ptr ss : [ebp+0x54]
        fstp dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp-0x28]
        fadd dword ptr ss : [ebp+0x58]
        fld dword ptr ds : [public_6d5f8f8]
        fld st(2)
        fmul st, st(1)
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [ebp]
        fld dword ptr ss : [ebp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+4]
        fld st(1)
        fmul st, st(1)
        fstp dword ptr ss : [ebp+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6d3e5a6
        lea eax, ss:[ebp-0x44]
        push eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        mov edi, dword ptr ss : [ebp+0x64]
        lea esi, ss:[ebp+0x1C]
        movsd 
        movsd 
        lea eax, ss:[ebp+0x3C]
        movsd 
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        movsd 
        call public_6d3e468
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        lea esi, ss:[ebp+0x1C]
        lea edi, ss:[ebp-4]
        movsd 
        movsd 
        lea eax, ss:[ebp-4]
        movsd 
        push eax
        lea eax, ss:[ebp-0x34]
        push eax
        movsd 
        call public_6d3e522
        lea eax, ss:[ebp-0x14]
        push eax
        lea eax, ss:[ebp+0x2C]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        lea esi, ss:[ebp+0x1C]
        lea edi, ss:[ebp-4]
        movsd 
        movsd 
        lea eax, ss:[ebp-4]
        movsd 
        push eax
        lea eax, ss:[ebp+0x4C]
        push eax
        movsd 
        call public_6d3e522
        fld dword ptr ss : [ebp-0x34]
        fadd dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [ebp-0x30]
        fadd dword ptr ss : [ebp+0x50]
        fstp dword ptr ss : [ebp+0x20]
        fld dword ptr ss : [ebp-0x2C]
        fadd dword ptr ss : [ebp+0x54]
        fstp dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp-0x28]
        fadd dword ptr ss : [ebp+0x58]
        fld dword ptr ds : [public_6d5f8f8]
        fld st(2)
        fmul st, st(1)
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [ebp]
        fld dword ptr ss : [ebp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+4]
        fld st(1)
        fmul st, st(1)
        fstp dword ptr ss : [ebp+8]
        fstp st(0)
        lea eax, ss:[ebp-4]
        fstp st(0)
        push eax
        fstp st(0)
        lea eax, ss:[ebp-0x44]
        push eax
        call public_6d3e5a6
        lea eax, ss:[ebp-0x44]
        push eax
        lea eax, ss:[ebp+0x3C]
        push eax
        lea eax, ss:[ebp+0x1C]
        push eax
        call public_6d3e3b2
        mov edi, dword ptr ss : [ebp+0x68]
        lea esi, ss:[ebp+0x1C]
        movsd 
        movsd 
        movsd 
        movsd 
        mov edi, dword ptr ss : [ebp+0x6C]
        lea esi, ss:[ebp+0x3C]
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        pop esi
        add ebp, 0x5C
        leave 
        ret 0x1C
        UNREACHABLE_TRAP(0x6d3f72b)
    }
}

#undef public_6d3f808
#undef public_6d3f8b0
#undef public_6d3f958
