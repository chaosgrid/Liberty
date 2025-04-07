#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d163c4 _public_6d163c4
#define public_6d163d7 _public_6d163d7
#define public_6d163e0 _public_6d163e0
#define public_6d163e4 _public_6d163e4
#define public_6d163f1 _public_6d163f1
#define public_6d16402 _public_6d16402

PROC_DECLARE(0x6d163b0, internal_6d163b0, public_6d163b0);
extern "C" NAKED register_t __cdecl internal_6d163b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_6d68340
        je public_6d163e4
        public_6d163c4 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d163d7
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d163e0
        public_6d163d7 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d163e0 : nop
        cmp edi, ebx
        jne public_6d163c4
        public_6d163e4 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6d16402
        public_6d163f1 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d163f1
        public_6d16402 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d163b0)
    }
}

#undef public_6d163c4
#undef public_6d163d7
#undef public_6d163e0
#undef public_6d163e4
#undef public_6d163f1
#undef public_6d16402
