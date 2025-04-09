#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4d00);

#define public_4d4d49 _public_4d4d49

PROC_DECLARE(0x4d4d00, internal_4d4d00, public_4d4d00);
extern "C" NAKED register_t __cdecl internal_4d4d00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_4d4d49
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_4d4d49
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c64f8]
        mov edx, dword ptr ds : [esi+0xB0]
        push 0
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov bl, al
        mov byte ptr ss : [esp+0x1C], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x1C]
        add esp, 0x10
        or al, bl
        pop ebx
        pop esi
        ret 
        public_4d4d49 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d4d00)
    }
}

#undef public_4d4d49
