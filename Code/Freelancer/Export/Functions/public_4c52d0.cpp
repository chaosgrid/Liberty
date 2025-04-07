#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5090);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_541890);

#define public_4c52e0 _public_4c52e0
#define public_4c52f4 _public_4c52f4
#define public_4c5303 _public_4c5303
#define public_4c531a _public_4c531a
#define public_4c532d _public_4c532d
#define public_4c5388 _public_4c5388
#define public_4c53c4 _public_4c53c4
#define public_4c53e3 _public_4c53e3
#define public_4c53e5 _public_4c53e5
#define public_4c53f6 _public_4c53f6
#define public_4c53ff _public_4c53ff
#define public_4c5401 _public_4c5401
#define public_4c540d _public_4c540d
#define public_4c541c _public_4c541c
#define public_4c541e _public_4c541e
#define public_4c5453 _public_4c5453
#define public_4c547c _public_4c547c

PROC_DECLARE(0x4c52d0, internal_4c52d0, public_4c52d0);
extern "C" NAKED register_t __cdecl internal_4c52d0()
{
    __asm
    {
        push ecx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4c52f4
        lea ebx, ds:[ebx]
        public_4c52e0 : nop
        movzx ecx, word ptr ds : [eax+8]
        cmp ecx, 0x42
        je public_4c532d
        cmp ecx, 0x52
        je public_4c531a
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_4c52e0
        public_4c52f4 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4c547c
        mov ecx, 0x4E
        public_4c5303 : nop
        cmp word ptr ds : [eax+8], cx
        je public_4c5453
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_4c5303
        xor al, al
        pop edi
        pop ecx
        ret 8
        public_4c531a : nop
        mov eax, dword ptr ds : [eax+4]
        push 0
        push eax
        call public_541890
        add esp, 8
        jmp public_4c541e
        public_4c532d : nop
        push esi
        mov esi, dword ptr ds : [eax+4]
        cmp dword ptr ds : [public_673394], esi
        je public_4c5388
        push 0
        mov ecx, offset public_6728d8
        mov dword ptr ds : [public_673394], esi
        mov dword ptr ds : [public_6728e0], 0
        call dword ptr ds : [public_5c645c]
        push esi
        mov byte ptr ds : [public_673398], 0
        call dword ptr ds : [public_5c6090]
        add esp, 4
        test eax, eax
        je public_4c5388
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [public_673354]
        mov dword ptr ds : [public_6728e0], eax
        jne public_4c540d
        call public_4c5090
        public_4c5388 : nop
        mov eax, dword ptr ds : [public_6728e0]
        cmp eax, dword ptr ds : [public_673354]
        jne public_4c540d
        mov al, byte ptr ds : [public_673398]
        test al, al
        jne public_4c540d
        lea ecx, ss:[esp+8]
        push ecx
        mov byte ptr ds : [public_673398], 1
        mov dword ptr ss : [esp+0xC], 2
        call public_540fc0
        add esp, 4
        test eax, eax
        je public_4c540d
        mov edx, dword ptr ds : [public_673394]
        public_4c53c4 : nop
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_4c53e3
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4c53e3
        mov esi, dword ptr ds : [ecx+0x4C]
        and esi, 0x303
        cmp esi, 0x303
        je public_4c53e5
        public_4c53e3 : nop
        xor ecx, ecx
        public_4c53e5 : nop
        cmp dword ptr ds : [ecx+0x160], edx
        je public_4c53f6
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_4c53c4
        jmp public_4c540d
        public_4c53f6 : nop
        test eax, eax
        je public_4c53ff
        add eax, 8
        jmp public_4c5401
        public_4c53ff : nop
        xor eax, eax
        public_4c5401 : nop
        push eax
        mov ecx, offset public_6728d8
        call dword ptr ds : [public_5c645c]
        public_4c540d : nop
        mov eax, dword ptr ds : [public_6728d8]
        test eax, eax
        pop esi
        je public_4c541c
        add eax, 0xFFFFFFF8
        jmp public_4c541e
        public_4c541c : nop
        xor eax, eax
        public_4c541e : nop
        test eax, eax
        je public_4c52f4
        mov ecx, dword ptr ds : [public_673354]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov al, 1
        pop edi
        pop ecx
        ret 8
        public_4c5453 : nop
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        add eax, 8
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov al, 1
        pop edi
        pop ecx
        ret 8
        public_4c547c : nop
        xor al, al
        pop edi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4c52d0)
    }
}

#undef public_4c52e0
#undef public_4c52f4
#undef public_4c5303
#undef public_4c531a
#undef public_4c532d
#undef public_4c5388
#undef public_4c53c4
#undef public_4c53e3
#undef public_4c53e5
#undef public_4c53f6
#undef public_4c53ff
#undef public_4c5401
#undef public_4c540d
#undef public_4c541c
#undef public_4c541e
#undef public_4c5453
#undef public_4c547c
