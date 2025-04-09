#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_596140);
CLANG_FORWARD_PROC_SYMBOL(public_5962c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_597639 _public_597639
#define public_597659 _public_597659
#define public_59769d _public_59769d
#define public_5976a9 _public_5976a9
#define public_5976cb _public_5976cb
#define public_5976ee _public_5976ee
#define public_597730 _public_597730
#define public_597741 _public_597741
#define public_59775a _public_59775a

PROC_DECLARE(0x597560, internal_597560, public_597560);
extern "C" NAKED register_t __cdecl internal_597560()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x3C]
        push eax
        push 0
        call public_422690
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        push 0
        push 7
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [esi+0x42C]
        test al, al
        push 0
        push 1
        je public_597639
        lea edx, ds:[esi+0x350]
        push edx
        mov ecx, esi
        call public_5962c0
        push 1
        push 1
        lea eax, ds:[esi+0x33C]
        push eax
        mov ecx, esi
        call public_5962c0
        jmp public_597659
        public_597639 : nop
        lea ecx, ds:[esi+0x350]
        push ecx
        mov ecx, esi
        call public_596140
        push 1
        push 1
        lea edx, ds:[esi+0x33C]
        push edx
        mov ecx, esi
        call public_596140
        public_597659 : nop
        mov ecx, dword ptr ds : [esi+0x3B8]
        cmp ecx, 0xFFFFFFFF
        je public_59775a
        fld dword ptr ds : [esi+0x3BC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_597741
        mov eax, ecx
        sub eax, 0
        push ebx
        push edi
        je public_59769d
        dec eax
        jne public_597730
        fld dword ptr ds : [esi+0x3D0]
        fadd dword ptr ds : [esi+0x3C8]
        jmp public_5976a9
        public_59769d : nop
        fld dword ptr ds : [esi+0x3C8]
        fsub dword ptr ds : [esi+0x3D0]
        public_5976a9 : nop
        mov al, byte ptr ds : [esi+0x3B4]
        fstp dword ptr ds : [esi+0x3C8]
        test al, al
        je public_5976cb
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [esi+0x3C4]
        public_5976cb : nop
        mov ecx, esi
        call public_595ca0
        mov al, byte ptr ds : [esi+0x3B4]
        test al, al
        je public_5976ee
        fld dword ptr ds : [esi+0x3C4]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [esi+0x3C4]
        public_5976ee : nop
        mov ecx, esi
        call public_595840
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_597730
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF005
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_597730
        fld dword ptr ds : [esi+0x3C8]
        mov ebx, dword ptr ds : [edi]
        call public_5b7ec0
        push eax
        push esi
        mov ecx, edi
        push 0x3E
        call dword ptr ds : [ebx+0xA8]
        public_597730 : nop
        pop edi
        pop ebx
        mov dword ptr ds : [esi+0x3BC], 0x3DCCCCCD
        pop esi
        add esp, 8
        ret 
        public_597741 : nop
        fld dword ptr ds : [esi+0x3BC]
        fstp qword ptr ss : [esp+4]
        call public_42d680
        fsubr qword ptr ss : [esp+4]
        fstp dword ptr ds : [esi+0x3BC]
        public_59775a : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x597560)
    }
}

#undef public_597639
#undef public_597659
#undef public_59769d
#undef public_5976a9
#undef public_5976cb
#undef public_5976ee
#undef public_597730
#undef public_597741
#undef public_59775a
