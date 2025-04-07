#include "Deformable2-PCH.h"


#define public_65f52a4 _public_65f52a4

PROC_DECLARE(0x65f5290, internal_65f5290, public_65f5290);
extern "C" NAKED register_t __cdecl internal_65f5290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        je public_65f52a4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        public_65f52a4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f5290)
    }
}

#undef public_65f52a4
