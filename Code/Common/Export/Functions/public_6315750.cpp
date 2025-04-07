#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6315770 _public_6315770
#define public_6315779 _public_6315779
#define public_63157a6 _public_63157a6
#define public_63157af _public_63157af

PROC_DECLARE(0x6315750, internal_6315750, public_6315750);
extern "C" NAKED register_t __cdecl internal_6315750()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        xor ebx, ebx
        cmp eax, ebx
        je public_6315779
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6315770
        cmp cl, 0xFF
        je public_6315770
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6315779
        public_6315770 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6315779 : nop
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_63157af
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63157a6
        cmp cl, 0xFF
        je public_63157a6
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        pop esi
        pop ebx
        ret 
        public_63157a6 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63157af : nop
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6315750)
    }
}

#undef public_6315770
#undef public_6315779
#undef public_63157a6
#undef public_63157af
