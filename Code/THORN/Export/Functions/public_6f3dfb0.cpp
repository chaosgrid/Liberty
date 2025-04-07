#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d480);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3dfd4 _public_6f3dfd4
#define public_6f3dff2 _public_6f3dff2
#define public_6f3dffd _public_6f3dffd
#define public_6f3e006 _public_6f3e006
#define public_6f3e011 _public_6f3e011
#define public_6f3e02d _public_6f3e02d
#define public_6f3e044 _public_6f3e044
#define public_6f3e051 _public_6f3e051
#define public_6f3e05c _public_6f3e05c
#define public_6f3e05f _public_6f3e05f
#define public_6f3e077 _public_6f3e077
#define public_6f3e082 _public_6f3e082
#define public_6f3e085 _public_6f3e085
#define public_6f3e09a _public_6f3e09a
#define public_6f3e0a5 _public_6f3e0a5
#define public_6f3e0b0 _public_6f3e0b0
#define public_6f3e0b3 _public_6f3e0b3
#define public_6f3e0c7 _public_6f3e0c7
#define public_6f3e0d3 _public_6f3e0d3
#define public_6f3e0df _public_6f3e0df
#define public_6f3e0e2 _public_6f3e0e2
#define public_6f3e100 _public_6f3e100
#define public_6f3e13f _public_6f3e13f
#define public_6f3e152 _public_6f3e152
#define public_6f3e15d _public_6f3e15d
#define public_6f3e160 _public_6f3e160
#define public_6f3e16b _public_6f3e16b
#define public_6f3e17e _public_6f3e17e
#define public_6f3e1a5 _public_6f3e1a5
#define public_6f3e1bf _public_6f3e1bf
#define public_6f3e1e5 _public_6f3e1e5
#define public_6f3e1f8 _public_6f3e1f8
#define public_6f3e205 _public_6f3e205
#define public_6f3e207 _public_6f3e207
#define public_6f3e212 _public_6f3e212
#define public_6f3e229 _public_6f3e229
#define public_6f3e241 _public_6f3e241
#define public_6f3e24e _public_6f3e24e
#define public_6f3e250 _public_6f3e250
#define public_6f3e25c _public_6f3e25c
#define public_6f3e286 _public_6f3e286
#define public_6f3e29e _public_6f3e29e
#define public_6f3e2ae _public_6f3e2ae
#define public_6f3e2b8 _public_6f3e2b8
#define public_6f3e2db _public_6f3e2db
#define public_6f3e2ee _public_6f3e2ee
#define public_6f3e2f9 _public_6f3e2f9
#define public_6f3e2fc _public_6f3e2fc
#define public_6f3e306 _public_6f3e306
#define public_6f3e32f _public_6f3e32f
#define public_6f3e342 _public_6f3e342
#define public_6f3e34f _public_6f3e34f
#define public_6f3e351 _public_6f3e351
#define public_6f3e354 _public_6f3e354
#define public_6f3e357 _public_6f3e357
#define public_6f3e35e _public_6f3e35e

