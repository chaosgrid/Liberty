#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed04b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ab0);

#define public_6ed04d0 _public_6ed04d0
#define public_6ed04df _public_6ed04df
#define public_6ed04f9 _public_6ed04f9
#define public_6ed050a _public_6ed050a

PROC_DECLARE(0x6ed04b0, internal_6ed04b0, public_6ed04b0);
extern "C" NAKED register_t __cdecl internal_6ed04b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, offset public_6ed5838
        je public_6ed050a
        push esi
        call public_6ed0ab0
        add esp, 4
        test eax, eax
        je public_6ed04df
        lea ebx, ds:[ebx]
        public_6ed04d0 : nop
        push eax
        mov esi, eax
        call public_6ed0ab0
        add esp, 4
        test eax, eax
        jne public_6ed04d0
        public_6ed04df : nop
        cmp byte ptr ds : [esi], 7
        jne public_6ed04f9
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        sub eax, ecx
        mov ecx, eax
        sar ecx, 8
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+2], al
        pop esi
        ret 
        public_6ed04f9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        sub eax, esi
        mov ecx, eax
        sar ecx, 8
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+2], al
        public_6ed050a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed04b0)
    }
}

#undef public_6ed04d0
#undef public_6ed04df
#undef public_6ed04f9
#undef public_6ed050a
