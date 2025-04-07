#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf5130);
CLANG_FORWARD_PROC_SYMBOL(public_6d032b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d03500);
CLANG_FORWARD_PROC_SYMBOL(public_6d06ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07170);
CLANG_FORWARD_PROC_SYMBOL(public_6d09d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6122f);

#define public_6d06f33 _public_6d06f33
#define public_6d06fa5 _public_6d06fa5
#define public_6d06fc6 _public_6d06fc6
#define public_6d06fd3 _public_6d06fd3
#define public_6d07047 _public_6d07047
#define public_6d07085 _public_6d07085
#define public_6d0708e _public_6d0708e
#define public_6d07091 _public_6d07091
#define public_6d070cc _public_6d070cc
#define public_6d070e8 _public_6d070e8
#define public_6d0710b _public_6d0710b

PROC_DECLARE(0x6d06ed0, internal_6d06ed0, public_6d06ed0);
extern "C" NAKED register_t __cdecl internal_6d06ed0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6122f @0x6d06ed8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6122f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1678
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        mov ebx, ecx
        cmp byte ptr ds : [ebx+0xFC], 1
        je public_6d0710b
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64668]
        add esp, 4
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d06f33
        mov ecx, ebx
        call public_6d07170
        push esi
        call public_6d03500
        add esp, 4
        jmp public_6d07047
        public_6d06f33 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6d644ec]
        push esi
        call dword ptr ds : [public_6d64664]
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        call public_6d032b0
        add esp, 0x14
        lea ecx, ss:[esp+0x11C]
        call dword ptr ds : [public_6d644f0]
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1694], 0
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d06fd3
        mov edi, dword ptr ds : [public_6d64540]
        lea ecx, ss:[esp+0x11C]
        call edi
        test al, al
        je public_6d06fd3
        mov esi, dword ptr ds : [public_6d64538]
/*FIXUP public_6d06fa5 : nop
        push offset public_6d67d08 @0x6d06fa5*/
  FIXUP public_6d06fa5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d08
        lea ecx, ss:[esp+0x120]
        call esi
        test al, al
        je public_6d06fc6
        lea eax, ss:[esp+0x11C]
        push eax
        mov ecx, ebx
        call public_6d09d60
        public_6d06fc6 : nop
        lea ecx, ss:[esp+0x11C]
        call edi
        test al, al
        jne public_6d06fa5
        public_6d06fd3 : nop
        lea ecx, ss:[esp+0x1544]
        mov dword ptr ss : [esp+0x168C], 1
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x1544]
        mov byte ptr ss : [esp+0x168C], 2
        call dword ptr ds : [public_6d64660]
        push 1
        lea ecx, ss:[esp+0x1548]
        mov byte ptr ss : [esp+0x1690], 1
        call dword ptr ds : [public_6d64b74]
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x168C], 3
        call dword ptr ds : [public_6d64660]
        push 1
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x1690], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        public_6d07047 : nop
        push 0xFFFFFFFF
        lea ecx, ds:[ebx+0x5C]
        call public_6cf5130
        mov esi, eax
/*FIXUP push offset public_6d67d04 @0x6d07053*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d04
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_6d6465c]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x20], eax
        je public_6d070e8
        lea edx, ds:[esi+esi*4]
        shl edx, 2
        push ebp
        push edx
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor ebp, ebp
        lea edi, ds:[eax+0x10]
        public_6d07085 : nop
        test ebp, ebp
        jne public_6d0708e
        mov ebp, dword ptr ds : [ebx+0x60]
        jmp public_6d07091
        public_6d0708e : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d07091 : nop
        test ebp, ebp
        je public_6d070cc
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi-0x10], esi
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi-0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        fld dword ptr ds : [eax+0x38]
        mov esi, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edi]
        add edi, 0x14
        jmp public_6d07085
        public_6d070cc : nop
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6d5ffb0
        add esp, 4
        pop ebp
        public_6d070e8 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov byte ptr ds : [ebx+0xFC], 1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 0x3C
        call public_6d43650
        add esp, 8
        pop edi
        pop esi
        public_6d0710b : nop
        mov ecx, dword ptr ss : [esp+0x167C]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1684
        ret 
        UNREACHABLE_TRAP(0x6d06ed0)
    }
}

#undef public_6d06f33
#undef public_6d06fa5
#undef public_6d06fc6
#undef public_6d06fd3
#undef public_6d07047
#undef public_6d07085
#undef public_6d0708e
#undef public_6d07091
#undef public_6d070cc
#undef public_6d070e8
#undef public_6d0710b
