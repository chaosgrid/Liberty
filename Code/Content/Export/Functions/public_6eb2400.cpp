#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2400);

#define public_6eb2413 _public_6eb2413
#define public_6eb2422 _public_6eb2422
#define public_6eb242e _public_6eb242e

PROC_DECLARE(0x6eb2400, internal_6eb2400, public_6eb2400);
extern "C" NAKED register_t __cdecl internal_6eb2400()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6eb242e
        push esi
        push edi
        public_6eb2413 : nop
        test eax, eax
        je public_6eb2422
        mov ecx, 0xA
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6eb2422 : nop
        add edx, 0x28
        add eax, 0x28
        cmp edx, ebx
        jne public_6eb2413
        pop edi
        pop esi
        public_6eb242e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb2400)
    }
}

#undef public_6eb2413
#undef public_6eb2422
#undef public_6eb242e
