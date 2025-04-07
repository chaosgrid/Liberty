#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf3290);

#define public_6cf32a5 _public_6cf32a5
#define public_6cf32b4 _public_6cf32b4
#define public_6cf32bd _public_6cf32bd

PROC_DECLARE(0x6cf3290, internal_6cf3290, public_6cf3290);
extern "C" NAKED register_t __cdecl internal_6cf3290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6cf32bd
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6cf32a5 : nop
        test eax, eax
        je public_6cf32b4
        mov ecx, 0x1B
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6cf32b4 : nop
        add eax, 0x6C
        dec edx
        jne public_6cf32a5
        pop edi
        pop esi
        pop ebx
        public_6cf32bd : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6cf3290)
    }
}

#undef public_6cf32a5
#undef public_6cf32b4
#undef public_6cf32bd
