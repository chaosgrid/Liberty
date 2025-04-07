#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62cd4d3 _public_62cd4d3
#define public_62cd4d5 _public_62cd4d5
#define public_62cd4f3 _public_62cd4f3

PROC_DECLARE(0x62cd4c0, internal_62cd4c0, public_62cd4c0);
extern "C" NAKED register_t __cdecl internal_62cd4c0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2C]
        test eax, eax
        je public_62cd4d3
        add eax, 0xFFFFFFF8
        jmp public_62cd4d5
        public_62cd4d3 : nop
        xor eax, eax
        public_62cd4d5 : nop
        push eax
        call public_62e61f0
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc538]
        add esp, 4
        test eax, eax
        jne public_62cd4f3
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62cd4f3 : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x290
        push edi
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62cd4c0)
    }
}

#undef public_62cd4d3
#undef public_62cd4d5
#undef public_62cd4f3
