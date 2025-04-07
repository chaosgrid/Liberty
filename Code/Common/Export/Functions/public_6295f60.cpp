#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296250);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);

#define public_6295f75 _public_6295f75
#define public_6295f91 _public_6295f91

PROC_DECLARE(0x6295f60, internal_6295f60, public_6295f60);
extern "C" NAKED register_t __cdecl internal_6295f60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test bl, bl
        push esi
        mov esi, ecx
        jne public_6295f75
        push 0
        push 0
        call public_6296250
        public_6295f75 : nop
        push ebx
        mov ecx, esi
        call public_629aed0
        mov bl, al
        test bl, bl
        mov ecx, esi
        je public_6295f91
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x4C]
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_6295f91 : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x50]
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6295f60)
    }
}

#undef public_6295f75
#undef public_6295f91
