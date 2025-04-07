#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6315b42 _public_6315b42
#define public_6315b5c _public_6315b5c
#define public_6315b65 _public_6315b65
#define public_6315b75 _public_6315b75

PROC_DECLARE(0x6315b30, internal_6315b30, public_6315b30);
extern "C" NAKED register_t __cdecl internal_6315b30()
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
        je public_6315b75
        public_6315b42 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6315b65
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6315b5c
        cmp cl, 0xFF
        je public_6315b5c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6315b65
        public_6315b5c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6315b65 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        add esi, 0x10
        cmp esi, ebp
        jne public_6315b42
        public_6315b75 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6315b30)
    }
}

#undef public_6315b42
#undef public_6315b5c
#undef public_6315b65
#undef public_6315b75
