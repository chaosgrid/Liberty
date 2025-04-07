#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c230);

#define public_6c2c259 _public_6c2c259
#define public_6c2c283 _public_6c2c283
#define public_6c2c290 _public_6c2c290

PROC_DECLARE(0x6c2c230, internal_6c2c230, public_6c2c230);
extern "C" NAKED register_t __cdecl internal_6c2c230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, offset public_6c374f8
        mov esi, eax
        mov ecx, 0x11
        xor edx, edx
        repe cmpsb
        jne public_6c2c259
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c2c259 : nop
        mov edi, offset public_6c37360
        mov esi, eax
        mov ecx, 0x10
        xor edx, edx
        repe cmpsb
        jne public_6c2c290
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c2c283
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c2c283 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        pop edi
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 0xC
        public_6c2c290 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c2c230)
    }
}

#undef public_6c2c259
#undef public_6c2c283
#undef public_6c2c290
