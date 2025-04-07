#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5bc0);

#define public_65f2245 _public_65f2245

PROC_DECLARE(0x65f2220, internal_65f2220, public_65f2220);
extern "C" NAKED register_t __cdecl internal_65f2220()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        or esi, 0xFFFFFFFF
        test ecx, ecx
        je public_65f2245
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        call public_65f5bc0
        test al, al
        je public_65f2245
        xor eax, eax
        pop esi
        ret 0x10
        public_65f2245 : nop
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x65f2220)
    }
}

#undef public_65f2245
