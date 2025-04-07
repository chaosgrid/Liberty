#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_633fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6340400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633fd14 _public_633fd14
#define public_633fd32 _public_633fd32
#define public_633fd3d _public_633fd3d
#define public_633fd50 _public_633fd50
#define public_633fd5e _public_633fd5e
#define public_633fd7a _public_633fd7a
#define public_633fd91 _public_633fd91
#define public_633fd9e _public_633fd9e
#define public_633fda9 _public_633fda9
#define public_633fdac _public_633fdac
#define public_633fdd0 _public_633fdd0
#define public_633fddb _public_633fddb
#define public_633fdde _public_633fdde
#define public_633fdf3 _public_633fdf3
#define public_633fe01 _public_633fe01
#define public_633fe0f _public_633fe0f
#define public_633fe12 _public_633fe12
#define public_633fe26 _public_633fe26
#define public_633fe35 _public_633fe35
#define public_633fe44 _public_633fe44
#define public_633fe47 _public_633fe47
#define public_633fe67 _public_633fe67
#define public_633feb2 _public_633feb2
#define public_633fec5 _public_633fec5
#define public_633fed0 _public_633fed0
#define public_633fed3 _public_633fed3
#define public_633fede _public_633fede
#define public_633fef7 _public_633fef7
#define public_633ff27 _public_633ff27
#define public_633ff41 _public_633ff41
#define public_633ff70 _public_633ff70
#define public_633ff83 _public_633ff83
#define public_633ff90 _public_633ff90
#define public_633ff92 _public_633ff92
#define public_633ff9d _public_633ff9d
#define public_633ffba _public_633ffba
#define public_633ffd5 _public_633ffd5
#define public_633ffe2 _public_633ffe2
#define public_633ffe4 _public_633ffe4
#define public_633fff0 _public_633fff0
#define public_6340026 _public_6340026
#define public_634003e _public_634003e
#define public_634004e _public_634004e
#define public_6340058 _public_6340058
#define public_6340084 _public_6340084
#define public_6340097 _public_6340097
#define public_63400a2 _public_63400a2
#define public_63400a5 _public_63400a5
#define public_63400af _public_63400af
#define public_63400e4 _public_63400e4
#define public_63400f7 _public_63400f7
#define public_6340104 _public_6340104
#define public_6340106 _public_6340106
#define public_6340109 _public_6340109
#define public_634010c _public_634010c
#define public_6340116 _public_6340116

