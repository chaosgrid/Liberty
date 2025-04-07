#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e30);

#define public_6b399af _public_6b399af
#define public_6b399bc _public_6b399bc

PROC_DECLARE(0x6b39980, internal_6b39980, public_6b39980);
extern "C" NAKED register_t __cdecl internal_6b39980()
{
    __asm
    {
        push ebx
        push esi
        mov eax, 0x100004
/*FIXUP push offset public_6b6beb0 @0x6b39987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6beb0
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6b73700]
        mov ecx, dword ptr ds : [esi+8]
        xor ebx, ebx
        add esp, 8
        cmp ecx, ebx
        mov byte ptr ds : [esi+0x218], bl
        je public_6b399af
        call public_6b39e30
        mov dword ptr ds : [esi+8], ebx
        public_6b399af : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_6b399bc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6b399bc : nop
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b39980)
    }
}

#undef public_6b399af
#undef public_6b399bc
