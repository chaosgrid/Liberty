#include "EngBase-PCH.h"


#define public_6621c7d _public_6621c7d
#define public_6621c82 _public_6621c82

PROC_DECLARE(0x6621c70, internal_6621c70, public_6621c70);
extern "C" NAKED register_t __cdecl internal_6621c70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621c7d
        test ecx, ecx
        jne public_6621c82
        public_6621c7d : nop
        xor eax, eax
        ret 8
        public_6621c82 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ds : [eax]
        jmp dword ptr ds : [edx+0x30]
        UNREACHABLE_TRAP(0x6621c70)
    }
}

#undef public_6621c7d
#undef public_6621c82
