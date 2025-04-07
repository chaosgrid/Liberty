#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad26ac);

#define public_6ad26b4 _public_6ad26b4
#define public_6ad26c8 _public_6ad26c8
#define public_6ad26d5 _public_6ad26d5
#define public_6ad26e6 _public_6ad26e6
#define public_6ad26f1 _public_6ad26f1

PROC_DECLARE(0x6ad26ac, internal_6ad26ac, public_6ad26ac);
extern "C" NAKED register_t __cdecl internal_6ad26ac()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, offset public_6ae2480
        public_6ad26b4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ad26f1
        mov edi, eax
        add eax, 0x480
        cmp edi, eax
        jae public_6ad26e6
        lea ebx, ds:[edi+0xC]
        public_6ad26c8 : nop
        cmp dword ptr ds : [ebx-4], 0
        je public_6ad26d5
        push ebx
        call dword ptr ds : [public_6ada0f8]
        public_6ad26d5 : nop
        mov eax, dword ptr ds : [esi]
        add edi, 0x24
        add eax, 0x480
        add ebx, 0x24
        cmp edi, eax
        jb public_6ad26c8
        public_6ad26e6 : nop
        push dword ptr ds : [esi]
        call public_6ad07b3
        and dword ptr ds : [esi], 0
        pop ecx
        public_6ad26f1 : nop
        add esi, 4
        cmp esi, offset public_6ae2580
        jl public_6ad26b4
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad26ac)
    }
}

#undef public_6ad26b4
#undef public_6ad26c8
#undef public_6ad26d5
#undef public_6ad26e6
#undef public_6ad26f1
