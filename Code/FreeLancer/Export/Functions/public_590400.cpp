#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_590400);

#define public_590414 _public_590414
#define public_590428 _public_590428
#define public_59042e _public_59042e
#define public_59043d _public_59043d

PROC_DECLARE(0x590400, internal_590400, public_590400);
extern "C" NAKED register_t __cdecl internal_590400()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_59042e
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_590414
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_590414 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_590428
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_590428 : nop
        mov dword ptr ds : [esi], 0
        public_59042e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_59043d
        inc dword ptr ds : [eax+4]
        public_59043d : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x590400)
    }
}

#undef public_590414
#undef public_590428
#undef public_59042e
#undef public_59043d
