#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f110e0);

#define public_6f11109 _public_6f11109
#define public_6f11122 _public_6f11122

PROC_DECLARE(0x6f110e0, internal_6f110e0, public_6f110e0);
extern "C" NAKED register_t __cdecl internal_6f110e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx+0x10]
        test esi, esi
        mov eax, ecx
        je public_6f11109
        push ebx
        push edi
        xor ebx, ebx
        mov edi, offset public_6f13080
        mov ecx, 0x10
        repe cmpsb
        pop edi
        pop ebx
        jne public_6f11109
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6f11109 : nop
        mov ecx, dword ptr ds : [edx+8]
        test ecx, ecx
        je public_6f11122
        mov dword ptr ds : [eax+0x1C], ecx
        mov edx, dword ptr ds : [edx+0xC]
        lea ecx, ds:[eax+0x10]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [eax+0x20], 1
        public_6f11122 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f110e0)
    }
}

#undef public_6f11109
#undef public_6f11122
