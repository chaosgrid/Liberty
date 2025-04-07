#include "ReadFile-PCH.h"


#define public_6b75f7f _public_6b75f7f
#define public_6b75f88 _public_6b75f88
#define public_6b75f9d _public_6b75f9d
#define public_6b75fbe _public_6b75fbe
#define public_6b75fcf _public_6b75fcf
#define public_6b75fe7 _public_6b75fe7
#define public_6b75ffb _public_6b75ffb
#define public_6b75fff _public_6b75fff
#define public_6b76015 _public_6b76015
#define public_6b76018 _public_6b76018
#define public_6b7601d _public_6b7601d
#define public_6b76032 _public_6b76032
#define public_6b76049 _public_6b76049
#define public_6b7605a _public_6b7605a
#define public_6b7605f _public_6b7605f
#define public_6b7606e _public_6b7606e
#define public_6b7607f _public_6b7607f
#define public_6b76083 _public_6b76083
#define public_6b760ab _public_6b760ab

PROC_DECLARE(0x6b75f60, internal_6b75f60, public_6b75f60);
extern "C" NAKED register_t __cdecl internal_6b75f60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x12C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp edi, 2
        lea ecx, ds:[ecx+eax+0xD]
        jg public_6b75f88
        public_6b75f7f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6b75f88 : nop
        mov al, byte ptr ss : [ebp]
        test al, al
        je public_6b75fbe
        cmp al, 0x5C
        je public_6b75f9d
        cmp al, 0x2F
        je public_6b75f9d
        cmp byte ptr ss : [ebp+1], 0x3A
        jne public_6b75fbe
        public_6b75f9d : nop
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push ebp
        push esi
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6b75fbe : nop
        mov al, byte ptr ds : [ecx]
        mov ebx, dword ptr ss : [esp+0x18]
        xor esi, esi
        test al, al
        je public_6b75fe7
        mov edx, ebx
        dec edi
        sub edx, ecx
        public_6b75fcf : nop
        cmp esi, edi
        jge public_6b75f7f
        mov byte ptr ds : [edx+ecx], al
        mov al, byte ptr ds : [ecx+1]
        inc esi
        inc ecx
        test al, al
        jne public_6b75fcf
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x18]
        public_6b75fe7 : nop
        lea eax, ds:[esi+ebx]
        cmp eax, ebx
        je public_6b75ffb
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b75fff
        cmp cl, 0x2F
        je public_6b75fff
        public_6b75ffb : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b75fff : nop
        mov cl, byte ptr ss : [ebp]
        mov dl, 0x2E
        cmp cl, dl
        jne public_6b7606e
        mov cl, byte ptr ss : [ebp+1]
        cmp cl, 0x5C
        je public_6b76015
        cmp cl, 0x2F
        jne public_6b76018
        public_6b76015 : nop
        add ebp, 2
        public_6b76018 : nop
        cmp byte ptr ss : [ebp], dl
        jne public_6b7606e
        public_6b7601d : nop
        cmp byte ptr ss : [ebp+1], dl
        jne public_6b7606e
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, 2
        jle public_6b75f7f
        sub eax, 2
        public_6b76032 : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x5C
        je public_6b76049
        cmp cl, 0x2F
        je public_6b76049
        cmp eax, ebx
        je public_6b75f7f
        dec eax
        jmp public_6b76032
        public_6b76049 : nop
        mov cl, byte ptr ss : [ebp+2]
        cmp cl, 0x5C
        je public_6b7605a
        cmp cl, 0x2F
        je public_6b7605a
        xor ecx, ecx
        jmp public_6b7605f
        public_6b7605a : nop
        mov ecx, 1
        public_6b7605f : nop
        and ecx, 0xFF
        lea ebp, ds:[ecx+ebp+2]
        cmp byte ptr ss : [ebp], dl
        je public_6b7601d
        public_6b7606e : nop
        cmp eax, ebx
        je public_6b7607f
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b76083
        cmp cl, 0x2F
        je public_6b76083
        public_6b7607f : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b76083 : nop
        mov ecx, ebx
        sub ecx, eax
        add ecx, edi
        cmp ecx, 1
        jle public_6b760ab
        push ecx
        push ebp
        push eax
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [ebx+edi-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6b760ab : nop
        pop edi
        pop esi
        mov byte ptr ds : [eax], 0
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b75f60)
    }
}

#undef public_6b75f7f
#undef public_6b75f88
#undef public_6b75f9d
#undef public_6b75fbe
#undef public_6b75fcf
#undef public_6b75fe7
#undef public_6b75ffb
#undef public_6b75fff
#undef public_6b76015
#undef public_6b76018
#undef public_6b7601d
#undef public_6b76032
#undef public_6b76049
#undef public_6b7605a
#undef public_6b7605f
#undef public_6b7606e
#undef public_6b7607f
#undef public_6b76083
#undef public_6b760ab
