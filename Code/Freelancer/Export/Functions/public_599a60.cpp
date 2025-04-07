#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_599a60);

#define public_599a74 _public_599a74
#define public_599a88 _public_599a88
#define public_599a8e _public_599a8e

PROC_DECLARE(0x599a60, internal_599a60, public_599a60);
extern "C" NAKED register_t __cdecl internal_599a60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_599a8e
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_599a74
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_599a74 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_599a88
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_599a88 : nop
        mov dword ptr ds : [esi], 0
        public_599a8e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x599a60)
    }
}

#undef public_599a74
#undef public_599a88
#undef public_599a8e
