#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_445ec0 _public_445ec0
#define public_445ec9 _public_445ec9
#define public_445eec _public_445eec
#define public_445ef5 _public_445ef5
#define public_445f22 _public_445f22
#define public_445f2b _public_445f2b

PROC_DECLARE(0x445ea0, internal_445ea0, public_445ea0);
extern "C" NAKED register_t __cdecl internal_445ea0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x58]
        xor ebx, ebx
        cmp eax, ebx
        je public_445ec9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_445ec0
        cmp cl, 0xFF
        je public_445ec0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_445ec9
        public_445ec0 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_445ec9 : nop
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_445ef5
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_445eec
        cmp cl, 0xFF
        je public_445eec
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_445ef5
        public_445eec : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_445ef5 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_445f2b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_445f22
        cmp cl, 0xFF
        je public_445f22
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_445f22 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_445f2b : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x445ea0)
    }
}

#undef public_445ec0
#undef public_445ec9
#undef public_445eec
#undef public_445ef5
#undef public_445f22
#undef public_445f2b
