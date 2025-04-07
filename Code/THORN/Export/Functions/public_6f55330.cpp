#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f55330);

#define public_6f55344 _public_6f55344
#define public_6f5535c _public_6f5535c
#define public_6f55372 _public_6f55372

PROC_DECLARE(0x6f55330, internal_6f55330, public_6f55330);
extern "C" NAKED register_t __cdecl internal_6f55330()
{
    __asm
    {
        mov al, byte ptr ds : [public_6f61658]
        test al, al
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, offset public_6f61658
        je public_6f5535c
        public_6f55344 : nop
        push edi
        call public_6f54f50
        movsx ecx, byte ptr ds : [esi]
        add esp, 4
        cmp eax, ecx
        jne public_6f5535c
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6f55344
        public_6f5535c : nop
        cmp byte ptr ds : [esi], 0
        je public_6f55372
        mov edx, dword ptr ds : [edi+0x10]
        push edx
/*FIXUP push offset public_6f61644 @0x6f55365*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61644
        call public_6f4f7a0
        add esp, 8
        public_6f55372 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55330)
    }
}

#undef public_6f55344
#undef public_6f5535c
#undef public_6f55372
