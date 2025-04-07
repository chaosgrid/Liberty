#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63793d0);

#define public_63793e0 _public_63793e0
#define public_63793f5 _public_63793f5

PROC_DECLARE(0x63793d0, internal_63793d0, public_63793d0);
extern "C" NAKED register_t __cdecl internal_63793d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        test ecx, ecx
        push esi
        je public_63793f5
        mov edx, 1
        public_63793e0 : nop
        mov esi, dword ptr ds : [ecx+0x14]
        test esi, esi
        jne public_63793f5
        mov dword ptr ds : [ecx+0x14], edx
        mov ecx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0xC]
        inc eax
        test ecx, ecx
        jne public_63793e0
        public_63793f5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63793d0)
    }
}

#undef public_63793e0
#undef public_63793f5
