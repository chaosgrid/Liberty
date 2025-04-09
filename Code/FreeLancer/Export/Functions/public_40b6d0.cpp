#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_40b70b _public_40b70b
#define public_40b713 _public_40b713
#define public_40b737 _public_40b737

PROC_DECLARE(0x40b6d0, internal_40b6d0, public_40b6d0);
extern "C" NAKED register_t __cdecl internal_40b6d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_40b70b
/*FIXUP push offset public_5c7de0 @0x40b6e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7de0
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40b713
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x54], eax
        public_40b70b : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40b713 : nop
        push offset public_5c8018 @0x40b713*/
  FIXUP public_40b713 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8018
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40b737
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6034]
        mov byte ptr ds : [edi+0x58], al
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_40b737 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40b6d0)
    }
}

#undef public_40b70b
#undef public_40b713
#undef public_40b737
