#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_407e93 _public_407e93
#define public_407e9b _public_407e9b
#define public_407ec7 _public_407ec7
#define public_407ef3 _public_407ef3

PROC_DECLARE(0x407e60, internal_407e60, public_407e60);
extern "C" NAKED register_t __cdecl internal_407e60()
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
        jne public_407e93
/*FIXUP push offset public_5c7a00 @0x407e75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7a00
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_407e9b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x54]
        public_407e93 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_407e9b : nop
        push offset public_5c79f0 @0x407e9b*/
  FIXUP public_407e9b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c79f0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_407ec7
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
/*FIXUP public_407ec7 : nop
        push offset public_5c79e0 @0x407ec7*/
  FIXUP public_407ec7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c79e0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_407ef3
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
        public_407ef3 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x407e60)
    }
}

#undef public_407e93
#undef public_407e9b
#undef public_407ec7
#undef public_407ef3
