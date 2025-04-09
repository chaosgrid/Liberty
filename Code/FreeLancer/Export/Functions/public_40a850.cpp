#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40a4d0);

#define public_40a88e _public_40a88e
#define public_40a896 _public_40a896

PROC_DECLARE(0x40a850, internal_40a850, public_40a850);
extern "C" NAKED register_t __cdecl internal_40a850()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        mov bl, 1
        call public_40a4d0
        test al, al
        jne public_40a88e
/*FIXUP push offset public_5c7ea4 @0x40a865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7ea4
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40a896
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [esi+0x84], eax
        public_40a88e : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_40a896 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40a850)
    }
}

#undef public_40a88e
#undef public_40a896
