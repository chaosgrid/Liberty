#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa520);
CLANG_FORWARD_PROC_SYMBOL(public_62b7ab0);

#define public_62b7a9d _public_62b7a9d

PROC_DECLARE(0x62b7a70, internal_62b7a70, public_62b7a70);
extern "C" NAKED register_t __cdecl internal_62b7a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push edi
        mov esi, ecx
        call public_62aa520
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, eax
        and ecx, 0xC40
        cmp eax, ecx
        jne public_62b7a9d
        push edi
        mov ecx, esi
        call public_62b7ab0
        public_62b7a9d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b7a70)
    }
}

#undef public_62b7a9d
