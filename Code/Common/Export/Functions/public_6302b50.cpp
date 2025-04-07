#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6302b7f _public_6302b7f
#define public_6302b87 _public_6302b87
#define public_6302b94 _public_6302b94

PROC_DECLARE(0x6302b50, internal_6302b50, public_6302b50);
extern "C" NAKED register_t __cdecl internal_6302b50()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fcc58
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcc5c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6302b7f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6302b7f
        lea eax, ss:[esp]
        jmp public_6302b87
        public_6302b7f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6302b87 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6302b94
        fld dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        public_6302b94 : nop
        fld dword ptr ds : [public_6399408]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6302b50)
    }
}

#undef public_6302b7f
#undef public_6302b87
#undef public_6302b94
