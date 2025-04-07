#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

#define public_631dff6 _public_631dff6
#define public_631e019 _public_631e019

PROC_DECLARE(0x631deb0, internal_631deb0, public_631deb0);
extern "C" NAKED register_t __cdecl internal_631deb0()
{
    __asm
    {
        sub esp, 0x5C
        mov eax, dword ptr ss : [esp+0x64]
        fld dword ptr ds : [eax+8]
        push esi
        fmul dword ptr ds : [public_6399408]
        fld dword ptr ds : [eax+4]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6399408]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6399408]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+4]
        fadd dword ptr ds : [eax+8]
        call public_6391fc2
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea eax, ss:[esp+0xC]
        fld st(0)
        lea ecx, ss:[esp+0x18]
        fcos 
        fstp dword ptr ss : [esp+0x30]
        fsin 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6288830
        fld dword ptr ss : [esp+0x78]
        fsin 
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [public_6399308]
        add esp, 0xC
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        fchs 
        fstp dword ptr ss : [esp+0x68]
        call esi
        mov dword ptr ss : [esp+0x6C], eax
        fild dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ds : [public_639a1d0]
        fsub dword ptr ss : [esp+0x68]
        fmulp 
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x6C]
        call esi
        mov dword ptr ss : [esp+0x68], eax
        fild dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639c9e0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x6C]
        call public_6391fce
        fcos 
        mov eax, dword ptr ds : [public_6401814]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x28], edx
        pop esi
        fld dword ptr ss : [esp+0x64]
        fcos 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x64]
        fsin 
        fmulp 
        fstp dword ptr ss : [esp+0x20]
        jne public_631dff6
        call public_6391cf0
        mov dword ptr ds : [public_6401814], eax
        public_631dff6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6401814]
        test eax, eax
        jne public_631e019
        call public_6391cf0
        mov dword ptr ds : [public_6401814], eax
        public_631e019 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x631deb0)
    }
}

#undef public_631dff6
#undef public_631e019
