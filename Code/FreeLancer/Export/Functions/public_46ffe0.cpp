#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);

#define public_46fff2 _public_46fff2
#define public_46ffff _public_46ffff
#define public_470011 _public_470011
#define public_470023 _public_470023
#define public_470032 _public_470032

PROC_DECLARE(0x46ffe0, internal_46ffe0, public_46ffe0);
extern "C" NAKED register_t __cdecl internal_46ffe0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_46fff2
        xor al, al
        pop esi
        ret 4
        public_46fff2 : nop
        cmp dword ptr ss : [esp+8], 0xF
        je public_46ffff
        xor al, al
        pop esi
        ret 4
        public_46ffff : nop
        push edi
        lea edi, ds:[esi-0x32C]
        test edi, edi
        je public_470032
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_470023
        public_470011 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_470011
        public_470023 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_470032 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x46ffe0)
    }
}

#undef public_46fff2
#undef public_46ffff
#undef public_470011
#undef public_470023
#undef public_470032
