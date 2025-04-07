#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48110);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f48136 _public_6f48136
#define public_6f4813f _public_6f4813f
#define public_6f48172 _public_6f48172
#define public_6f4817b _public_6f4817b

PROC_DECLARE(0x6f48110, internal_6f48110, public_6f48110);
extern "C" NAKED register_t __cdecl internal_6f48110()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6f5b32c
        mov eax, dword ptr ds : [esi+0x70]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f4813f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f48136
        cmp cl, 0xFF
        je public_6f48136
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f4813f
        public_6f48136 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f4813f : nop
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov eax, dword ptr ds : [esi+0x60]
        cmp eax, ebx
        je public_6f4817b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f48172
        cmp cl, 0xFF
        je public_6f48172
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6f439a0
        public_6f48172 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f4817b : nop
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6f439a0
        UNREACHABLE_TRAP(0x6f48110)
    }
}

#undef public_6f48136
#undef public_6f4813f
#undef public_6f48172
#undef public_6f4817b
