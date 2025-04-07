#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_6334419 _public_6334419

PROC_DECLARE(0x6334400, internal_6334400, public_6334400);
extern "C" NAKED register_t __cdecl internal_6334400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6334419
        push eax
        call dword ptr ds : [public_6399354]
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        ret 
        public_6334419 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6334400)
    }
}

#undef public_6334419
