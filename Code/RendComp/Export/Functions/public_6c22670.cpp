#include "RendComp-PCH.h"


#define public_6c22686 _public_6c22686

PROC_DECLARE(0x6c22670, internal_6c22670, public_6c22670);
extern "C" NAKED register_t __cdecl internal_6c22670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_6c22686
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 8
        public_6c22686 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c22670)
    }
}

#undef public_6c22686
