#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee8dac _public_6ee8dac
#define public_6ee8dc0 _public_6ee8dc0

PROC_DECLARE(0x6ee8da0, internal_6ee8da0, public_6ee8da0);
extern "C" NAKED register_t __cdecl internal_6ee8da0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6ee8dc0
        public_6ee8dac : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6ee8dac
        public_6ee8dc0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6ee8da0)
    }
}

#undef public_6ee8dac
#undef public_6ee8dc0
