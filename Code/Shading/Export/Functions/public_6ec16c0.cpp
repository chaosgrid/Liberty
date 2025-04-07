#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec16c0);

#define public_6ec16ff _public_6ec16ff

PROC_DECLARE(0x6ec16c0, internal_6ec16c0, public_6ec16c0);
extern "C" NAKED register_t __cdecl internal_6ec16c0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+8]
        mov byte ptr ds : [esi+0x10], al
        xor eax, eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x20], cl
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        je public_6ec16ff
        push ecx
        call dword ptr ds : [public_6ed108c]
        add esp, 4
        public_6ec16ff : nop
        mov dword ptr ds : [esi], eax
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec16c0)
    }
}

#undef public_6ec16ff
