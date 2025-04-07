#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa600);

#define public_62bfb5b _public_62bfb5b
#define public_62bfb78 _public_62bfb78
#define public_62bfb7a _public_62bfb7a
#define public_62bfb92 _public_62bfb92
#define public_62bfb94 _public_62bfb94
#define public_62bfbb5 _public_62bfbb5

PROC_DECLARE(0x62bfb40, internal_62bfb40, public_62bfb40);
extern "C" NAKED register_t __cdecl internal_62bfb40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        push edi
        mov edi, 0xFFFFFFFD
        jne public_62bfb5b
        pop edi
        mov eax, 0xFFFFFFFC
        pop esi
        ret 0xC
        public_62bfb5b : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62bfb78
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62bfb7a
        public_62bfb78 : nop
        xor eax, eax
        public_62bfb7a : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_62bfb92
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_62bfb94
        public_62bfb92 : nop
        xor ecx, ecx
        public_62bfb94 : nop
        test eax, eax
        je public_62bfbb5
        test ecx, ecx
        je public_62bfbb5
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        xor esi, esi
        call public_62aa600
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        public_62bfbb5 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62bfb40)
    }
}

#undef public_62bfb5b
#undef public_62bfb78
#undef public_62bfb7a
#undef public_62bfb92
#undef public_62bfb94
#undef public_62bfbb5
