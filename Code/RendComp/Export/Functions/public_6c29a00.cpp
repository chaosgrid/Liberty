#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c29a00);

#define public_6c29a29 _public_6c29a29
#define public_6c29a53 _public_6c29a53
#define public_6c29a76 _public_6c29a76
#define public_6c29aa0 _public_6c29aa0
#define public_6c29aad _public_6c29aad

PROC_DECLARE(0x6c29a00, internal_6c29a00, public_6c29a00);
extern "C" NAKED register_t __cdecl internal_6c29a00()
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
        jne public_6c29a29
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c29a29 : nop
        mov edi, offset public_6c37360
        mov esi, eax
        mov ecx, 0x10
        xor edx, edx
        repe cmpsb
        jne public_6c29a53
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c29aa0
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c29a53 : nop
        mov edi, offset public_6c37334
        mov esi, eax
        mov ecx, 0x12
        xor edx, edx
        repe cmpsb
        jne public_6c29a76
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c29a76 : nop
        mov edi, offset public_6c3737c
        mov esi, eax
        mov ecx, 0x12
        xor edx, edx
        repe cmpsb
        jne public_6c29aad
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c29aa0
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 8
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c29aa0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        pop edi
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 0xC
        public_6c29aad : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c29a00)
    }
}

#undef public_6c29a29
#undef public_6c29a53
#undef public_6c29a76
#undef public_6c29aa0
#undef public_6c29aad
