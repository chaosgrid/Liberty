#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf93e3 _public_6cf93e3

PROC_DECLARE(0x6cf9390, internal_6cf9390, public_6cf9390);
extern "C" NAKED register_t __cdecl internal_6cf9390()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push esi
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov esi, 0xFFFFFFFE
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf93e3
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6cf93e3
        mov edx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edx]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        movzx edx, word ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x38]
        xor ecx, ecx
        cmp eax, esi
        setne cl
        pop esi
        dec ecx
        and ecx, 0xFFFFFFFD
        mov eax, ecx
        pop ecx
        ret 
        public_6cf93e3 : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cf9390)
    }
}

#undef public_6cf93e3
