#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a661);

#define public_6d5a6ab _public_6d5a6ab
#define public_6d5a6c5 _public_6d5a6c5
#define public_6d5a6c7 _public_6d5a6c7
#define public_6d5a6cf _public_6d5a6cf
#define public_6d5a6dc _public_6d5a6dc
#define public_6d5a6e7 _public_6d5a6e7
#define public_6d5a6f1 _public_6d5a6f1
#define public_6d5a6fa _public_6d5a6fa
#define public_6d5a705 _public_6d5a705
#define public_6d5a70e _public_6d5a70e
#define public_6d5a71b _public_6d5a71b
#define public_6d5a743 _public_6d5a743
#define public_6d5a751 _public_6d5a751
#define public_6d5a756 _public_6d5a756
#define public_6d5a777 _public_6d5a777
#define public_6d5a7be _public_6d5a7be
#define public_6d5a7ce _public_6d5a7ce
#define public_6d5a7e6 _public_6d5a7e6
#define public_6d5a7ed _public_6d5a7ed
#define public_6d5a7f0 _public_6d5a7f0
#define public_6d5a80d _public_6d5a80d
#define public_6d5a835 _public_6d5a835
#define public_6d5a838 _public_6d5a838
#define public_6d5a84d _public_6d5a84d
#define public_6d5a8bd _public_6d5a8bd
#define public_6d5a8c5 _public_6d5a8c5
#define public_6d5a8d4 _public_6d5a8d4
#define public_6d5a8f2 _public_6d5a8f2
#define public_6d5a90b _public_6d5a90b
#define public_6d5a923 _public_6d5a923
#define public_6d5a92a _public_6d5a92a
#define public_6d5a946 _public_6d5a946
#define public_6d5a962 _public_6d5a962
#define public_6d5a96f _public_6d5a96f
#define public_6d5a973 _public_6d5a973
#define public_6d5a991 _public_6d5a991
#define public_6d5a9a9 _public_6d5a9a9
#define public_6d5a9b2 _public_6d5a9b2
#define public_6d5a9c8 _public_6d5a9c8
#define public_6d5a9dc _public_6d5a9dc
#define public_6d5a9e2 _public_6d5a9e2

