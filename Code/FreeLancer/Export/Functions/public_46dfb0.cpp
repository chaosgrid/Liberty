#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46dfd4 _public_46dfd4
#define public_46dff2 _public_46dff2
#define public_46dffd _public_46dffd
#define public_46e006 _public_46e006
#define public_46e011 _public_46e011
#define public_46e02d _public_46e02d
#define public_46e044 _public_46e044
#define public_46e051 _public_46e051
#define public_46e05c _public_46e05c
#define public_46e05f _public_46e05f
#define public_46e077 _public_46e077
#define public_46e082 _public_46e082
#define public_46e085 _public_46e085
#define public_46e09a _public_46e09a
#define public_46e0a5 _public_46e0a5
#define public_46e0b0 _public_46e0b0
#define public_46e0b3 _public_46e0b3
#define public_46e0c7 _public_46e0c7
#define public_46e0d3 _public_46e0d3
#define public_46e0df _public_46e0df
#define public_46e0e2 _public_46e0e2
#define public_46e100 _public_46e100
#define public_46e13f _public_46e13f
#define public_46e152 _public_46e152
#define public_46e15d _public_46e15d
#define public_46e160 _public_46e160
#define public_46e16b _public_46e16b
#define public_46e17e _public_46e17e
#define public_46e1a5 _public_46e1a5
#define public_46e1bf _public_46e1bf
#define public_46e1e5 _public_46e1e5
#define public_46e1f8 _public_46e1f8
#define public_46e205 _public_46e205
#define public_46e207 _public_46e207
#define public_46e212 _public_46e212
#define public_46e229 _public_46e229
#define public_46e241 _public_46e241
#define public_46e24e _public_46e24e
#define public_46e250 _public_46e250
#define public_46e25c _public_46e25c
#define public_46e286 _public_46e286
#define public_46e29e _public_46e29e
#define public_46e2ae _public_46e2ae
#define public_46e2b8 _public_46e2b8
#define public_46e2db _public_46e2db
#define public_46e2ee _public_46e2ee
#define public_46e2f9 _public_46e2f9
#define public_46e2fc _public_46e2fc
#define public_46e306 _public_46e306
#define public_46e32f _public_46e32f
#define public_46e342 _public_46e342
#define public_46e34f _public_46e34f
#define public_46e351 _public_46e351
#define public_46e354 _public_46e354
#define public_46e357 _public_46e357
#define public_46e35a _public_46e35a

