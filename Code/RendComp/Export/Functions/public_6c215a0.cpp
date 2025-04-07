#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26220);
CLANG_FORWARD_PROC_SYMBOL(public_6c26260);

#define public_6c215ea _public_6c215ea
#define public_6c21615 _public_6c21615

PROC_DECLARE(0x6c215a0, internal_6c215a0, public_6c215a0);
extern "C" NAKED register_t __cdecl internal_6c215a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        push esi
        je public_6c21615
        test ecx, ecx
        je public_6c21615
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 0
        je public_6c215ea
        sub eax, 2
        je public_6c215ea
        dec eax
        jne public_6c21615
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c21615
        test ah, 0x40
        je public_6c21615
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c21615
        call public_6c26260
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c215ea : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c21615
        test ah, 0x40
        je public_6c21615
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c21615
        call public_6c26220
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c21615 : nop
        xor al, al
        pop esi
        ret 0x20
        UNREACHABLE_TRAP(0x6c215a0)
    }
}

#undef public_6c215ea
#undef public_6c21615
