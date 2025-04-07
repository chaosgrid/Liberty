#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);
CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6348b94 _public_6348b94
#define public_6348bae _public_6348bae
#define public_6348bb2 _public_6348bb2
#define public_6348bc9 _public_6348bc9
#define public_6348bd0 _public_6348bd0

PROC_DECLARE(0x6348b80, internal_6348b80, public_6348b80);
extern "C" NAKED register_t __cdecl internal_6348b80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov bx, word ptr ds : [esi+0x1E]
        mov ebp, 0
        dec ebx
        js public_6348bb2
        push edi
        public_6348b94 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [eax+ebx*4]
        cmp edi, ebp
        je public_6348bae
        mov ecx, edi
        call public_6348be0
        push edi
        call public_6391d5a
        add esp, 4
        public_6348bae : nop
        dec ebx
        jns public_6348b94
        pop edi
        public_6348bb2 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x24]
        cmp eax, ecx
        je public_6348bd0
        cmp eax, ebp
        je public_6348bc9
        push eax
        call public_6343fb0
        add esp, 4
        public_6348bc9 : nop
        mov dword ptr ds : [esi+0x20], ebp
        mov word ptr ds : [esi+0x1C], bp
        public_6348bd0 : nop
        mov word ptr ds : [esi+0x1E], bp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6348b80)
    }
}

#undef public_6348b94
#undef public_6348bae
#undef public_6348bb2
#undef public_6348bc9
#undef public_6348bd0
