#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477190);

#define public_4771a4 _public_4771a4
#define public_4771b9 _public_4771b9

PROC_DECLARE(0x477190, internal_477190, public_477190);
extern "C" NAKED register_t __cdecl internal_477190()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_4771b9
        push ebx
        public_4771a4 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        add edx, 8
        add esi, 8
        cmp edx, edi
        jne public_4771a4
        pop ebx
        public_4771b9 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x477190)
    }
}

#undef public_4771a4
#undef public_4771b9
