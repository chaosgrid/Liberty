#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d967b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d967d4 _public_6d967d4
#define public_6d967f2 _public_6d967f2
#define public_6d967fd _public_6d967fd
#define public_6d96806 _public_6d96806
#define public_6d96811 _public_6d96811
#define public_6d9682d _public_6d9682d
#define public_6d96844 _public_6d96844
#define public_6d96851 _public_6d96851
#define public_6d9685c _public_6d9685c
#define public_6d9685f _public_6d9685f
#define public_6d96877 _public_6d96877
#define public_6d96882 _public_6d96882
#define public_6d96885 _public_6d96885
#define public_6d9689a _public_6d9689a
#define public_6d968a5 _public_6d968a5
#define public_6d968b0 _public_6d968b0
#define public_6d968b3 _public_6d968b3
#define public_6d968c7 _public_6d968c7
#define public_6d968d3 _public_6d968d3
#define public_6d968df _public_6d968df
#define public_6d968e2 _public_6d968e2
#define public_6d96900 _public_6d96900
#define public_6d9693f _public_6d9693f
#define public_6d96952 _public_6d96952
#define public_6d9695d _public_6d9695d
#define public_6d96960 _public_6d96960
#define public_6d9696b _public_6d9696b
#define public_6d9697e _public_6d9697e
#define public_6d969a5 _public_6d969a5
#define public_6d969bf _public_6d969bf
#define public_6d969e5 _public_6d969e5
#define public_6d969f8 _public_6d969f8
#define public_6d96a05 _public_6d96a05
#define public_6d96a07 _public_6d96a07
#define public_6d96a12 _public_6d96a12
#define public_6d96a29 _public_6d96a29
#define public_6d96a41 _public_6d96a41
#define public_6d96a4e _public_6d96a4e
#define public_6d96a50 _public_6d96a50
#define public_6d96a5c _public_6d96a5c
#define public_6d96a86 _public_6d96a86
#define public_6d96a9e _public_6d96a9e
#define public_6d96aae _public_6d96aae
#define public_6d96ab8 _public_6d96ab8
#define public_6d96adb _public_6d96adb
#define public_6d96aee _public_6d96aee
#define public_6d96af9 _public_6d96af9
#define public_6d96afc _public_6d96afc
#define public_6d96b06 _public_6d96b06
#define public_6d96b2f _public_6d96b2f
#define public_6d96b42 _public_6d96b42
#define public_6d96b4f _public_6d96b4f
#define public_6d96b51 _public_6d96b51
#define public_6d96b54 _public_6d96b54
#define public_6d96b57 _public_6d96b57
#define public_6d96b5a _public_6d96b5a

