#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da3180);

#define public_6da3192 _public_6da3192
#define public_6da31ad _public_6da31ad
#define public_6da31b1 _public_6da31b1
#define public_6da31b6 _public_6da31b6

PROC_DECLARE(0x6da3180, internal_6da3180, public_6da3180);
extern "C" NAKED register_t __cdecl internal_6da3180()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6da31b6
        public_6da3192 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        je public_6da31ad
        mov esi, dword ptr ds : [esi+8]
        jmp public_6da31b1
        public_6da31ad : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6da31b1 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6da3192
        public_6da31b6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6da3180)
    }
}

#undef public_6da3192
#undef public_6da31ad
#undef public_6da31b1
#undef public_6da31b6
