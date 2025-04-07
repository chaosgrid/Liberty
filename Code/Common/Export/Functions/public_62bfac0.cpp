#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa640);

#define public_62bfadb _public_62bfadb
#define public_62bfaf8 _public_62bfaf8
#define public_62bfafa _public_62bfafa
#define public_62bfb12 _public_62bfb12
#define public_62bfb14 _public_62bfb14
#define public_62bfb31 _public_62bfb31

PROC_DECLARE(0x62bfac0, internal_62bfac0, public_62bfac0);
extern "C" NAKED register_t __cdecl internal_62bfac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        push edi
        mov edi, 0xFFFFFFFD
        jne public_62bfadb
        pop edi
        mov eax, 0xFFFFFFFC
        pop esi
        ret 8
        public_62bfadb : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62bfaf8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62bfafa
        public_62bfaf8 : nop
        xor eax, eax
        public_62bfafa : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_62bfb12
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_62bfb14
        public_62bfb12 : nop
        xor ecx, ecx
        public_62bfb14 : nop
        test eax, eax
        je public_62bfb31
        test ecx, ecx
        je public_62bfb31
        push eax
        xor esi, esi
        call public_62aa640
        mov eax, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_62bfb31 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bfac0)
    }
}

#undef public_62bfadb
#undef public_62bfaf8
#undef public_62bfafa
#undef public_62bfb12
#undef public_62bfb14
#undef public_62bfb31
