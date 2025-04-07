#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ade0);
CLANG_FORWARD_PROC_SYMBOL(public_41af40);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_555bf0);

#define public_41c5e9 _public_41c5e9
#define public_41c5f5 _public_41c5f5
#define public_41c5ff _public_41c5ff
#define public_41c60d _public_41c60d
#define public_41c653 _public_41c653
#define public_41c687 _public_41c687
#define public_41c6a5 _public_41c6a5
#define public_41c6c0 _public_41c6c0
#define public_41c6e0 _public_41c6e0
#define public_41c6fa _public_41c6fa
#define public_41c704 _public_41c704
#define public_41c766 _public_41c766

PROC_DECLARE(0x41c540, internal_41c540, public_41c540);
extern "C" NAKED register_t __cdecl internal_41c540()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        push esi
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_41c6fa
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push esi
        call dword ptr ds : [public_5c607c]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0xC
        test eax, eax
        je public_41c6e0
        push edi
        push 1
        push esi
        push eax
        call public_41ade0
        mov edx, dword ptr ss : [esp+0x54]
        push 5
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x30], eax
        call public_41af40
        mov ecx, dword ptr ss : [esp+0x50]
        mov ebx, eax
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call dword ptr ds : [public_5c6078]
        add esp, 0x28
        test al, al
        jne public_41c5ff
        push esi
        push 0x96
/*FIXUP push offset public_5c93e4 @0x41c5da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c93b0 @0x41c5e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93b0
        public_41c5e9 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_41c5f5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_41c5ff : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        je public_41c60d
        mov dword ptr ds : [eax], ecx
        public_41c60d : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x5C]
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov esi, dword ptr ss : [esp+0x3C]
        test esi, esi
        je public_41c653
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        push eax
        mov ecx, esi
        call public_555bf0
        public_41c653 : nop
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [public_5c6074]
        mov esi, dword ptr ss : [esp+0x4C]
        add esp, 4
        test esi, esi
        lea ecx, ss:[esp+0x14]
        push ecx
        je public_41c6a5
        mov edx, dword ptr ds : [esi+8]
        push 1
        push edx
        mov ecx, esi
        call public_537260
        test ebx, ebx
        jle public_41c5f5
        lea edi, ss:[esp+0x1C]
        public_41c687 : nop
        mov eax, dword ptr ds : [esi+8]
        push edi
        push 1
        push eax
        mov ecx, esi
        call public_537260
        add edi, 4
        dec ebx
        jne public_41c687
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_41c6a5 : nop
        call public_41b030
        add esp, 4
        test ebx, ebx
        jle public_41c5f5
        lea esi, ss:[esp+0x1C]
        lea esp, ss:[esp]
        public_41c6c0 : nop
        push esi
        call public_41b030
        add esp, 4
        add esi, 4
        dec ebx
        jne public_41c6c0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        lea esp, ss:[esp]
        public_41c6e0 : nop
        push esi
        push 0xBE
/*FIXUP push offset public_5c93e4 @0x41c6e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c9380 @0x41c6f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9380
        jmp public_41c5e9
        public_41c6fa : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_41c704
        mov dword ptr ds : [eax], edi
        public_41c704 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edi
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov ebx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edi, dword ptr ss : [esp+0x3C]
        test edi, edi
        je public_41c766
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        push esi
        call dword ptr ds : [public_5c607c]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        push eax
        mov ecx, edi
        call public_555bf0
        lea eax, ss:[esp+0x4C]
        push eax
        call dword ptr ds : [public_5c6074]
        add esp, 4
        public_41c766 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x41c540)
    }
}

#undef public_41c5e9
#undef public_41c5f5
#undef public_41c5ff
#undef public_41c60d
#undef public_41c653
#undef public_41c687
#undef public_41c6a5
#undef public_41c6c0
#undef public_41c6e0
#undef public_41c6fa
#undef public_41c704
#undef public_41c766
