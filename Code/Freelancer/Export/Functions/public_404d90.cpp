#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404d90);

#define public_404da1 _public_404da1
#define public_404da7 _public_404da7
#define public_404db9 _public_404db9

PROC_DECLARE(0x404d90, internal_404d90, public_404d90);
extern "C" NAKED register_t __cdecl internal_404d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_404da1
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        jmp public_404da7
        public_404da1 : nop
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        pop esi
        public_404da7 : nop
        mov edx, dword ptr ds : [eax]
        test edx, edx
        mov eax, dword ptr ds : [eax+4]
        jne public_404db9
        mov dword ptr ds : [ecx+4], eax
        dec dword ptr ds : [ecx+8]
        ret 4
        public_404db9 : nop
        mov dword ptr ds : [edx+4], eax
        dec dword ptr ds : [ecx+8]
        ret 4
        UNREACHABLE_TRAP(0x404d90)
    }
}

#undef public_404da1
#undef public_404da7
#undef public_404db9
