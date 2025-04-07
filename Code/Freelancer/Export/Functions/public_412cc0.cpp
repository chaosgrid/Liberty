#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412cc0);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_412cd5 _public_412cd5
#define public_412ce9 _public_412ce9
#define public_412cf0 _public_412cf0
#define public_412d1f _public_412d1f
#define public_412d60 _public_412d60
#define public_412d66 _public_412d66
#define public_412d68 _public_412d68
#define public_412d7a _public_412d7a
#define public_412daa _public_412daa
#define public_412dc0 _public_412dc0
#define public_412dc6 _public_412dc6
#define public_412e24 _public_412e24

PROC_DECLARE(0x412cc0, internal_412cc0, public_412cc0);
extern "C" NAKED register_t __cdecl internal_412cc0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        push esi
        push edi
        je public_412cf0
        public_412cd5 : nop
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ds : [esi+4], ebx
        jb public_412ce9
        mov edx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [esi+8], edx
        jae public_412d7a
        public_412ce9 : nop
        add eax, 4
        cmp eax, ecx
        jne public_412cd5
        public_412cf0 : nop
        push 0x28
        call public_5b7e84
        xor esi, esi
        add esp, 4
        cmp eax, esi
        je public_412d1f
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0x20], esi
        mov dword ptr ds : [eax+0x24], esi
        mov esi, eax
        public_412d1f : nop
        push 1
        push 5
        push 5
        xor eax, eax
        mov ecx, 0xA
        mov edi, esi
        push 5
        rep stosd
        push 0x10
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], esi
        call public_5b7050
        lea eax, ds:[ebx-1]
        test ebx, eax
        je public_412d68
        mov ecx, 0x40
        cmp ecx, ebx
        sbb eax, eax
        and eax, 0x7F
        inc eax
        cmp eax, ebx
        jae public_412d66
        lea esp, ss:[esp]
        public_412d60 : nop
        shl eax, 1
        cmp eax, ebx
        jb public_412d60
        public_412d66 : nop
        mov ebx, eax
        public_412d68 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx-1]
        test ecx, edx
        mov dword ptr ds : [esi+4], ebx
        jne public_412daa
        mov eax, ecx
        jmp public_412dc6
        public_412d7a : nop
        push eax
        push ecx
        add eax, 4
        push eax
        call public_527820
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, ebp
        call public_53aaa0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0xFFFFFFFC
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_412daa : nop
        mov eax, 0x40
        cmp eax, ecx
        sbb eax, eax
        and eax, 0x7F
        inc eax
        cmp eax, ecx
        jae public_412dc6
        nop 
        lea esp, ss:[esp]
        public_412dc0 : nop
        shl eax, 1
        cmp eax, ecx
        jb public_412dc0
        public_412dc6 : nop
        push esi
        push 0
        push 1
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x24]
        push edi
        push eax
        push ebx
        push ecx
        call dword ptr ds : [edx+0xB4]
        test eax, eax
        je public_412e24
/*FIXUP push offset public_5c8c68 @0x412df0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8c68
        push 0x192
/*FIXUP push offset public_5c8bf0 @0x412dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bf0
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x412e04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        push esi
        call public_5b7e1d
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_412e24 : nop
        mov ecx, dword ptr ds : [esi+8]
        imul ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        shl ecx, 1
        add eax, ecx
        pop esi
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x412cc0)
    }
}

#undef public_412cd5
#undef public_412ce9
#undef public_412cf0
#undef public_412d1f
#undef public_412d60
#undef public_412d66
#undef public_412d68
#undef public_412d7a
#undef public_412daa
#undef public_412dc0
#undef public_412dc6
#undef public_412e24
