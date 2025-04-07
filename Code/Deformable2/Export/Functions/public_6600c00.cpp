#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600c00);

#define public_6600c0c _public_6600c0c
#define public_6600c20 _public_6600c20

PROC_DECLARE(0x6600c00, internal_6600c00, public_6600c00);
extern "C" NAKED register_t __cdecl internal_6600c00()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6600c20
        public_6600c0c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6600c0c
        public_6600c20 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6600c00)
    }
}

#undef public_6600c0c
#undef public_6600c20
