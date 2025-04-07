#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b300);

#define public_634b30f _public_634b30f
#define public_634b323 _public_634b323
#define public_634b338 _public_634b338

PROC_DECLARE(0x634b300, internal_634b300, public_634b300);
extern "C" NAKED register_t __cdecl internal_634b300()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_634b30f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_634b30f : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi], 0
        je public_634b323
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_634b323 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        mov dword ptr ds : [esi+8], 0
        je public_634b338
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_634b338 : nop
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x634b300)
    }
}

#undef public_634b30f
#undef public_634b323
#undef public_634b338
