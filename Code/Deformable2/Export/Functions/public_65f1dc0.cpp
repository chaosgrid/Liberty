#include "Deformable2-PCH.h"


#define public_65f1de1 _public_65f1de1

PROC_DECLARE(0x65f1dc0, internal_65f1dc0, public_65f1dc0);
extern "C" NAKED register_t __cdecl internal_65f1dc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6603150]
        xor eax, eax
        test ecx, ecx
        je public_65f1de1
        mov eax, dword ptr ds : [public_6603154]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call ecx
        add esp, 0xC
        public_65f1de1 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f1dc0)
    }
}

#undef public_65f1de1
