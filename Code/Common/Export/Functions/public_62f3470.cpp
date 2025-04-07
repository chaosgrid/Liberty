#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f1830);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

#define public_62f34ac _public_62f34ac
#define public_62f34d0 _public_62f34d0
#define public_62f34fd _public_62f34fd
#define public_62f3528 _public_62f3528
#define public_62f3555 _public_62f3555
#define public_62f3572 _public_62f3572
#define public_62f3579 _public_62f3579

PROC_DECLARE(0x62f3470, internal_62f3470, public_62f3470);
extern "C" NAKED register_t __cdecl internal_62f3470()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f1830
        test al, al
        jne public_62f3572
/*FIXUP push offset public_63a180c @0x62f3486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a180c
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f34ac
        push 0
        call public_63107c0
        mov dword ptr ds : [edi+0x9C], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f34ac : nop
        push offset public_639eb38 @0x62f34ac*/
  FIXUP public_62f34ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eb38
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f34d0
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x94], al
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f34d0 : nop
        push offset public_63a1800 @0x62f34d0*/
  FIXUP public_62f34d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1800
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f34fd
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [edi+0xA0], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f34fd : nop
        push offset public_639a200 @0x62f34fd*/
  FIXUP public_62f34fd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a200
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f3528
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0xA8], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f3528 : nop
        push offset public_63a17f4 @0x62f3528*/
  FIXUP public_62f3528 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17f4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f3555
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [edi+0xA4], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f3555 : nop
        push offset public_63a17e4 @0x62f3555*/
  FIXUP public_62f3555 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17e4
        call public_6310410
        test al, al
        je public_62f3579
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x98]
        public_62f3572 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f3579 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f3470)
    }
}

#undef public_62f34ac
#undef public_62f34d0
#undef public_62f34fd
#undef public_62f3528
#undef public_62f3555
#undef public_62f3572
#undef public_62f3579
