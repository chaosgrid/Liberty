#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5788e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5788f2 _public_5788f2
#define public_578911 _public_578911

PROC_DECLARE(0x5788e0, internal_5788e0, public_5788e0);
extern "C" NAKED register_t __cdecl internal_5788e0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_578911
        public_5788f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_5788e0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_5788f2
        public_578911 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5788e0)
    }
}

#undef public_5788f2
#undef public_578911
