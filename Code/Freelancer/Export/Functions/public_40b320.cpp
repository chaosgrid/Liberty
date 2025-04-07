#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_40b37c _public_40b37c
#define public_40b384 _public_40b384
#define public_40b3b0 _public_40b3b0
#define public_40b3dc _public_40b3dc

PROC_DECLARE(0x40b320, internal_40b320, public_40b320);
extern "C" NAKED register_t __cdecl internal_40b320()
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
        jne public_40b37c
/*FIXUP push offset public_5c7f6c @0x40b335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40b384
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        mov ecx, esi
        mov byte ptr ds : [edi+0x54], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        mov ecx, esi
        mov byte ptr ds : [edi+0x55], al
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov byte ptr ds : [edi+0x56], al
        public_40b37c : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40b384 : nop
        push offset public_5c7fc8 @0x40b384*/
  FIXUP public_40b384 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7fc8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40b3b0
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x58], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40b3b0 : nop
        push offset public_5c7fb0 @0x40b3b0*/
  FIXUP public_40b3b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7fb0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40b3dc
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x5C], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_40b3dc : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40b320)
    }
}

#undef public_40b37c
#undef public_40b384
#undef public_40b3b0
#undef public_40b3dc
