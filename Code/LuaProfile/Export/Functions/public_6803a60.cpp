#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803950);
CLANG_FORWARD_PROC_SYMBOL(public_6803a60);

#define public_6803a81 _public_6803a81
#define public_6803aa0 _public_6803aa0
#define public_6803aad _public_6803aad

PROC_DECLARE(0x6803a60, internal_6803a60, public_6803a60);
extern "C" NAKED register_t __cdecl internal_6803a60()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6803aad
        mov eax, dword ptr ds : [edi+0xC]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ds : [edi+4], 1
        jle public_6803aad
        push ebx
        push esi
        xor ebx, ebx
        public_6803a81 : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        cmp eax, 0xFFFFFFFA
        je public_6803aa0
        push esi
        call public_6803950
        add esi, 0x10
        push esi
        call public_6803950
        add esp, 8
        public_6803aa0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        inc ebp
        add ebx, 0x20
        cmp ebp, eax
        jl public_6803a81
        pop esi
        pop ebx
        public_6803aad : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6803a60)
    }
}

#undef public_6803a81
#undef public_6803aa0
#undef public_6803aad
