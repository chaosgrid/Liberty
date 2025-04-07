#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);

#define public_410f2c _public_410f2c
#define public_410f52 _public_410f52

PROC_DECLARE(0x410ef0, internal_410ef0, public_410ef0);
extern "C" NAKED register_t __cdecl internal_410ef0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x98]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        cmp dword ptr ds : [ecx+0xB0], 3
        pop edi
        pop esi
        je public_410f2c
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x40], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x44], edx
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ds : [ecx+0x48]
        public_410f2c : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_410f52
        test byte ptr ds : [ecx+0xB4], 4
        je public_410f52
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_410f52 : nop
        ret 4
        UNREACHABLE_TRAP(0x410ef0)
    }
}

#undef public_410f2c
#undef public_410f52
