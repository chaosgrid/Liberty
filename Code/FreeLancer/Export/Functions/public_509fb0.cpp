#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509fb0);

#define public_509fe0 _public_509fe0

PROC_DECLARE(0x509fb0, internal_509fb0, public_509fb0);
extern "C" NAKED register_t __cdecl internal_509fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], 1
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], 0x242
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], eax
        je public_509fe0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_509fe0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov al, 0xFF
        mov byte ptr ds : [esi+0x33], al
        mov byte ptr ds : [esi+0x32], al
        mov byte ptr ds : [esi+0x31], al
        mov byte ptr ds : [esi+0x30], al
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], bl
        mov byte ptr ds : [esi+0x29], bl
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [esi+0xC], 0x242
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x509fb0)
    }
}

#undef public_509fe0
