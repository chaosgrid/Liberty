#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30820);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c30837 _public_6c30837
#define public_6c30847 _public_6c30847

PROC_DECLARE(0x6c30820, internal_6c30820, public_6c30820);
extern "C" NAKED register_t __cdecl internal_6c30820()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6c30837
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6c30837 : nop
        test byte ptr ss : [esp+8], 1
        je public_6c30847
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c30847 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c30820)
    }
}

#undef public_6c30837
#undef public_6c30847
