#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);

#define public_6262675 _public_6262675
#define public_626267e _public_626267e
#define public_62626a6 _public_62626a6
#define public_62626cd _public_62626cd
#define public_62626dc _public_62626dc
#define public_62626e1 _public_62626e1
#define public_62626ea _public_62626ea
#define public_62626f3 _public_62626f3
#define public_626271c _public_626271c
#define public_6262725 _public_6262725
#define public_626272e _public_626272e
#define public_6262745 _public_6262745

PROC_DECLARE(0x6262630, internal_6262630, public_6262630);
extern "C" NAKED register_t __cdecl internal_6262630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63991c0]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edx, ebx
        push edi
        je public_6262675
        mov al, byte ptr ds : [edx-1]
        cmp al, bl
        je public_6262675
        cmp al, 0xFF
        je public_6262675
        dec al
        mov byte ptr ds : [edx-1], al
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_63991a4]
        public_6262675 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_626267e
        mov ebp, eax
        public_626267e : nop
        cmp ebp, ebx
        jbe public_62626f3
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ds : [esi+8]
        sub edi, ebp
        add esp, 0xC
        cmp edi, 0xFFFFFFFD
        jbe public_62626a6
        call dword ptr ds : [public_63991b4]
        public_62626a6 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_62626cd
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_62626cd
        cmp cl, 0xFF
        je public_62626cd
        cmp edi, ebx
        jne public_62626e1
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_63991b8]
        jmp public_62626f3
        public_62626cd : nop
        cmp edi, ebx
        jne public_62626dc
        cmp eax, ebx
        je public_62626f3
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        jmp public_62626f3
        public_62626dc : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_62626ea
        public_62626e1 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_63991b0]
        public_62626ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], bl
        public_62626f3 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_626272e
        cmp dword ptr ds : [esi+0x14], ebx
        mov edi, dword ptr ds : [public_639913c]
        je public_6262725
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_626271c
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_626271c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call edi
        mov dword ptr ds : [esi+0x14], ebx
        public_6262725 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call edi
        mov dword ptr ds : [esi+0x10], ebp
        public_626272e : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_6262745
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_6262745 : nop
        pop edi
        mov dword ptr ds : [esi+0x20], ebx
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6262630)
    }
}

#undef public_6262675
#undef public_626267e
#undef public_62626a6
#undef public_62626cd
#undef public_62626dc
#undef public_62626e1
#undef public_62626ea
#undef public_62626f3
#undef public_626271c
#undef public_6262725
#undef public_626272e
#undef public_6262745
