#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2852);

#define public_6ad287c _public_6ad287c
#define public_6ad2881 _public_6ad2881
#define public_6ad28a6 _public_6ad28a6
#define public_6ad28b3 _public_6ad28b3
#define public_6ad28bd _public_6ad28bd
#define public_6ad28c5 _public_6ad28c5
#define public_6ad28d0 _public_6ad28d0
#define public_6ad28ea _public_6ad28ea
#define public_6ad28eb _public_6ad28eb
#define public_6ad28f9 _public_6ad28f9
#define public_6ad28fd _public_6ad28fd
#define public_6ad2900 _public_6ad2900
#define public_6ad2908 _public_6ad2908
#define public_6ad290c _public_6ad290c
#define public_6ad2915 _public_6ad2915
#define public_6ad2921 _public_6ad2921
#define public_6ad2924 _public_6ad2924
#define public_6ad2939 _public_6ad2939
#define public_6ad293e _public_6ad293e
#define public_6ad2947 _public_6ad2947
#define public_6ad2950 _public_6ad2950
#define public_6ad296e _public_6ad296e
#define public_6ad2971 _public_6ad2971
#define public_6ad297f _public_6ad297f
#define public_6ad2981 _public_6ad2981
#define public_6ad2989 _public_6ad2989
#define public_6ad2991 _public_6ad2991
#define public_6ad2996 _public_6ad2996
#define public_6ad29ac _public_6ad29ac
#define public_6ad29c8 _public_6ad29c8
#define public_6ad29cf _public_6ad29cf
#define public_6ad29de _public_6ad29de
#define public_6ad29e0 _public_6ad29e0
#define public_6ad29e6 _public_6ad29e6
#define public_6ad29ee _public_6ad29ee
#define public_6ad29f5 _public_6ad29f5
#define public_6ad29fc _public_6ad29fc

