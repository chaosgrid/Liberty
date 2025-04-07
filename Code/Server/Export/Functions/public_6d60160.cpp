#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d6016c _public_6d6016c
#define public_6d60180 _public_6d60180

PROC_DECLARE(0x6d60160, internal_6d60160, public_6d60160);
extern "C" NAKED register_t __cdecl internal_6d60160()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6d60180
        public_6d6016c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6d6016c
        public_6d60180 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6d60160)
    }
}

#undef public_6d6016c
#undef public_6d60180
