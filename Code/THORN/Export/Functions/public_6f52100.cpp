#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52100);

#define public_6f52105 _public_6f52105
#define public_6f52116 _public_6f52116
#define public_6f52132 _public_6f52132
#define public_6f5213d _public_6f5213d

PROC_DECLARE(0x6f52100, internal_6f52100, public_6f52100);
extern "C" NAKED register_t __cdecl internal_6f52100()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6f52105 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x20
        je public_6f52116
        cmp eax, 9
        je public_6f52116
        cmp eax, 0xD
        jne public_6f5213d
        public_6f52116 : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f52132
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [esi], eax
        jmp public_6f52105
        public_6f52132 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_6f52105
        public_6f5213d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52100)
    }
}

#undef public_6f52105
#undef public_6f52116
#undef public_6f52132
#undef public_6f5213d
