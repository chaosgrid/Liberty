#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54d920);

#define public_54d92b _public_54d92b

PROC_DECLARE(0x54d920, internal_54d920, public_54d920);
extern "C" NAKED register_t __cdecl internal_54d920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx+0x5C]
        jns public_54d92b
        xor eax, eax
        public_54d92b : nop
        mov ecx, dword ptr ds : [ecx+0x60]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*8+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx]
        mov ecx, eax
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x54d920)
    }
}

#undef public_54d92b
