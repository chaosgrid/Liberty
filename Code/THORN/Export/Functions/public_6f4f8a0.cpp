#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8a0);

#define public_6f4f8b8 _public_6f4f8b8
#define public_6f4f8ca _public_6f4f8ca
#define public_6f4f8db _public_6f4f8db

PROC_DECLARE(0x6f4f8a0, internal_6f4f8a0, public_6f4f8a0);
extern "C" NAKED register_t __cdecl internal_6f4f8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f60a18]
        xor edx, edx
        cmp eax, 0x7FFFFFFD
        push esi
        jge public_6f4f8ca
        mov esi, dword ptr ss : [esp+8]
        mov ecx, offset public_6f60a18
        public_6f4f8b8 : nop
        cmp eax, esi
        jg public_6f4f8db
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        inc edx
        cmp eax, 0x7FFFFFFD
        jl public_6f4f8b8
/*FIXUP public_6f4f8ca : nop
        push offset public_6f60aac @0x6f4f8ca*/
  FIXUP public_6f4f8ca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60aac
        call public_6f4c7f0
        add esp, 4
        xor eax, eax
        pop esi
        ret 
        public_6f4f8db : nop
        mov eax, dword ptr ds : [edx*4+public_6f60a18]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f8a0)
    }
}

#undef public_6f4f8b8
#undef public_6f4f8ca
#undef public_6f4f8db
