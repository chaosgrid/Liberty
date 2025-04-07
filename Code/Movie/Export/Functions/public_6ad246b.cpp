#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad246b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);

#define public_6ad247e _public_6ad247e
#define public_6ad24a4 _public_6ad24a4
#define public_6ad24b4 _public_6ad24b4
#define public_6ad24d1 _public_6ad24d1

PROC_DECLARE(0x6ad246b, internal_6ad246b, public_6ad246b);
extern "C" NAKED register_t __cdecl internal_6ad246b()
{
    __asm
    {
        push esi
        call public_6ad24e7
        mov ecx, dword ptr ss : [esp+8]
        xor esi, esi
        mov dword ptr ds : [eax], ecx
        mov eax, offset public_6add960
        public_6ad247e : nop
        cmp ecx, dword ptr ds : [eax]
        je public_6ad24a4
        add eax, 8
        inc esi
        cmp eax, offset public_6addac8
        jl public_6ad247e
        cmp ecx, 0x13
        jb public_6ad24b4
        cmp ecx, 0x24
        ja public_6ad24b4
        call public_6ad24de
        mov dword ptr ds : [eax], 0xD
        pop esi
        ret 
        public_6ad24a4 : nop
        call public_6ad24de
        mov ecx, dword ptr ds : [esi*8+public_6add964]
        pop esi
        mov dword ptr ds : [eax], ecx
        ret 
        public_6ad24b4 : nop
        cmp ecx, 0xBC
        jb public_6ad24d1
        cmp ecx, 0xCA
        ja public_6ad24d1
        call public_6ad24de
        mov dword ptr ds : [eax], 8
        pop esi
        ret 
        public_6ad24d1 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 0x16
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad246b)
    }
}

#undef public_6ad247e
#undef public_6ad24a4
#undef public_6ad24b4
#undef public_6ad24d1
