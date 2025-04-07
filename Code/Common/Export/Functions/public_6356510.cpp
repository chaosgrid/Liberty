#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6355c80);
CLANG_FORWARD_PROC_SYMBOL(public_6355ca0);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_6356529 _public_6356529
#define public_6356545 _public_6356545
#define public_6356558 _public_6356558

PROC_DECLARE(0x6356510, internal_6356510, public_6356510);
extern "C" NAKED register_t __cdecl internal_6356510()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp word ptr ds : [ecx+0x3E], 1
        jg public_6356529
        mov ecx, dword ptr ds : [ecx+0x20]
        call public_635a1e0
        pop esi
        ret 8
        public_6356529 : nop
        push edi
        call public_634b7d0
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        test ch, 0x30
        je public_6356545
        mov ecx, dword ptr ds : [esi+4]
        call public_6355ca0
        public_6356545 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        test ah, 0xC
        pop edi
        jne public_6356558
        mov ecx, dword ptr ds : [esi+4]
        call public_6355c80
        public_6356558 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6356510)
    }
}

#undef public_6356529
#undef public_6356545
#undef public_6356558
