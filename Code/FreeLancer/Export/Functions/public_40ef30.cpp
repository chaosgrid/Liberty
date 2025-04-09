#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ef30);
CLANG_FORWARD_PROC_SYMBOL(public_40f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_42e160);
CLANG_FORWARD_PROC_SYMBOL(public_42e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_527440);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40ef47 _public_40ef47
#define public_40ef80 _public_40ef80
#define public_40ef8c _public_40ef8c
#define public_40ef98 _public_40ef98
#define public_40efa2 _public_40efa2
#define public_40efb1 _public_40efb1
#define public_40efcc _public_40efcc
#define public_40efd4 _public_40efd4
#define public_40efde _public_40efde
#define public_40efe3 _public_40efe3
#define public_40efe5 _public_40efe5
#define public_40efee _public_40efee
#define public_40f045 _public_40f045
#define public_40f050 _public_40f050
#define public_40f073 _public_40f073

PROC_DECLARE(0x40ef30, internal_40ef30, public_40ef30);
extern "C" NAKED register_t __cdecl internal_40ef30()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6164b4]
        mov ebp, dword ptr ds : [edi]
        cmp ebp, edi
        je public_40efee
        push ebx
        public_40ef47 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        test esi, esi
        je public_40efb1
        mov edi, dword ptr ds : [esi+0x54]
        test edi, edi
        jle public_40efa2
        push edi
        lea ecx, ds:[esi+4]
        mov ebx, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x25
/*FIXUP push offset public_5c84cc @0x40ef6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c8468 @0x40ef71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8468
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        test edi, edi
        jle public_40efa2
        public_40ef80 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_40ef8c
        call public_42e160
        public_40ef8c : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_40ef98
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_40ef98 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        dec ecx
        dec edi
        mov dword ptr ds : [esi+0x54], ecx
        jne public_40ef80
        public_40efa2 : nop
        push esi
        call public_5b7e1d
        mov edi, dword ptr ds : [public_6164b4]
        add esp, 4
        public_40efb1 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_40efcc
        push eax
        call public_527440
        mov edi, dword ptr ds : [public_6164b4]
        add esp, 4
        jmp public_40efe3
        public_40efcc : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_40efde
        public_40efd4 : nop
        mov ebp, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebp, dword ptr ds : [eax+8]
        je public_40efd4
        public_40efde : nop
        cmp dword ptr ss : [ebp+8], eax
        je public_40efe5
        public_40efe3 : nop
        mov ebp, eax
        public_40efe5 : nop
        cmp ebp, edi
        jne public_40ef47
        pop ebx
        public_40efee : nop
        mov ecx, dword ptr ds : [public_6164c0]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_40f045
        mov ecx, eax
        cmp eax, ecx
        jne public_40f045
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, offset public_6164b0
        call public_40f0d0
        mov ecx, dword ptr ds : [public_6164b4]
        mov edx, dword ptr ds : [public_6164b8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [public_6164b4]
        pop edi
        mov dword ptr ds : [public_6164c0], 0
        pop esi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6164b4]
        pop ebp
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        jmp public_42e2f0
        public_40f045 : nop
        cmp eax, edi
        je public_40f073
        lea esp, ss:[esp]
        public_40f050 : nop
        lea ecx, ss:[esp+0xC]
        mov esi, eax
        call public_52afa0
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6164b0
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_40f050
        public_40f073 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        jmp public_42e2f0
        UNREACHABLE_TRAP(0x40ef30)
    }
}

#undef public_40ef47
#undef public_40ef80
#undef public_40ef8c
#undef public_40ef98
#undef public_40efa2
#undef public_40efb1
#undef public_40efcc
#undef public_40efd4
#undef public_40efde
#undef public_40efe3
#undef public_40efe5
#undef public_40efee
#undef public_40f045
#undef public_40f050
#undef public_40f073
