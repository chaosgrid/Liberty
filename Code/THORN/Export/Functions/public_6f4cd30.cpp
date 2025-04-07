#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cd30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f9b0);

#define public_6f4cd45 _public_6f4cd45
#define public_6f4cd59 _public_6f4cd59
#define public_6f4cd71 _public_6f4cd71
#define public_6f4cd84 _public_6f4cd84
#define public_6f4cd8b _public_6f4cd8b
#define public_6f4cd9c _public_6f4cd9c
#define public_6f4cda1 _public_6f4cda1
#define public_6f4cdba _public_6f4cdba
#define public_6f4cdce _public_6f4cdce
#define public_6f4cdec _public_6f4cdec
#define public_6f4cdff _public_6f4cdff
#define public_6f4ce0c _public_6f4ce0c
#define public_6f4ce2d _public_6f4ce2d

PROC_DECLARE(0x6f4cd30, internal_6f4cd30, public_6f4cd30);
extern "C" NAKED register_t __cdecl internal_6f4cd30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [ebx], 0xFFFFFFFE
        push esi
        push edi
        je public_6f4cd45
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_6f4cd45 : nop
        mov esi, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [public_6f5a0c4]
        add esi, 0x28
        mov dword ptr ss : [esp+0x10], 1
        public_6f4cd59 : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f4cd71
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 8
        push ecx
        call edi
        add esp, 8
        jmp public_6f4cd84
        public_6f4cd71 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 8
        public_6f4cd84 : nop
        test eax, eax
        je public_6f4cd8b
        inc esi
        jmp public_6f4cd59
        public_6f4cd8b : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x2D
        jne public_6f4cd9c
        inc esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jmp public_6f4cda1
        public_6f4cd9c : nop
        cmp al, 0x2B
        jne public_6f4cda1
        inc esi
        public_6f4cda1 : nop
        mov edx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [edx], 1
        jle public_6f4cdba
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push 4
        push eax
        call edi
        add esp, 8
        jmp public_6f4cdce
        public_6f4cdba : nop
        mov edx, dword ptr ds : [public_6f5a0bc]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        xor eax, eax
        mov eax, dword ptr ds : [edx]
        mov al, byte ptr ds : [eax+ecx*2]
        and eax, 4
        public_6f4cdce : nop
        test eax, eax
        jne public_6f4ce0c
        mov ecx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [ecx], 1
        jle public_6f4cdec
        xor edx, edx
        mov dl, byte ptr ds : [esi+1]
        push 4
        push edx
        call edi
        add esp, 8
        jmp public_6f4cdff
        public_6f4cdec : nop
        mov ecx, dword ptr ds : [public_6f5a0bc]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 4
        public_6f4cdff : nop
        test eax, eax
        jne public_6f4ce0c
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        ret 
        public_6f4ce0c : nop
        push esi
        call public_6f4f9b0
        fcom qword ptr ds : [public_6f5b430]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_6f4ce2d
        pop edi
        fstp st(0)
        pop esi
        mov eax, 2
        pop ebx
        ret 
        public_6f4ce2d : nop
        fild dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ebx], 0xFFFFFFFF
        fmul st, st(1)
        xor eax, eax
        fstp qword ptr ds : [ebx+8]
        pop ebx
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6f4cd30)
    }
}

#undef public_6f4cd45
#undef public_6f4cd59
#undef public_6f4cd71
#undef public_6f4cd84
#undef public_6f4cd8b
#undef public_6f4cd9c
#undef public_6f4cda1
#undef public_6f4cdba
#undef public_6f4cdce
#undef public_6f4cdec
#undef public_6f4cdff
#undef public_6f4ce0c
#undef public_6f4ce2d
