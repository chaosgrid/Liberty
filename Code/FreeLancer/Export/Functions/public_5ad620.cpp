#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5ad640 _public_5ad640
#define public_5ad64c _public_5ad64c
#define public_5ad679 _public_5ad679
#define public_5ad685 _public_5ad685

PROC_DECLARE(0x5ad620, internal_5ad620, public_5ad620);
extern "C" NAKED register_t __cdecl internal_5ad620()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_5ad64c
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5ad640
        cmp cl, 0xFF
        je public_5ad640
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_5ad64c
        public_5ad640 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5ad64c : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_5ad685
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5ad679
        cmp cl, 0xFF
        je public_5ad679
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_5ad679 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5ad685 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5ad620)
    }
}

#undef public_5ad640
#undef public_5ad64c
#undef public_5ad679
#undef public_5ad685
