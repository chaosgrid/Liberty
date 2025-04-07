#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62bef10 _public_62bef10
#define public_62bef18 _public_62bef18

PROC_DECLARE(0x62beed0, internal_62beed0, public_62beed0);
extern "C" NAKED register_t __cdecl internal_62beed0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
/*FIXUP push offset public_639ef5c @0x62beed9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef5c
        mov ecx, esi
        xor bl, bl
        call public_6310410
        test al, al
        je public_62bef18
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+4]
        push 1
        mov ecx, esi
        call public_6310560
        test al, al
        jne public_62bef10
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+8]
        public_62bef10 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62bef18 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62beed0)
    }
}

#undef public_62bef10
#undef public_62bef18
