#include "EngBase-PCH.h"


#define public_6621c0d _public_6621c0d
#define public_6621c15 _public_6621c15

PROC_DECLARE(0x6621c00, internal_6621c00, public_6621c00);
extern "C" NAKED register_t __cdecl internal_6621c00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621c0d
        test ecx, ecx
        jne public_6621c15
        public_6621c0d : nop
        mov eax, offset public_662b128
        ret 8
        public_6621c15 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ds : [eax]
        jmp dword ptr ds : [edx+0x20]
        UNREACHABLE_TRAP(0x6621c00)
    }
}

#undef public_6621c0d
#undef public_6621c15
