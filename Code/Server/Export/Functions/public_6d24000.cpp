#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24000);

#define public_6d24011 _public_6d24011

PROC_DECLARE(0x6d24000, internal_6d24000, public_6d24000);
extern "C" NAKED register_t __cdecl internal_6d24000()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov edx, eax
        sub esi, eax
        mov edi, 8
        public_6d24011 : nop
        mov ecx, dword ptr ds : [esi+edx]
        or dword ptr ds : [edx], ecx
        add edx, 4
        dec edi
        jne public_6d24011
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24000)
    }
}

#undef public_6d24011
