#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa6722 _public_6fa6722
#define public_6fa6730 _public_6fa6730

PROC_DECLARE(0x6fa6710, internal_6fa6710, public_6fa6710);
extern "C" NAKED register_t __cdecl internal_6fa6710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6fd3d94]
        push edi
        mov edi, dword ptr ds : [public_6fd3d98]
        cmp esi, edi
        je public_6fa6730
        public_6fa6722 : nop
        mov ecx, esi
        call public_6fa6d20
        add esi, 0x1C
        cmp esi, edi
        jne public_6fa6722
        public_6fa6730 : nop
        mov eax, dword ptr ds : [public_6fd3d94]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd3d94], eax
        mov dword ptr ds : [public_6fd3d98], eax
        mov dword ptr ds : [public_6fd3d9c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6fa6710)
    }
}

#undef public_6fa6722
#undef public_6fa6730
