#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_63327f0);

PROC_DECLARE(0x63327f0, internal_63327f0, public_63327f0);
extern "C" NAKED register_t __cdecl internal_63327f0()
{
    __asm
    {
        sub esp, 0xF8
        fld dword ptr ss : [esp+0x100]
        push ebx
        fmul dword ptr ss : [esp+0x104]
        push esi
        push edi
        mov esi, ecx
        fst dword ptr ss : [esp+0xC]
        push 0x40000000
        fmul dword ptr ss : [esp+0x110]
        lea edi, ds:[esi+0xC]
        lea eax, ss:[esp+0x54]
        push edi
        push eax
        fstp dword ptr ss : [esp+0x1C]
        call public_6288830
        add esp, 0xC
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov ecx, esi
        call public_62c5a70
        lea ebx, ds:[esi+0x18]
        push ebx
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0x100]
        push eax
        call public_62887d0
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        lea edx, ss:[esp+0x108]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_6288830
        push 0x40800000
        lea ecx, ss:[esp+0xFC]
        push ebx
        push ecx
        call public_6288830
        push 0x40A00000
        lea edx, ss:[esp+0x114]
        push edi
        push edx
        call public_6288830
        fld dword ptr ds : [esi+8]
        fadd st(0), st
        add esp, 0x24
        lea ecx, ss:[esp+0xE0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0xEC]
        push eax
        lea ecx, ss:[esp+0xD8]
        push ecx
        lea edx, ss:[esp+0xB8]
        push edx
        call public_6288800
        lea eax, ss:[esp+0xEC]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_62887d0
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+0x2C]
        add esp, 0xC
        lea ecx, ss:[esp+0xB0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0xC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xB0]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [ebx+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_639dfd4]
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fmul dword ptr ds : [public_639dfd4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fmul dword ptr ds : [public_639dfd4]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [edi+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_639dfd4]
        lea ecx, ss:[esp+0xA4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [public_639dfd4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [public_639dfd4]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0xA0]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x88]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x70]
        lea ecx, ss:[esp+0x98]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x94]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x9C]
        fadd dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x98]
        fadd dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0x80]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x7C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0xC8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0xD0]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0xC8]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x74]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x108]
        fadd dword ptr ss : [esp+0x68]
        mov ecx, eax
        fld dword ptr ss : [esp+0x54]
        pop edi
        fadd dword ptr ss : [esp+0x68]
        pop esi
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x68]
        pop ebx
        fstp dword ptr ss : [esp+0xAC]
        fxch 
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xF8
        ret 8
        UNREACHABLE_TRAP(0x63327f0)
    }
}
