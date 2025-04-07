#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_6613c00);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6613c24 _public_6613c24
#define public_6613c42 _public_6613c42
#define public_6613c4d _public_6613c4d
#define public_6613c56 _public_6613c56
#define public_6613c61 _public_6613c61
#define public_6613c7f _public_6613c7f
#define public_6613c96 _public_6613c96
#define public_6613ca3 _public_6613ca3
#define public_6613cae _public_6613cae
#define public_6613cb1 _public_6613cb1
#define public_6613cc9 _public_6613cc9
#define public_6613cd4 _public_6613cd4
#define public_6613cd7 _public_6613cd7
#define public_6613cee _public_6613cee
#define public_6613cf9 _public_6613cf9
#define public_6613d04 _public_6613d04
#define public_6613d07 _public_6613d07
#define public_6613d1d _public_6613d1d
#define public_6613d29 _public_6613d29
#define public_6613d35 _public_6613d35
#define public_6613d38 _public_6613d38
#define public_6613d53 _public_6613d53
#define public_6613d92 _public_6613d92
#define public_6613da5 _public_6613da5
#define public_6613db0 _public_6613db0
#define public_6613db3 _public_6613db3
#define public_6613dbe _public_6613dbe
#define public_6613dd1 _public_6613dd1
#define public_6613df8 _public_6613df8
#define public_6613e12 _public_6613e12
#define public_6613e38 _public_6613e38
#define public_6613e4b _public_6613e4b
#define public_6613e58 _public_6613e58
#define public_6613e5a _public_6613e5a
#define public_6613e65 _public_6613e65
#define public_6613e7c _public_6613e7c
#define public_6613e94 _public_6613e94
#define public_6613ea1 _public_6613ea1
#define public_6613ea3 _public_6613ea3
#define public_6613eaf _public_6613eaf
#define public_6613ed9 _public_6613ed9
#define public_6613ef1 _public_6613ef1
#define public_6613f01 _public_6613f01
#define public_6613f0b _public_6613f0b
#define public_6613f2e _public_6613f2e
#define public_6613f41 _public_6613f41
#define public_6613f4c _public_6613f4c
#define public_6613f4f _public_6613f4f
#define public_6613f59 _public_6613f59
#define public_6613f82 _public_6613f82
#define public_6613f95 _public_6613f95
#define public_6613fa2 _public_6613fa2
#define public_6613fa4 _public_6613fa4
#define public_6613fa7 _public_6613fa7
#define public_6613faa _public_6613faa
#define public_6613fb1 _public_6613fb1

