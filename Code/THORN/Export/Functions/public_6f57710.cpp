#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57750);

#define public_6f5774a _public_6f5774a

PROC_DECLARE(0x6f57710, internal_6f57710, public_6f57710);
extern "C" NAKED register_t __cdecl internal_6f57710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        call public_6f57750
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+edi*8+8]
        mov ecx, eax
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        inc edx
        push edx
        push eax
        mov dword ptr ds : [esi+edi*8+0xC], ecx
        call public_6f57370
        add esp, 0x10
        test eax, eax
        jne public_6f5774a
        mov dword ptr ds : [esi+edi*8+0xC], 0xFFFFFFFF
        public_6f5774a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f57710)
    }
}

#undef public_6f5774a
