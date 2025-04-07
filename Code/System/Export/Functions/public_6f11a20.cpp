#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11a20);

#define public_6f11a2c _public_6f11a2c
#define public_6f11a40 _public_6f11a40

PROC_DECLARE(0x6f11a20, internal_6f11a20, public_6f11a20);
extern "C" NAKED register_t __cdecl internal_6f11a20()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6f11a40
        public_6f11a2c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6f11a2c
        public_6f11a40 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6f11a20)
    }
}

#undef public_6f11a2c
#undef public_6f11a40
