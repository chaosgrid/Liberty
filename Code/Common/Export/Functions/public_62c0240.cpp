#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b23c0);

#define public_62c02a4 _public_62c02a4
#define public_62c02a6 _public_62c02a6

PROC_DECLARE(0x62c0240, internal_62c0240, public_62c0240);
extern "C" NAKED register_t __cdecl internal_62c0240()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        push edi
        mov edi, 0xFFFFFFFD
        je public_62c02a4
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62c02a4
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x78]
        test eax, eax
        jne public_62c02a4
        mov cx, word ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp cx, word ptr ds : [public_63a4aa4]
        je public_62c02a6
        mov ecx, esi
        mov edi, 0xFFFFFFFB
        call public_62b23c0
        test eax, eax
        je public_62c02a4
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        pop edi
        pop esi
        pop ecx
        ret 4
        public_62c02a4 : nop
        mov eax, edi
        public_62c02a6 : nop
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62c0240)
    }
}

#undef public_62c02a4
#undef public_62c02a6
