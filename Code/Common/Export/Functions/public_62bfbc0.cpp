#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320fc0);

#define public_62bfbfd _public_62bfbfd

PROC_DECLARE(0x62bfbc0, internal_62bfbc0, public_62bfbc0);
extern "C" NAKED register_t __cdecl internal_62bfbc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfbfd
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62bfbfd
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push edx
        add ecx, 0x104
        push ecx
        call public_6320fc0
        add esp, 0xC
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFFC
        public_62bfbfd : nop
        ret 8
        UNREACHABLE_TRAP(0x62bfbc0)
    }
}

#undef public_62bfbfd
