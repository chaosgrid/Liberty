#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fcf2);

#define public_6d3fd14 _public_6d3fd14
#define public_6d3fd4d _public_6d3fd4d
#define public_6d3fd56 _public_6d3fd56
#define public_6d3fd59 _public_6d3fd59
#define public_6d3fd61 _public_6d3fd61
#define public_6d3fd9f _public_6d3fd9f
#define public_6d3fda8 _public_6d3fda8
#define public_6d3fdad _public_6d3fdad
#define public_6d3fdd0 _public_6d3fdd0
#define public_6d3fdf0 _public_6d3fdf0
#define public_6d3fdf3 _public_6d3fdf3
#define public_6d3fdf4 _public_6d3fdf4
#define public_6d3fdfd _public_6d3fdfd
#define public_6d3fe15 _public_6d3fe15
#define public_6d3fe1e _public_6d3fe1e

PROC_DECLARE(0x6d3fcf2, internal_6d3fcf2, public_6d3fcf2);
extern "C" NAKED register_t __cdecl internal_6d3fcf2()
{
    __asm
    {
        mov eax, dword ptr ds : [esi+0x20]
        dec eax
        push edi
        je public_6d3fe15
        push 2
        pop edx
        sub eax, edx
        je public_6d3fd61
        dec eax
        je public_6d3fd14
        and dword ptr ds : [esi+0x24], 0
        and dword ptr ds : [esi+0x28], 0
        jmp public_6d3fe1e
        public_6d3fd14 : nop
        cmp byte ptr ds : [esi+0x106], 0
        push 4
        pop edi
        je public_6d3fd56
        lea eax, ds:[esi+0x107]
        movzx ecx, byte ptr ds : [eax]
        sub ecx, 0
        je public_6d3fd56
        sub ecx, edx
        je public_6d3fd4d
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x6E
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d3fd4d : nop
        mov dword ptr ds : [esi+0x24], 5
        jmp public_6d3fd59
        public_6d3fd56 : nop
        mov dword ptr ds : [esi+0x24], edi
        public_6d3fd59 : nop
        mov dword ptr ds : [esi+0x28], edi
        jmp public_6d3fe1e
        public_6d3fd61 : nop
        cmp byte ptr ds : [esi+0x100], 0
        jne public_6d3fd9f
        cmp byte ptr ds : [esi+0x106], 0
        je public_6d3fdad
        lea eax, ds:[esi+0x107]
        movzx ecx, byte ptr ds : [eax]
        sub ecx, 0
        je public_6d3fda8
        dec ecx
        je public_6d3fd9f
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x6E
        movzx eax, byte ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d3fd9f : nop
        mov dword ptr ds : [esi+0x24], 3
        jmp public_6d3fdf4
        public_6d3fda8 : nop
        mov dword ptr ds : [esi+0x24], edx
        jmp public_6d3fdf4
        public_6d3fdad : nop
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 1
        mov edx, dword ptr ds : [eax+0x54]
        mov edi, dword ptr ds : [eax+0xA8]
        push ebx
        push 3
        pop ebx
        jne public_6d3fdfd
        cmp edx, 2
        jne public_6d3fdd0
        cmp edi, ebx
        je public_6d3fdf0
        public_6d3fdd0 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x6B
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d3fdf0 : nop
        mov dword ptr ds : [esi+0x24], ebx
        public_6d3fdf3 : nop
        pop ebx
        public_6d3fdf4 : nop
        mov dword ptr ds : [esi+0x28], 2
        jmp public_6d3fe1e
        public_6d3fdfd : nop
        cmp ecx, 0x52
        jne public_6d3fdd0
        cmp edx, 0x47
        jne public_6d3fdd0
        cmp edi, 0x42
        jne public_6d3fdd0
        mov dword ptr ds : [esi+0x24], 2
        jmp public_6d3fdf3
        public_6d3fe15 : nop
        xor eax, eax
        inc eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        public_6d3fe1e : nop
        and byte ptr ds : [esi+0x40], 0
        fld1 
        and byte ptr ds : [esi+0x41], 0
        fstp qword ptr ds : [esi+0x38]
        and dword ptr ds : [esi+0x44], 0
        and byte ptr ds : [esi+0x4A], 0
        and dword ptr ds : [esi+0x74], 0
        and byte ptr ds : [esi+0x58], 0
        and byte ptr ds : [esi+0x59], 0
        and byte ptr ds : [esi+0x5A], 0
        xor eax, eax
        inc eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov byte ptr ds : [esi+0x48], al
        mov byte ptr ds : [esi+0x49], al
        mov dword ptr ds : [esi+0x4C], 2
        mov byte ptr ds : [esi+0x50], al
        mov dword ptr ds : [esi+0x54], 0x100
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6d3fcf2)
    }
}

#undef public_6d3fd14
#undef public_6d3fd4d
#undef public_6d3fd56
#undef public_6d3fd59
#undef public_6d3fd61
#undef public_6d3fd9f
#undef public_6d3fda8
#undef public_6d3fdad
#undef public_6d3fdd0
#undef public_6d3fdf0
#undef public_6d3fdf3
#undef public_6d3fdf4
#undef public_6d3fdfd
#undef public_6d3fe15
#undef public_6d3fe1e
