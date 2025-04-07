#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);

#define public_62feb2a _public_62feb2a
#define public_62feb40 _public_62feb40

PROC_DECLARE(0x62feb00, internal_62feb00, public_62feb00);
extern "C" NAKED register_t __cdecl internal_62feb00()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, bl
        push esi
        mov esi, ecx
        je public_62feb2a
        mov eax, dword ptr ds : [esi+0x360]
        mov byte ptr ds : [esi+0x2E8], bl
        mov dword ptr ds : [esi+0x2E4], eax
        mov byte ptr ds : [esi+0x2E9], 1
        pop esi
        pop ebx
        ret 4
        public_62feb2a : nop
        mov al, byte ptr ds : [esi+0x2E8]
        test al, al
        je public_62feb40
        mov ecx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [esi+0x2E4], ecx
        public_62feb40 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x18
        call public_62e90a0
        mov byte ptr ds : [esi+0x2E8], bl
        mov byte ptr ds : [esi+0x2E9], 1
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62feb00)
    }
}

#undef public_62feb2a
#undef public_62feb40