PROC_DECLARE(0x633fcf0, internal_633fcf0, public_633fcf0);
extern "C" NAKED register_t __cdecl internal_633fcf0()
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
        call public_6340400
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_633fd32
        mov eax, dword ptr ds : [esi+8]
        public_633fd14 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_633fdd0
        mov dword ptr ds : [ecx+4], eax
        jmp public_633fdde
        public_633fd32 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_633fd3d
        mov eax, edx
        jmp public_633fd14
        public_633fd3d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        jne public_633fd5e
        lea esp, ss:[esp]
        public_633fd50 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        je public_633fd50
        public_633fd5e : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_633fd14
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633fd7a
        mov dword ptr ds : [eax+4], ecx
        jmp public_633fd91
        public_633fd7a : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_633fd91 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_633fd9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_633fdac
        public_633fd9e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_633fda9
        mov dword ptr ds : [edx], ecx
        jmp public_633fdac
        public_633fda9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_633fdac : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x80]
        mov dl, byte ptr ds : [ecx+0x80]
        mov byte ptr ds : [ecx+0x80], bl
        mov byte ptr ds : [esi+0x80], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_633fe47
        public_633fdd0 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_633fddb
        mov dword ptr ds : [ecx], eax
        jmp public_633fdde
        public_633fddb : nop
        mov dword ptr ds : [ecx+8], eax
        public_633fdde : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_633fe12
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_633fdf3
        mov edx, dword ptr ds : [esi+4]
        jmp public_633fe0f
        public_633fdf3 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        mov edx, eax
        jne public_633fe0f
        public_633fe01 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        je public_633fe01
        public_633fe0f : nop
        mov dword ptr ss : [ebp], edx
        public_633fe12 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_633fe47
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_633fe26
        mov edx, dword ptr ds : [esi+4]
        jmp public_633fe44
        public_633fe26 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        mov edx, eax
        jne public_633fe44
        public_633fe35 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        je public_633fe35
        public_633fe44 : nop
        mov dword ptr ss : [ebp+8], edx
        public_633fe47 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x80]
        mov bl, 1
        cmp cl, bl
        jne public_6340116
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_634010c
        public_633fe67 : nop
        cmp byte ptr ds : [eax+0x80], bl
        jne public_634010c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_633ff41
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x80]
        test dl, dl
        jne public_633fede
        mov byte ptr ds : [ecx+0x80], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x80], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_633feb2
        mov dword ptr ds : [esi+4], ecx
        public_633feb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633fec5
        mov dword ptr ds : [esi+4], edx
        jmp public_633fed3
        public_633fec5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_633fed0
        mov dword ptr ds : [esi], edx
        jmp public_633fed3
        public_633fed0 : nop
        mov dword ptr ds : [esi+8], edx
        public_633fed3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_633fede : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x80], bl
        jne public_633fef7
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x80], bl
        je public_633ffba
        public_633fef7 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x80], bl
        jne public_633fff0
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x80], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x80], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_633ff27
        mov dword ptr ds : [esi+4], ecx
        public_633ff27 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633ffd5
        mov dword ptr ds : [esi+4], edx
        jmp public_633ffe4
        public_633ff41 : nop
        mov dl, byte ptr ds : [ecx+0x80]
        test dl, dl
        jne public_633ff9d
        mov byte ptr ds : [ecx+0x80], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_633ff70
        mov dword ptr ds : [esi+4], ecx
        public_633ff70 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633ff83
        mov dword ptr ds : [esi+4], edx
        jmp public_633ff92
        public_633ff83 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633ff90
        mov dword ptr ds : [esi+8], edx
        jmp public_633ff92
        public_633ff90 : nop
        mov dword ptr ds : [esi], edx
        public_633ff92 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_633ff9d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x80], bl
        jne public_6340058
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x80], bl
        jne public_6340058
        public_633ffba : nop
        mov byte ptr ds : [ecx+0x80], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_633fe67
        jmp public_634010c
        public_633ffd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633ffe2
        mov dword ptr ds : [esi+8], edx
        jmp public_633ffe4
        public_633ffe2 : nop
        mov dword ptr ds : [esi], edx
        public_633ffe4 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_633fff0 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x80]
        mov byte ptr ds : [ecx+0x80], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x80], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x80], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340026
        mov dword ptr ds : [esi+4], ecx
        public_6340026 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_634003e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340109
        public_634003e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_634004e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340109
        public_634004e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6340109
        public_6340058 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x80], bl
        jne public_63400af
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x80], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x80], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6340084
        mov dword ptr ds : [esi+4], ecx
        public_6340084 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6340097
        mov dword ptr ds : [esi+4], edx
        jmp public_63400a5
        public_6340097 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63400a2
        mov dword ptr ds : [esi], edx
        jmp public_63400a5
        public_63400a2 : nop
        mov dword ptr ds : [esi+8], edx
        public_63400a5 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_63400af : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x80]
        mov byte ptr ds : [ecx+0x80], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x80], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x80], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63400e4
        mov dword ptr ds : [esi+4], ecx
        public_63400e4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63400f7
        mov dword ptr ds : [esi+4], edx
        jmp public_6340106
        public_63400f7 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6340104
        mov dword ptr ds : [esi+8], edx
        jmp public_6340106
        public_6340104 : nop
        mov dword ptr ds : [esi], edx
        public_6340106 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6340109 : nop
        mov dword ptr ds : [ecx+4], edx
        public_634010c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x80], bl
        public_6340116 : nop
        lea ecx, ds:[esi+0xC]
        call public_633bbb0
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x633fcf0)
    }
}

#undef public_633fd14
#undef public_633fd32
#undef public_633fd3d
#undef public_633fd50
#undef public_633fd5e
#undef public_633fd7a
#undef public_633fd91
#undef public_633fd9e
#undef public_633fda9
#undef public_633fdac
#undef public_633fdd0
#undef public_633fddb
#undef public_633fdde
#undef public_633fdf3
#undef public_633fe01
#undef public_633fe0f
#undef public_633fe12
#undef public_633fe26
#undef public_633fe35
#undef public_633fe44
#undef public_633fe47
#undef public_633fe67
#undef public_633feb2
#undef public_633fec5
#undef public_633fed0
#undef public_633fed3
#undef public_633fede
#undef public_633fef7
#undef public_633ff27
#undef public_633ff41
#undef public_633ff70
#undef public_633ff83
#undef public_633ff90
#undef public_633ff92
#undef public_633ff9d
#undef public_633ffba
#undef public_633ffd5
#undef public_633ffe2
#undef public_633ffe4
#undef public_633fff0
#undef public_6340026
#undef public_634003e
#undef public_634004e
#undef public_6340058
#undef public_6340084
#undef public_6340097
#undef public_63400a2
#undef public_63400a5
#undef public_63400af
#undef public_63400e4
#undef public_63400f7
#undef public_6340104
#undef public_6340106
#undef public_6340109
#undef public_634010c
#undef public_6340116
