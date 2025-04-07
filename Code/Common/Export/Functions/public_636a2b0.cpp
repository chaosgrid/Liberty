#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_636a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636a2cd _public_636a2cd
#define public_636a2d4 _public_636a2d4
#define public_636a2e4 _public_636a2e4
#define public_636a304 _public_636a304
#define public_636a322 _public_636a322
#define public_636a32f _public_636a32f
#define public_636a349 _public_636a349

PROC_DECLARE(0x636a2b0, internal_636a2b0, public_636a2b0);
extern "C" NAKED register_t __cdecl internal_636a2b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x30]
        xor ebx, ebx
        cmp eax, ecx
        je public_636a2d4
        cmp eax, ebx
        je public_636a2cd
        push eax
        call public_6343fb0
        add esp, 4
        public_636a2cd : nop
        mov dword ptr ds : [esi+0x2C], ebx
        mov word ptr ds : [esi+0x28], bx
        public_636a2d4 : nop
        push edi
        mov word ptr ds : [esi+0x2A], bx
        xor edi, edi
        cmp word ptr ds : [esi+0x8E], bx
        jbe public_636a304
        public_636a2e4 : nop
        mov edx, dword ptr ds : [esi+0x90]
        mov eax, dword ptr ds : [edx+edi*4]
        push eax
        call public_6391d5a
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x8E]
        add esp, 4
        inc edi
        cmp edi, ecx
        jl public_636a2e4
        public_636a304 : nop
        mov eax, dword ptr ds : [esi+0x90]
        lea edx, ds:[esi+0x94]
        cmp eax, edx
        pop edi
        je public_636a32f
        cmp eax, ebx
        je public_636a322
        push eax
        call public_6343fb0
        add esp, 4
        public_636a322 : nop
        mov dword ptr ds : [esi+0x90], ebx
        mov word ptr ds : [esi+0x8C], bx
        public_636a32f : nop
        mov word ptr ds : [esi+0x8E], bx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_636a349
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x14], ebx
        public_636a349 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636a2b0)
    }
}

#undef public_636a2cd
#undef public_636a2d4
#undef public_636a2e4
#undef public_636a304
#undef public_636a322
#undef public_636a32f
#undef public_636a349
