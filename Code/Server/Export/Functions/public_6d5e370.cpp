#include "Server-PCH.h"


#define public_6d5e3a2 _public_6d5e3a2
#define public_6d5e3a4 _public_6d5e3a4

PROC_DECLARE(0x6d5e370, internal_6d5e370, public_6d5e370);
extern "C" NAKED register_t __cdecl internal_6d5e370()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6d5e3a4
        push ecx
        call dword ptr ds : [public_6d644a4]
        add esp, 4
        test eax, eax
        mov ecx, 0xFFFFFFFE
        je public_6d5e3a2
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 
        public_6d5e3a2 : nop
        mov eax, ecx
        public_6d5e3a4 : nop
        ret 
        UNREACHABLE_TRAP(0x6d5e370)
    }
}

#undef public_6d5e3a2
#undef public_6d5e3a4
