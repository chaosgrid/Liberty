#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9840);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b9854 _public_62b9854
#define public_62b9864 _public_62b9864

PROC_DECLARE(0x62b9840, internal_62b9840, public_62b9840);
extern "C" NAKED register_t __cdecl internal_62b9840()
{
    __asm
    {
        push 0x20
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_62b9854
        mov ecx, eax
        public_62b9854 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_62b9864
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_62b9864 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x62b9840)
    }
}

#undef public_62b9854
#undef public_62b9864
