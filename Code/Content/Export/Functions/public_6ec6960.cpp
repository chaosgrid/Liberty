#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec6975 _public_6ec6975
#define public_6ec6987 _public_6ec6987

PROC_DECLARE(0x6ec6960, internal_6ec6960, public_6ec6960);
extern "C" NAKED register_t __cdecl internal_6ec6960()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0xF0]
        mov esi, dword ptr ds : [edi+0xEC]
        cmp esi, ebx
        je public_6ec6987
        public_6ec6975 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0x88
        cmp esi, ebx
        jne public_6ec6975
        public_6ec6987 : nop
        mov ecx, dword ptr ds : [edi+0xEC]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+0xEC], 0
        mov dword ptr ds : [edi+0xF0], 0
        mov dword ptr ds : [edi+0xF4], 0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec6960)
    }
}

#undef public_6ec6975
#undef public_6ec6987
