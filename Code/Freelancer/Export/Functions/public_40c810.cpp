#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_40c84b _public_40c84b
#define public_40c853 _public_40c853

PROC_DECLARE(0x40c810, internal_40c810, public_40c810);
extern "C" NAKED register_t __cdecl internal_40c810()
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
        call public_406dc0
        test al, al
        jne public_40c84b
/*FIXUP push offset public_5c8394 @0x40c825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8394
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40c853
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [esi+0x54], eax
        public_40c84b : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_40c853 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40c810)
    }
}

#undef public_40c84b
#undef public_40c853
