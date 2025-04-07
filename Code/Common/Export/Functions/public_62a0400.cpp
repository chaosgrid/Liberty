#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a07a0);

#define public_62a043a _public_62a043a
#define public_62a0442 _public_62a0442

PROC_DECLARE(0x62a0400, internal_62a0400, public_62a0400);
extern "C" NAKED register_t __cdecl internal_62a0400()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [esi+0x14]
        xor al, al
        cmp ecx, 3
        je public_62a0442
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_62a0442
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push ebx
        mov bl, 1
        jne public_62a043a
        lea eax, ds:[esi+0x28]
        push eax
        lea ecx, ds:[esi+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x20], bl
        call public_62a07a0
        public_62a043a : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov al, bl
        mov dword ptr ds : [edi], edx
        pop ebx
        public_62a0442 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a0400)
    }
}

#undef public_62a043a
#undef public_62a0442
