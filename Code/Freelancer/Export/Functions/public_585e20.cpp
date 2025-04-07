#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457f00);
CLANG_FORWARD_PROC_SYMBOL(public_585e20);

#define public_585e41 _public_585e41
#define public_585e57 _public_585e57
#define public_585e65 _public_585e65
#define public_585e6d _public_585e6d

PROC_DECLARE(0x585e20, internal_585e20, public_585e20);
extern "C" NAKED register_t __cdecl internal_585e20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0xFFFFFFFF
        push esi
        push edi
        mov edi, ecx
        je public_585e65
        mov ecx, dword ptr ds : [edi+0x4D4]
        test ecx, ecx
        je public_585e65
        mov eax, dword ptr ds : [ecx+4]
        xor esi, esi
        test eax, eax
        jle public_585e65
        public_585e41 : nop
        push esi
        call public_457f00
        cmp eax, ebx
        jne public_585e57
        mov eax, dword ptr ds : [edi+0x4D4]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jne public_585e6d
        public_585e57 : nop
        mov ecx, dword ptr ds : [edi+0x4D4]
        mov eax, dword ptr ds : [ecx+4]
        inc esi
        cmp esi, eax
        jl public_585e41
        public_585e65 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_585e6d : nop
        push esi
        call dword ptr ds : [public_5c620c]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x585e20)
    }
}

#undef public_585e41
#undef public_585e57
#undef public_585e65
#undef public_585e6d
