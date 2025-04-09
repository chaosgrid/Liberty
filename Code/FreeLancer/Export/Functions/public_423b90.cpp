#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_423ba6 _public_423ba6

PROC_DECLARE(0x423b90, internal_423b90, public_423b90);
extern "C" NAKED register_t __cdecl internal_423b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6679d8]
        sub esp, 0xC
        test eax, eax
        jne public_423ba6
        call public_5b73e0
        mov dword ptr ds : [public_6679d8], eax
        public_423ba6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
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
        UNREACHABLE_TRAP(0x423b90)
    }
}

#undef public_423ba6
