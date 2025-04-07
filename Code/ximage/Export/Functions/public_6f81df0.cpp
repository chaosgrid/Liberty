#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81df0);

#define public_6f81e04 _public_6f81e04
#define public_6f81e42 _public_6f81e42
#define public_6f81e51 _public_6f81e51
#define public_6f81e73 _public_6f81e73
#define public_6f81e79 _public_6f81e79
#define public_6f81e9d _public_6f81e9d
#define public_6f81ea3 _public_6f81ea3
#define public_6f81eac _public_6f81eac
#define public_6f81eb0 _public_6f81eb0
#define public_6f81ebf _public_6f81ebf
#define public_6f81ec6 _public_6f81ec6
#define public_6f81ed0 _public_6f81ed0
#define public_6f81f1c _public_6f81f1c
#define public_6f81f2b _public_6f81f2b
#define public_6f81f4f _public_6f81f4f
#define public_6f81f55 _public_6f81f55
#define public_6f81f79 _public_6f81f79
#define public_6f81f7f _public_6f81f7f
#define public_6f81fc4 _public_6f81fc4
#define public_6f81ff0 _public_6f81ff0
#define public_6f82001 _public_6f82001
#define public_6f82012 _public_6f82012
#define public_6f82020 _public_6f82020
#define public_6f82024 _public_6f82024

