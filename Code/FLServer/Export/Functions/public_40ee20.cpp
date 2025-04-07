#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ee20);

#define public_40ee4d _public_40ee4d

PROC_DECLARE(0x40ee20, internal_40ee20, public_40ee20);
extern "C" NAKED register_t __cdecl internal_40ee20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jbe public_40ee4d
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
        public_40ee4d : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x40ee20)
    }
}

#undef public_40ee4d
