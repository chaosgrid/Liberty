#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5270);

#define public_6ec5285 _public_6ec5285
#define public_6ec5294 _public_6ec5294
#define public_6ec529d _public_6ec529d

PROC_DECLARE(0x6ec5270, internal_6ec5270, public_6ec5270);
extern "C" NAKED register_t __cdecl internal_6ec5270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6ec529d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6ec5285 : nop
        test eax, eax
        je public_6ec5294
        mov ecx, 5
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6ec5294 : nop
        add eax, 0x14
        dec edx
        jne public_6ec5285
        pop edi
        pop esi
        pop ebx
        public_6ec529d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ec5270)
    }
}

#undef public_6ec5285
#undef public_6ec5294
#undef public_6ec529d
