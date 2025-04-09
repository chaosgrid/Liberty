#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);

#define public_57c2e4 _public_57c2e4
#define public_57c2f7 _public_57c2f7
#define public_57c304 _public_57c304
#define public_57c31b _public_57c31b
#define public_57c324 _public_57c324

PROC_DECLARE(0x57c2c0, internal_57c2c0, public_57c2c0);
extern "C" NAKED register_t __cdecl internal_57c2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C8]
        test eax, eax
        je public_57c2e4
        mov edx, dword ptr ds : [ecx+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_57c2e4 : nop
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        jle public_57c324
        push esi
        dec edx
        cmp eax, edx
        push edi
        mov esi, eax
        jle public_57c2f7
        mov esi, edx
        public_57c2f7 : nop
        mov edi, dword ptr ss : [esp+0xC]
        xor eax, eax
        test esi, esi
        jle public_57c31b
        xor edx, edx
        push ebx
        public_57c304 : nop
        mov ebx, dword ptr ds : [ecx+0x4C8]
        mov bx, word ptr ds : [edx+ebx]
        mov word ptr ds : [edi+eax*2], bx
        inc eax
        add edx, 0xC
        cmp eax, esi
        jl public_57c304
        pop ebx
        public_57c31b : nop
        mov word ptr ds : [edi+eax*2], 0
        pop edi
        inc eax
        pop esi
        public_57c324 : nop
        ret 8
        UNREACHABLE_TRAP(0x57c2c0)
    }
}

#undef public_57c2e4
#undef public_57c2f7
#undef public_57c304
#undef public_57c31b
#undef public_57c324
