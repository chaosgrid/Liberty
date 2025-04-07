#include "Common-PCH.h"


#define public_62d165f _public_62d165f
#define public_62d166f _public_62d166f

PROC_DECLARE(0x62d1650, internal_62d1650, public_62d1650);
extern "C" NAKED register_t __cdecl internal_62d1650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        jne public_62d165f
        mov eax, dword ptr ds : [public_63ec08c]
        ret 
        public_62d165f : nop
        mov ecx, dword ptr ds : [eax*4+public_63fc8e4]
        test ecx, ecx
        je public_62d166f
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+8]
        public_62d166f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62d1650)
    }
}

#undef public_62d165f
#undef public_62d166f
