#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632bd10);

#define public_632bd28 _public_632bd28
#define public_632bd39 _public_632bd39
#define public_632bd4a _public_632bd4a

PROC_DECLARE(0x632bd10, internal_632bd10, public_632bd10);
extern "C" NAKED register_t __cdecl internal_632bd10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_639926c]
        add esp, 4
        test eax, eax
        je public_632bd28
        lea eax, ds:[esi-0x30]
        pop esi
        ret 
        public_632bd28 : nop
        cmp si, 0x41
        jb public_632bd39
        cmp si, 0x46
        ja public_632bd39
        lea eax, ds:[esi-0x37]
        pop esi
        ret 
        public_632bd39 : nop
        cmp si, 0x61
        jb public_632bd4a
        cmp si, 0x66
        ja public_632bd4a
        lea eax, ds:[esi-0x57]
        pop esi
        ret 
        public_632bd4a : nop
        xor ax, ax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632bd10)
    }
}

#undef public_632bd28
#undef public_632bd39
#undef public_632bd4a
