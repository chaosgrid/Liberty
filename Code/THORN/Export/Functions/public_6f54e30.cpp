#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f54e80);

#define public_6f54e46 _public_6f54e46
#define public_6f54e4d _public_6f54e4d
#define public_6f54e5d _public_6f54e5d
#define public_6f54e73 _public_6f54e73

PROC_DECLARE(0x6f54e30, internal_6f54e30, public_6f54e30);
extern "C" NAKED register_t __cdecl internal_6f54e30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        dec dword ptr ds : [esi]
        js public_6f54e46
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov dword ptr ds : [esi+4], ecx
        jmp public_6f54e4d
        public_6f54e46 : nop
        push esi
        call dword ptr ds : [esi+8]
        add esp, 4
        public_6f54e4d : nop
        cmp eax, 0x1B
        jne public_6f54e5d
        push esi
        call public_6f54e80
        add esp, 4
        pop esi
        ret 
        public_6f54e5d : nop
        cmp eax, 0xFFFFFFFF
        je public_6f54e73
        mov eax, dword ptr ds : [esi+0x10]
        push eax
/*FIXUP push offset public_6f61480 @0x6f54e66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61480
        call public_6f4f7a0
        add esp, 8
        public_6f54e73 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54e30)
    }
}

#undef public_6f54e46
#undef public_6f54e4d
#undef public_6f54e5d
#undef public_6f54e73
