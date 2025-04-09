#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_487cb0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);

#define public_487d35 _public_487d35
#define public_487dc7 _public_487dc7
#define public_487dd5 _public_487dd5
#define public_487dee _public_487dee
#define public_487e45 _public_487e45
#define public_487e54 _public_487e54
#define public_487ed2 _public_487ed2
#define public_487edb _public_487edb
#define public_487f41 _public_487f41
#define public_487f48 _public_487f48
#define public_487f5a _public_487f5a
#define public_487f71 _public_487f71
#define public_488024 _public_488024
#define public_4880b6 _public_4880b6

PROC_DECLARE(0x487cb0, internal_487cb0, public_487cb0);
extern "C" NAKED register_t __cdecl internal_487cb0()
{
    __asm
    {
        sub esp, 0x800
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x80C]
        cmp ecx, 0xFFFFFFFF
        jne public_487dc7
        mov ecx, dword ptr ds : [esi+0x1778]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x595
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x177C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x595
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x1780]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x595
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x1784]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x595
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x1764]
        test ecx, ecx
        je public_487d35
        call public_57bff0
        public_487d35 : nop
        mov ecx, dword ptr ds : [esi+0x5C0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ebx, 1
        push 0
        mov byte ptr ds : [esi+0x5D4], bl
        mov ecx, dword ptr ds : [esi+0x5C4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D5], 0
        mov ecx, dword ptr ds : [esi+0x5C8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 2
        call dword ptr ds : [eax+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D6], 0
        mov ecx, dword ptr ds : [esi+0x5CC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D7], bl
        mov ecx, dword ptr ds : [esi+0x5D0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ds : [esi+0x5D8], bl
        pop esi
        pop ebx
        add esp, 0x800
        ret 4
        public_487dc7 : nop
        mov eax, dword ptr ds : [esi+0x344]
        test eax, eax
        jne public_487dd5
        xor edx, edx
        jmp public_487dee
        public_487dd5 : nop
        mov edx, dword ptr ds : [esi+0x348]
        sub edx, eax
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_487dee : nop
        test ecx, ecx
        jl public_4880b6
        cmp ecx, edx
        jge public_4880b6
        mov edx, dword ptr ds : [esi+0x344]
        push ebp
        lea ecx, ds:[ecx+ecx*8]
        lea ebp, ds:[edx+ecx*4]
        push edi
        mov edi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0x260]
        push eax
        call dword ptr ds : [public_5c6094]
        mov ecx, dword ptr ds : [esi+0x1778]
        add esp, 4
        test eax, eax
        push 0
        je public_487e45
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi+0x1778]
        push eax
        push 0x1E
        call dword ptr ds : [ebx+0xA8]
        jmp public_487e54
        public_487e45 : nop
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_5c8ce0 @0x487e47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        public_487e54 : nop
        mov ecx, dword ptr ds : [edi+0x234]
        mov ebx, dword ptr ds : [public_5c70ec]
        push ecx
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_5d0ec4 @0x487e65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call ebx
        mov ecx, dword ptr ds : [esi+0x177C]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+0x270]
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_5d0ec4 @0x487e92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push ecx
        call ebx
        mov ecx, dword ptr ds : [esi+0x1780]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_487ed2
        push eax
        call dword ptr ds : [public_5c61fc]
        mov eax, dword ptr ds : [eax+0x14]
        add esp, 4
        push 0
        push eax
        push 0x1E
        jmp public_487edb
        public_487ed2 : nop
        push 0
/*FIXUP push offset public_5c8ce0 @0x487ed4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push 0x1D
        public_487edb : nop
        mov ecx, dword ptr ds : [esi+0x1784]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x1764]
        test eax, eax
        je public_487f71
        mov eax, dword ptr ds : [edi+0x224]
        test eax, eax
        je public_487f48
        push 0x100
/*FIXUP push offset public_671ce8 @0x487f02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671ce8
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_487f41
        mov ecx, dword ptr ds : [edi+0x224]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x64D
/*FIXUP push offset public_5d1e40 @0x487f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c9414 @0x487f36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9414
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_487f41 : nop
        mov ebx, offset public_671ce8
        jmp public_487f5a
        public_487f48 : nop
        mov edi, dword ptr ds : [edi+0x218]
        test edi, edi
        mov ebx, dword ptr ds : [public_5c700c]
        je public_487f5a
        mov ebx, edi
        public_487f5a : nop
        mov edi, dword ptr ds : [esi+0x1764]
        mov ecx, edi
        call public_57bff0
        push 0
        push ebx
        mov ecx, edi
        call public_57c0e0
        public_487f71 : nop
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax+0x200]
        test cl, cl
        pop edi
        pop ebp
        jne public_488024
        mov cl, byte ptr ds : [eax+0x201]
        test cl, cl
        jne public_488024
        mov ecx, dword ptr ds : [esi+0x5C0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        push 0
        mov ebx, 1
        mov byte ptr ds : [esi+0x5D4], bl
        mov ecx, dword ptr ds : [esi+0x5C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D5], bl
        mov ecx, dword ptr ds : [esi+0x5C8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D6], bl
        mov ecx, dword ptr ds : [esi+0x5CC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D7], bl
        mov ecx, dword ptr ds : [esi+0x5D0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ds : [esi+0x5D8], bl
        pop esi
        pop ebx
        add esp, 0x800
        ret 4
        public_488024 : nop
        mov ecx, dword ptr ds : [esi+0x5C0]
        mov edx, dword ptr ds : [ecx]
        push 0
        mov ebx, 1
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D4], 0
        mov ecx, dword ptr ds : [esi+0x5C4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D5], bl
        mov ecx, dword ptr ds : [esi+0x5C8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 2
        call dword ptr ds : [edx+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D6], 0
        mov ecx, dword ptr ds : [esi+0x5CC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        push 0
        mov byte ptr ds : [esi+0x5D7], bl
        mov ecx, dword ptr ds : [esi+0x5D0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov byte ptr ds : [esi+0x5D8], bl
        pop esi
        pop ebx
        add esp, 0x800
        ret 4
        public_4880b6 : nop
        push ecx
        push 0x4EA
/*FIXUP push offset public_5d1e40 @0x4880bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5d226c @0x4880c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d226c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        pop ebx
        add esp, 0x800
        ret 4
        UNREACHABLE_TRAP(0x487cb0)
    }
}

#undef public_487d35
#undef public_487dc7
#undef public_487dd5
#undef public_487dee
#undef public_487e45
#undef public_487e54
#undef public_487ed2
#undef public_487edb
#undef public_487f41
#undef public_487f48
#undef public_487f5a
#undef public_487f71
#undef public_488024
#undef public_4880b6
