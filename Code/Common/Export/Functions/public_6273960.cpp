#include "Common-PCH.h"


#define public_627397e _public_627397e
#define public_6273980 _public_6273980

PROC_DECLARE(0x6273960, internal_6273960, public_6273960);
extern "C" NAKED register_t __cdecl internal_6273960()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        xor bl, bl
        test eax, eax
        je public_627397e
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        mov al, 1
        je public_6273980
        public_627397e : nop
        mov al, bl
        public_6273980 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6273960)
    }
}

#undef public_627397e
#undef public_6273980
