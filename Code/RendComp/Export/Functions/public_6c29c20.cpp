#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2b010);

#define public_6c29c6a _public_6c29c6a
#define public_6c29c95 _public_6c29c95

PROC_DECLARE(0x6c29c20, internal_6c29c20, public_6c29c20);
extern "C" NAKED register_t __cdecl internal_6c29c20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        push esi
        je public_6c29c95
        test ecx, ecx
        je public_6c29c95
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 0
        je public_6c29c6a
        sub eax, 2
        je public_6c29c6a
        dec eax
        jne public_6c29c95
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c29c95
        test ah, 0x40
        je public_6c29c95
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c29c95
        call public_6c2b010
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c29c6a : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 3
        jne public_6c29c95
        test ah, 0x40
        je public_6c29c95
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_6c29c95
        call public_6c2b010
        mov dword ptr ds : [esi], eax
        mov al, 1
        pop esi
        ret 0x20
        public_6c29c95 : nop
        xor al, al
        pop esi
        ret 0x20
        UNREACHABLE_TRAP(0x6c29c20)
    }
}

#undef public_6c29c6a
#undef public_6c29c95
