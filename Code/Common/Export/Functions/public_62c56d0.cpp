#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62c56d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62da380);
CLANG_FORWARD_PROC_SYMBOL(public_62ecab0);
CLANG_FORWARD_PROC_SYMBOL(public_6332c60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62c573c _public_62c573c
#define public_62c5765 _public_62c5765

PROC_DECLARE(0x62c56d0, internal_62c56d0, public_62c56d0);
extern "C" NAKED register_t __cdecl internal_62c56d0()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        add ecx, 0x1364
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_62ecab0
        test eax, eax
        jne public_62c5765
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0xAC]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fc528]
        test eax, eax
        jne public_62c573c
        call public_6391cf0
        mov dword ptr ds : [public_63fc528], eax
        public_62c573c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_62c5765 : nop
        mov edi, dword ptr ds : [esi+0x24]
        add edi, 0x14FC
        mov ecx, edi
        call public_62c47c0
        lea eax, ss:[esp+0x14]
        push eax
        add edi, 0xC
        lea ecx, ss:[esp+0x24]
        push edi
        push ecx
        call public_62887d0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        lea edi, ds:[esi+0x354]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        lea ecx, ds:[esi+0x444]
        push ecx
        lea edx, ds:[esi+0x3CC]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_62887d0
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x40]
        add esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        lea ebx, ds:[esi+0x360]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fmul dword ptr ds : [public_63ebdac]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x24]
        fmul dword ptr ss : [esp+0x28]
        add eax, 0x14FC
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax+0x84]
        fmul dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fmul dword ptr ds : [public_63ebdb0]
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x68]
        call public_628b030
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_62c5a70
        fld dword ptr ss : [esp+0x34]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ss : [esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fadd dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x4C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x50]
        lea edi, ds:[esi+0x348]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fmul dword ptr ds : [esi+0x394]
        sub esp, 0xC
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x390]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x38C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x58]
        sub esp, 0xC
        fadd dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x58]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ds:[esi+0x36C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_6332c60
        push edi
        lea ecx, ds:[esi+0x168]
        call public_62da380
        pop edi
        pop esi
        pop ebx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x62c56d0)
    }
}

#undef public_62c573c
#undef public_62c5765
