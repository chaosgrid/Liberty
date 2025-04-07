#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3b70);

#define public_62bf643 _public_62bf643

PROC_DECLARE(0x62bf620, internal_62bf620, public_62bf620);
extern "C" NAKED register_t __cdecl internal_62bf620()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf643
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf643
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_62b3b70
        public_62bf643 : nop
        fld dword ptr ds : [public_6399404]
        ret 8
        UNREACHABLE_TRAP(0x62bf620)
    }
}

#undef public_62bf643