PROC_DECLARE(0x6d5a661, internal_6d5a661, public_6d5a661);
extern "C" NAKED register_t __cdecl internal_6d5a661()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x54]
        sub esp, 0xF8
        mov ecx, dword ptr ss : [ebp+0x5C]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x60]
        push esi
        push edi
        xor edi, edi
        mov esi, eax
        mov dword ptr ss : [ebp-0x28], edi
        mov dword ptr ss : [ebp-0x24], edi
        mov dword ptr ss : [ebp-0x20], edi
        mov dword ptr ss : [ebp-0x1C], edi
        mov dword ptr ss : [ebp-0x18], edi
        mov dword ptr ss : [ebp-0x14], edi
        mov dword ptr ss : [ebp-0x10], edi
        mov dword ptr ss : [ebp-0xC], edi
        mov dword ptr ss : [ebp-8], edi
        mov dword ptr ss : [ebp-4], edi
        mov dword ptr ss : [ebp], edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp+0x14], edi
        mov edx, ebx
        public_6d5a6ab : nop
        mov eax, dword ptr ds : [ecx]
        lea eax, ss:[ebp+eax*4-0x28]
        inc dword ptr ds : [eax]
        add ecx, 4
        dec edx
        jne public_6d5a6ab
        cmp dword ptr ss : [ebp-0x28], ebx
        jne public_6d5a6cf
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [esi], edi
        public_6d5a6c5 : nop
        xor eax, eax
        public_6d5a6c7 : nop
        pop edi
        pop esi
        pop ebx
        add ebp, 0x54
        leave 
        ret 
        public_6d5a6cf : nop
        mov ebx, dword ptr ds : [esi]
        xor edx, edx
        inc edx
        push 0xF
        mov dword ptr ss : [ebp+0x50], ebx
        mov ecx, edx
        pop eax
        public_6d5a6dc : nop
        cmp dword ptr ss : [ebp+ecx*4-0x28], edi
        jne public_6d5a6e7
        inc ecx
        cmp ecx, eax
        jbe public_6d5a6dc
        public_6d5a6e7 : nop
        cmp ebx, ecx
        mov dword ptr ss : [ebp+0x4C], ecx
        jae public_6d5a6f1
        mov dword ptr ss : [ebp+0x50], ecx
        public_6d5a6f1 : nop
        cmp dword ptr ss : [ebp+eax*4-0x28], edi
        jne public_6d5a6fa
        dec eax
        jne public_6d5a6f1
        public_6d5a6fa : nop
        cmp dword ptr ss : [ebp+0x50], eax
        mov dword ptr ss : [ebp+0x28], eax
        jbe public_6d5a705
        mov dword ptr ss : [ebp+0x50], eax
        public_6d5a705 : nop
        mov ebx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [esi], ebx
        shl edx, cl
        jmp public_6d5a71b
        public_6d5a70e : nop
        sub edx, dword ptr ss : [ebp+ecx*4-0x28]
        js public_6d5a7e6
        inc ecx
        shl edx, 1
        public_6d5a71b : nop
        cmp ecx, eax
        jb public_6d5a70e
        mov esi, eax
        shl esi, 2
        lea ecx, ss:[ebp+esi-0x28]
        mov ebx, dword ptr ds : [ecx]
        sub edx, ebx
        mov dword ptr ss : [ebp+0x20], edx
        js public_6d5a7e6
        add ebx, edx
        mov dword ptr ds : [ecx], ebx
        xor ecx, ecx
        dec eax
        mov dword ptr ss : [ebp-0x64], edi
        je public_6d5a751
        xor ebx, ebx
        public_6d5a743 : nop
        add ecx, dword ptr ss : [ebp+ebx-0x24]
        add ebx, 4
        dec eax
        mov dword ptr ss : [ebp+ebx-0x64], ecx
        jne public_6d5a743
        public_6d5a751 : nop
        mov ecx, dword ptr ss : [ebp+0x5C]
        xor ebx, ebx
        public_6d5a756 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, edi
        mov dword ptr ss : [ebp+0x5C], ecx
        je public_6d5a777
        mov edx, dword ptr ss : [ebp+0x7C]
        lea eax, ss:[ebp+eax*4-0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+ecx*4], ebx
        mov edx, dword ptr ss : [ebp+0x20]
        inc ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x5C]
        public_6d5a777 : nop
        inc ebx
        cmp ebx, dword ptr ss : [ebp+0x60]
        jb public_6d5a756
        mov eax, dword ptr ss : [ebp+esi-0x68]
        mov ebx, dword ptr ss : [ebp+0x50]
        or dword ptr ss : [ebp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x60], eax
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ss : [ebp+0x5C], eax
        mov eax, dword ptr ss : [ebp+0x4C]
        neg ebx
        cmp eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp+0x34], edi
        mov dword ptr ss : [ebp-0x68], edi
        mov dword ptr ss : [ebp-0xA4], edi
        mov dword ptr ss : [ebp+0x2C], edi
        mov dword ptr ss : [ebp+0x44], edi
        jg public_6d5a9c8
        lea ecx, ds:[eax-1]
        lea eax, ss:[ebp+eax*4-0x28]
        mov dword ptr ss : [ebp+0x24], ecx
        mov dword ptr ss : [ebp+0x30], eax
        public_6d5a7be : nop
        mov eax, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [ebp+0x38], eax
        je public_6d5a9b2
        public_6d5a7ce : nop
        mov eax, dword ptr ss : [ebp+0x50]
        dec dword ptr ss : [ebp+0x38]
        add eax, ebx
        cmp dword ptr ss : [ebp+0x4C], eax
        jle public_6d5a8d4
        mov ecx, ebx
        sub ecx, dword ptr ss : [ebp+0x50]
        jmp public_6d5a7f0
        public_6d5a7e6 : nop
        push 0xFFFFFFFD
        jmp public_6d5a9dc
        public_6d5a7ed : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        public_6d5a7f0 : nop
        mov edx, dword ptr ss : [ebp+0x50]
        mov esi, dword ptr ss : [ebp+0x28]
        inc dword ptr ss : [ebp+0x48]
        add ebx, edx
        add ecx, edx
        add eax, edx
        sub esi, ebx
        cmp esi, edx
        mov dword ptr ss : [ebp+0x18], ecx
        mov dword ptr ss : [ebp+0x1C], eax
        jbe public_6d5a80d
        mov esi, edx
        public_6d5a80d : nop
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ss : [ebp+0x38]
        xor eax, eax
        sub ecx, ebx
        inc eax
        shl eax, cl
        inc edx
        cmp eax, edx
        jbe public_6d5a84d
        or edx, 0xFFFFFFFF
        sub edx, dword ptr ss : [ebp+0x38]
        add eax, edx
        cmp ecx, esi
        mov edx, dword ptr ss : [ebp+0x30]
        jae public_6d5a84d
        inc ecx
        cmp ecx, esi
        jae public_6d5a84d
        jmp public_6d5a838
        public_6d5a835 : nop
        mov edx, dword ptr ss : [ebp+0x44]
        public_6d5a838 : nop
        add edx, 4
        mov dword ptr ss : [ebp+0x44], edx
        mov edx, dword ptr ds : [edx]
        shl eax, 1
        cmp eax, edx
        jbe public_6d5a84d
        sub eax, edx
        inc ecx
        cmp ecx, esi
        jb public_6d5a835
        public_6d5a84d : nop
        mov eax, dword ptr ss : [ebp+0x78]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        inc edx
        shl edx, cl
        lea esi, ds:[eax+edx]
        cmp esi, 0x5A0
        mov dword ptr ss : [ebp+0x44], edx
        ja public_6d5a9e2
        mov edx, dword ptr ss : [ebp+0x74]
        lea eax, ds:[edx+eax*8]
        mov edx, dword ptr ss : [ebp+0x48]
        lea edx, ss:[ebp+edx*4-0xA4]
        mov dword ptr ss : [ebp+0x2C], eax
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [eax], esi
        mov eax, dword ptr ss : [ebp+0x48]
        cmp eax, edi
        je public_6d5a8bd
        mov esi, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [ebp+eax*4-0x68], esi
        mov al, byte ptr ss : [ebp+0x50]
        mov byte ptr ss : [ebp+0x3D], al
        mov byte ptr ss : [ebp+0x3C], cl
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, esi
        mov esi, dword ptr ss : [ebp+0x3C]
        shr eax, cl
        mov ecx, dword ptr ds : [edx-4]
        mov edx, dword ptr ss : [ebp+0x2C]
        sub edx, ecx
        sar edx, 3
        sub edx, eax
        mov dword ptr ds : [ecx+eax*8], esi
        mov dword ptr ss : [ebp+0x40], edx
        mov dword ptr ds : [ecx+eax*8+4], edx
        jmp public_6d5a8c5
        public_6d5a8bd : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [ecx], eax
        public_6d5a8c5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp dword ptr ss : [ebp+0x4C], eax
        jg public_6d5a7ed
        mov edx, dword ptr ss : [ebp+0x20]
        public_6d5a8d4 : nop
        mov al, byte ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x60]
        sub al, bl
        mov byte ptr ss : [ebp+0x3D], al
        mov eax, dword ptr ss : [ebp+0x7C]
        lea ecx, ds:[eax+ecx*4]
        mov eax, dword ptr ss : [ebp+0x5C]
        cmp eax, ecx
        jb public_6d5a8f2
        mov byte ptr ss : [ebp+0x3C], 0xC0
        jmp public_6d5a92a
        public_6d5a8f2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x64]
        jae public_6d5a90b
        cmp eax, 0x100
        setb cl
        dec cl
        and ecx, 0x60
        mov byte ptr ss : [ebp+0x3C], cl
        jmp public_6d5a923
        public_6d5a90b : nop
        sub eax, dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ss : [ebp+0x6C]
        shl eax, 2
        mov cl, byte ptr ds : [eax+ecx]
        add cl, 0x50
        mov byte ptr ss : [ebp+0x3C], cl
        mov ecx, dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ds : [eax+ecx]
        public_6d5a923 : nop
        add dword ptr ss : [ebp+0x5C], 4
        mov dword ptr ss : [ebp+0x40], eax
        public_6d5a92a : nop
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov eax, dword ptr ss : [ebp+0x34]
        xor esi, esi
        sub ecx, ebx
        inc esi
        shl esi, cl
        mov ecx, ebx
        shr eax, cl
        cmp eax, dword ptr ss : [ebp+0x44]
        jae public_6d5a962
        mov ecx, dword ptr ss : [ebp+0x2C]
        lea ecx, ds:[ecx+eax*8]
        public_6d5a946 : nop
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ecx+4], edx
        mov edx, esi
        shl edx, 3
        add eax, esi
        add ecx, edx
        cmp eax, dword ptr ss : [ebp+0x44]
        jb public_6d5a946
        mov edx, dword ptr ss : [ebp+0x20]
        public_6d5a962 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ss : [ebp+0x34]
        xor eax, eax
        inc eax
        shl eax, cl
        jmp public_6d5a973
        public_6d5a96f : nop
        xor esi, eax
        shr eax, 1
        public_6d5a973 : nop
        test esi, eax
        jne public_6d5a96f
        xor esi, eax
        xor eax, eax
        inc eax
        mov ecx, ebx
        shl eax, cl
        mov dword ptr ss : [ebp+0x34], esi
        dec eax
        and eax, esi
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x48]
        cmp ecx, dword ptr ss : [ebp+eax*4-0x68]
        je public_6d5a9a9
        public_6d5a991 : nop
        sub ebx, dword ptr ss : [ebp+0x50]
        xor esi, esi
        inc esi
        mov ecx, ebx
        shl esi, cl
        dec eax
        dec esi
        and esi, dword ptr ss : [ebp+0x34]
        cmp esi, dword ptr ss : [ebp+eax*4-0x68]
        jne public_6d5a991
        mov dword ptr ss : [ebp+0x48], eax
        public_6d5a9a9 : nop
        cmp dword ptr ss : [ebp+0x38], edi
        jne public_6d5a7ce
        public_6d5a9b2 : nop
        inc dword ptr ss : [ebp+0x4C]
        add dword ptr ss : [ebp+0x30], 4
        mov eax, dword ptr ss : [ebp+0x4C]
        inc dword ptr ss : [ebp+0x24]
        cmp eax, dword ptr ss : [ebp+0x28]
        jle public_6d5a7be
        public_6d5a9c8 : nop
        cmp edx, edi
        je public_6d5a6c5
        cmp dword ptr ss : [ebp+0x28], 1
        je public_6d5a6c5
        push 0xFFFFFFFB
        public_6d5a9dc : nop
        pop eax
        jmp public_6d5a6c7
        public_6d5a9e2 : nop
        push 0xFFFFFFFC
        jmp public_6d5a9dc
        UNREACHABLE_TRAP(0x6d5a661)
    }
}

#undef public_6d5a6ab
#undef public_6d5a6c5
#undef public_6d5a6c7
#undef public_6d5a6cf
#undef public_6d5a6dc
#undef public_6d5a6e7
#undef public_6d5a6f1
#undef public_6d5a6fa
#undef public_6d5a705
#undef public_6d5a70e
#undef public_6d5a71b
#undef public_6d5a743
#undef public_6d5a751
#undef public_6d5a756
#undef public_6d5a777
#undef public_6d5a7be
#undef public_6d5a7ce
#undef public_6d5a7e6
#undef public_6d5a7ed
#undef public_6d5a7f0
#undef public_6d5a80d
#undef public_6d5a835
#undef public_6d5a838
#undef public_6d5a84d
#undef public_6d5a8bd
#undef public_6d5a8c5
#undef public_6d5a8d4
#undef public_6d5a8f2
#undef public_6d5a90b
#undef public_6d5a923
#undef public_6d5a92a
#undef public_6d5a946
#undef public_6d5a962
#undef public_6d5a96f
#undef public_6d5a973
#undef public_6d5a991
#undef public_6d5a9a9
#undef public_6d5a9b2
#undef public_6d5a9c8
#undef public_6d5a9dc
#undef public_6d5a9e2
