#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3ce0);

#define public_62bf6bb _public_62bf6bb

PROC_DECLARE(0x62bf680, internal_62bf680, public_62bf680);
extern "C" NAKED register_t __cdecl internal_62bf680()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_62bf6bb
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_62bf6bb
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+4], eax
        jmp public_62b3ce0
        public_62bf6bb : nop
        fld dword ptr ds : [public_6399404]
        ret 0x10
        UNREACHABLE_TRAP(0x62bf680)
    }
}

#undef public_62bf6bb
