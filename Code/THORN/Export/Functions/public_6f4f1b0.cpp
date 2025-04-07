#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f1b0);

#define public_6f4f1c7 _public_6f4f1c7
#define public_6f4f1e2 _public_6f4f1e2

PROC_DECLARE(0x6f4f1b0, internal_6f4f1b0, public_6f4f1b0);
extern "C" NAKED register_t __cdecl internal_6f4f1b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_6f4f1e2
        push ebx
        push esi
        lea esi, ds:[ecx+1]
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        public_6f4f1c7 : nop
        xor ebx, ebx
        mov bl, byte ptr ds : [ecx]
        mov edx, eax
        shl edx, 5
        mov edi, eax
        shr edi, 2
        add edx, edi
        add edx, ebx
        xor eax, edx
        inc ecx
        dec esi
        jne public_6f4f1c7
        pop edi
        pop esi
        pop ebx
        public_6f4f1e2 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4f1b0)
    }
}

#undef public_6f4f1c7
#undef public_6f4f1e2
