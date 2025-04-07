#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad19c3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad221c);

#define public_6ad2235 _public_6ad2235
#define public_6ad2240 _public_6ad2240
#define public_6ad224d _public_6ad224d

PROC_DECLARE(0x6ad221c, internal_6ad221c, public_6ad221c);
extern "C" NAKED register_t __cdecl internal_6ad221c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        dec dword ptr ds : [ecx+4]
        js public_6ad2235
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [ebp+8]
        mov byte ptr ds : [edx], al
        inc dword ptr ds : [ecx]
        movzx eax, al
        jmp public_6ad2240
        public_6ad2235 : nop
        push ecx
        push dword ptr ss : [ebp+8]
        call public_6ad19c3
        pop ecx
        pop ecx
        public_6ad2240 : nop
        cmp eax, 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0x10]
        jne public_6ad224d
        or dword ptr ds : [eax], 0xFFFFFFFF
        pop ebp
        ret 
        public_6ad224d : nop
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad221c)
    }
}

#undef public_6ad2235
#undef public_6ad2240
#undef public_6ad224d
