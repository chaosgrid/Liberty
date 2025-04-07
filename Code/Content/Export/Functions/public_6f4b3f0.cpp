#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4b402 _public_6f4b402
#define public_6f4b41c _public_6f4b41c
#define public_6f4b428 _public_6f4b428
#define public_6f4b438 _public_6f4b438

PROC_DECLARE(0x6f4b3f0, internal_6f4b3f0, public_6f4b3f0);
extern "C" NAKED register_t __cdecl internal_6f4b3f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp esi, ebp
        je public_6f4b438
        public_6f4b402 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6f4b428
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f4b41c
        cmp cl, 0xFF
        je public_6f4b41c
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4b428
        public_6f4b41c : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4b428 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_6f4b402
        public_6f4b438 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4b3f0)
    }
}

#undef public_6f4b402
#undef public_6f4b41c
#undef public_6f4b428
#undef public_6f4b438
