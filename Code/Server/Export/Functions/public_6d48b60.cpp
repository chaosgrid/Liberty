#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);

#define public_6d48b8c _public_6d48b8c
#define public_6d48bb3 _public_6d48bb3
#define public_6d48bc2 _public_6d48bc2
#define public_6d48bc7 _public_6d48bc7
#define public_6d48bd0 _public_6d48bd0
#define public_6d48bdc _public_6d48bdc
#define public_6d48be1 _public_6d48be1
#define public_6d48be7 _public_6d48be7
#define public_6d48bf0 _public_6d48bf0
#define public_6d48c0d _public_6d48c0d

PROC_DECLARE(0x6d48b60, internal_6d48b60, public_6d48b60);
extern "C" NAKED register_t __cdecl internal_6d48b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6d48be1
        mov al, byte ptr ds : [eax-1]
        cmp al, bl
        push edi
        je public_6d48bd0
        cmp al, 0xFF
        je public_6d48bd0
        mov edi, dword ptr ds : [esi+8]
        cmp edi, 0xFFFFFFFD
        jbe public_6d48b8c
        call dword ptr ds : [public_6d64b4c]
        public_6d48b8c : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6d48bb3
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d48bb3
        cmp cl, 0xFF
        je public_6d48bb3
        cmp edi, ebx
        jne public_6d48bc7
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        jmp public_6d48bd0
        public_6d48bb3 : nop
        cmp edi, ebx
        jne public_6d48bc2
        cmp eax, ebx
        je public_6d48bd0
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        jmp public_6d48bd0
        public_6d48bc2 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6d48bd0
        public_6d48bc7 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6d64b30]
        public_6d48bd0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        pop edi
        je public_6d48bdc
        mov byte ptr ds : [eax-1], 0xFF
        public_6d48bdc : nop
        mov esi, dword ptr ds : [esi+4]
        jmp public_6d48be7
        public_6d48be1 : nop
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6d48be7 : nop
        xor eax, eax
        cmp ebp, ebx
        jle public_6d48c0d
        lea ecx, ds:[ecx]
        public_6d48bf0 : nop
        mov bl, byte ptr ds : [eax+esi]
        mov ecx, eax
        and ecx, 3
        mov dl, byte ptr ds : [ecx+public_6d6b318]
        add dl, al
        or dl, 0x80
        xor bl, dl
        mov byte ptr ds : [eax+esi], bl
        inc eax
        cmp eax, ebp
        jl public_6d48bf0
        public_6d48c0d : nop
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d48b60)
    }
}

#undef public_6d48b8c
#undef public_6d48bb3
#undef public_6d48bc2
#undef public_6d48bc7
#undef public_6d48bd0
#undef public_6d48bdc
#undef public_6d48be1
#undef public_6d48be7
#undef public_6d48bf0
#undef public_6d48c0d
