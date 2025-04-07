#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801870);
CLANG_FORWARD_PROC_SYMBOL(public_680bc50);

#define public_68018a9 _public_68018a9
#define public_68018ab _public_68018ab
#define public_68018c9 _public_68018c9

PROC_DECLARE(0x6801870, internal_6801870, public_6801870);
extern "C" NAKED register_t __cdecl internal_6801870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_68018c9
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call dword ptr ds : [public_680c00c]
        push 0xC
        call public_680bc50
        add esp, 4
        test eax, eax
        je public_68018a9
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_680d018
        mov dword ptr ds : [eax], offset public_680c100
        mov esi, eax
        jmp public_68018ab
        public_68018a9 : nop
        xor esi, esi
        public_68018ab : nop
        call dword ptr ds : [public_680c000]
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_680d018 @0x68018b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d018
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        public_68018c9 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6801870)
    }
}

#undef public_68018a9
#undef public_68018ab
#undef public_68018c9
