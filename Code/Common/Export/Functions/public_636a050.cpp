#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_636a050);
CLANG_FORWARD_PROC_SYMBOL(public_6392220);
CLANG_FORWARD_PROC_SYMBOL(public_6392250);

#define public_636a081 _public_636a081
#define public_636a096 _public_636a096
#define public_636a0a7 _public_636a0a7

PROC_DECLARE(0x636a050, internal_636a050, public_636a050);
extern "C" NAKED register_t __cdecl internal_636a050()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        jne public_636a081
        push 3
        mov ecx, offset public_658c730
        call public_6392220
        test eax, eax
        je public_636a0a7
/*FIXUP push offset public_63ee78c @0x636a069*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee78c
        push 3
/*FIXUP push offset public_658c730 @0x636a070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658c730
        call public_6392250
        add esp, 0xC
        pop edi
        ret 4
        public_636a081 : nop
        mov ax, word ptr ds : [ecx+0x1A]
        cmp ax, word ptr ds : [ecx+0x18]
        push esi
        lea esi, ds:[ecx+0x18]
        jb public_636a096
        mov ecx, esi
        call public_63441a0
        public_636a096 : nop
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], edi
        inc word ptr ds : [esi+2]
        pop esi
        public_636a0a7 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x636a050)
    }
}

#undef public_636a081
#undef public_636a096
#undef public_636a0a7
