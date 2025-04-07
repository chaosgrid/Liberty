#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680b790);

#define public_680b795 _public_680b795
#define public_680b7a6 _public_680b7a6
#define public_680b7c2 _public_680b7c2
#define public_680b7cd _public_680b7cd

PROC_DECLARE(0x680b790, internal_680b790, public_680b790);
extern "C" NAKED register_t __cdecl internal_680b790()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_680b795 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x20
        je public_680b7a6
        cmp eax, 9
        je public_680b7a6
        cmp eax, 0xD
        jne public_680b7cd
        public_680b7a6 : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_680b7c2
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [esi], eax
        jmp public_680b795
        public_680b7c2 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_680b795
        public_680b7cd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680b790)
    }
}

#undef public_680b795
#undef public_680b7a6
#undef public_680b7c2
#undef public_680b7cd
