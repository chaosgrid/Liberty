#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_553740);
CLANG_FORWARD_PROC_SYMBOL(public_5544e0);
CLANG_FORWARD_PROC_SYMBOL(public_5545a0);
CLANG_FORWARD_PROC_SYMBOL(public_5547c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5545f7 _public_5545f7
#define public_5546c7 _public_5546c7
#define public_5546d7 _public_5546d7
#define public_5546e3 _public_5546e3
#define public_55470a _public_55470a
#define public_554743 _public_554743
#define public_554750 _public_554750
#define public_554760 _public_554760
#define public_554770 _public_554770
#define public_5547b2 _public_5547b2

PROC_DECLARE(0x5545a0, internal_5545a0, public_5545a0);
extern "C" NAKED register_t __cdecl internal_5545a0()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c60f8]
        call edi
        mov eax, dword ptr ss : [esp+0x120]
        push eax
        call dword ptr ds : [public_5c6094]
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [public_679954], eax
        jne public_5545f7
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e1188 @0x5545d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1188
        push 0x48B
/*FIXUP push offset public_5e0f00 @0x5545dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x5545e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_679954]
        add esp, 0x14
        public_5545f7 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [public_5c6b7c]
        lea ecx, ss:[esp+0x12C]
        push ecx
        mov dword ptr ds : [public_6798d8], ebx
        mov dword ptr ds : [public_6798e8], ebx
        mov dword ptr ds : [public_6798dc], ebx
        mov dword ptr ds : [public_6798ec], ebx
        mov dword ptr ds : [public_6798e0], ebx
        mov dword ptr ds : [public_6798f0], ebx
        mov dword ptr ds : [public_6798e4], ebx
        mov dword ptr ds : [public_6798f4], ebx
        mov byte ptr ds : [public_6798d0], 1
        mov dword ptr ds : [public_6798d4], 0xBF800000
        mov dword ptr ds : [public_679958], ebx
        mov dword ptr ds : [public_67995c], ebx
        mov byte ptr ds : [public_679960], bl
        mov dword ptr ds : [public_679964], 0
        mov byte ptr ds : [public_679968], bl
        mov dword ptr ds : [public_67996c], 0x447A0000
        mov byte ptr ds : [public_679970], bl
        call public_5547c0
        mov edx, dword ptr ds : [public_5c6b78]
        mov dword ptr ds : [edx], offset _public_5544e0
        mov eax, dword ptr ss : [esp+0x130]
        push eax
        call dword ptr ds : [public_5c6b74]
        call edi
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_553740
        add esp, 0x14
        call edi
        mov eax, dword ptr ds : [public_6798a4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebp, dword ptr ds : [public_5c65c8]
        je public_5546d7
        public_5546c7 : nop
        mov ecx, dword ptr ds : [esi+8]
        call ebp
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6798a4]
        cmp esi, eax
        jne public_5546c7
        public_5546d7 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_55470a
        public_5546e3 : nop
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6798a0
        call public_516f70
        cmp dword ptr ss : [esp+0x10], esi
        jne public_5546e3
        public_55470a : nop
        call edi
        call public_54baf0
        cmp eax, ebx
        je public_554743
        add eax, 0xC
        cmp eax, ebx
        je public_554743
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_554743
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_554743
        mov edx, dword ptr ds : [public_613ed0]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x90]
        public_554743 : nop
        mov eax, dword ptr ds : [public_679874]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_554760
        mov edi, edi
        public_554750 : nop
        mov ecx, dword ptr ds : [esi+8]
        call ebp
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_679874]
        cmp esi, eax
        jne public_554750
        public_554760 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        pop ebp
        je public_5547b2
        lea esp, ss:[esp]
        public_554770 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], eax
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_679878]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679878], ecx
        jne public_554770
        public_5547b2 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x110
        ret 
        UNREACHABLE_TRAP(0x5545a0)
    }
}

#undef public_5545f7
#undef public_5546c7
#undef public_5546d7
#undef public_5546e3
#undef public_55470a
#undef public_554743
#undef public_554750
#undef public_554760
#undef public_554770
#undef public_5547b2
