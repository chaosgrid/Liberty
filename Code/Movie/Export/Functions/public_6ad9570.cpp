#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad873e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8780);
CLANG_FORWARD_PROC_SYMBOL(public_6ad87df);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9570);

#define public_6ad95cb _public_6ad95cb
#define public_6ad95cd _public_6ad95cd
#define public_6ad95d8 _public_6ad95d8
#define public_6ad95e6 _public_6ad95e6
#define public_6ad95f1 _public_6ad95f1
#define public_6ad95ff _public_6ad95ff

PROC_DECLARE(0x6ad9570, internal_6ad9570, public_6ad9570);
extern "C" NAKED register_t __cdecl internal_6ad9570()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, dword ptr ds : [public_6ae2580]
        push esi
        push edi
        jae public_6ad95f1
        mov eax, ebx
        sar eax, 5
        lea edi, ds : [eax*4+public_6ae2480]
        mov eax, ebx
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [edi]
        shl esi, 2
        test byte ptr ds : [eax+esi+4], 1
        je public_6ad95f1
        push ebx
        call public_6ad8780
        mov eax, dword ptr ds : [edi]
        pop ecx
        test byte ptr ds : [eax+esi+4], 1
        je public_6ad95d8
        push ebx
        call public_6ad873e
        pop ecx
        push eax
        call dword ptr ds : [public_6ada080]
        test eax, eax
        jne public_6ad95cb
        call dword ptr ds : [public_6ada140]
        mov esi, eax
        jmp public_6ad95cd
        public_6ad95cb : nop
        xor esi, esi
        public_6ad95cd : nop
        test esi, esi
        je public_6ad95e6
        call public_6ad24e7
        mov dword ptr ds : [eax], esi
        public_6ad95d8 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        or esi, 0xFFFFFFFF
        public_6ad95e6 : nop
        push ebx
        call public_6ad87df
        pop ecx
        mov eax, esi
        jmp public_6ad95ff
        public_6ad95f1 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        or eax, 0xFFFFFFFF
        public_6ad95ff : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad9570)
    }
}

#undef public_6ad95cb
#undef public_6ad95cd
#undef public_6ad95d8
#undef public_6ad95e6
#undef public_6ad95f1
#undef public_6ad95ff
