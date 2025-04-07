#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f90);

#define public_6f54f6c _public_6f54f6c
#define public_6f54f75 _public_6f54f75
#define public_6f54f83 _public_6f54f83

PROC_DECLARE(0x6f54f50, internal_6f54f50, public_6f54f50);
extern "C" NAKED register_t __cdecl internal_6f54f50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        dec eax
        push edi
        mov dword ptr ds : [esi], eax
        js public_6f54f6c
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi+4], eax
        mov edi, ecx
        jmp public_6f54f75
        public_6f54f6c : nop
        push esi
        call dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        public_6f54f75 : nop
        cmp edi, 0xFFFFFFFF
        jne public_6f54f83
        push esi
        call public_6f54f90
        add esp, 4
        public_6f54f83 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54f50)
    }
}

#undef public_6f54f6c
#undef public_6f54f75
#undef public_6f54f83
