#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3bae0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bef0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3bb04 _public_6b3bb04
#define public_6b3bb22 _public_6b3bb22
#define public_6b3bb2d _public_6b3bb2d
#define public_6b3bb36 _public_6b3bb36
#define public_6b3bb41 _public_6b3bb41
#define public_6b3bb5d _public_6b3bb5d
#define public_6b3bb74 _public_6b3bb74
#define public_6b3bb81 _public_6b3bb81
#define public_6b3bb8c _public_6b3bb8c
#define public_6b3bb8f _public_6b3bb8f
#define public_6b3bba7 _public_6b3bba7
#define public_6b3bbb2 _public_6b3bbb2
#define public_6b3bbb5 _public_6b3bbb5
#define public_6b3bbca _public_6b3bbca
#define public_6b3bbd5 _public_6b3bbd5
#define public_6b3bbe0 _public_6b3bbe0
#define public_6b3bbe3 _public_6b3bbe3
#define public_6b3bbf7 _public_6b3bbf7
#define public_6b3bc03 _public_6b3bc03
#define public_6b3bc0f _public_6b3bc0f
#define public_6b3bc12 _public_6b3bc12
#define public_6b3bc30 _public_6b3bc30
#define public_6b3bc6f _public_6b3bc6f
#define public_6b3bc82 _public_6b3bc82
#define public_6b3bc8d _public_6b3bc8d
#define public_6b3bc90 _public_6b3bc90
#define public_6b3bc9b _public_6b3bc9b
#define public_6b3bcae _public_6b3bcae
#define public_6b3bcd5 _public_6b3bcd5
#define public_6b3bcef _public_6b3bcef
#define public_6b3bd15 _public_6b3bd15
#define public_6b3bd28 _public_6b3bd28
#define public_6b3bd35 _public_6b3bd35
#define public_6b3bd37 _public_6b3bd37
#define public_6b3bd42 _public_6b3bd42
#define public_6b3bd59 _public_6b3bd59
#define public_6b3bd71 _public_6b3bd71
#define public_6b3bd7e _public_6b3bd7e
#define public_6b3bd80 _public_6b3bd80
#define public_6b3bd8c _public_6b3bd8c
#define public_6b3bdb6 _public_6b3bdb6
#define public_6b3bdce _public_6b3bdce
#define public_6b3bdde _public_6b3bdde
#define public_6b3bde8 _public_6b3bde8
#define public_6b3be0b _public_6b3be0b
#define public_6b3be1e _public_6b3be1e
#define public_6b3be29 _public_6b3be29
#define public_6b3be2c _public_6b3be2c
#define public_6b3be36 _public_6b3be36
#define public_6b3be5f _public_6b3be5f
#define public_6b3be72 _public_6b3be72
#define public_6b3be7f _public_6b3be7f
#define public_6b3be81 _public_6b3be81
#define public_6b3be84 _public_6b3be84
#define public_6b3be87 _public_6b3be87
#define public_6b3be8a _public_6b3be8a

