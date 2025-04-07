#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6cf97e5 _public_6cf97e5
#define public_6cf97ed _public_6cf97ed
#define public_6cf97f3 _public_6cf97f3
#define public_6cf97f5 _public_6cf97f5

PROC_DECLARE(0x6cf9750, internal_6cf9750, public_6cf9750);
extern "C" NAKED register_t __cdecl internal_6cf9750()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 0x3FFFFFFF
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cf97f5
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf97f3
        add eax, 0xC
        test eax, eax
        je public_6cf97ed
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf97ed
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6cf97ed
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d644cc]
        mov esi, eax
        test esi, esi
        je public_6cf97f3
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6cf97e5
        mov ecx, esi
        call dword ptr ds : [public_6d644c8]
        call public_6d60150
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov ecx, esi
        call dword ptr ds : [public_6d644c4]
        call public_6d60150
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [edx], eax
        xor eax, eax
        pop esi
        ret 
        public_6cf97e5 : nop
        pop edi
        mov eax, 0xFFFFFFFD
        pop esi
        ret 
        public_6cf97ed : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6cf97f3 : nop
        mov eax, edi
        public_6cf97f5 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9750)
    }
}

#undef public_6cf97e5
#undef public_6cf97ed
#undef public_6cf97f3
#undef public_6cf97f5