PROC_DECLARE(0x6f3dfb0, internal_6f3dfb0, public_6f3dfb0);
extern "C" NAKED register_t __cdecl internal_6f3dfb0()
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
        call public_6f3d480
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f3dff2
        mov eax, dword ptr ds : [esi+8]
        public_6f3dfd4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f3e077
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f3e085
        public_6f3dff2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3dffd
        mov eax, edx
        jmp public_6f3dfd4
        public_6f3dffd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f3e011
        public_6f3e006 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f3e006
        public_6f3e011 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f3dfd4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e02d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f3e044
        public_6f3e02d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f3e044 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f3e051
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3e05f
        public_6f3e051 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f3e05c
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e05f
        public_6f3e05c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3e05f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f3e0e2
        public_6f3e077 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f3e082
        mov dword ptr ds : [ecx], eax
        jmp public_6f3e085
        public_6f3e082 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f3e085 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f3e0b3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3e09a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3e0b0
        public_6f3e09a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f3e0b0
        public_6f3e0a5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f3e0a5
        public_6f3e0b0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f3e0b3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f3e0e2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3e0c7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3e0df
        public_6f3e0c7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f3e0df
        public_6f3e0d3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f3e0d3
        public_6f3e0df : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f3e0e2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_6f3e35e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f3e357
        nop 
        public_6f3e100 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6f3e357
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3e1bf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f3e16b
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e13f
        mov dword ptr ds : [esi+4], ecx
        public_6f3e13f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e152
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e160
        public_6f3e152 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e15d
        mov dword ptr ds : [esi], edx
        jmp public_6f3e160
        public_6f3e15d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3e160 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f3e16b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f3e17e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6f3e229
        public_6f3e17e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f3e25c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e1a5
        mov dword ptr ds : [esi+4], ecx
        public_6f3e1a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e241
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e250
        public_6f3e1bf : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f3e212
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e1e5
        mov dword ptr ds : [esi+4], ecx
        public_6f3e1e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e1f8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e207
        public_6f3e1f8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e205
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e207
        public_6f3e205 : nop
        mov dword ptr ds : [esi], edx
        public_6f3e207 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f3e212 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f3e2b8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f3e2b8
        public_6f3e229 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3e100
        jmp public_6f3e357
        public_6f3e241 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e24e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e250
        public_6f3e24e : nop
        mov dword ptr ds : [esi], edx
        public_6f3e250 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f3e25c : nop
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
        je public_6f3e286
        mov dword ptr ds : [esi+4], ecx
        public_6f3e286 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e29e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e354
        public_6f3e29e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e2ae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e354
        public_6f3e2ae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e354
        public_6f3e2b8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f3e306
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3e2db
        mov dword ptr ds : [esi+4], ecx
        public_6f3e2db : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e2ee
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e2fc
        public_6f3e2ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3e2f9
        mov dword ptr ds : [esi], edx
        jmp public_6f3e2fc
        public_6f3e2f9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3e2fc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f3e306 : nop
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
        je public_6f3e32f
        mov dword ptr ds : [esi+4], ecx
        public_6f3e32f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3e342
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3e351
        public_6f3e342 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f3e34f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f3e351
        public_6f3e34f : nop
        mov dword ptr ds : [esi], edx
        public_6f3e351 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3e354 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3e357 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_6f3e35e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f3af30
        push esi
        call public_6f57e26
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
        UNREACHABLE_TRAP(0x6f3dfb0)
    }
}

#undef public_6f3dfd4
#undef public_6f3dff2
#undef public_6f3dffd
#undef public_6f3e006
#undef public_6f3e011
#undef public_6f3e02d
#undef public_6f3e044
#undef public_6f3e051
#undef public_6f3e05c
#undef public_6f3e05f
#undef public_6f3e077
#undef public_6f3e082
#undef public_6f3e085
#undef public_6f3e09a
#undef public_6f3e0a5
#undef public_6f3e0b0
#undef public_6f3e0b3
#undef public_6f3e0c7
#undef public_6f3e0d3
#undef public_6f3e0df
#undef public_6f3e0e2
#undef public_6f3e100
#undef public_6f3e13f
#undef public_6f3e152
#undef public_6f3e15d
#undef public_6f3e160
#undef public_6f3e16b
#undef public_6f3e17e
#undef public_6f3e1a5
#undef public_6f3e1bf
#undef public_6f3e1e5
#undef public_6f3e1f8
#undef public_6f3e205
#undef public_6f3e207
#undef public_6f3e212
#undef public_6f3e229
#undef public_6f3e241
#undef public_6f3e24e
#undef public_6f3e250
#undef public_6f3e25c
#undef public_6f3e286
#undef public_6f3e29e
#undef public_6f3e2ae
#undef public_6f3e2b8
#undef public_6f3e2db
#undef public_6f3e2ee
#undef public_6f3e2f9
#undef public_6f3e2fc
#undef public_6f3e306
#undef public_6f3e32f
#undef public_6f3e342
#undef public_6f3e34f
#undef public_6f3e351
#undef public_6f3e354
#undef public_6f3e357
#undef public_6f3e35e
