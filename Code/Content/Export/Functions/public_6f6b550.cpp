#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b550);

#define public_6f6b585 _public_6f6b585
#define public_6f6b58f _public_6f6b58f
#define public_6f6b595 _public_6f6b595
#define public_6f6b597 _public_6f6b597

PROC_DECLARE(0x6f6b550, internal_6f6b550, public_6f6b550);
extern "C" NAKED register_t __cdecl internal_6f6b550()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ebx+0x14C]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0x14C]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x14C]
        cmp eax, ecx
        jge public_6f6b585
        cmp ecx, edx
        jl public_6f6b595
        cmp eax, edx
        mov eax, esi
        jl public_6f6b597
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f6b585 : nop
        cmp eax, edx
        jge public_6f6b58f
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f6b58f : nop
        cmp ecx, edx
        mov eax, esi
        jl public_6f6b597
        public_6f6b595 : nop
        mov eax, ebx
        public_6f6b597 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6b550)
    }
}

#undef public_6f6b585
#undef public_6f6b58f
#undef public_6f6b595
#undef public_6f6b597
