#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542350);

#define public_542377 _public_542377
#define public_542386 _public_542386

PROC_DECLARE(0x542350, internal_542350, public_542350);
extern "C" NAKED register_t __cdecl internal_542350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_542386
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+8]
        test edx, edx
        je public_542377
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+0x14], 0
        inc dword ptr ds : [ecx]
        ret 4
        public_542377 : nop
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+0x14], 0
        inc dword ptr ds : [ecx]
        public_542386 : nop
        ret 4
        UNREACHABLE_TRAP(0x542350)
    }
}

#undef public_542377
#undef public_542386
