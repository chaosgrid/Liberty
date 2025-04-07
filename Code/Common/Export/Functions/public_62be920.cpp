#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be920);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62be934 _public_62be934
#define public_62be944 _public_62be944

PROC_DECLARE(0x62be920, internal_62be920, public_62be920);
extern "C" NAKED register_t __cdecl internal_62be920()
{
    __asm
    {
        push 0x1C
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_62be934
        mov ecx, eax
        public_62be934 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_62be944
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_62be944 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x62be920)
    }
}

#undef public_62be934
#undef public_62be944
