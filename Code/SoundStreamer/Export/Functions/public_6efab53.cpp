#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efab32);
CLANG_FORWARD_PROC_SYMBOL(public_6efab53);

#define public_6efab85 _public_6efab85
#define public_6efab9d _public_6efab9d

PROC_DECLARE(0x6efab53, internal_6efab53, public_6efab53);
extern "C" NAKED register_t __cdecl internal_6efab53()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push dword ptr ds : [edi]
        push dword ptr ds : [esi]
        call public_6efab32
        add esp, 0xC
        test eax, eax
        je public_6efab85
        lea eax, ds:[esi+4]
        push eax
        push 1
        push dword ptr ds : [eax]
        call public_6efab32
        add esp, 0xC
        test eax, eax
        je public_6efab85
        inc dword ptr ds : [esi+8]
        public_6efab85 : nop
        lea eax, ds:[esi+4]
        push eax
        push dword ptr ds : [edi+4]
        push dword ptr ds : [eax]
        call public_6efab32
        add esp, 0xC
        test eax, eax
        je public_6efab9d
        inc dword ptr ds : [esi+8]
        public_6efab9d : nop
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [edi+8]
        push dword ptr ds : [eax]
        call public_6efab32
        add esp, 0xC
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efab53)
    }
}

#undef public_6efab85
#undef public_6efab9d
