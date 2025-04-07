#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f205e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f209b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1e300 _public_6f1e300
#define public_6f1e31f _public_6f1e31f
#define public_6f1e338 _public_6f1e338
#define public_6f1e340 _public_6f1e340
#define public_6f1e360 _public_6f1e360

PROC_DECLARE(0x6f1e2d0, internal_6f1e2d0, public_6f1e2d0);
extern "C" NAKED register_t __cdecl internal_6f1e2d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f1e338
        mov ecx, eax
        cmp eax, ecx
        jne public_6f1e338
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f1e31f
        nop 
        lea esp, ss:[esp]
        public_6f1e300 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f209b0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f1e300
        public_6f1e31f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f1e360
        public_6f1e338 : nop
        cmp eax, edi
        je public_6f1e360
        lea esp, ss:[esp]
        public_6f1e340 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f7d030
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f205e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f1e340
        public_6f1e360 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f1e2d0)
    }
}

#undef public_6f1e300
#undef public_6f1e31f
#undef public_6f1e338
#undef public_6f1e340
#undef public_6f1e360
