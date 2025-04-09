#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542330);

#define public_542344 _public_542344

PROC_DECLARE(0x542330, internal_542330, public_542330);
extern "C" NAKED register_t __cdecl internal_542330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        jne public_542344
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        ret 4
        public_542344 : nop
        mov edx, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        ret 4
        UNREACHABLE_TRAP(0x542330)
    }
}

#undef public_542344
