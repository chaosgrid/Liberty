#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eecae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eecb04 _public_6eecb04
#define public_6eecb22 _public_6eecb22
#define public_6eecb2d _public_6eecb2d
#define public_6eecb36 _public_6eecb36
#define public_6eecb41 _public_6eecb41
#define public_6eecb5d _public_6eecb5d
#define public_6eecb74 _public_6eecb74
#define public_6eecb81 _public_6eecb81
#define public_6eecb8c _public_6eecb8c
#define public_6eecb8f _public_6eecb8f
#define public_6eecba7 _public_6eecba7
#define public_6eecbb2 _public_6eecbb2
#define public_6eecbb5 _public_6eecbb5
#define public_6eecbca _public_6eecbca
#define public_6eecbd5 _public_6eecbd5
#define public_6eecbe0 _public_6eecbe0
#define public_6eecbe3 _public_6eecbe3
#define public_6eecbf7 _public_6eecbf7
#define public_6eecc03 _public_6eecc03
#define public_6eecc0f _public_6eecc0f
#define public_6eecc12 _public_6eecc12
#define public_6eecc30 _public_6eecc30
#define public_6eecc6f _public_6eecc6f
#define public_6eecc82 _public_6eecc82
#define public_6eecc8d _public_6eecc8d
#define public_6eecc90 _public_6eecc90
#define public_6eecc9b _public_6eecc9b
#define public_6eeccae _public_6eeccae
#define public_6eeccd5 _public_6eeccd5
#define public_6eeccef _public_6eeccef
#define public_6eecd15 _public_6eecd15
#define public_6eecd28 _public_6eecd28
#define public_6eecd35 _public_6eecd35
#define public_6eecd37 _public_6eecd37
#define public_6eecd42 _public_6eecd42
#define public_6eecd59 _public_6eecd59
#define public_6eecd71 _public_6eecd71
#define public_6eecd7e _public_6eecd7e
#define public_6eecd80 _public_6eecd80
#define public_6eecd8c _public_6eecd8c
#define public_6eecdb6 _public_6eecdb6
#define public_6eecdce _public_6eecdce
#define public_6eecdde _public_6eecdde
#define public_6eecde8 _public_6eecde8
#define public_6eece0b _public_6eece0b
#define public_6eece1e _public_6eece1e
#define public_6eece29 _public_6eece29
#define public_6eece2c _public_6eece2c
#define public_6eece36 _public_6eece36
#define public_6eece5f _public_6eece5f
#define public_6eece72 _public_6eece72
#define public_6eece7f _public_6eece7f
#define public_6eece81 _public_6eece81
#define public_6eece84 _public_6eece84
#define public_6eece87 _public_6eece87
#define public_6eece8e _public_6eece8e

