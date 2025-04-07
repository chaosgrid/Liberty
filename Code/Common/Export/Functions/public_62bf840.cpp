#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b42c0);

#define public_62bf863 _public_62bf863

PROC_DECLARE(0x62bf840, internal_62bf840, public_62bf840);
extern "C" NAKED register_t __cdecl internal_62bf840()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf863
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf863
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_62b42c0
        public_62bf863 : nop
        fld dword ptr ds : [public_6399404]
        ret 4
        UNREACHABLE_TRAP(0x62bf840)
    }
}

#undef public_62bf863