PROC_DECLARE(0x46dfb0, internal_46dfb0, public_46dfb0);
extern "C" NAKED register_t __cdecl internal_46dfb0()
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
        call public_595150
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_46dff2
        mov eax, dword ptr ds : [esi+8]
        public_46dfd4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_46e077
        mov dword ptr ds : [ecx+4], eax
        jmp public_46e085
        public_46dff2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_46dffd
        mov eax, edx
        jmp public_46dfd4
        public_46dffd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_46e011
        public_46e006 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_46e006
        public_46e011 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_46dfd4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46e02d
        mov dword ptr ds : [eax+4], ecx
        jmp public_46e044
        public_46e02d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_46e044 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_46e051
        mov dword ptr ds : [edx+4], ecx
        jmp public_46e05f
        public_46e051 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_46e05c
        mov dword ptr ds : [edx], ecx
        jmp public_46e05f
        public_46e05c : nop
        mov dword ptr ds : [edx+8], ecx
        public_46e05f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_46e0e2
        public_46e077 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_46e082
        mov dword ptr ds : [ecx], eax
        jmp public_46e085
        public_46e082 : nop
        mov dword ptr ds : [ecx+8], eax
        public_46e085 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_46e0b3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46e09a
        mov edx, dword ptr ds : [esi+4]
        jmp public_46e0b0
        public_46e09a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_46e0b0
        public_46e0a5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_46e0a5
        public_46e0b0 : nop
        mov dword ptr ss : [ebp], edx
        public_46e0b3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_46e0e2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46e0c7
        mov edx, dword ptr ds : [esi+4]
        jmp public_46e0df
        public_46e0c7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_46e0df
        public_46e0d3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_46e0d3
        public_46e0df : nop
        mov dword ptr ss : [ebp+8], edx
        public_46e0e2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_46e35a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_46e357
        nop 
        public_46e100 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_46e357
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46e1bf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_46e16b
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e13f
        mov dword ptr ds : [esi+4], ecx
        public_46e13f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e152
        mov dword ptr ds : [esi+4], edx
        jmp public_46e160
        public_46e152 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46e15d
        mov dword ptr ds : [esi], edx
        jmp public_46e160
        public_46e15d : nop
        mov dword ptr ds : [esi+8], edx
        public_46e160 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_46e16b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_46e17e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_46e229
        public_46e17e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_46e25c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e1a5
        mov dword ptr ds : [esi+4], ecx
        public_46e1a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e241
        mov dword ptr ds : [esi+4], edx
        jmp public_46e250
        public_46e1bf : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_46e212
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e1e5
        mov dword ptr ds : [esi+4], ecx
        public_46e1e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e1f8
        mov dword ptr ds : [esi+4], edx
        jmp public_46e207
        public_46e1f8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46e205
        mov dword ptr ds : [esi+8], edx
        jmp public_46e207
        public_46e205 : nop
        mov dword ptr ds : [esi], edx
        public_46e207 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_46e212 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_46e2b8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_46e2b8
        public_46e229 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_46e100
        jmp public_46e357
        public_46e241 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46e24e
        mov dword ptr ds : [esi+8], edx
        jmp public_46e250
        public_46e24e : nop
        mov dword ptr ds : [esi], edx
        public_46e250 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_46e25c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e286
        mov dword ptr ds : [esi+4], ecx
        public_46e286 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e29e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46e354
        public_46e29e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46e2ae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46e354
        public_46e2ae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_46e354
        public_46e2b8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_46e306
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e2db
        mov dword ptr ds : [esi+4], ecx
        public_46e2db : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e2ee
        mov dword ptr ds : [esi+4], edx
        jmp public_46e2fc
        public_46e2ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_46e2f9
        mov dword ptr ds : [esi], edx
        jmp public_46e2fc
        public_46e2f9 : nop
        mov dword ptr ds : [esi+8], edx
        public_46e2fc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_46e306 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_46e32f
        mov dword ptr ds : [esi+4], ecx
        public_46e32f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_46e342
        mov dword ptr ds : [esi+4], edx
        jmp public_46e351
        public_46e342 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_46e34f
        mov dword ptr ds : [esi+8], edx
        jmp public_46e351
        public_46e34f : nop
        mov dword ptr ds : [esi], edx
        public_46e351 : nop
        mov dword ptr ds : [edx+8], ecx
        public_46e354 : nop
        mov dword ptr ds : [ecx+4], edx
        public_46e357 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_46e35a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46dfb0)
    }
}

#undef public_46dfd4
#undef public_46dff2
#undef public_46dffd
#undef public_46e006
#undef public_46e011
#undef public_46e02d
#undef public_46e044
#undef public_46e051
#undef public_46e05c
#undef public_46e05f
#undef public_46e077
#undef public_46e082
#undef public_46e085
#undef public_46e09a
#undef public_46e0a5
#undef public_46e0b0
#undef public_46e0b3
#undef public_46e0c7
#undef public_46e0d3
#undef public_46e0df
#undef public_46e0e2
#undef public_46e100
#undef public_46e13f
#undef public_46e152
#undef public_46e15d
#undef public_46e160
#undef public_46e16b
#undef public_46e17e
#undef public_46e1a5
#undef public_46e1bf
#undef public_46e1e5
#undef public_46e1f8
#undef public_46e205
#undef public_46e207
#undef public_46e212
#undef public_46e229
#undef public_46e241
#undef public_46e24e
#undef public_46e250
#undef public_46e25c
#undef public_46e286
#undef public_46e29e
#undef public_46e2ae
#undef public_46e2b8
#undef public_46e2db
#undef public_46e2ee
#undef public_46e2f9
#undef public_46e2fc
#undef public_46e306
#undef public_46e32f
#undef public_46e342
#undef public_46e34f
#undef public_46e351
#undef public_46e354
#undef public_46e357
#undef public_46e35a
