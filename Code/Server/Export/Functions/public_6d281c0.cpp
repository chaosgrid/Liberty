#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d281c0);

#define public_6d281ed _public_6d281ed

PROC_DECLARE(0x6d281c0, internal_6d281c0, public_6d281c0);
extern "C" NAKED register_t __cdecl internal_6d281c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jbe public_6d281ed
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
        public_6d281ed : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6d281c0)
    }
}

#undef public_6d281ed
