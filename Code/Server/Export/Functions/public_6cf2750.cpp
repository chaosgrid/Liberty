#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b800);

#define public_6cf27af _public_6cf27af
#define public_6cf27d5 _public_6cf27d5
#define public_6cf27f7 _public_6cf27f7
#define public_6cf281f _public_6cf281f
#define public_6cf2821 _public_6cf2821
#define public_6cf2829 _public_6cf2829
#define public_6cf2842 _public_6cf2842
#define public_6cf2844 _public_6cf2844
#define public_6cf285f _public_6cf285f
#define public_6cf2861 _public_6cf2861
#define public_6cf2884 _public_6cf2884
#define public_6cf2886 _public_6cf2886
#define public_6cf28a1 _public_6cf28a1
#define public_6cf28a3 _public_6cf28a3
#define public_6cf28a6 _public_6cf28a6
#define public_6cf28ac _public_6cf28ac
#define public_6cf28b6 _public_6cf28b6
#define public_6cf28c1 _public_6cf28c1
#define public_6cf28f5 _public_6cf28f5

PROC_DECLARE(0x6cf2750, internal_6cf2750, public_6cf2750);
extern "C" NAKED register_t __cdecl internal_6cf2750()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18C]
        test al, al
        mov ebx, dword ptr ss : [esp+0x10]
        je public_6cf27af
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        mov edi, 0x100001
        call dword ptr ds : [public_6d642d8]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        push eax
        call dword ptr ds : [public_6d6419c]
        mov ecx, eax
        add ecx, 8
        call dword ptr ds : [public_6d642d4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0xA1
/*FIXUP push offset public_6d65f9c @0x6cf279f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f9c
/*FIXUP push offset public_6d65618 @0x6cf27a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65618
        push edi
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6cf27af : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6cf28c1
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6cf28b6
        public_6cf27d5 : nop
        mov cx, word ptr ds : [edi+8]
        mov edx, dword ptr ds : [public_6d6401c]
        cmp cx, word ptr ds : [edx]
        lea eax, ds:[edi+8]
        jne public_6cf27f7
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1B4]
        jmp public_6cf28ac
        public_6cf27f7 : nop
        fld dword ptr ds : [edi+0xC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ds : [esi+0x10]
        jne public_6cf2829
        test eax, eax
        je public_6cf281f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2821
        public_6cf281f : nop
        xor eax, eax
        public_6cf2821 : nop
        fld dword ptr ds : [edi+0xC]
        jmp public_6cf28a6
        public_6cf2829 : nop
        test eax, eax
        je public_6cf2842
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        jne public_6cf2842
        mov ecx, eax
        jmp public_6cf2844
        public_6cf2842 : nop
        xor ecx, ecx
        public_6cf2844 : nop
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xF0]
        je public_6cf285f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_6cf2861
        public_6cf285f : nop
        xor eax, eax
        public_6cf2861 : nop
        dec ecx
        mov dword ptr ds : [eax+0xF0], ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cf2884
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_6cf2884
        mov ecx, eax
        jmp public_6cf2886
        public_6cf2884 : nop
        xor ecx, ecx
        public_6cf2886 : nop
        test eax, eax
        mov ecx, dword ptr ds : [ecx+0xEC]
        je public_6cf28a1
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_6cf28a3
        public_6cf28a1 : nop
        xor eax, eax
        public_6cf28a3 : nop
        fld dword ptr ds : [ecx+0x1C]
        public_6cf28a6 : nop
        fstp dword ptr ds : [eax+0xF4]
        public_6cf28ac : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6cf27d5
        public_6cf28b6 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push ebx
        push esi
        call public_6d0b800
        pop ebp
        public_6cf28c1 : nop
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6cf28f5
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x1B8]
        test al, al
        jne public_6cf28f5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf28f5
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x158]
        public_6cf28f5 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cf2750)
    }
}

#undef public_6cf27af
#undef public_6cf27d5
#undef public_6cf27f7
#undef public_6cf281f
#undef public_6cf2821
#undef public_6cf2829
#undef public_6cf2842
#undef public_6cf2844
#undef public_6cf285f
#undef public_6cf2861
#undef public_6cf2884
#undef public_6cf2886
#undef public_6cf28a1
#undef public_6cf28a3
#undef public_6cf28a6
#undef public_6cf28ac
#undef public_6cf28b6
#undef public_6cf28c1
#undef public_6cf28f5
