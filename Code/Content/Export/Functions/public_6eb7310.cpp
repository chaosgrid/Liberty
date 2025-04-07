#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);

#define public_6eb7323 _public_6eb7323
#define public_6eb7341 _public_6eb7341
#define public_6eb734e _public_6eb734e

PROC_DECLARE(0x6eb7310, internal_6eb7310, public_6eb7310);
extern "C" NAKED register_t __cdecl internal_6eb7310()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6eb734e
        push ebx
        push esi
        push edi
        public_6eb7323 : nop
        test eax, eax
        je public_6eb7341
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_6eb7341 : nop
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        jne public_6eb7323
        pop edi
        pop esi
        pop ebx
        public_6eb734e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6eb7310)
    }
}

#undef public_6eb7323
#undef public_6eb7341
#undef public_6eb734e
