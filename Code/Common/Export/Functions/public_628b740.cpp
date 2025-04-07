#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b740);
CLANG_FORWARD_PROC_SYMBOL(public_6345710);

#define public_628b794 _public_628b794

PROC_DECLARE(0x628b740, internal_628b740, public_628b740);
extern "C" NAKED register_t __cdecl internal_628b740()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x20
        test ecx, ecx
        mov eax, 1
        je public_628b794
        mov ecx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x10]
        push eax
        lea edx, ss:[esp+4]
        push edx
        call public_6345710
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        public_628b794 : nop
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x628b740)
    }
}

#undef public_628b794