PROC_DECLARE(0x6f81df0, internal_6f81df0, public_6f81df0);
extern "C" NAKED register_t __cdecl internal_6f81df0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        sub esp, 0x50
        push ebp
        xor ebp, ebp
        test eax, eax
        jbe public_6f81ebf
        push ebx
        push esi
        push edi
        public_6f81e04 : nop
        mov edi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ecx+0x3C]
        xor edx, edx
        div esi
        mov ebx, eax
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x10], edx
        ja public_6f82012
        mov eax, dword ptr ds : [edi+8]
        xor edx, edx
        div esi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6f82012
        mov eax, dword ptr ds : [ecx+0x18]
        dec eax
        cmp ebp, eax
        jae public_6f81e42
        xor eax, eax
        jmp public_6f81e51
        public_6f81e42 : nop
        mov eax, dword ptr ds : [ecx+0x20]
        xor edx, edx
        div esi
        xor eax, eax
        cmp edx, eax
        je public_6f81e51
        mov esi, edx
        public_6f81e51 : nop
        cmp ebx, ebp
        jne public_6f81e73
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        fild qword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], eax
        fidiv dword ptr ss : [esp+0x28]
        jmp public_6f81e79
        public_6f81e73 : nop
        fld dword ptr ds : [public_6f83060]
        public_6f81e79 : nop
        cmp dword ptr ss : [esp+0x14], ebp
        jne public_6f81e9d
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        fild qword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], eax
        fidiv dword ptr ss : [esp+0x38]
        jmp public_6f81ea3
        public_6f81e9d : nop
        fld dword ptr ds : [public_6f8305c]
        public_6f81ea3 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        xor ebx, ebx
        cmp edx, eax
        ja public_6f81ed0
        public_6f81eac : nop
        fstp st(0)
        fstp st(0)
        public_6f81eb0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        inc ebp
        cmp ebp, eax
        jb public_6f81e04
        pop edi
        pop esi
        pop ebx
        public_6f81ebf : nop
        pop ebp
        add esp, 0x50
        ret 4
        public_6f81ec6 : nop
        mov edi, dword ptr ss : [esp+0x64]
        lea ebx, ds:[ebx]
        public_6f81ed0 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx+0x40]
        mov esi, dword ptr ds : [ecx+0x18]
        xor edx, edx
        imul esi, ebx
        div edi
        add esi, ebp
        shl esi, 2
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        ja public_6f81fc4
        mov eax, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [eax+0xC]
        xor edx, edx
        div edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6f81fc4
        mov eax, dword ptr ds : [ecx+0x1C]
        dec eax
        cmp ebx, eax
        jae public_6f81f1c
        xor eax, eax
        jmp public_6f81f2b
        public_6f81f1c : nop
        mov eax, dword ptr ds : [ecx+0x24]
        xor edx, edx
        div edi
        xor eax, eax
        cmp edx, eax
        je public_6f81f2b
        mov edi, edx
        public_6f81f2b : nop
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_6f81f4f
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        fild qword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], eax
        fidiv dword ptr ss : [esp+0x48]
        jmp public_6f81f55
        public_6f81f4f : nop
        fld dword ptr ds : [public_6f83060]
        public_6f81f55 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6f81f79
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        fild qword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], eax
        fidiv dword ptr ss : [esp+0x58]
        jmp public_6f81f7f
        public_6f81f79 : nop
        fld dword ptr ds : [public_6f8305c]
        public_6f81f7f : nop
        mov eax, dword ptr ds : [ecx+0x10]
        fld st(3)
        fstp dword ptr ds : [eax+esi*8]
        mov edx, dword ptr ds : [ecx+0x10]
        fld st(1)
        fstp dword ptr ds : [edx+esi*8+4]
        mov eax, dword ptr ds : [ecx+0x10]
        fld st(2)
        fstp dword ptr ds : [eax+esi*8+8]
        mov edx, dword ptr ds : [ecx+0x10]
        fxch 
        fstp dword ptr ds : [edx+esi*8+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        fld st(2)
        fstp dword ptr ds : [eax+esi*8+0x10]
        mov edx, dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [edx+esi*8+0x14]
        mov eax, dword ptr ds : [ecx+0x10]
        fld st(1)
        fstp dword ptr ds : [eax+esi*8+0x18]
        mov edx, dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [edx+esi*8+0x1C]
        jmp public_6f82001
        public_6f81fc4 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        fld st(1)
        lea eax, ds:[esi*8]
        fstp dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [edx+esi*8+8]
        mov edx, dword ptr ds : [ecx+0x10]
        fld st(1)
        fstp dword ptr ds : [edx+esi*8+0x10]
        mov edx, dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [edx+esi*8+0x18]
        mov edx, 4
        nop 
        public_6f81ff0 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+esi+4], 0
        add eax, 8
        dec edx
        jne public_6f81ff0
        public_6f82001 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        inc ebx
        cmp ebx, eax
        jb public_6f81ec6
        jmp public_6f81eac
        public_6f82012 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        test eax, eax
        jbe public_6f81eb0
        nop 
        public_6f82020 : nop
        xor esi, esi
        xor eax, eax
        public_6f82024 : nop
        mov edi, dword ptr ds : [ecx+0x18]
        mov ebx, dword ptr ds : [ecx+0x10]
        imul edi, edx
        add edi, ebp
        lea edi, ds:[eax+edi*4]
        mov dword ptr ds : [ebx+edi*8], esi
        mov edi, dword ptr ds : [ecx+0x18]
        mov ebx, dword ptr ds : [ecx+0x10]
        imul edi, edx
        add edi, ebp
        lea edi, ds:[eax+edi*4]
        inc eax
        cmp eax, 4
        mov dword ptr ds : [ebx+edi*8+4], esi
        jl public_6f82024
        mov eax, dword ptr ds : [ecx+0x1C]
        inc edx
        cmp edx, eax
        jb public_6f82020
        jmp public_6f81eb0
        UNREACHABLE_TRAP(0x6f81df0)
    }
}

#undef public_6f81e04
#undef public_6f81e42
#undef public_6f81e51
#undef public_6f81e73
#undef public_6f81e79
#undef public_6f81e9d
#undef public_6f81ea3
#undef public_6f81eac
#undef public_6f81eb0
#undef public_6f81ebf
#undef public_6f81ec6
#undef public_6f81ed0
#undef public_6f81f1c
#undef public_6f81f2b
#undef public_6f81f4f
#undef public_6f81f55
#undef public_6f81f79
#undef public_6f81f7f
#undef public_6f81fc4
#undef public_6f81ff0
#undef public_6f82001
#undef public_6f82012
#undef public_6f82020
#undef public_6f82024
