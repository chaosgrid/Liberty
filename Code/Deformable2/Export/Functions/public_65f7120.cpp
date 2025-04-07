#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7120);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f7136 _public_65f7136

PROC_DECLARE(0x65f7120, internal_65f7120, public_65f7120);
extern "C" NAKED register_t __cdecl internal_65f7120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66031a4]
        sub esp, 0xC
        test eax, eax
        jne public_65f7136
        call public_6600de0
        mov dword ptr ds : [public_66031a4], eax
        public_65f7136 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65f7120)
    }
}

#undef public_65f7136
