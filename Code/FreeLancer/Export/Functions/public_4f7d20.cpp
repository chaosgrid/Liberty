#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);

#define public_4f7d35 _public_4f7d35
#define public_4f7d37 _public_4f7d37
#define public_4f7d42 _public_4f7d42

PROC_DECLARE(0x4f7d20, internal_4f7d20, public_4f7d20);
extern "C" NAKED register_t __cdecl internal_4f7d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea ecx, ds:[ebx+0x44]
        je public_4f7d35
        add eax, 8
        jmp public_4f7d37
        public_4f7d35 : nop
        xor eax, eax
        public_4f7d37 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_4f7d42
        push eax
        call dword ptr ds : [public_5c62a8]
        public_4f7d42 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x40], eax
        lea edi, ds:[ebx+0x10]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x4C], 0
        mov dword ptr ds : [ebx+0x50], 0
        mov dword ptr ds : [ebx+0x54], 0
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4f7d20)
    }
}

#undef public_4f7d35
#undef public_4f7d37
#undef public_4f7d42
