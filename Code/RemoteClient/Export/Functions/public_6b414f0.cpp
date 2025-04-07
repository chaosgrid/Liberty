#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b414f0);

#define public_6b4151d _public_6b4151d

PROC_DECLARE(0x6b414f0, internal_6b414f0, public_6b414f0);
extern "C" NAKED register_t __cdecl internal_6b414f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jbe public_6b4151d
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
        public_6b4151d : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6b414f0)
    }
}

#undef public_6b4151d
