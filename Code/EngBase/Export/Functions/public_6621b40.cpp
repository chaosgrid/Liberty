#include "EngBase-PCH.h"


#define public_6621b4d _public_6621b4d
#define public_6621b55 _public_6621b55

PROC_DECLARE(0x6621b40, internal_6621b40, public_6621b40);
extern "C" NAKED register_t __cdecl internal_6621b40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621b4d
        test ecx, ecx
        jne public_6621b55
        public_6621b4d : nop
        mov eax, dword ptr ds : [public_662b124]
        ret 8
        public_6621b55 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ds : [eax]
        jmp dword ptr ds : [edx+0x10]
        UNREACHABLE_TRAP(0x6621b40)
    }
}

#undef public_6621b4d
#undef public_6621b55
