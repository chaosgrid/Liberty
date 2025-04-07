#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f4bb5 _public_62f4bb5
#define public_62f4bcf _public_62f4bcf
#define public_62f4bd6 _public_62f4bd6

PROC_DECLARE(0x62f4b80, internal_62f4b80, public_62f4b80);
extern "C" NAKED register_t __cdecl internal_62f4b80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f4260
        test al, al
        jne public_62f4bcf
/*FIXUP push offset public_63a1968 @0x62f4b92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1968
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4bb5
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4bb5 : nop
        push offset public_63a195c @0x62f4bb5*/
  FIXUP public_62f4bb5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a195c
        call public_6310410
        test al, al
        je public_62f4bd6
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x74]
        public_62f4bcf : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f4bd6 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4b80)
    }
}

#undef public_62f4bb5
#undef public_62f4bcf
#undef public_62f4bd6