PROC_DECLARE(0x6ad2852, internal_6ad2852, public_6ad2852);
extern "C" NAKED register_t __cdecl internal_6ad2852()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push esi
        and dword ptr ds : [ecx], 0
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], 1
        mov eax, dword ptr ss : [ebp+8]
        test edi, edi
        je public_6ad287c
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_6ad287c : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ad28c5
        public_6ad2881 : nop
        mov dl, byte ptr ds : [eax+1]
        inc eax
        cmp dl, 0x22
        je public_6ad28b3
        test dl, dl
        je public_6ad28b3
        movzx edx, dl
        test byte ptr ds : [edx+public_6ae1321], 4
        je public_6ad28a6
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ad28a6
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        public_6ad28a6 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ad2881
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_6ad2881
        public_6ad28b3 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ad28bd
        and byte ptr ds : [esi], 0
        inc esi
        public_6ad28bd : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ad2908
        inc eax
        jmp public_6ad2908
        public_6ad28c5 : nop
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ad28d0
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        public_6ad28d0 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        movzx ebx, dl
        test byte ptr ds : [ebx+public_6ae1321], 4
        je public_6ad28eb
        inc dword ptr ds : [ecx]
        test esi, esi
        je public_6ad28ea
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], bl
        inc esi
        public_6ad28ea : nop
        inc eax
        public_6ad28eb : nop
        cmp dl, 0x20
        je public_6ad28f9
        test dl, dl
        je public_6ad28fd
        cmp dl, 9
        jne public_6ad28c5
        public_6ad28f9 : nop
        test dl, dl
        jne public_6ad2900
        public_6ad28fd : nop
        dec eax
        jmp public_6ad2908
        public_6ad2900 : nop
        test esi, esi
        je public_6ad2908
        and byte ptr ds : [esi-1], 0
        public_6ad2908 : nop
        and dword ptr ss : [ebp+0x18], 0
        public_6ad290c : nop
        cmp byte ptr ds : [eax], 0
        je public_6ad29f5
        public_6ad2915 : nop
        mov dl, byte ptr ds : [eax]
        cmp dl, 0x20
        je public_6ad2921
        cmp dl, 9
        jne public_6ad2924
        public_6ad2921 : nop
        inc eax
        jmp public_6ad2915
        public_6ad2924 : nop
        cmp byte ptr ds : [eax], 0
        je public_6ad29f5
        test edi, edi
        je public_6ad2939
        mov dword ptr ds : [edi], esi
        add edi, 4
        mov dword ptr ss : [ebp+0xC], edi
        public_6ad2939 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        inc dword ptr ds : [edx]
        public_6ad293e : nop
        mov dword ptr ss : [ebp+8], 1
        xor ebx, ebx
        public_6ad2947 : nop
        cmp byte ptr ds : [eax], 0x5C
        jne public_6ad2950
        inc eax
        inc ebx
        jmp public_6ad2947
        public_6ad2950 : nop
        cmp byte ptr ds : [eax], 0x22
        jne public_6ad2981
        test bl, 1
        jne public_6ad297f
        xor edi, edi
        cmp dword ptr ss : [ebp+0x18], edi
        je public_6ad296e
        cmp byte ptr ds : [eax+1], 0x22
        lea edx, ds:[eax+1]
        jne public_6ad296e
        mov eax, edx
        jmp public_6ad2971
        public_6ad296e : nop
        mov dword ptr ss : [ebp+8], edi
        public_6ad2971 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        xor edx, edx
        cmp dword ptr ss : [ebp+0x18], edx
        sete dl
        mov dword ptr ss : [ebp+0x18], edx
        public_6ad297f : nop
        shr ebx, 1
        public_6ad2981 : nop
        mov edx, ebx
        dec ebx
        test edx, edx
        je public_6ad2996
        inc ebx
        public_6ad2989 : nop
        test esi, esi
        je public_6ad2991
        mov byte ptr ds : [esi], 0x5C
        inc esi
        public_6ad2991 : nop
        inc dword ptr ds : [ecx]
        dec ebx
        jne public_6ad2989
        public_6ad2996 : nop
        mov dl, byte ptr ds : [eax]
        test dl, dl
        je public_6ad29e6
        cmp dword ptr ss : [ebp+0x18], 0
        jne public_6ad29ac
        cmp dl, 0x20
        je public_6ad29e6
        cmp dl, 9
        je public_6ad29e6
        public_6ad29ac : nop
        cmp dword ptr ss : [ebp+8], 0
        je public_6ad29e0
        test esi, esi
        je public_6ad29cf
        movzx ebx, dl
        test byte ptr ds : [ebx+public_6ae1321], 4
        je public_6ad29c8
        mov byte ptr ds : [esi], dl
        inc esi
        inc eax
        inc dword ptr ds : [ecx]
        public_6ad29c8 : nop
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], dl
        inc esi
        jmp public_6ad29de
        public_6ad29cf : nop
        movzx edx, dl
        test byte ptr ds : [edx+public_6ae1321], 4
        je public_6ad29de
        inc eax
        inc dword ptr ds : [ecx]
        public_6ad29de : nop
        inc dword ptr ds : [ecx]
        public_6ad29e0 : nop
        inc eax
        jmp public_6ad293e
        public_6ad29e6 : nop
        test esi, esi
        je public_6ad29ee
        and byte ptr ds : [esi], 0
        inc esi
        public_6ad29ee : nop
        inc dword ptr ds : [ecx]
        jmp public_6ad290c
        public_6ad29f5 : nop
        test edi, edi
        je public_6ad29fc
        and dword ptr ds : [edi], 0
        public_6ad29fc : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        pop esi
        pop ebx
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad2852)
    }
}

#undef public_6ad287c
#undef public_6ad2881
#undef public_6ad28a6
#undef public_6ad28b3
#undef public_6ad28bd
#undef public_6ad28c5
#undef public_6ad28d0
#undef public_6ad28ea
#undef public_6ad28eb
#undef public_6ad28f9
#undef public_6ad28fd
#undef public_6ad2900
#undef public_6ad2908
#undef public_6ad290c
#undef public_6ad2915
#undef public_6ad2921
#undef public_6ad2924
#undef public_6ad2939
#undef public_6ad293e
#undef public_6ad2947
#undef public_6ad2950
#undef public_6ad296e
#undef public_6ad2971
#undef public_6ad297f
#undef public_6ad2981
#undef public_6ad2989
#undef public_6ad2991
#undef public_6ad2996
#undef public_6ad29ac
#undef public_6ad29c8
#undef public_6ad29cf
#undef public_6ad29de
#undef public_6ad29e0
#undef public_6ad29e6
#undef public_6ad29ee
#undef public_6ad29f5
#undef public_6ad29fc
