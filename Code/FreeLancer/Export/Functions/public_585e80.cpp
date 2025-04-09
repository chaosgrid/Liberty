#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457f00);
CLANG_FORWARD_PROC_SYMBOL(public_585e80);

#define public_585ea5 _public_585ea5
#define public_585ec8 _public_585ec8
#define public_585ee0 _public_585ee0

PROC_DECLARE(0x585e80, internal_585e80, public_585e80);
extern "C" NAKED register_t __cdecl internal_585e80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x4D4]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_585ee0
        mov edi, dword ptr ds : [eax]
        xor esi, esi
        test edi, edi
        je public_585ee0
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [public_5c6d24]
        public_585ea5 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6294]
        cmp esi, eax
        jge public_585ee0
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c620c]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_585ec8
        inc esi
        jmp public_585ea5
        public_585ec8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x4D4]
        push esi
        call public_457f00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_585ee0 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x585e80)
    }
}

#undef public_585ea5
#undef public_585ec8
#undef public_585ee0
