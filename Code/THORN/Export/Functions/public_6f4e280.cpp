#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e210);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e280);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e2d0);

#define public_6f4e2c5 _public_6f4e2c5

PROC_DECLARE(0x6f4e280, internal_6f4e280, public_6f4e280);
extern "C" NAKED register_t __cdecl internal_6f4e280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
/*FIXUP push offset public_6f60648 @0x6f4e286*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60648
        push eax
        call public_6f4e2d0
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        mov edi, eax
        call public_6f4e210
        push edi
        push esi
        call public_6f4e1e0
        add esp, 0x14
        test eax, eax
        je public_6f4e2c5
        mov edx, dword ptr ds : [public_6f61e28]
        lea ecx, ds:[esi+esi*8]
        shl ecx, 1
        mov eax, edi
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+0x64]
        shl eax, 4
        pop edi
        add eax, ecx
        pop esi
        ret 
        public_6f4e2c5 : nop
        pop edi
        mov eax, offset public_6f60a08
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e280)
    }
}

#undef public_6f4e2c5
