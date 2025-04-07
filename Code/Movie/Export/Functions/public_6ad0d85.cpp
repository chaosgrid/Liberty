#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0d85);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5390);

#define public_6ad0db6 _public_6ad0db6
#define public_6ad0dc0 _public_6ad0dc0
#define public_6ad0dcf _public_6ad0dcf
#define public_6ad0dd8 _public_6ad0dd8
#define public_6ad0ddc _public_6ad0ddc
#define public_6ad0ddf _public_6ad0ddf

PROC_DECLARE(0x6ad0d85, internal_6ad0d85, public_6ad0d85);
extern "C" NAKED register_t __cdecl internal_6ad0d85()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6ad0ddc
        cmp byte ptr ds : [eax+8], 0
        lea edx, ds:[eax+8]
        je public_6ad0ddc
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6ad0db6
        add ecx, 8
        push ecx
        push edx
        call public_6ad5390
        pop ecx
        test eax, eax
        pop ecx
        jne public_6ad0dd8
        public_6ad0db6 : nop
        test byte ptr ds : [esi], 2
        je public_6ad0dc0
        test byte ptr ds : [edi], 8
        je public_6ad0dd8
        public_6ad0dc0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        test al, 1
        je public_6ad0dcf
        test byte ptr ds : [edi], 1
        je public_6ad0dd8
        public_6ad0dcf : nop
        test al, 2
        je public_6ad0ddc
        test byte ptr ds : [edi], 2
        jne public_6ad0ddc
        public_6ad0dd8 : nop
        xor eax, eax
        jmp public_6ad0ddf
        public_6ad0ddc : nop
        push 1
        pop eax
        public_6ad0ddf : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad0d85)
    }
}

#undef public_6ad0db6
#undef public_6ad0dc0
#undef public_6ad0dcf
#undef public_6ad0dd8
#undef public_6ad0ddc
#undef public_6ad0ddf
