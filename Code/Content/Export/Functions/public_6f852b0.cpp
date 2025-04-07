#include "Content-PCH.h"


#define public_6f852d0 _public_6f852d0

PROC_DECLARE(0x6f852b0, internal_6f852b0, public_6f852b0);
extern "C" NAKED register_t __cdecl internal_6f852b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ds : [ecx]
        push edx
        je public_6f852d0
        push 1
        call dword ptr ds : [eax+0x2C]
        ret 0x10
        public_6f852d0 : nop
        push 0
        call dword ptr ds : [eax+0x2C]
        ret 0x10
        UNREACHABLE_TRAP(0x6f852b0)
    }
}

#undef public_6f852d0
