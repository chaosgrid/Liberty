#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93bf0);

#define public_6f93c00 _public_6f93c00
#define public_6f93c0f _public_6f93c0f

PROC_DECLARE(0x6f93bf0, internal_6f93bf0, public_6f93bf0);
extern "C" NAKED register_t __cdecl internal_6f93bf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f93c0f
        mov edi, edi
        public_6f93c00 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0x68
        cmp esi, edi
        jne public_6f93c00
        public_6f93c0f : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f93bf0)
    }
}

#undef public_6f93c00
#undef public_6f93c0f
