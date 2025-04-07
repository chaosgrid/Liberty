#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1120);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac1143 _public_6ac1143
#define public_6ac116d _public_6ac116d
#define public_6ac1176 _public_6ac1176

PROC_DECLARE(0x6ac1120, internal_6ac1120, public_6ac1120);
extern "C" NAKED register_t __cdecl internal_6ac1120()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_6ada1e0
        cmp eax, ebx
        je public_6ac1143
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_6ada184]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        public_6ac1143 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6ac1176
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ac116d
        cmp cl, 0xFF
        je public_6ac116d
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi], offset public_6ada20c
        pop esi
        pop ebx
        ret 
        public_6ac116d : nop
        push eax
        call public_6acf3d0
        add esp, 4
        public_6ac1176 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi], offset public_6ada20c
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ac1120)
    }
}

#undef public_6ac1143
#undef public_6ac116d
#undef public_6ac1176
