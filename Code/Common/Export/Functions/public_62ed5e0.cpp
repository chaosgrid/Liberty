#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed5e0);

#define public_62ed60d _public_62ed60d

PROC_DECLARE(0x62ed5e0, internal_62ed5e0, public_62ed5e0);
extern "C" NAKED register_t __cdecl internal_62ed5e0()
{
    __asm
    {
        push ecx
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ss : [esp+2], ax
        mov eax, dword ptr ds : [ecx+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ed60d
        mov edx, dword ptr ds : [eax-8]
        lea ecx, ds:[eax-8]
        lea eax, ss:[esp+2]
        push eax
        call dword ptr ds : [edx+0x78]
        mov ax, word ptr ss : [esp+2]
        pop ecx
        ret 
        public_62ed60d : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+2]
        push eax
        call dword ptr ds : [edx+0x78]
        mov ax, word ptr ss : [esp+2]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ed5e0)
    }
}

#undef public_62ed60d
