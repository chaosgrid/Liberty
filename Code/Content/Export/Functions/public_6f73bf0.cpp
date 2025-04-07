#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f672d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73130);
CLANG_FORWARD_PROC_SYMBOL(public_6f73210);
CLANG_FORWARD_PROC_SYMBOL(public_6f73bf0);

#define public_6f73c80 _public_6f73c80
#define public_6f73cb3 _public_6f73cb3
#define public_6f73cc0 _public_6f73cc0
#define public_6f73cf3 _public_6f73cf3
#define public_6f73d4a _public_6f73d4a
#define public_6f73d59 _public_6f73d59
#define public_6f73db7 _public_6f73db7
#define public_6f73dbb _public_6f73dbb

PROC_DECLARE(0x6f73bf0, internal_6f73bf0, public_6f73bf0);
extern "C" NAKED register_t __cdecl internal_6f73bf0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        call public_6f57710
        test al, al
        jne public_6f73db7
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f73d59
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0x451C4000
        call public_6eb70f0
        push eax
        mov ecx, edi
        call public_6f72dd0
        test al, al
        jne public_6f73db7
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], 0x428C0000
        mov dword ptr ss : [esp+0x14], 0x457A0000
        call public_6eb70f0
        mov esi, dword ptr ds : [edi+0xBC]
        mov dword ptr ss : [esp+0x14], eax
        cmp esi, dword ptr ds : [edi+0xC0]
        je public_6f73cc0
        lea ecx, ds:[ecx]
        public_6f73c80 : nop
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f73cb3
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        call public_6eb70a0
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_6f672d0
        add esp, 0x10
        test al, al
        jne public_6f73db7
        public_6f73cb3 : nop
        mov eax, dword ptr ds : [edi+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f73c80
        public_6f73cc0 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0x457A0000
        call public_6eb70f0
        push eax
        mov ecx, edi
        call public_6f73130
        test al, al
        jne public_6f73db7
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        public_6f73cf3 : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0x451C4000
        call public_6eb70f0
        mov ecx, edi
        push eax
        call public_6f73210
        test al, al
        jne public_6f73db7
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_6fb6054]
        fnstsw ax
        test ah, 0x41
        jne public_6f73d4a
        fld dword ptr ss : [esp+0x5C]
        fsqrt 
        fsub qword ptr ds : [public_6fbbc68]
        fmul qword ptr ds : [public_6fb7a88]
        fadd qword ptr ds : [public_6fb70c0]
        fcom dword ptr ds : [public_6fbbf08]
        fnstsw ax
        test ah, 0x41
        jne public_6f73dbb
        fstp st(0)
        public_6f73d4a : nop
        fld dword ptr ds : [public_6fbbf08]
        pop edi
        pop esi
        pop ebx
        add esp, 0x4C
        ret 4
        public_6f73d59 : nop
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0x451C4000
        call public_6eb70f0
        push eax
        mov ecx, edi
        call public_6f72dd0
        test al, al
        jne public_6f73db7
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0x457A0000
        call public_6eb70f0
        push eax
        mov ecx, edi
        call public_6f73130
        test al, al
        jne public_6f73db7
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_6f73cf3
        public_6f73db7 : nop
        fld dword ptr ss : [esp+0x18]
        public_6f73dbb : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x6f73bf0)
    }
}

#undef public_6f73c80
#undef public_6f73cb3
#undef public_6f73cc0
#undef public_6f73cf3
#undef public_6f73d4a
#undef public_6f73d59
#undef public_6f73db7
#undef public_6f73dbb