PROC_DECLARE(0x6613c00, internal_6613c00, public_6613c00);
extern "C" NAKED register_t __cdecl internal_6613c00()
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
        call public_661a640
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6613c42
        mov eax, dword ptr ds : [esi+8]
        public_6613c24 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6613cc9
        mov dword ptr ds : [ecx+4], eax
        jmp public_6613cd7
        public_6613c42 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6613c4d
        mov eax, edx
        jmp public_6613c24
        public_6613c4d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6613c61
        public_6613c56 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6613c56
        public_6613c61 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6613c24
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6613c7f
        mov dword ptr ds : [eax+4], ecx
        jmp public_6613c96
        public_6613c7f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6613c96 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6613ca3
        mov dword ptr ds : [edx+4], ecx
        jmp public_6613cb1
        public_6613ca3 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6613cae
        mov dword ptr ds : [edx], ecx
        jmp public_6613cb1
        public_6613cae : nop
        mov dword ptr ds : [edx+8], ecx
        public_6613cb1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x30]
        mov dl, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [ecx+0x30], bl
        mov byte ptr ds : [esi+0x30], dl
        jmp public_6613d38
        public_6613cc9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6613cd4
        mov dword ptr ds : [ecx], eax
        jmp public_6613cd7
        public_6613cd4 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6613cd7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6613d07
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6613cee
        mov edx, dword ptr ds : [esi+4]
        jmp public_6613d04
        public_6613cee : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        jne public_6613d04
        public_6613cf9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_6613cf9
        public_6613d04 : nop
        mov dword ptr ss : [ebp], edx
        public_6613d07 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6613d38
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6613d1d
        mov edx, dword ptr ds : [esi+4]
        jmp public_6613d35
        public_6613d1d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        jne public_6613d35
        public_6613d29 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_6613d29
        public_6613d35 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6613d38 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [esi+0x30], bl
        jne public_6613fb1
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6613faa
        public_6613d53 : nop
        cmp byte ptr ds : [eax+0x30], bl
        jne public_6613faa
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6613e12
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6613dbe
        mov byte ptr ds : [ecx+0x30], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613d92
        mov dword ptr ds : [esi+4], ecx
        public_6613d92 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613da5
        mov dword ptr ds : [esi+4], edx
        jmp public_6613db3
        public_6613da5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6613db0
        mov dword ptr ds : [esi], edx
        jmp public_6613db3
        public_6613db0 : nop
        mov dword ptr ds : [esi+8], edx
        public_6613db3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6613dbe : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6613dd1
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        je public_6613e7c
        public_6613dd1 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6613eaf
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613df8
        mov dword ptr ds : [esi+4], ecx
        public_6613df8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613e94
        mov dword ptr ds : [esi+4], edx
        jmp public_6613ea3
        public_6613e12 : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6613e65
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613e38
        mov dword ptr ds : [esi+4], ecx
        public_6613e38 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613e4b
        mov dword ptr ds : [esi+4], edx
        jmp public_6613e5a
        public_6613e4b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6613e58
        mov dword ptr ds : [esi+8], edx
        jmp public_6613e5a
        public_6613e58 : nop
        mov dword ptr ds : [esi], edx
        public_6613e5a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6613e65 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6613f0b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6613f0b
        public_6613e7c : nop
        mov byte ptr ds : [ecx+0x30], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6613d53
        jmp public_6613faa
        public_6613e94 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6613ea1
        mov dword ptr ds : [esi+8], edx
        jmp public_6613ea3
        public_6613ea1 : nop
        mov dword ptr ds : [esi], edx
        public_6613ea3 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6613eaf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613ed9
        mov dword ptr ds : [esi+4], ecx
        public_6613ed9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613ef1
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6613fa7
        public_6613ef1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6613f01
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6613fa7
        public_6613f01 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6613fa7
        public_6613f0b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x30], bl
        jne public_6613f59
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x30], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x30], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613f2e
        mov dword ptr ds : [esi+4], ecx
        public_6613f2e : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613f41
        mov dword ptr ds : [esi+4], edx
        jmp public_6613f4f
        public_6613f41 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6613f4c
        mov dword ptr ds : [esi], edx
        jmp public_6613f4f
        public_6613f4c : nop
        mov dword ptr ds : [esi+8], edx
        public_6613f4f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6613f59 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x30]
        mov byte ptr ds : [ecx+0x30], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x30], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x30], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6613f82
        mov dword ptr ds : [esi+4], ecx
        public_6613f82 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6613f95
        mov dword ptr ds : [esi+4], edx
        jmp public_6613fa4
        public_6613f95 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6613fa2
        mov dword ptr ds : [esi+8], edx
        jmp public_6613fa4
        public_6613fa2 : nop
        mov dword ptr ds : [esi], edx
        public_6613fa4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6613fa7 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6613faa : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x30], bl
        public_6613fb1 : nop
        lea ecx, ds:[esi+0x10]
        call public_66113c0
        push esi
        call public_66281d0
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
        UNREACHABLE_TRAP(0x6613c00)
    }
}

#undef public_6613c24
#undef public_6613c42
#undef public_6613c4d
#undef public_6613c56
#undef public_6613c61
#undef public_6613c7f
#undef public_6613c96
#undef public_6613ca3
#undef public_6613cae
#undef public_6613cb1
#undef public_6613cc9
#undef public_6613cd4
#undef public_6613cd7
#undef public_6613cee
#undef public_6613cf9
#undef public_6613d04
#undef public_6613d07
#undef public_6613d1d
#undef public_6613d29
#undef public_6613d35
#undef public_6613d38
#undef public_6613d53
#undef public_6613d92
#undef public_6613da5
#undef public_6613db0
#undef public_6613db3
#undef public_6613dbe
#undef public_6613dd1
#undef public_6613df8
#undef public_6613e12
#undef public_6613e38
#undef public_6613e4b
#undef public_6613e58
#undef public_6613e5a
#undef public_6613e65
#undef public_6613e7c
#undef public_6613e94
#undef public_6613ea1
#undef public_6613ea3
#undef public_6613eaf
#undef public_6613ed9
#undef public_6613ef1
#undef public_6613f01
#undef public_6613f0b
#undef public_6613f2e
#undef public_6613f41
#undef public_6613f4c
#undef public_6613f4f
#undef public_6613f59
#undef public_6613f82
#undef public_6613f95
#undef public_6613fa2
#undef public_6613fa4
#undef public_6613fa7
#undef public_6613faa
#undef public_6613fb1
