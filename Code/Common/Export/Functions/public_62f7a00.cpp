#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6de0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62f7a38 _public_62f7a38
#define public_62f7a5c _public_62f7a5c
#define public_62f7a7e _public_62f7a7e
#define public_62f7a85 _public_62f7a85

PROC_DECLARE(0x62f7a00, internal_62f7a00, public_62f7a00);
extern "C" NAKED register_t __cdecl internal_62f7a00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f6de0
        test al, al
        jne public_62f7a7e
/*FIXUP push offset public_63a1670 @0x62f7a12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1670
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7a38
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x80]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7a38 : nop
        push offset public_63a192c @0x62f7a38*/
  FIXUP public_62f7a38 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a192c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7a5c
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x84]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7a5c : nop
        push offset public_63a1da4 @0x62f7a5c*/
  FIXUP public_62f7a5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1da4
        call public_6310410
        test al, al
        je public_62f7a85
        push 0
        mov ecx, esi
        call public_63108f0
        call public_6391dae
        mov dword ptr ds : [edi+0x88], eax
        public_62f7a7e : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f7a85 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f7a00)
    }
}

#undef public_62f7a38
#undef public_62f7a5c
#undef public_62f7a7e
#undef public_62f7a85
