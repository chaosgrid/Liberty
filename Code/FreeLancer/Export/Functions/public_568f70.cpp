#include "FreeLancer-PCH.h"


#define public_568f8c _public_568f8c
#define public_568fa0 _public_568fa0

PROC_DECLARE(0x568f70, internal_568f70, public_568f70);
extern "C" NAKED register_t __cdecl internal_568f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c700c]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov ecx, edx
        je public_568f8c
        mov ecx, eax
        public_568f8c : nop
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_568fa0
        mov eax, edx
        public_568fa0 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c7138]
        UNREACHABLE_TRAP(0x568f70)
    }
}

#undef public_568f8c
#undef public_568fa0
