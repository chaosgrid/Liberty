#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629d833 _public_629d833
#define public_629d83b _public_629d83b
#define public_629d855 _public_629d855

PROC_DECLARE(0x629d800, internal_629d800, public_629d800);
extern "C" NAKED register_t __cdecl internal_629d800()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629d83b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6286c80 @0x629d811*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6286c80
        lea edi, ds:[esi-4]
        push eax
        push 0x104
        push esi
        call public_6391dfc
        test bl, 1
        je public_629d833
        push edi
        call public_6391d5a
        add esp, 4
        public_629d833 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629d83b : nop
        mov ecx, esi
        call public_6286c80
        test bl, 1
        je public_629d855
        push 0x104
        push esi
        call public_62adc40
        add esp, 8
        public_629d855 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629d800)
    }
}

#undef public_629d833
#undef public_629d83b
#undef public_629d855