PROC_DECLARE(0x6b3bae0, internal_6b3bae0, public_6b3bae0);
extern "C" NAKED register_t __cdecl internal_6b3bae0()
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
        call public_6b3bef0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6b3bb22
        mov eax, dword ptr ds : [esi+8]
        public_6b3bb04 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6b3bba7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6b3bbb5
        public_6b3bb22 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6b3bb2d
        mov eax, edx
        jmp public_6b3bb04
        public_6b3bb2d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6b3bb41
        public_6b3bb36 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6b3bb36
        public_6b3bb41 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b3bb04
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b3bb5d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6b3bb74
        public_6b3bb5d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6b3bb74 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6b3bb81
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b3bb8f
        public_6b3bb81 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6b3bb8c
        mov dword ptr ds : [edx], ecx
        jmp public_6b3bb8f
        public_6b3bb8c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b3bb8f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6b3bc12
        public_6b3bba7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6b3bbb2
        mov dword ptr ds : [ecx], eax
        jmp public_6b3bbb5
        public_6b3bbb2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6b3bbb5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6b3bbe3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b3bbca
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b3bbe0
        public_6b3bbca : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6b3bbe0
        public_6b3bbd5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6b3bbd5
        public_6b3bbe0 : nop
        mov dword ptr ss : [ebp], edx
        public_6b3bbe3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6b3bc12
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b3bbf7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b3bc0f
        public_6b3bbf7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6b3bc0f
        public_6b3bc03 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6b3bc03
        public_6b3bc0f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6b3bc12 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6b3be8a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6b3be87
        nop 
        public_6b3bc30 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6b3be87
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b3bcef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6b3bc9b
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b3bc6f
        mov dword ptr ds : [esi+4], ecx
        public_6b3bc6f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3bc82
        mov dword ptr ds : [esi+4], edx
        jmp public_6b3bc90
        public_6b3bc82 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b3bc8d
        mov dword ptr ds : [esi], edx
        jmp public_6b3bc90
        public_6b3bc8d : nop
        mov dword ptr ds : [esi+8], edx
        public_6b3bc90 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6b3bc9b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6b3bcae
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6b3bd59
        public_6b3bcae : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6b3bd8c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b3bcd5
        mov dword ptr ds : [esi+4], ecx
        public_6b3bcd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3bd71
        mov dword ptr ds : [esi+4], edx
        jmp public_6b3bd80
        public_6b3bcef : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6b3bd42
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b3bd15
        mov dword ptr ds : [esi+4], ecx
        public_6b3bd15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3bd28
        mov dword ptr ds : [esi+4], edx
        jmp public_6b3bd37
        public_6b3bd28 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b3bd35
        mov dword ptr ds : [esi+8], edx
        jmp public_6b3bd37
        public_6b3bd35 : nop
        mov dword ptr ds : [esi], edx
        public_6b3bd37 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6b3bd42 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6b3bde8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6b3bde8
        public_6b3bd59 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b3bc30
        jmp public_6b3be87
        public_6b3bd71 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b3bd7e
        mov dword ptr ds : [esi+8], edx
        jmp public_6b3bd80
        public_6b3bd7e : nop
        mov dword ptr ds : [esi], edx
        public_6b3bd80 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b3bd8c : nop
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
        je public_6b3bdb6
        mov dword ptr ds : [esi+4], ecx
        public_6b3bdb6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3bdce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b3be84
        public_6b3bdce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b3bdde
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b3be84
        public_6b3bdde : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b3be84
        public_6b3bde8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6b3be36
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b3be0b
        mov dword ptr ds : [esi+4], ecx
        public_6b3be0b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3be1e
        mov dword ptr ds : [esi+4], edx
        jmp public_6b3be2c
        public_6b3be1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b3be29
        mov dword ptr ds : [esi], edx
        jmp public_6b3be2c
        public_6b3be29 : nop
        mov dword ptr ds : [esi+8], edx
        public_6b3be2c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6b3be36 : nop
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
        je public_6b3be5f
        mov dword ptr ds : [esi+4], ecx
        public_6b3be5f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b3be72
        mov dword ptr ds : [esi+4], edx
        jmp public_6b3be81
        public_6b3be72 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b3be7f
        mov dword ptr ds : [esi+8], edx
        jmp public_6b3be81
        public_6b3be7f : nop
        mov dword ptr ds : [esi], edx
        public_6b3be81 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b3be84 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b3be87 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6b3be8a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6b6a092
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
        UNREACHABLE_TRAP(0x6b3bae0)
    }
}

#undef public_6b3bb04
#undef public_6b3bb22
#undef public_6b3bb2d
#undef public_6b3bb36
#undef public_6b3bb41
#undef public_6b3bb5d
#undef public_6b3bb74
#undef public_6b3bb81
#undef public_6b3bb8c
#undef public_6b3bb8f
#undef public_6b3bba7
#undef public_6b3bbb2
#undef public_6b3bbb5
#undef public_6b3bbca
#undef public_6b3bbd5
#undef public_6b3bbe0
#undef public_6b3bbe3
#undef public_6b3bbf7
#undef public_6b3bc03
#undef public_6b3bc0f
#undef public_6b3bc12
#undef public_6b3bc30
#undef public_6b3bc6f
#undef public_6b3bc82
#undef public_6b3bc8d
#undef public_6b3bc90
#undef public_6b3bc9b
#undef public_6b3bcae
#undef public_6b3bcd5
#undef public_6b3bcef
#undef public_6b3bd15
#undef public_6b3bd28
#undef public_6b3bd35
#undef public_6b3bd37
#undef public_6b3bd42
#undef public_6b3bd59
#undef public_6b3bd71
#undef public_6b3bd7e
#undef public_6b3bd80
#undef public_6b3bd8c
#undef public_6b3bdb6
#undef public_6b3bdce
#undef public_6b3bdde
#undef public_6b3bde8
#undef public_6b3be0b
#undef public_6b3be1e
#undef public_6b3be29
#undef public_6b3be2c
#undef public_6b3be36
#undef public_6b3be5f
#undef public_6b3be72
#undef public_6b3be7f
#undef public_6b3be81
#undef public_6b3be84
#undef public_6b3be87
#undef public_6b3be8a
