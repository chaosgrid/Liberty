#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);

#define public_6f38a63 _public_6f38a63
#define public_6f38a6b _public_6f38a6b
#define public_6f38a72 _public_6f38a72

PROC_DECLARE(0x6f38a50, internal_6f38a50, public_6f38a50);
extern "C" NAKED register_t __cdecl internal_6f38a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f38a72
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6f38a63 : nop
        test eax, eax
        je public_6f38a6b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6f38a6b : nop
        add eax, 4
        dec ecx
        jne public_6f38a63
        pop esi
        public_6f38a72 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f38a50)
    }
}

#undef public_6f38a63
#undef public_6f38a6b
#undef public_6f38a72
