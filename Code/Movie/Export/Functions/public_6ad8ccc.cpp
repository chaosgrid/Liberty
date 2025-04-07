#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad8ccc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad91c1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad91cf);

#define public_6ad8cfe _public_6ad8cfe
#define public_6ad8d11 _public_6ad8d11
#define public_6ad8d23 _public_6ad8d23
#define public_6ad8d36 _public_6ad8d36
#define public_6ad8d49 _public_6ad8d49
#define public_6ad8dd2 _public_6ad8dd2
#define public_6ad8ddd _public_6ad8ddd
#define public_6ad8de8 _public_6ad8de8
#define public_6ad8df2 _public_6ad8df2
#define public_6ad8dfc _public_6ad8dfc
#define public_6ad8e21 _public_6ad8e21
#define public_6ad8e2d _public_6ad8e2d
#define public_6ad8e37 _public_6ad8e37
#define public_6ad8e3b _public_6ad8e3b
#define public_6ad8e41 _public_6ad8e41
#define public_6ad8e5f _public_6ad8e5f
#define public_6ad8e6c _public_6ad8e6c
#define public_6ad8e77 _public_6ad8e77
#define public_6ad8e79 _public_6ad8e79
#define public_6ad8ef3 _public_6ad8ef3
#define public_6ad8efc _public_6ad8efc
#define public_6ad8f05 _public_6ad8f05
#define public_6ad8f0e _public_6ad8f0e
#define public_6ad8f16 _public_6ad8f16
#define public_6ad8f34 _public_6ad8f34
#define public_6ad8f3e _public_6ad8f3e
#define public_6ad8f46 _public_6ad8f46
#define public_6ad8f4a _public_6ad8f4a
#define public_6ad8f4c _public_6ad8f4c
#define public_6ad8f63 _public_6ad8f63
#define public_6ad8f6c _public_6ad8f6c
#define public_6ad8f73 _public_6ad8f73
#define public_6ad8f75 _public_6ad8f75

