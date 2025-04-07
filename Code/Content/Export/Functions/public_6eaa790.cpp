#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eaa790);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eaa7a4 _public_6eaa7a4
#define public_6eaa7b0 _public_6eaa7b0
#define public_6eaa7f6 _public_6eaa7f6
#define public_6eaa7f8 _public_6eaa7f8
#define public_6eaa7fd _public_6eaa7fd
#define public_6eaa812 _public_6eaa812

PROC_DECLARE(0x6eaa790, internal_6eaa790, public_6eaa790);
extern "C" NAKED register_t __cdecl internal_6eaa790()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6eaa812
        push ebx
        push esi
        push edi
        public_6eaa7a4 : nop
        mov eax, dword ptr ds : [ecx+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eaa7fd
        lea ecx, ds:[ecx]
        public_6eaa7b0 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax+0x48], edx
        jne public_6eaa7f6
        push 0
        push eax
        push 0xFFFFFFFF
        mov ecx, ebp
        call public_6ea94c0
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi]
        lea edi, ds:[ecx+0x28]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, ebx
        jmp public_6eaa7f8
        public_6eaa7f6 : nop
        mov esi, dword ptr ds : [esi]
        public_6eaa7f8 : nop
        cmp esi, dword ptr ds : [ecx+0x2C]
        jne public_6eaa7b0
        public_6eaa7fd : nop
        lea ecx, ss:[esp+0x10]
        call public_6f46730
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ss : [ebp+0x74]
        jne public_6eaa7a4
        pop edi
        pop esi
        pop ebx
        public_6eaa812 : nop
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eaa790)
    }
}

#undef public_6eaa7a4
#undef public_6eaa7b0
#undef public_6eaa7f6
#undef public_6eaa7f8
#undef public_6eaa7fd
#undef public_6eaa812
