#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2830);
CLANG_FORWARD_PROC_SYMBOL(public_6efcac0);
CLANG_FORWARD_PROC_SYMBOL(public_6efcaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f28ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f285d8 _public_6f285d8
#define public_6f285e0 _public_6f285e0
#define public_6f2861e _public_6f2861e
#define public_6f28639 _public_6f28639
#define public_6f28651 _public_6f28651
#define public_6f2866a _public_6f2866a
#define public_6f286c5 _public_6f286c5
#define public_6f286ca _public_6f286ca
#define public_6f286d2 _public_6f286d2
#define public_6f286e5 _public_6f286e5
#define public_6f286f0 _public_6f286f0
#define public_6f28772 _public_6f28772
#define public_6f287de _public_6f287de
#define public_6f2880b _public_6f2880b
#define public_6f28811 _public_6f28811
#define public_6f28814 _public_6f28814
#define public_6f2882a _public_6f2882a

PROC_DECLARE(0x6f28560, internal_6f28560, public_6f28560);
extern "C" NAKED register_t __cdecl internal_6f28560()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov esi, ecx
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi+0x120], 0
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6efd1a0
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x10C], eax
        je public_6f2882a
        mov ecx, eax
        call public_6efcaf0
        mov ecx, dword ptr ds : [esi+0x10C]
        call public_6efcac0
        mov ebx, 1
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2882a
        jmp public_6f285e0
        public_6f285d8 : nop
        mov edi, dword ptr ds : [public_6fb3048]
        mov edi, edi
/*FIXUP public_6f285e0 : nop
        push offset public_6fb4708 @0x6f285e0*/
  FIXUP public_6f285e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push ebx
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        je public_6f2861e
/*FIXUP push offset public_6fb924c @0x6f285fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb924c
        push ebx
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6f2861e
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x120], 1
        jmp public_6f28814
        public_6f2861e : nop
        push ebx
        mov ecx, ebp
        call edi
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], al
        jne public_6f28639
        mov byte ptr ss : [esp+0x24], al
        jmp public_6f2866a
        public_6f28639 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f28651
        mov eax, 0x2F
        public_6f28651 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], 0
        public_6f2866a : nop
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x118]
        mov edx, dword ptr ds : [eax+0x11C]
        lea esi, ds:[eax+0x110]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, ecx
        jae public_6f28772
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        je public_6f286c5
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, edx
        ja public_6f286ca
        public_6f286c5 : nop
        mov ebx, 1
        public_6f286ca : nop
        test ebp, ebp
        jne public_6f286d2
        xor edx, edx
        jmp public_6f286e5
        public_6f286d2 : nop
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f286e5 : nop
        lea ebp, ds:[edx+ebx]
        test ebp, ebp
        mov eax, ebp
        jge public_6f286f0
        xor eax, eax
        public_6f286f0 : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push edx
        mov ecx, esi
        call public_6f28e30
        lea ecx, ss:[esp+0x20]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call public_6ed2830
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        add edx, 0x34
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        imul ebp, 0x34
        add ebp, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebp
        call public_6ed2800
        mov ebp, dword ptr ss : [esp+0x58]
        inc eax
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        jmp public_6f28811
        public_6f28772 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f287de
        lea edx, ds:[edi+0x34]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ebp, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebp
        mov ecx, esi
        call public_6ed2830
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        push edi
        call public_6f28e70
        mov ebp, dword ptr ss : [esp+0x64]
        add esp, 0xC
        jmp public_6f2880b
        public_6f287de : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFCC
        push ecx
        mov ecx, esi
        call public_6f28e30
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFCC
        push eax
        push edi
        call public_6f28ee0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x34]
        push ecx
        push edi
        call public_6f28e70
        add esp, 0x18
        public_6f2880b : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x34
        public_6f28811 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f28814 : nop
        inc ebx
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f285d8
        public_6f2882a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6f28560)
    }
}

#undef public_6f285d8
#undef public_6f285e0
#undef public_6f2861e
#undef public_6f28639
#undef public_6f28651
#undef public_6f2866a
#undef public_6f286c5
#undef public_6f286ca
#undef public_6f286d2
#undef public_6f286e5
#undef public_6f286f0
#undef public_6f28772
#undef public_6f287de
#undef public_6f2880b
#undef public_6f28811
#undef public_6f28814
#undef public_6f2882a
