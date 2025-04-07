#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6808f30);
CLANG_FORWARD_PROC_SYMBOL(public_6808f80);

#define public_6808f46 _public_6808f46
#define public_6808f4d _public_6808f4d
#define public_6808f5d _public_6808f5d
#define public_6808f73 _public_6808f73

PROC_DECLARE(0x6808f30, internal_6808f30, public_6808f30);
extern "C" NAKED register_t __cdecl internal_6808f30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        dec dword ptr ds : [esi]
        js public_6808f46
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov dword ptr ds : [esi+4], ecx
        jmp public_6808f4d
        public_6808f46 : nop
        push esi
        call dword ptr ds : [esi+8]
        add esp, 4
        public_6808f4d : nop
        cmp eax, 0x1B
        jne public_6808f5d
        push esi
        call public_6808f80
        add esp, 4
        pop esi
        ret 
        public_6808f5d : nop
        cmp eax, 0xFFFFFFFF
        je public_6808f73
        mov eax, dword ptr ds : [esi+0x10]
        push eax
/*FIXUP push offset public_680ddb0 @0x6808f66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680ddb0
        call public_6805fb0
        add esp, 8
        public_6808f73 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808f30)
    }
}

#undef public_6808f46
#undef public_6808f4d
#undef public_6808f5d
#undef public_6808f73
