#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_6382e00);
CLANG_FORWARD_PROC_SYMBOL(public_6387f00);

#define public_6387f22 _public_6387f22
#define public_6387f48 _public_6387f48
#define public_6387f4e _public_6387f4e
#define public_6387f83 _public_6387f83
#define public_6387fa4 _public_6387fa4
#define public_6387fba _public_6387fba
#define public_6387fc0 _public_6387fc0
#define public_6387fe6 _public_6387fe6
#define public_6387ffd _public_6387ffd
#define public_6388010 _public_6388010
#define public_6388016 _public_6388016
#define public_638803a _public_638803a
#define public_6388040 _public_6388040
#define public_638805f _public_638805f
#define public_638806e _public_638806e

PROC_DECLARE(0x6387f00, internal_6387f00, public_6387f00);
extern "C" NAKED register_t __cdecl internal_6387f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push ebx
        push esi
        je public_638806e
        mov ecx, dword ptr ds : [public_658b86c]
        cmp ecx, 1
        je public_6387f22
        cmp ecx, 2
        jne public_638806e
        public_6387f22 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        je public_6387f48
        mov ecx, dword ptr ds : [edi+0x4C]
        mov esi, dword ptr ds : [public_63991e8]
        push ecx
        push eax
        push edx
        call esi
        mov ecx, dword ptr ds : [public_658b86c]
        add esp, 0xC
        jmp public_6387f4e
        public_6387f48 : nop
        mov esi, dword ptr ds : [public_63991e8]
        public_6387f4e : nop
        cmp ecx, 1
        jne public_6387fe6
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        mov edx, dword ptr ds : [public_658b24c]
        lea ebx, ds:[edx-1]
        je public_6387fa4
        test dword ptr ds : [edi+0x50], 0x10000
        je public_6387fa4
        mov eax, dword ptr ds : [public_658b028]
        test eax, eax
        je public_6387fa4
        test ebx, ebx
        jle public_6388040
        mov edi, ebx
        public_6387f83 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push 0xC02433B6
        push 0x45A1CAC1
/*FIXUP push offset public_63f637c @0x6387f91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push eax
        call esi
        add esp, 0x10
        dec edi
        jne public_6387f83
        jmp public_6388040
        public_6387fa4 : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        jne public_6387fba
        mov ecx, dword ptr ds : [edi+0x34]
        push ecx
        call public_6382e00
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_6387fba : nop
        xor esi, esi
        test ebx, ebx
        jle public_638803a
        public_6387fc0 : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [edx+esi*8+4]
        mov ecx, dword ptr ds : [edx+esi*8]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x6387fd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        inc esi
        cmp esi, ebx
        jl public_6387fc0
        jmp public_638803a
        public_6387fe6 : nop
        cmp dword ptr ss : [esp+0x14], 0x18
        mov ebx, dword ptr ds : [public_658b24c]
        jne public_6387ffd
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_6387ffd
        dec ebx
        public_6387ffd : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        jne public_6388010
        push edi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_6388010 : nop
        xor esi, esi
        test ebx, ebx
        jle public_638803a
        public_6388016 : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [eax+esi*8+4]
        mov edx, dword ptr ds : [eax+esi*8]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x6388026*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        inc esi
        cmp esi, ebx
        jl public_6388016
        public_638803a : nop
        mov esi, dword ptr ds : [public_63991e8]
        public_6388040 : nop
        cmp dword ptr ss : [esp+0x14], 7
        pop edi
        jne public_638805f
        cmp ebx, 2
        jne public_638805f
        mov ecx, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_63f7ffc @0x6388051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7ffc
        push ecx
        call esi
        add esp, 8
        pop esi
        pop ebx
        ret 
        public_638805f : nop
        mov edx, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_63edccc @0x6388063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edx
        call esi
        add esp, 8
        public_638806e : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6387f00)
    }
}

#undef public_6387f22
#undef public_6387f48
#undef public_6387f4e
#undef public_6387f83
#undef public_6387fa4
#undef public_6387fba
#undef public_6387fc0
#undef public_6387fe6
#undef public_6387ffd
#undef public_6388010
#undef public_6388016
#undef public_638803a
#undef public_6388040
#undef public_638805f
#undef public_638806e
