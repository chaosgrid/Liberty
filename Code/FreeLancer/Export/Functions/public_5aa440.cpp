#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aa440);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5aa482 _public_5aa482
#define public_5aa48e _public_5aa48e
#define public_5aa490 _public_5aa490
#define public_5aa4ab _public_5aa4ab
#define public_5aa4b0 _public_5aa4b0
#define public_5aa4c0 _public_5aa4c0
#define public_5aa4dc _public_5aa4dc
#define public_5aa4e5 _public_5aa4e5
#define public_5aa4e9 _public_5aa4e9
#define public_5aa4fc _public_5aa4fc

PROC_DECLARE(0x5aa440, internal_5aa440, public_5aa440);
extern "C" NAKED register_t __cdecl internal_5aa440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_673344]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        je public_5aa4fc
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        push eax
        call dword ptr ds : [edx+0x40]
        mov byte ptr ds : [public_67ecbe], bl
        mov byte ptr ds : [public_67ecbf], bl
        mov byte ptr ds : [esi+0x184], bl
        mov byte ptr ds : [esi+0x1B0], bl
        mov byte ptr ds : [esi+0x1D4], bl
        xor edi, edi
        push ebp
        public_5aa482 : nop
        cmp edi, ebx
        jne public_5aa48e
        mov edi, dword ptr ds : [esi+0x1B8]
        jmp public_5aa490
        public_5aa48e : nop
        mov edi, dword ptr ds : [edi]
        public_5aa490 : nop
        cmp edi, ebx
        je public_5aa4b0
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_5aa4ab
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5aa4ab : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_5aa482
        public_5aa4b0 : nop
        mov edi, dword ptr ds : [esi+0x1B8]
        cmp edi, ebx
        pop ebp
        je public_5aa4e9
        nop 
        lea esp, ss:[esp]
        public_5aa4c0 : nop
        cmp byte ptr ds : [esi+0x1C0], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5aa4dc
        mov ecx, dword ptr ds : [esi+0x1C4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x1C4], eax
        jmp public_5aa4e5
        public_5aa4dc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5aa4e5 : nop
        cmp edi, ebx
        jne public_5aa4c0
        public_5aa4e9 : nop
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov byte ptr ds : [esi+0x21C], bl
        pop edi
        public_5aa4fc : nop
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5aa440)
    }
}

#undef public_5aa482
#undef public_5aa48e
#undef public_5aa490
#undef public_5aa4ab
#undef public_5aa4b0
#undef public_5aa4c0
#undef public_5aa4dc
#undef public_5aa4e5
#undef public_5aa4e9
#undef public_5aa4fc