PROC_DECLARE(0x6d967b0, internal_6d967b0, public_6d967b0);
extern "C" NAKED register_t __cdecl internal_6d967b0()
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
        call public_6d96bc0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d967f2
        mov eax, dword ptr ds : [esi+8]
        public_6d967d4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d96877
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d96885
        public_6d967f2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d967fd
        mov eax, edx
        jmp public_6d967d4
        public_6d967fd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d96811
        public_6d96806 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d96806
        public_6d96811 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d967d4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d9682d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d96844
        public_6d9682d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d96844 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d96851
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d9685f
        public_6d96851 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d9685c
        mov dword ptr ds : [edx], ecx
        jmp public_6d9685f
        public_6d9685c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d9685f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d968e2
        public_6d96877 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d96882
        mov dword ptr ds : [ecx], eax
        jmp public_6d96885
        public_6d96882 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d96885 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d968b3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d9689a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d968b0
        public_6d9689a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6d968b0
        public_6d968a5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d968a5
        public_6d968b0 : nop
        mov dword ptr ss : [ebp], edx
        public_6d968b3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d968e2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d968c7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d968df
        public_6d968c7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6d968df
        public_6d968d3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d968d3
        public_6d968df : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d968e2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6d96b5a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d96b57
        nop 
        public_6d96900 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6d96b57
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d969bf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d9696b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d9693f
        mov dword ptr ds : [esi+4], ecx
        public_6d9693f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d96952
        mov dword ptr ds : [esi+4], edx
        jmp public_6d96960
        public_6d96952 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d9695d
        mov dword ptr ds : [esi], edx
        jmp public_6d96960
        public_6d9695d : nop
        mov dword ptr ds : [esi+8], edx
        public_6d96960 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6d9696b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d9697e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6d96a29
        public_6d9697e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d96a5c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d969a5
        mov dword ptr ds : [esi+4], ecx
        public_6d969a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d96a41
        mov dword ptr ds : [esi+4], edx
        jmp public_6d96a50
        public_6d969bf : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d96a12
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d969e5
        mov dword ptr ds : [esi+4], ecx
        public_6d969e5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d969f8
        mov dword ptr ds : [esi+4], edx
        jmp public_6d96a07
        public_6d969f8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d96a05
        mov dword ptr ds : [esi+8], edx
        jmp public_6d96a07
        public_6d96a05 : nop
        mov dword ptr ds : [esi], edx
        public_6d96a07 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d96a12 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d96ab8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d96ab8
        public_6d96a29 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d96900
        jmp public_6d96b57
        public_6d96a41 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d96a4e
        mov dword ptr ds : [esi+8], edx
        jmp public_6d96a50
        public_6d96a4e : nop
        mov dword ptr ds : [esi], edx
        public_6d96a50 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d96a5c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d96a86
        mov dword ptr ds : [esi+4], ecx
        public_6d96a86 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d96a9e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d96b54
        public_6d96a9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d96aae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d96b54
        public_6d96aae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d96b54
        public_6d96ab8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6d96b06
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d96adb
        mov dword ptr ds : [esi+4], ecx
        public_6d96adb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d96aee
        mov dword ptr ds : [esi+4], edx
        jmp public_6d96afc
        public_6d96aee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d96af9
        mov dword ptr ds : [esi], edx
        jmp public_6d96afc
        public_6d96af9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d96afc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d96b06 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d96b2f
        mov dword ptr ds : [esi+4], ecx
        public_6d96b2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d96b42
        mov dword ptr ds : [esi+4], edx
        jmp public_6d96b51
        public_6d96b42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d96b4f
        mov dword ptr ds : [esi+8], edx
        jmp public_6d96b51
        public_6d96b4f : nop
        mov dword ptr ds : [esi], edx
        public_6d96b51 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d96b54 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d96b57 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6d96b5a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6db1dc2
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
        UNREACHABLE_TRAP(0x6d967b0)
    }
}

#undef public_6d967d4
#undef public_6d967f2
#undef public_6d967fd
#undef public_6d96806
#undef public_6d96811
#undef public_6d9682d
#undef public_6d96844
#undef public_6d96851
#undef public_6d9685c
#undef public_6d9685f
#undef public_6d96877
#undef public_6d96882
#undef public_6d96885
#undef public_6d9689a
#undef public_6d968a5
#undef public_6d968b0
#undef public_6d968b3
#undef public_6d968c7
#undef public_6d968d3
#undef public_6d968df
#undef public_6d968e2
#undef public_6d96900
#undef public_6d9693f
#undef public_6d96952
#undef public_6d9695d
#undef public_6d96960
#undef public_6d9696b
#undef public_6d9697e
#undef public_6d969a5
#undef public_6d969bf
#undef public_6d969e5
#undef public_6d969f8
#undef public_6d96a05
#undef public_6d96a07
#undef public_6d96a12
#undef public_6d96a29
#undef public_6d96a41
#undef public_6d96a4e
#undef public_6d96a50
#undef public_6d96a5c
#undef public_6d96a86
#undef public_6d96a9e
#undef public_6d96aae
#undef public_6d96ab8
#undef public_6d96adb
#undef public_6d96aee
#undef public_6d96af9
#undef public_6d96afc
#undef public_6d96b06
#undef public_6d96b2f
#undef public_6d96b42
#undef public_6d96b4f
#undef public_6d96b51
#undef public_6d96b54
#undef public_6d96b57
#undef public_6d96b5a
