#include "Alchemy-PCH.h"


#define public_6243244 _public_6243244

PROC_DECLARE(0x6243230, internal_6243230, public_6243230);
extern "C" NAKED register_t __cdecl internal_6243230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6243244
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        ret 8
        public_6243244 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6243230)
    }
}

#undef public_6243244
