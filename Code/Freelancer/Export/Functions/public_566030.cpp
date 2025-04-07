#include "Freelancer-PCH.h"


#define public_566043 _public_566043
#define public_566050 _public_566050

PROC_DECLARE(0x566030, internal_566030, public_566030);
extern "C" NAKED register_t __cdecl internal_566030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x48]
        test eax, eax
        mov edx, dword ptr ds : [public_5c700c]
        jne public_566043
        mov eax, edx
        public_566043 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x48]
        test ecx, ecx
        jne public_566050
        mov ecx, edx
        public_566050 : nop
        push eax
        push ecx
        call dword ptr ds : [public_5c7138]
        xor edx, edx
        add esp, 8
        test eax, eax
        setg dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x566030)
    }
}

#undef public_566043
#undef public_566050
