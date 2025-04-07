#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6cf9720 _public_6cf9720
#define public_6cf9722 _public_6cf9722
#define public_6cf9740 _public_6cf9740
#define public_6cf9742 _public_6cf9742

PROC_DECLARE(0x6cf96d0, internal_6cf96d0, public_6cf96d0);
extern "C" NAKED register_t __cdecl internal_6cf96d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf9742
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9740
        add eax, 0xC
        test eax, eax
        je public_6cf9720
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6cf9720
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6cf9722
        public_6cf9720 : nop
        xor ecx, ecx
        public_6cf9722 : nop
        mov esi, dword ptr ds : [ecx+0x88]
        call dword ptr ds : [public_6d644c0]
        fsubr dword ptr ds : [esi+0x100]
        call public_6d60150
        mov dword ptr ds : [edi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cf9740 : nop
        mov eax, esi
        public_6cf9742 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf96d0)
    }
}

#undef public_6cf9720
#undef public_6cf9722
#undef public_6cf9740
#undef public_6cf9742
