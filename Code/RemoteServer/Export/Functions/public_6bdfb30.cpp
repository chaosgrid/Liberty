#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdfb30);

#define public_6bdfb5d _public_6bdfb5d

PROC_DECLARE(0x6bdfb30, internal_6bdfb30, public_6bdfb30);
extern "C" NAKED register_t __cdecl internal_6bdfb30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jbe public_6bdfb5d
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov si, ax
        push edi
        mov edi, edx
        shl esi, 0x10
        mov si, ax
        shr ecx, 1
        mov eax, esi
        rep stosd
        adc ecx, ecx
        rep stosw
        pop edi
        mov eax, edx
        pop esi
        ret 
        public_6bdfb5d : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6bdfb30)
    }
}

#undef public_6bdfb5d
