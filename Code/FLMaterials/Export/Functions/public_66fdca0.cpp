#include "FLMaterials-PCH.h"


#define public_66fdcb1 _public_66fdcb1

PROC_DECLARE(0x66fdca0, internal_66fdca0, public_66fdca0);
extern "C" NAKED register_t __cdecl internal_66fdca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+9]
        test cl, cl
        je public_66fdcb1
        add eax, 0x3C
        ret 4
        public_66fdcb1 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x40]
        UNREACHABLE_TRAP(0x66fdca0)
    }
}

#undef public_66fdcb1