PROC_DECLARE(0x6ad8ccc, internal_6ad8ccc, public_6ad8ccc);
extern "C" NAKED register_t __cdecl internal_6ad8ccc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+8]
        xor eax, eax
        push ebx
        push esi
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        push 1
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+8]
        pop ebx
        mov dword ptr ds : [ecx+0xC], eax
        mov cl, byte ptr ss : [ebp+0x10]
        test cl, 0x10
        je public_6ad8cfe
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 0xC000008F
        or dword ptr ds : [eax+4], ebx
        public_6ad8cfe : nop
        test cl, 2
        je public_6ad8d11
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 0xC0000093
        or dword ptr ds : [eax+4], 2
        public_6ad8d11 : nop
        test bl, cl
        je public_6ad8d23
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 0xC0000091
        or dword ptr ds : [eax+4], 4
        public_6ad8d23 : nop
        test cl, 4
        je public_6ad8d36
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 0xC000008E
        or dword ptr ds : [eax+4], 8
        public_6ad8d36 : nop
        test cl, 8
        je public_6ad8d49
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 0xC0000090
        or dword ptr ds : [eax+4], 0x10
        public_6ad8d49 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        push 2
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+8]
        not ecx
        and ecx, ebx
        and edx, 0xFFFFFFEF
        shl ecx, 4
        or ecx, edx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        not ecx
        mov edx, dword ptr ds : [eax+8]
        and ecx, 4
        shl ecx, 1
        and edx, 0xFFFFFFF7
        or ecx, edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        not ecx
        mov edx, dword ptr ds : [eax+8]
        shr ecx, 1
        and ecx, 4
        and edx, 0xFFFFFFFB
        or ecx, edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        not ecx
        mov edx, dword ptr ds : [eax+8]
        shr ecx, 3
        and ecx, edi
        and edx, 0xFFFFFFFD
        or ecx, edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        not ecx
        mov edx, dword ptr ds : [eax+8]
        shr ecx, 5
        and ecx, ebx
        and edx, 0xFFFFFFFE
        or ecx, edx
        mov dword ptr ds : [eax+8], ecx
        call public_6ad91c1
        test bl, al
        je public_6ad8dd2
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+0xC], 0x10
        public_6ad8dd2 : nop
        test al, 4
        je public_6ad8ddd
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+0xC], 8
        public_6ad8ddd : nop
        test al, 8
        je public_6ad8de8
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+0xC], 4
        public_6ad8de8 : nop
        test al, 0x10
        je public_6ad8df2
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+0xC], edi
        public_6ad8df2 : nop
        test al, 0x20
        je public_6ad8dfc
        mov eax, dword ptr ss : [ebp+8]
        or dword ptr ds : [eax+0xC], ebx
        public_6ad8dfc : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, 0xC00
        and eax, ecx
        je public_6ad8e3b
        cmp eax, 0x400
        je public_6ad8e2d
        cmp eax, 0x800
        je public_6ad8e21
        cmp eax, ecx
        jne public_6ad8e41
        mov eax, dword ptr ss : [ebp+8]
        or dword ptr ds : [eax], 3
        jmp public_6ad8e41
        public_6ad8e21 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFFFFFFE
        or ecx, edi
        jmp public_6ad8e37
        public_6ad8e2d : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFFFFFFD
        or ecx, ebx
        public_6ad8e37 : nop
        mov dword ptr ds : [eax], ecx
        jmp public_6ad8e41
        public_6ad8e3b : nop
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ds : [eax], 0xFFFFFFFC
        public_6ad8e41 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, 0x300
        and eax, ecx
        je public_6ad8e6c
        cmp eax, 0x200
        je public_6ad8e5f
        cmp eax, ecx
        jne public_6ad8e79
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ds : [eax], 0xFFFFFFE3
        jmp public_6ad8e79
        public_6ad8e5f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFFFFFE7
        or ecx, 4
        jmp public_6ad8e77
        public_6ad8e6c : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFFFFFEB
        or ecx, 8
        public_6ad8e77 : nop
        mov dword ptr ds : [eax], ecx
        public_6ad8e79 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x14]
        and ecx, 0xFFF
        mov edx, dword ptr ds : [eax]
        shl ecx, 5
        and edx, 0xFFFE001F
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [ebp+8]
        or dword ptr ds : [eax+0x20], ebx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x20]
        and ecx, 0xFFFFFFE3
        or ecx, edi
        mov dword ptr ds : [eax+0x20], ecx
        mov eax, dword ptr ss : [ebp+0x18]
        fld qword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        fstp qword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+8]
        or dword ptr ds : [eax+0x50], ebx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x50]
        and ecx, 0xFFFFFFE3
        or ecx, edi
        mov edi, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax+0x50], ecx
        mov eax, dword ptr ss : [ebp+8]
        fld qword ptr ds : [edi]
        fstp qword ptr ds : [eax+0x40]
        call public_6ad91cf
        lea eax, ss:[ebp+8]
        push eax
        push ebx
        push 0
        push dword ptr ss : [ebp+0x10]
        call dword ptr ds : [public_6ada084]
        mov eax, dword ptr ss : [ebp+8]
        test byte ptr ds : [eax+8], 0x10
        je public_6ad8ef3
        and dword ptr ds : [esi], 0xFFFFFFFE
        public_6ad8ef3 : nop
        test byte ptr ds : [eax+8], 8
        je public_6ad8efc
        and dword ptr ds : [esi], 0xFFFFFFFB
        public_6ad8efc : nop
        test byte ptr ds : [eax+8], 4
        je public_6ad8f05
        and dword ptr ds : [esi], 0xFFFFFFF7
        public_6ad8f05 : nop
        test byte ptr ds : [eax+8], 2
        je public_6ad8f0e
        and dword ptr ds : [esi], 0xFFFFFFEF
        public_6ad8f0e : nop
        test byte ptr ds : [eax+8], bl
        je public_6ad8f16
        and dword ptr ds : [esi], 0xFFFFFFDF
        public_6ad8f16 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, 0xFFFFF3FF
        and ecx, 3
        sub ecx, 0
        je public_6ad8f4a
        dec ecx
        je public_6ad8f3e
        dec ecx
        je public_6ad8f34
        dec ecx
        jne public_6ad8f4c
        or byte ptr ds : [esi+1], 0xC
        jmp public_6ad8f4c
        public_6ad8f34 : nop
        mov ecx, dword ptr ds : [esi]
        and ch, 0xFB
        or ch, 8
        jmp public_6ad8f46
        public_6ad8f3e : nop
        mov ecx, dword ptr ds : [esi]
        and ch, 0xF7
        or ch, 4
        public_6ad8f46 : nop
        mov dword ptr ds : [esi], ecx
        jmp public_6ad8f4c
        public_6ad8f4a : nop
        and dword ptr ds : [esi], edx
        public_6ad8f4c : nop
        mov ecx, dword ptr ds : [eax]
        shr ecx, 2
        and ecx, 7
        sub ecx, 0
        je public_6ad8f6c
        dec ecx
        je public_6ad8f63
        dec ecx
        jne public_6ad8f75
        and dword ptr ds : [esi], edx
        jmp public_6ad8f75
        public_6ad8f63 : nop
        mov ecx, dword ptr ds : [esi]
        and ecx, edx
        or ch, 2
        jmp public_6ad8f73
        public_6ad8f6c : nop
        mov ecx, dword ptr ds : [esi]
        and ecx, edx
        or ch, 3
        public_6ad8f73 : nop
        mov dword ptr ds : [esi], ecx
        public_6ad8f75 : nop
        fld qword ptr ds : [eax+0x40]
        fstp qword ptr ds : [edi]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad8ccc)
    }
}

#undef public_6ad8cfe
#undef public_6ad8d11
#undef public_6ad8d23
#undef public_6ad8d36
#undef public_6ad8d49
#undef public_6ad8dd2
#undef public_6ad8ddd
#undef public_6ad8de8
#undef public_6ad8df2
#undef public_6ad8dfc
#undef public_6ad8e21
#undef public_6ad8e2d
#undef public_6ad8e37
#undef public_6ad8e3b
#undef public_6ad8e41
#undef public_6ad8e5f
#undef public_6ad8e6c
#undef public_6ad8e77
#undef public_6ad8e79
#undef public_6ad8ef3
#undef public_6ad8efc
#undef public_6ad8f05
#undef public_6ad8f0e
#undef public_6ad8f16
#undef public_6ad8f34
#undef public_6ad8f3e
#undef public_6ad8f46
#undef public_6ad8f4a
#undef public_6ad8f4c
#undef public_6ad8f63
#undef public_6ad8f6c
#undef public_6ad8f73
#undef public_6ad8f75
