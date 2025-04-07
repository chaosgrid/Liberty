#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6354dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6355020);

#define public_6354df8 _public_6354df8

PROC_DECLARE(0x6354dc0, internal_6354dc0, public_6354dc0);
extern "C" NAKED register_t __cdecl internal_6354dc0()
{
    __asm
    {
        sub esp, 0x7C
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x98]
        push ebx
        mov ebx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ds : [ebx+0x10]
        push esi
        cmp ecx, dword ptr ds : [edx+0x98]
        push edi
        mov dword ptr ss : [esp+0xC], 0xBF800000
        jne public_6354df8
        mov dword ptr ss : [esp+0xC], 0x3F800000
        public_6354df8 : nop
        mov esi, dword ptr ds : [eax+0x40]
        fld dword ptr ds : [eax+0x38]
        fld st(0)
        mov edi, dword ptr ds : [ebx+0x40]
        fmul dword ptr ds : [esi+0x7C]
        push ecx
        fld st(1)
        lea ecx, ss:[esp+0x3C]
        fmul dword ptr ds : [esi+0x80]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ds : [esi+0x78]
        mov dword ptr ss : [esp+0x44], edx
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+0x3C]
        lea eax, ds:[esi+0x88]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_628be60
        fld dword ptr ds : [ebx+0x38]
        fld st(0)
        push ecx
        fmul dword ptr ds : [edi+0x7C]
        lea eax, ds:[edi+0x88]
        fld st(1)
        lea ecx, ss:[esp+0x4C]
        fmul dword ptr ds : [edi+0x80]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ds : [edi+0x78]
        mov dword ptr ss : [esp+0x54], edx
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [ebx+0x3C]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        call public_628be60
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [edi+0x24]
        lea ecx, ss:[esp+0x18]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edi+0x20]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_6347ef0
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x30]
        fadd st, st(3)
        fstp dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_63a5460]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_63a5460]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5460]
        fst dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x14]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0x80]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x94]
        fmul st, st(1)
        lea eax, ss:[esp+0x78]
        push eax
        fstp dword ptr ss : [esp+0x64]
        push ecx
        fstp st(0)
        call public_6355020
        mov eax, dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x6354dc0)
    }
}

#undef public_6354df8
