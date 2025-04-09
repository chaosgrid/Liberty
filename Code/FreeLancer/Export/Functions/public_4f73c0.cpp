#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f73c0);

#define public_4f73d0 _public_4f73d0
#define public_4f73e0 _public_4f73e0
#define public_4f741a _public_4f741a
#define public_4f741f _public_4f741f
#define public_4f7432 _public_4f7432
#define public_4f743c _public_4f743c
#define public_4f7441 _public_4f7441
#define public_4f7459 _public_4f7459
#define public_4f7460 _public_4f7460

PROC_DECLARE(0x4f73c0, internal_4f73c0, public_4f73c0);
extern "C" NAKED register_t __cdecl internal_4f73c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, offset public_674ce4
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
        public_4f73d0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_4f7460
        nop 
        lea esp, ss:[esp]
        public_4f73e0 : nop
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        cmp dword ptr ds : [esi+0x68], ebx
        je public_4f7459
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        cmp eax, ebx
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], ebx
        lea edx, ds : [ecx*4+public_674ce0]
        je public_4f7441
        mov ecx, dword ptr ds : [eax]
        cmp ecx, ebx
        jne public_4f741f
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        mov dword ptr ds : [edx+4], ecx
        je public_4f741a
        mov dword ptr ds : [ecx], ebx
        jmp public_4f743c
        public_4f741a : nop
        mov dword ptr ds : [edx+8], ebx
        jmp public_4f743c
        public_4f741f : nop
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        jne public_4f7432
        cmp ecx, ebx
        mov dword ptr ds : [edx+8], ecx
        je public_4f743c
        mov dword ptr ds : [ecx+4], ebx
        jmp public_4f743c
        public_4f7432 : nop
        mov dword ptr ds : [ecx+4], edi
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        public_4f743c : nop
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        public_4f7441 : nop
        dec dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x58]
        dec ecx
        mov eax, ecx
        cmp eax, ebx
        mov dword ptr ds : [esi+0x58], ecx
        jg public_4f7459
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        public_4f7459 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        jne public_4f73e0
        public_4f7460 : nop
        add ebp, 0xC
        cmp ebp, offset public_674f18
        jl public_4f73d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4f73c0)
    }
}

#undef public_4f73d0
#undef public_4f73e0
#undef public_4f741a
#undef public_4f741f
#undef public_4f7432
#undef public_4f743c
#undef public_4f7441
#undef public_4f7459
#undef public_4f7460
