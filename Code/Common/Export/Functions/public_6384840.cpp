#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6381e50);
CLANG_FORWARD_PROC_SYMBOL(public_6384840);
CLANG_FORWARD_PROC_SYMBOL(public_63849d0);

#define public_6384874 _public_6384874

PROC_DECLARE(0x6384840, internal_6384840, public_6384840);
extern "C" NAKED register_t __cdecl internal_6384840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b25c]
        test eax, eax
        jne public_6384874
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b258]
        push eax
        push ecx
        push edx
        call public_6381e50
        add esp, 0xC
        mov dword ptr ds : [public_658b258], eax
        mov dword ptr ds : [public_658b25c], 1
        public_6384874 : nop
        mov eax, dword ptr ds : [public_658b680]
        mov ecx, dword ptr ds : [public_658b684]
        mov edx, dword ptr ds : [public_658b24c]
        push eax
        mov eax, dword ptr ds : [public_658b254]
        push ecx
        mov ecx, dword ptr ds : [public_658b258]
        push edx
        push eax
        push ecx
        call public_63849d0
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6384840)
    }
}

#undef public_6384874
