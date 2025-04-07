#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e7a);
CLANG_FORWARD_PROC_SYMBOL(public_6d485b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d495af);

#define public_6d495dd _public_6d495dd
#define public_6d495ea _public_6d495ea
#define public_6d495f6 _public_6d495f6

PROC_DECLARE(0x6d495af, internal_6d495af, public_6d495af);
extern "C" NAKED register_t __cdecl internal_6d495af()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[esi+0x10C]
        push edi
        push esi
        call public_6d485b0
        test byte ptr ds : [edi], 0x20
        pop ecx
        pop ecx
        jne public_6d495dd
/*FIXUP push offset public_6d61a38 @0x6d495c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61a38
        push esi
        call public_6d41e7a
        cmp dword ptr ss : [esp+0x18], 0
        pop ecx
        pop ecx
        je public_6d495f6
        public_6d495dd : nop
        mov eax, dword ptr ds : [esi+0x58]
        test al, 4
        je public_6d495ea
        or eax, 8
        mov dword ptr ds : [esi+0x58], eax
        public_6d495ea : nop
        push dword ptr ss : [esp+0x14]
        push esi
        call public_6d48e08
        pop ecx
        pop ecx
        public_6d495f6 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d495af)
    }
}

#undef public_6d495dd
#undef public_6d495ea
#undef public_6d495f6
