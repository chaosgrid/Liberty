#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b5e0);

#define public_43124b _public_43124b

PROC_DECLARE(0x431220, internal_431220, public_431220);
extern "C" NAKED register_t __cdecl internal_431220()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        push edi
        jne public_43124b
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        push edi
        push esi
        call public_42b5e0
        add esp, 8
        test edi, edi
        mov dword ptr ds : [esi+8], eax
        je public_43124b
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        public_43124b : nop
        mov ecx, dword ptr ds : [esi+8]
        inc word ptr ds : [esi+0x12]
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x431220)
    }
}

#undef public_43124b
