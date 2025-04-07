#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65ddec1);
CLANG_FORWARD_PROC_SYMBOL(public_65de06e);
CLANG_FORWARD_PROC_SYMBOL(public_65de0b8);
CLANG_FORWARD_PROC_SYMBOL(public_65de0eb);
CLANG_FORWARD_PROC_SYMBOL(public_65de114);

#define public_65ddee8 _public_65ddee8
#define public_65ddeef _public_65ddeef
#define public_65ddefe _public_65ddefe
#define public_65ddf53 _public_65ddf53
#define public_65ddf64 _public_65ddf64
#define public_65ddf76 _public_65ddf76
#define public_65ddf93 _public_65ddf93
#define public_65ddf9a _public_65ddf9a
#define public_65ddfb4 _public_65ddfb4
#define public_65ddfbf _public_65ddfbf
#define public_65ddfc6 _public_65ddfc6
#define public_65de000 _public_65de000
#define public_65de00c _public_65de00c
#define public_65de00e _public_65de00e
#define public_65de031 _public_65de031
#define public_65de038 _public_65de038
#define public_65de044 _public_65de044
#define public_65de04d _public_65de04d
#define public_65de052 _public_65de052
#define public_65de05c _public_65de05c
#define public_65de05f _public_65de05f

PROC_DECLARE(0x65ddec1, internal_65ddec1, public_65ddec1);
extern "C" NAKED register_t __cdecl internal_65ddec1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push 0x19
        call public_65dceab
        push dword ptr ss : [ebp+8]
        call public_65de06e
        mov ebx, eax
        pop ecx
        cmp ebx, dword ptr ds : [public_65e66cc]
        pop ecx
        mov dword ptr ss : [ebp+8], ebx
        jne public_65ddeef
        public_65ddee8 : nop
        xor esi, esi
        jmp public_65de05f
        public_65ddeef : nop
        test ebx, ebx
        je public_65de04d
        xor edx, edx
        mov eax, offset public_65e5c60
        public_65ddefe : nop
        cmp dword ptr ds : [eax], ebx
        je public_65ddf76
        add eax, 0x30
        inc edx
        cmp eax, offset public_65e5d50
        jl public_65ddefe
        lea eax, ss:[ebp-0x18]
        push eax
        push ebx
        call dword ptr ds : [public_65e1104]
        push 1
        pop esi
        cmp eax, esi
        jne public_65de044
        push 0x40
        and dword ptr ds : [public_65e68e4], 0
        pop ecx
        xor eax, eax
        mov edi, offset public_65e67e0
        cmp dword ptr ss : [ebp-0x18], esi
        rep stosd
        stosb 
        mov dword ptr ds : [public_65e66cc], ebx
        jbe public_65de031
        cmp byte ptr ss : [ebp-0x12], 0
        je public_65de00c
        lea ecx, ss:[ebp-0x11]
        public_65ddf53 : nop
        mov dl, byte ptr ds : [ecx]
        test dl, dl
        je public_65de00c
        movzx eax, byte ptr ds : [ecx-1]
        movzx edx, dl
        public_65ddf64 : nop
        cmp eax, edx
        ja public_65de000
        or byte ptr ds : [eax+public_65e67e1], 4
        inc eax
        jmp public_65ddf64
        public_65ddf76 : nop
        and dword ptr ss : [ebp-4], 0
        push 0x40
        pop ecx
        xor eax, eax
        mov edi, offset public_65e67e0
        lea esi, ds:[edx+edx*2]
        rep stosd
        shl esi, 4
        stosb 
        lea ebx, ds : [esi+public_65e5c70]
        public_65ddf93 : nop
        cmp byte ptr ds : [ebx], 0
        mov ecx, ebx
        je public_65ddfc6
        public_65ddf9a : nop
        mov dl, byte ptr ds : [ecx+1]
        test dl, dl
        je public_65ddfc6
        movzx eax, byte ptr ds : [ecx]
        movzx edi, dl
        cmp eax, edi
        ja public_65ddfbf
        mov edx, dword ptr ss : [ebp-4]
        mov dl, byte ptr ds : [edx+public_65e5c58]
        public_65ddfb4 : nop
        or byte ptr ds : [eax+public_65e67e1], dl
        inc eax
        cmp eax, edi
        jbe public_65ddfb4
        public_65ddfbf : nop
        inc ecx
        inc ecx
        cmp byte ptr ds : [ecx], 0
        jne public_65ddf9a
        public_65ddfc6 : nop
        inc dword ptr ss : [ebp-4]
        add ebx, 8
        cmp dword ptr ss : [ebp-4], 4
        jb public_65ddf93
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_65e66dc], 1
        push eax
        mov dword ptr ds : [public_65e66cc], eax
        call public_65de0b8
        lea esi, ds : [esi+public_65e5c64]
        mov edi, offset public_65e66d0
        movsd 
        movsd 
        pop ecx
        mov dword ptr ds : [public_65e68e4], eax
        movsd 
        jmp public_65de052
        public_65de000 : nop
        inc ecx
        inc ecx
        cmp byte ptr ds : [ecx-1], 0
        jne public_65ddf53
        public_65de00c : nop
        mov eax, esi
        public_65de00e : nop
        or byte ptr ds : [eax+public_65e67e1], 8
        inc eax
        cmp eax, 0xFF
        jb public_65de00e
        push ebx
        call public_65de0b8
        pop ecx
        mov dword ptr ds : [public_65e68e4], eax
        mov dword ptr ds : [public_65e66dc], esi
        jmp public_65de038
        public_65de031 : nop
        and dword ptr ds : [public_65e66dc], 0
        public_65de038 : nop
        xor eax, eax
        mov edi, offset public_65e66d0
        stosd 
        stosd 
        stosd 
        jmp public_65de052
        public_65de044 : nop
        cmp dword ptr ds : [public_65e6400], 0
        je public_65de05c
        public_65de04d : nop
        call public_65de0eb
        public_65de052 : nop
        call public_65de114
        jmp public_65ddee8
        public_65de05c : nop
        or esi, 0xFFFFFFFF
        public_65de05f : nop
        push 0x19
        call public_65dcf0c
        pop ecx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65ddec1)
    }
}

#undef public_65ddee8
#undef public_65ddeef
#undef public_65ddefe
#undef public_65ddf53
#undef public_65ddf64
#undef public_65ddf76
#undef public_65ddf93
#undef public_65ddf9a
#undef public_65ddfb4
#undef public_65ddfbf
#undef public_65ddfc6
#undef public_65de000
#undef public_65de00c
#undef public_65de00e
#undef public_65de031
#undef public_65de038
#undef public_65de044
#undef public_65de04d
#undef public_65de052
#undef public_65de05c
#undef public_65de05f
