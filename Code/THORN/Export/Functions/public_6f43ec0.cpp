#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f43ee3 _public_6f43ee3
#define public_6f43eec _public_6f43eec
#define public_6f43f1b _public_6f43f1b
#define public_6f43f24 _public_6f43f24

PROC_DECLARE(0x6f43ec0, internal_6f43ec0, public_6f43ec0);
extern "C" NAKED register_t __cdecl internal_6f43ec0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f43eec
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f43ee3
        cmp cl, 0xFF
        je public_6f43ee3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f43eec
        public_6f43ee3 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f43eec : nop
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov eax, dword ptr ds : [esi+0xB0]
        cmp eax, ebx
        je public_6f43f24
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f43f1b
        cmp cl, 0xFF
        je public_6f43f1b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f43f24
        public_6f43f1b : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f43f24 : nop
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6f439a0
        UNREACHABLE_TRAP(0x6f43ec0)
    }
}

#undef public_6f43ee3
#undef public_6f43eec
#undef public_6f43f1b
#undef public_6f43f24
