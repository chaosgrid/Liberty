#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6362a30);

#define public_6362a48 _public_6362a48
#define public_6362a5c _public_6362a5c
#define public_6362a5f _public_6362a5f
#define public_6362a94 _public_6362a94
#define public_6362a9b _public_6362a9b

PROC_DECLARE(0x6362a30, internal_6362a30, public_6362a30);
extern "C" NAKED register_t __cdecl internal_6362a30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov di, word ptr ds : [esi+0x8A]
        xor ebp, ebp
        lea ebx, ds:[edi-1]
        cmp ebx, ebp
        jl public_6362a5f
        public_6362a48 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax+ebx*4]
        cmp ecx, ebp
        je public_6362a5c
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_6362a5c : nop
        dec ebx
        jns public_6362a48
        public_6362a5f : nop
        mov eax, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x80]
        neg edi
        push edi
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x8C]
        lea ecx, ds:[esi+0x90]
        cmp eax, ecx
        je public_6362a9b
        cmp eax, ebp
        je public_6362a94
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x8C], ebp
        public_6362a94 : nop
        mov word ptr ds : [esi+0x88], bp
        public_6362a9b : nop
        pop edi
        mov word ptr ds : [esi+0x8A], bp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6362a30)
    }
}

#undef public_6362a48
#undef public_6362a5c
#undef public_6362a5f
#undef public_6362a94
#undef public_6362a9b
