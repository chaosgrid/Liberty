#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63165a0 _public_63165a0
#define public_63165a9 _public_63165a9
#define public_63165d6 _public_63165d6
#define public_63165df _public_63165df

PROC_DECLARE(0x6316580, internal_6316580, public_6316580);
extern "C" NAKED register_t __cdecl internal_6316580()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        xor ebx, ebx
        cmp eax, ebx
        je public_63165a9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63165a0
        cmp cl, 0xFF
        je public_63165a0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63165a9
        public_63165a0 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63165a9 : nop
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_63165df
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63165d6
        cmp cl, 0xFF
        je public_63165d6
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        pop esi
        pop ebx
        ret 
        public_63165d6 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63165df : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6316580)
    }
}

#undef public_63165a0
#undef public_63165a9
#undef public_63165d6
#undef public_63165df
