#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf3250);

#define public_6cf3263 _public_6cf3263
#define public_6cf3272 _public_6cf3272
#define public_6cf327e _public_6cf327e

PROC_DECLARE(0x6cf3250, internal_6cf3250, public_6cf3250);
extern "C" NAKED register_t __cdecl internal_6cf3250()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6cf327e
        push esi
        push edi
        public_6cf3263 : nop
        test eax, eax
        je public_6cf3272
        mov ecx, 0x1B
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6cf3272 : nop
        add edx, 0x6C
        add eax, 0x6C
        cmp edx, ebx
        jne public_6cf3263
        pop edi
        pop esi
        public_6cf327e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6cf3250)
    }
}

#undef public_6cf3263
#undef public_6cf3272
#undef public_6cf327e
