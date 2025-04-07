#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410f60);
CLANG_FORWARD_PROC_SYMBOL(public_411370);

#define public_410fa6 _public_410fa6
#define public_410fcc _public_410fcc

PROC_DECLARE(0x410f60, internal_410f60, public_410f60);
extern "C" NAKED register_t __cdecl internal_410f60()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+0xB0], 1
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        lea edi, ds:[ebx+0x74]
        mov ecx, 9
        rep movsd
        je public_410fa6
        push 0
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_411370
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        fchs 
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [ebx+0x4C], ecx
        mov dword ptr ds : [ebx+0x50], edx
        public_410fa6 : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_410fcc
        test byte ptr ds : [ebx+0xB4], 4
        je public_410fcc
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add ebx, 0xC
        push ebx
        push eax
        call dword ptr ds : [ecx+0x12C]
        public_410fcc : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x410f60)
    }
}

#undef public_410fa6
#undef public_410fcc
