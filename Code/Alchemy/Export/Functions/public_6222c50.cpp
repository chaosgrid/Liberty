#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222c50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6222ca1 _public_6222ca1
#define public_6222caa _public_6222caa

PROC_DECLARE(0x6222c50, internal_6222c50, public_6222c50);
extern "C" NAKED register_t __cdecl internal_6222c50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_62460e0
        xor ebx, ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_62460e0
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ebx
        je public_6222caa
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6222ca1
        cmp cl, 0xFF
        je public_6222ca1
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        public_6222ca1 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_6222caa : nop
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6222c50)
    }
}

#undef public_6222ca1
#undef public_6222caa
