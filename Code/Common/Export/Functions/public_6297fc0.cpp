#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6298001 _public_6298001
#define public_6298076 _public_6298076

PROC_DECLARE(0x6297fc0, internal_6297fc0, public_6297fc0);
extern "C" NAKED register_t __cdecl internal_6297fc0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push 0
        call dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x60]
        rep movsd
        jne public_6298001
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6298001 : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x22C
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x24]
        pop edi
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x2C]
        pop esi
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x14]
        pop ebx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x50]
        jne public_6298076
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6298076 : nop
        mov edx, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x80]
        fchs 
        mov ecx, dword ptr ss : [esp+0x84]
        fpatan 
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fsqrt 
        fdivp 
        fld1 
        fpatan 
        fstp dword ptr ds : [ecx]
        add esp, 0x78
        ret 0xC
        UNREACHABLE_TRAP(0x6297fc0)
    }
}

#undef public_6298001
#undef public_6298076
