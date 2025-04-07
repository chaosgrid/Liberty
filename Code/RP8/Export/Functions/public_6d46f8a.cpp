#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f8a);

#define public_6d46ff8 _public_6d46ff8
#define public_6d46ffa _public_6d46ffa

PROC_DECLARE(0x6d46f8a, internal_6d46f8a, public_6d46f8a);
extern "C" NAKED register_t __cdecl internal_6d46f8a()
{
    __asm
    {
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6d46ff8
        cmp byte ptr ds : [edx+0x108], 0
        jne public_6d46ff8
        cmp dword ptr ds : [edx+0x24], 3
        jne public_6d46ff8
        cmp dword ptr ds : [edx+0x20], 3
        jne public_6d46ff8
        cmp dword ptr ds : [edx+0x28], 2
        jne public_6d46ff8
        cmp dword ptr ds : [edx+0x64], 3
        jne public_6d46ff8
        mov ecx, dword ptr ds : [edx+0xC4]
        cmp dword ptr ds : [ecx+8], 2
        jne public_6d46ff8
        xor eax, eax
        inc eax
        cmp dword ptr ds : [ecx+0x5C], eax
        jne public_6d46ff8
        cmp dword ptr ds : [ecx+0xB0], eax
        jne public_6d46ff8
        cmp dword ptr ds : [ecx+0xC], 2
        jg public_6d46ff8
        cmp dword ptr ds : [ecx+0x60], eax
        jne public_6d46ff8
        cmp dword ptr ds : [ecx+0xB4], eax
        jne public_6d46ff8
        mov edx, dword ptr ds : [edx+0x114]
        cmp dword ptr ds : [ecx+0x24], edx
        jne public_6d46ff8
        cmp dword ptr ds : [ecx+0x78], edx
        jne public_6d46ff8
        cmp dword ptr ds : [ecx+0xCC], edx
        je public_6d46ffa
        public_6d46ff8 : nop
        xor al, al
        public_6d46ffa : nop
        ret 
        UNREACHABLE_TRAP(0x6d46f8a)
    }
}

#undef public_6d46ff8
#undef public_6d46ffa