PROC_DECLARE(0x6eecae0, internal_6eecae0, public_6eecae0);
extern "C" NAKED register_t __cdecl internal_6eecae0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f46640
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eecb22
        mov eax, dword ptr ds : [esi+8]
        public_6eecb04 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6eecba7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6eecbb5
        public_6eecb22 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6eecb2d
        mov eax, edx
        jmp public_6eecb04
        public_6eecb2d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6eecb41
        public_6eecb36 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6eecb36
        public_6eecb41 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eecb04
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eecb5d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6eecb74
        public_6eecb5d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6eecb74 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6eecb81
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eecb8f
        public_6eecb81 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6eecb8c
        mov dword ptr ds : [edx], ecx
        jmp public_6eecb8f
        public_6eecb8c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eecb8f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6eecc12
        public_6eecba7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6eecbb2
        mov dword ptr ds : [ecx], eax
        jmp public_6eecbb5
        public_6eecbb2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6eecbb5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6eecbe3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eecbca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eecbe0
        public_6eecbca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6eecbe0
        public_6eecbd5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6eecbd5
        public_6eecbe0 : nop
        mov dword ptr ss : [ebp], edx
        public_6eecbe3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6eecc12
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eecbf7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6eecc0f
        public_6eecbf7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6eecc0f
        public_6eecc03 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6eecc03
        public_6eecc0f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6eecc12 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_6eece8e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6eece87
        nop 
        public_6eecc30 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6eece87
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eeccef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eecc9b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eecc6f
        mov dword ptr ds : [esi+4], ecx
        public_6eecc6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eecc82
        mov dword ptr ds : [esi+4], edx
        jmp public_6eecc90
        public_6eecc82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eecc8d
        mov dword ptr ds : [esi], edx
        jmp public_6eecc90
        public_6eecc8d : nop
        mov dword ptr ds : [esi+8], edx
        public_6eecc90 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eecc9b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6eeccae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6eecd59
        public_6eeccae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6eecd8c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eeccd5
        mov dword ptr ds : [esi+4], ecx
        public_6eeccd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eecd71
        mov dword ptr ds : [esi+4], edx
        jmp public_6eecd80
        public_6eeccef : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eecd42
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eecd15
        mov dword ptr ds : [esi+4], ecx
        public_6eecd15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eecd28
        mov dword ptr ds : [esi+4], edx
        jmp public_6eecd37
        public_6eecd28 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eecd35
        mov dword ptr ds : [esi+8], edx
        jmp public_6eecd37
        public_6eecd35 : nop
        mov dword ptr ds : [esi], edx
        public_6eecd37 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6eecd42 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6eecde8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6eecde8
        public_6eecd59 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eecc30
        jmp public_6eece87
        public_6eecd71 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eecd7e
        mov dword ptr ds : [esi+8], edx
        jmp public_6eecd80
        public_6eecd7e : nop
        mov dword ptr ds : [esi], edx
        public_6eecd80 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6eecd8c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eecdb6
        mov dword ptr ds : [esi+4], ecx
        public_6eecdb6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eecdce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eece84
        public_6eecdce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eecdde
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eece84
        public_6eecdde : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6eece84
        public_6eecde8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6eece36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eece0b
        mov dword ptr ds : [esi+4], ecx
        public_6eece0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eece1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6eece2c
        public_6eece1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6eece29
        mov dword ptr ds : [esi], edx
        jmp public_6eece2c
        public_6eece29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6eece2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6eece36 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6eece5f
        mov dword ptr ds : [esi+4], ecx
        public_6eece5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6eece72
        mov dword ptr ds : [esi+4], edx
        jmp public_6eece81
        public_6eece72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6eece7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6eece81
        public_6eece7f : nop
        mov dword ptr ds : [esi], edx
        public_6eece81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eece84 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eece87 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_6eece8e : nop
        lea ecx, ds:[esi+0xC]
        call public_6eec9b0
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eecae0)
    }
}

#undef public_6eecb04
#undef public_6eecb22
#undef public_6eecb2d
#undef public_6eecb36
#undef public_6eecb41
#undef public_6eecb5d
#undef public_6eecb74
#undef public_6eecb81
#undef public_6eecb8c
#undef public_6eecb8f
#undef public_6eecba7
#undef public_6eecbb2
#undef public_6eecbb5
#undef public_6eecbca
#undef public_6eecbd5
#undef public_6eecbe0
#undef public_6eecbe3
#undef public_6eecbf7
#undef public_6eecc03
#undef public_6eecc0f
#undef public_6eecc12
#undef public_6eecc30
#undef public_6eecc6f
#undef public_6eecc82
#undef public_6eecc8d
#undef public_6eecc90
#undef public_6eecc9b
#undef public_6eeccae
#undef public_6eeccd5
#undef public_6eeccef
#undef public_6eecd15
#undef public_6eecd28
#undef public_6eecd35
#undef public_6eecd37
#undef public_6eecd42
#undef public_6eecd59
#undef public_6eecd71
#undef public_6eecd7e
#undef public_6eecd80
#undef public_6eecd8c
#undef public_6eecdb6
#undef public_6eecdce
#undef public_6eecdde
#undef public_6eecde8
#undef public_6eece0b
#undef public_6eece1e
#undef public_6eece29
#undef public_6eece2c
#undef public_6eece36
#undef public_6eece5f
#undef public_6eece72
#undef public_6eece7f
#undef public_6eece81
#undef public_6eece84
#undef public_6eece87
#undef public_6eece8e
