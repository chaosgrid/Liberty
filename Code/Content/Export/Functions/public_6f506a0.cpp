#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f502f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f506a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f53f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f55200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f506d1 _public_6f506d1
#define public_6f50703 _public_6f50703
#define public_6f50725 _public_6f50725
#define public_6f50730 _public_6f50730
#define public_6f50753 _public_6f50753

PROC_DECLARE(0x6f506a0, internal_6f506a0, public_6f506a0);
extern "C" NAKED register_t __cdecl internal_6f506a0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fd0cbc]
        mov edx, dword ptr ds : [public_6fd0cc8]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f50725
        mov edx, eax
        cmp eax, edx
        jne public_6f50725
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fd0cc0]
        cmp edi, eax
        mov esi, edi
        je public_6f50703
        public_6f506d1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd0cb8
        call public_6f53f90
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f502f0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd0cc0]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f506d1
        mov ecx, dword ptr ds : [public_6fd0cbc]
        public_6f50703 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fd0cbc]
        mov dword ptr ds : [public_6fd0cc8], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd0cbc]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6f50725 : nop
        cmp eax, ecx
        je public_6f50753
        lea esp, ss:[esp]
        public_6f50730 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6f55200
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0cb8
        call public_6f53b40
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6f50730
        public_6f50753 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f506a0)
    }
}

#undef public_6f506d1
#undef public_6f50703
#undef public_6f50725
#undef public_6f50730
#undef public_6f50753
