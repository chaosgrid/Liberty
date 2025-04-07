#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_63896e0);
CLANG_FORWARD_PROC_SYMBOL(public_638ac90);

#define public_6389724 _public_6389724
#define public_6389744 _public_6389744
#define public_638974e _public_638974e
#define public_6389774 _public_6389774
#define public_6389795 _public_6389795
#define public_63897b4 _public_63897b4
#define public_63897db _public_63897db
#define public_63897f9 _public_63897f9
#define public_638983e _public_638983e
#define public_638985c _public_638985c
#define public_6389869 _public_6389869
#define public_63898a1 _public_63898a1
#define public_63898d3 _public_63898d3
#define public_63898e8 _public_63898e8

PROC_DECLARE(0x63896e0, internal_63896e0, public_63896e0);
extern "C" NAKED register_t __cdecl internal_63896e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        push esi
        push edi
        je public_63898e8
        mov eax, dword ptr ds : [public_658b8e0]
        mov edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x48], eax
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_63898e8
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 4
        je public_6389724
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_63898e8
        public_6389724 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_63898e8
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_63898e8
        public_6389744 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_638974e
        mov eax, dword ptr ds : [esi+8]
        public_638974e : nop
        mov ecx, dword ptr ds : [eax+0x48]
        cmp ecx, dword ptr ds : [public_658b8e0]
        je public_63898d3
        mov ecx, dword ptr ds : [public_658b198]
        test ecx, ecx
        je public_6389774
        test dword ptr ds : [eax+0x50], 0x40000
        je public_63898d3
        public_6389774 : nop
        mov ecx, dword ptr ds : [public_658b054]
        test ecx, ecx
        je public_6389795
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [esi]
        push edx
        push ecx
        push eax
        push edi
        push ebx
        call public_638ac90
        add esp, 0x14
        jmp public_63898d3
        public_6389795 : nop
        mov ecx, dword ptr ds : [public_658b058]
        test ecx, ecx
        jl public_63897b4
        mov edx, dword ptr ds : [edi+0x4C]
        push edx
/*FIXUP push offset public_63f8378 @0x63897a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8378
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        jmp public_63897db
        public_63897b4 : nop
        inc dword ptr ds : [public_658b8c4]
        mov eax, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63f8360 @0x63897cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8360
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_63897db : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_63898a1
        lea eax, ds:[esi+4]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_63898a1
        public_63897f9 : nop
        mov edx, dword ptr ds : [public_658bb70]
        lea eax, ss:[esp+0x18]
        inc edx
        push eax
        mov dword ptr ds : [public_658bb70], edx
        mov ecx, dword ptr ds : [esi+8]
        push edi
        push ecx
        call public_637fd60
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push edi
        push ecx
        call public_6381270
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 0x1C
        xor edi, edi
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jle public_6389869
        mov esi, eax
        public_638983e : nop
        cmp edi, dword ptr ds : [public_658b058]
        je public_638985c
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
/*FIXUP push offset public_63f82f8 @0x638984d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638985c : nop
        mov eax, dword ptr ds : [public_658b24c]
        inc edi
        add esi, 8
        cmp edi, eax
        jl public_638983e
/*FIXUP public_6389869 : nop
        push offset public_63edccc @0x6389869*/
  FIXUP public_6389869 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call dword ptr ds : [public_63991e8]
        mov ecx, dword ptr ds : [public_658b804]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        call public_6377fe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ss : [ebp+0xC]
        add eax, 4
        add esp, 0x10
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        jne public_63897f9
        public_63898a1 : nop
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jl public_63898d3
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
/*FIXUP push offset public_63f8344 @0x63898c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8344
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_63898d3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6389744
        public_63898e8 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63896e0)
    }
}

#undef public_6389724
#undef public_6389744
#undef public_638974e
#undef public_6389774
#undef public_6389795
#undef public_63897b4
#undef public_63897db
#undef public_63897f9
#undef public_638983e
#undef public_638985c
#undef public_6389869
#undef public_63898a1
#undef public_63898d3
#undef public_63898e8
