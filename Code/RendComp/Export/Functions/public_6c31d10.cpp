#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31d10);

#define public_6c31d39 _public_6c31d39
#define public_6c31d67 _public_6c31d67
#define public_6c31d91 _public_6c31d91
#define public_6c31dbb _public_6c31dbb
#define public_6c31de5 _public_6c31de5
#define public_6c31df2 _public_6c31df2

PROC_DECLARE(0x6c31d10, internal_6c31d10, public_6c31d10);
extern "C" NAKED register_t __cdecl internal_6c31d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, offset public_6c37614
        mov esi, eax
        mov ecx, 0x13
        xor edx, edx
        repe cmpsb
        jne public_6c31d39
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c31d39 : nop
        mov edi, offset public_6c37370
        mov esi, eax
        mov ecx, 0xB
        xor edx, edx
        repe cmpsb
        jne public_6c31d67
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c31de5
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c31d67 : nop
        mov edi, offset public_6c37360
        mov esi, eax
        mov ecx, 0x10
        xor edx, edx
        repe cmpsb
        jne public_6c31d91
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c31de5
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 8
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c31d91 : nop
        mov edi, offset public_6c37348
        mov esi, eax
        mov ecx, 0x15
        xor edx, edx
        repe cmpsb
        jne public_6c31dbb
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c31de5
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0xC
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c31dbb : nop
        mov edi, offset public_6c37334
        mov esi, eax
        mov ecx, 0x12
        xor edx, edx
        repe cmpsb
        jne public_6c31df2
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6c31de5
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6c31de5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        pop edi
        mov dword ptr ds : [ecx], eax
        pop esi
        ret 0xC
        public_6c31df2 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c31d10)
    }
}

#undef public_6c31d39
#undef public_6c31d67
#undef public_6c31d91
#undef public_6c31dbb
#undef public_6c31de5
#undef public_6c31df2
