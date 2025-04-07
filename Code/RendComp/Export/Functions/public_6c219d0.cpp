#include "RendComp-PCH.h"


#define public_6c219dd _public_6c219dd
#define public_6c219e3 _public_6c219e3

PROC_DECLARE(0x6c219d0, internal_6c219d0, public_6c219d0);
extern "C" NAKED register_t __cdecl internal_6c219d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_6c219dd
        test eax, eax
        jne public_6c219e3
        public_6c219dd : nop
        or eax, 0xFFFFFFFF
        ret 0x10
        public_6c219e3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx]
        ret 0x10
        UNREACHABLE_TRAP(0x6c219d0)
    }
}

#undef public_6c219dd
#undef public_6c219e3
