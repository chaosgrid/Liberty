#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ad4c0);

#define public_62ad4d0 _public_62ad4d0
#define public_62ad4db _public_62ad4db
#define public_62ad4e0 _public_62ad4e0

PROC_DECLARE(0x62ad4c0, internal_62ad4c0, public_62ad4c0);
extern "C" NAKED register_t __cdecl internal_62ad4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_62ad4db
        mov edx, dword ptr ss : [esp+4]
        mov edi, edi
        public_62ad4d0 : nop
        cmp dword ptr ds : [eax], edx
        je public_62ad4e0
        add eax, 0xC
        cmp eax, ecx
        jne public_62ad4d0
        public_62ad4db : nop
        xor al, al
        ret 4
        public_62ad4e0 : nop
        mov byte ptr ds : [eax+8], 1
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62ad4c0)
    }
}

#undef public_62ad4d0
#undef public_62ad4db
#undef public_62ad4e0
