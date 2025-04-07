#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26530);

#define public_6c26559 _public_6c26559
#define public_6c26583 _public_6c26583
#define public_6c265ad _public_6c265ad
#define public_6c265ba _public_6c265ba
#define public_6c265dd _public_6c265dd

PROC_DECLARE(0x6c26530, internal_6c26530, public_6c26530);
extern "C" NAKED register_t __cdecl internal_6c26530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, offset public_6c37370
        mov esi, eax
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        jne public_6c26559
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c26559 : nop
        mov edi, offset public_6c37360
        mov esi, eax
        mov ecx, 0x10
        xor edx, edx
        repe cmpsb
        jne public_6c26583
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c265ad
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c26583 : nop
        mov edi, offset public_6c37348
        mov esi, eax
        mov ecx, 0x15
        xor edx, edx
        repe cmpsb
        jne public_6c265ba
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c265ad
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 8
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c265ad : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        pop edi
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 0xC
        public_6c265ba : nop
        mov edi, offset public_6c37334
        mov esi, eax
        mov ecx, 0x12
        xor edx, edx
        repe cmpsb
        jne public_6c265dd
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c265dd : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c26530)
    }
}

#undef public_6c26559
#undef public_6c26583
#undef public_6c265ad
#undef public_6c265ba
#undef public_6c265dd
