#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_40ba2b _public_40ba2b
#define public_40ba33 _public_40ba33
#define public_40ba57 _public_40ba57
#define public_40ba7b _public_40ba7b
#define public_40ba9f _public_40ba9f

PROC_DECLARE(0x40b9f0, internal_40b9f0, public_40b9f0);
extern "C" NAKED register_t __cdecl internal_40b9f0()
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
        jne public_40ba2b
/*FIXUP push offset public_5c8064 @0x40ba05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8064
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40ba33
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x54], eax
        public_40ba2b : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40ba33 : nop
        push offset public_5c7c98 @0x40ba33*/
  FIXUP public_40ba33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c98
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40ba57
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x58]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40ba57 : nop
        push offset public_5c7c84 @0x40ba57*/
  FIXUP public_40ba57 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c84
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40ba7b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x5C]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40ba7b : nop
        push offset public_5c7c68 @0x40ba7b*/
  FIXUP public_40ba7b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7c68
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40ba9f
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x60]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_40ba9f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40b9f0)
    }
}

#undef public_40ba2b
#undef public_40ba33
#undef public_40ba57
#undef public_40ba7b
#undef public_40ba9f
