#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d187cb _public_6d187cb

PROC_DECLARE(0x6d18790, internal_6d18790, public_6d18790);
extern "C" NAKED register_t __cdecl internal_6d18790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, 0xFFFFFFFC
        mov dword ptr ds : [esi], 0
        je public_6d187cb
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d187cb
        mov ecx, eax
        call public_6d12df0
        mov dword ptr ds : [esi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d187cb : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18790)
    }
}

#undef public_6d187cb
