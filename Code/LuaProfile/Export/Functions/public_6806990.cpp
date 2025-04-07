#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_68069c0 _public_68069c0
#define public_68069c6 _public_68069c6

PROC_DECLARE(0x6806990, internal_6806990, public_6806990);
extern "C" NAKED register_t __cdecl internal_6806990()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+0xC]
        add edx, eax
        mov eax, edx
        mov dword ptr ds : [esi+0xC], edx
        cmp eax, dword ptr ds : [esi+0x10]
        jle public_68069c6
        cmp eax, 0xFF
        jle public_68069c0
/*FIXUP push offset public_680db40 @0x68069b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db40
        push ecx
        call public_680a850
        add esp, 8
        public_68069c0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x10], ecx
        public_68069c6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806990)
    }
}

#undef public_68069c0
#undef public_68069c6
