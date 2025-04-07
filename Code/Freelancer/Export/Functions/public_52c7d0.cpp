#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7d0);

#define public_52c7f1 _public_52c7f1

PROC_DECLARE(0x52c7d0, internal_52c7d0, public_52c7d0);
extern "C" NAKED register_t __cdecl internal_52c7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_52c7f1
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        lea esi, ds:[ecx+4]
        lea edi, ds:[eax+4]
        mov ecx, 0xC
        mov dword ptr ds : [eax], edx
        rep movsd
        pop edi
        pop esi
        public_52c7f1 : nop
        ret 
        UNREACHABLE_TRAP(0x52c7d0)
    }
}

#undef public_52c7f1
