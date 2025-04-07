#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ede9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab3cb);

#define public_6edeaab _public_6edeaab
#define public_6edeaf8 _public_6edeaf8
#define public_6edeb55 _public_6edeb55
#define public_6edec69 _public_6edec69
#define public_6ededa5 _public_6ededa5
#define public_6ededac _public_6ededac
#define public_6ededae _public_6ededae

PROC_DECLARE(0x6ede9b0, internal_6ede9b0, public_6ede9b0);
extern "C" NAKED register_t __cdecl internal_6ede9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab3cb @0x6ede9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab3cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x23C
        mov eax, dword ptr ss : [esp+0x250]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x260]
        push edi
        lea edx, ss:[esp+0x1F]
        mov dword ptr ds : [esi+8], ecx
        lea ebp, ds:[esi+0x14]
        lea ebx, ds:[esi+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [esi+0x10], 0
        call public_6ead6a0
        mov edi, dword ptr ss : [esp+0x25C]
        xor eax, eax
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ss : [esp+0x254], eax
        lea eax, ss:[esp+0x260]
        push ebx
        push eax
        mov dword ptr ds : [esi], offset public_6fb6e30
        call dword ptr ds : [public_6fb3444]
        push ebx
        call public_6fa6e50
        add esp, 0xC
        test eax, eax
        je public_6ededa5
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ededa5
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        call public_6f73930
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6f73930
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ededac
        mov dword ptr ds : [esi+0x28], 0x4A41
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edeaab
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 9
        jae public_6edeaf8
        public_6edeaab : nop
        push 0x24
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x24]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6edeaf8 : nop
        mov ebx, dword ptr ds : [public_6fb3684]
/*FIXUP push offset public_6fb6348 @0x6edeafe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x70]
        push edx
        mov dword ptr ss : [esp+0x74], 0
        mov byte ptr ss : [esp+0x78], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6edeb55
/*FIXUP push offset public_6fb632c @0x6edeb47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x74]
        call public_6ead640
/*FIXUP public_6edeb55 : nop
        push offset public_6fb6324 @0x6edeb55*/
  FIXUP public_6edeb55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x74]
        call public_6eec250
        lea eax, ss:[esp+0x30]
        mov ecx, 0x11
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x2C]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x1CC]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x40]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0x100]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        rep movsd
        lea ecx, ss:[esp+0x40]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6308 @0x6edec12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x70]
        push edx
        mov dword ptr ss : [esp+0x74], 0
        mov byte ptr ss : [esp+0x78], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6edec69
/*FIXUP push offset public_6fb632c @0x6edec5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x74]
        call public_6ead640
/*FIXUP public_6edec69 : nop
        push offset public_6fb6324 @0x6edec69*/
  FIXUP public_6edec69 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x74]
        call public_6eec250
        lea eax, ss:[esp+0x30]
        mov ecx, 0x11
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x2C]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push eax
        lea ecx, ss:[esp+0x144]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x40]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x18]
/*FIXUP push offset public_6fb6064 @0x6edece9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push edx
        lea eax, ss:[esp+0x188]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        rep movsd
        lea ecx, ss:[esp+0x40]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6e18 @0x6eded29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e18
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xB8], 0
        mov byte ptr ss : [esp+0xBC], 0
        call public_6ead640
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+0xC]
        lea eax, ds:[ecx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6eded58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0xC0]
        push eax
        lea ecx, ss:[esp+0x214]
        push ecx
        call public_6eeaf10
        mov ecx, 0x11
        mov esi, eax
        lea edi, ss:[esp+0x3C]
        rep movsd
        lea edx, ss:[esp+0x40]
        push edx
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x20]
        jmp public_6ededae
        public_6ededa5 : nop
        mov dword ptr ds : [esi+0x24], 0
        public_6ededac : nop
        mov eax, esi
        public_6ededae : nop
        mov ecx, dword ptr ss : [esp+0x24C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x248
        ret 0xC
        UNREACHABLE_TRAP(0x6ede9b0)
    }
}

#undef public_6edeaab
#undef public_6edeaf8
#undef public_6edeb55
#undef public_6edec69
#undef public_6ededa5
#undef public_6ededac
#undef public_6ededae
