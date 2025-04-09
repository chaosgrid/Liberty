#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f300);
CLANG_FORWARD_PROC_SYMBOL(public_57fc60);

#define public_57f313 _public_57f313
#define public_57f32f _public_57f32f

PROC_DECLARE(0x57f300, internal_57f300, public_57f300);
extern "C" NAKED register_t __cdecl internal_57f300()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_57f32f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_57f313 : nop
        push esi
        push edi
        call public_57fc60
        add esi, 0xC
        add esp, 8
        add edi, 0xC
        cmp esi, ebx
        jne public_57f313
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_57f32f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x57f300)
    }
}

#undef public_57f313
#undef public_57f32f
