#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b260);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c990);

#define public_6ec9006 _public_6ec9006
#define public_6ec900c _public_6ec900c

PROC_DECLARE(0x6ec8fe0, internal_6ec8fe0, public_6ec8fe0);
extern "C" NAKED register_t __cdecl internal_6ec8fe0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_6fb5ca0 @0x6ec8fe5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        mov bl, 1
        lea edi, ds:[esi+0x10]
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        cmp ecx, eax
        mov ecx, dword ptr ds : [esi+4]
        jne public_6ec900c
        call public_6f1b480
        public_6ec9006 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 
        public_6ec900c : nop
        add ecx, 0x21C
        call public_6f1c990
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov al, byte ptr ds : [esi+0xC]
        push eax
        push edi
        call public_6f1b260
        test al, al
        jne public_6ec9006
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec8fe0)
    }
}

#undef public_6ec9006
#undef public_6ec900c
