#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449160);

#define public_449171 _public_449171
#define public_449181 _public_449181
#define public_449191 _public_449191
#define public_449199 _public_449199

PROC_DECLARE(0x449160, internal_449160, public_449160);
extern "C" NAKED register_t __cdecl internal_449160()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_449199
        push edi
        xor edi, edi
        public_449171 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_449181
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], edi
        public_449181 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        je public_449191
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xC], edi
        public_449191 : nop
        add esi, 0x10
        cmp esi, ebx
        jne public_449171
        pop edi
        public_449199 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x449160)
    }
}

#undef public_449171
#undef public_449181
#undef public_449191
#undef public_449199
