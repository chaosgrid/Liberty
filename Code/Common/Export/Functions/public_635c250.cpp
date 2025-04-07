#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c250);

#define public_635c26f _public_635c26f
#define public_635c272 _public_635c272
#define public_635c29e _public_635c29e
#define public_635c2a1 _public_635c2a1
#define public_635c2b2 _public_635c2b2

PROC_DECLARE(0x635c250, internal_635c250, public_635c250);
extern "C" NAKED register_t __cdecl internal_635c250()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi+0xC]
        test edx, edx
        jl public_635c26f
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x2A]
        cmp edx, eax
        jge public_635c26f
        mov eax, dword ptr ds : [ecx+0x2C]
        cmp dword ptr ds : [eax+edx*4], edi
        je public_635c272
        public_635c26f : nop
        mov edx, dword ptr ds : [edi+0x10]
        public_635c272 : nop
        dec word ptr ds : [ecx+0x2A]
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x2A]
        and eax, 0xFFFF
        cmp eax, edx
        jle public_635c2a1
        mov esi, dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [esi+eax*4]
        mov dword ptr ds : [esi+edx*4], eax
        xor esi, esi
        mov si, word ptr ds : [ecx+0x2A]
        cmp dword ptr ds : [eax+0xC], esi
        jne public_635c29e
        mov dword ptr ds : [eax+0xC], edx
        jmp public_635c2a1
        public_635c29e : nop
        mov dword ptr ds : [eax+0x10], edx
        public_635c2a1 : nop
        cmp dword ptr ds : [edi+0xC], edx
        jne public_635c2b2
        mov dword ptr ds : [edi+0xC], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        public_635c2b2 : nop
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635c250)
    }
}

#undef public_635c26f
#undef public_635c272
#undef public_635c29e
#undef public_635c2a1
#undef public_635c2b2
