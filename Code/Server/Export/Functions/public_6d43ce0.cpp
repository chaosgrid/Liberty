#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d43c40);
CLANG_FORWARD_PROC_SYMBOL(public_6d43ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d44170);

#define public_6d43d70 _public_6d43d70
#define public_6d43e36 _public_6d43e36
#define public_6d43e72 _public_6d43e72
#define public_6d43e82 _public_6d43e82
#define public_6d43ea7 _public_6d43ea7
#define public_6d43f61 _public_6d43f61

PROC_DECLARE(0x6d43ce0, internal_6d43ce0, public_6d43ce0);
extern "C" NAKED register_t __cdecl internal_6d43ce0()
{
    __asm
    {
        sub esp, 0x128
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_6d642ec]
        mov ecx, dword ptr ds : [eax+4]
        mov edi, ecx
        and edi, 0x3FFFFFFF
        inc ecx
        test edi, 0x3FFFFFFF
        mov dword ptr ds : [eax+4], ecx
        je public_6d43f61
        mov eax, dword ptr ds : [public_6d8f764]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x13C]
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0xBF800000
        push esi
        je public_6d43e36
        mov eax, dword ptr ss : [esp+0x14C]
        mov dword ptr ss : [esp+0x30], eax
        call public_6d43c40
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d43d70
        mov ecx, dword ptr ds : [public_6d64a44]
        push esi
        push 0xA7
/*FIXUP push offset public_6d6acf0 @0x6d43d5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acf0
        mov eax, 0x100001
/*FIXUP push offset public_6d6ac68 @0x6d43d65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac68
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d43d70 : nop
        mov eax, dword ptr ds : [public_6d8f638]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6d8f634
        call public_6d44170
        mov edx, dword ptr ds : [public_6d8f638]
        mov esi, dword ptr ds : [edx+4]
        add esi, 8
        call dword ptr ds : [public_6d6481c]
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [public_6d64a94]
        push 0x104
        lea eax, ss:[esp+0x38]
        push eax
        push ecx
        call ebx
        mov edx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [public_6d64a84]
/*FIXUP push offset public_6d6ad18 @0x6d43dbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad18
        push edx
        call ebp
        mov ecx, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ss : [esp+0x140]
        push ecx
        push edx
        push edi
        call eax
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi], eax
        jne public_6d43f61
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_6d6ad28 @0x6d43de6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad28
        push eax
        call ebp
        mov ecx, dword ptr ds : [esi]
        push ecx
        call eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        push 0x104
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call dword ptr ds : [public_6d64a90]
        mov edx, dword ptr ds : [public_6d8f638]
        mov eax, dword ptr ds : [edx+4]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6d8f634
        call public_6d0f620
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x128
        ret 
        public_6d43e36 : nop
        mov ecx, dword ptr ss : [esp+0x14C]
        mov dword ptr ss : [esp+0x30], ecx
        call public_6d43c40
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d43e72
        mov edx, dword ptr ds : [public_6d64a44]
        push esi
        push 0xA7
/*FIXUP push offset public_6d6acf0 @0x6d43e5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acf0
        mov eax, 0x100001
/*FIXUP push offset public_6d6ac68 @0x6d43e67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac68
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d43e72 : nop
        mov ecx, dword ptr ds : [public_6d8f644]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d43ea7
        public_6d43e82 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, dword ptr ss : [esp+0x2C]
        jge public_6d43ea7
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6d8f644]
        jne public_6d43e82
        public_6d43ea7 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6d8f640
        call public_6d44170
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+8]
        call dword ptr ds : [public_6d6481c]
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [public_6d64a94]
        push 0x104
        lea ecx, ss:[esp+0x38]
        push ecx
        push edx
        call ebx
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [public_6d64a84]
/*FIXUP push offset public_6d6ad18 @0x6d43ee8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad18
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ss : [esp+0x140]
        push ecx
        push edx
        push edi
        call eax
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi], eax
        jne public_6d43f61
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        lea esi, ds:[eax+8]
/*FIXUP push offset public_6d6ad28 @0x6d43f16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad28
        push ecx
        call ebp
        mov edx, dword ptr ds : [esi]
        push edx
        call eax
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        push 0x104
        lea eax, ss:[esp+0x38]
        push eax
        push ecx
        call ebx
        mov edx, dword ptr ds : [esi+4]
        push edx
        call dword ptr ds : [public_6d64a90]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, offset public_6d8f640
        call public_6d0f620
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x128
        ret 
        public_6d43f61 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x128
        ret 
        UNREACHABLE_TRAP(0x6d43ce0)
    }
}

#undef public_6d43d70
#undef public_6d43e36
#undef public_6d43e72
#undef public_6d43e82
#undef public_6d43ea7
#undef public_6d43f61
