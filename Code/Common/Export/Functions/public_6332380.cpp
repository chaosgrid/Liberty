#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332380);

#define public_6332393 _public_6332393
#define public_63323aa _public_63323aa

PROC_DECLARE(0x6332380, internal_6332380, public_6332380);
extern "C" NAKED register_t __cdecl internal_6332380()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_63323aa
        push esi
        push edi
        public_6332393 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x14
        mov ecx, 5
        add eax, 0x14
        cmp edx, ebx
        rep movsd
        jne public_6332393
        pop edi
        pop esi
        public_63323aa : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6332380)
    }
}

#undef public_6332393
#undef public_63323aa
