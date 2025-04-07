#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65db370);

#define public_65db378 _public_65db378
#define public_65db38c _public_65db38c
#define public_65db399 _public_65db399
#define public_65db3aa _public_65db3aa
#define public_65db3b5 _public_65db3b5

PROC_DECLARE(0x65db370, internal_65db370, public_65db370);
extern "C" NAKED register_t __cdecl internal_65db370()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, offset public_65e7940
        public_65db378 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65db3b5
        mov edi, eax
        add eax, 0x480
        cmp edi, eax
        jae public_65db3aa
        lea ebx, ds:[edi+0xC]
        public_65db38c : nop
        cmp dword ptr ds : [ebx-4], 0
        je public_65db399
        push ebx
        call dword ptr ds : [public_65e10a8]
        public_65db399 : nop
        mov eax, dword ptr ds : [esi]
        add edi, 0x24
        add eax, 0x480
        add ebx, 0x24
        cmp edi, eax
        jb public_65db38c
        public_65db3aa : nop
        push dword ptr ds : [esi]
        call public_65d7f23
        and dword ptr ds : [esi], 0
        pop ecx
        public_65db3b5 : nop
        add esi, 4
        cmp esi, offset public_65e7a40
        jl public_65db378
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65db370)
    }
}

#undef public_65db378
#undef public_65db38c
#undef public_65db399
#undef public_65db3aa
#undef public_65db3b5
