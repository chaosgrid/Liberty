#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5686d0 _public_5686d0
#define public_5686d9 _public_5686d9
#define public_5686ff _public_5686ff
#define public_568708 _public_568708
#define public_56872b _public_56872b
#define public_568737 _public_568737
#define public_56875a _public_56875a
#define public_568766 _public_568766
#define public_5687a8 _public_5687a8
#define public_5687b4 _public_5687b4

PROC_DECLARE(0x5686b0, internal_5686b0, public_5686b0);
extern "C" NAKED register_t __cdecl internal_5686b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x78]
        xor ebx, ebx
        cmp eax, ebx
        je public_5686d9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5686d0
        cmp cl, 0xFF
        je public_5686d0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5686d9
        public_5686d0 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5686d9 : nop
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov eax, dword ptr ds : [esi+0x68]
        cmp eax, ebx
        je public_568708
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5686ff
        cmp cl, 0xFF
        je public_5686ff
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_568708
        public_5686ff : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_568708 : nop
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov eax, dword ptr ds : [esi+0x58]
        cmp eax, ebx
        je public_568737
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_56872b
        cmp cl, 0xFF
        je public_56872b
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_568737
        public_56872b : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_568737 : nop
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, ebx
        je public_568766
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_56875a
        cmp cl, 0xFF
        je public_56875a
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_568766
        public_56875a : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_568766 : nop
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_5687b4
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5687a8
        cmp cl, 0xFF
        je public_5687a8
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_5687a8 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5687b4 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5686b0)
    }
}

#undef public_5686d0
#undef public_5686d9
#undef public_5686ff
#undef public_568708
#undef public_56872b
#undef public_568737
#undef public_56875a
#undef public_568766
#undef public_5687a8
#undef public_5687b4
