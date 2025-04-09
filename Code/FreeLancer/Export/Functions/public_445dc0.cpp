#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445dc0);

#define public_445dd0 _public_445dd0
#define public_445ddb _public_445ddb
#define public_445de2 _public_445de2

PROC_DECLARE(0x445dc0, internal_445dc0, public_445dc0);
extern "C" NAKED register_t __cdecl internal_445dc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_445de2
        mov edi, edi
        public_445dd0 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_445ddb
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_445ddb : nop
        add esi, 8
        cmp esi, edi
        jne public_445dd0
        public_445de2 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x445dc0)
    }
}

#undef public_445dd0
#undef public_445ddb
#undef public_445de2
