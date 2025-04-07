#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6edd6f0);
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
CLANG_FORWARD_JUMP_SYMBOL(public_6fab38b);

#define public_6edd7bf _public_6edd7bf
#define public_6edd7f4 _public_6edd7f4
#define public_6edd841 _public_6edd841
#define public_6edd8ec _public_6edd8ec
#define public_6edd941 _public_6edd941
#define public_6edd99b _public_6edd99b
#define public_6edd9f8 _public_6edd9f8
#define public_6edd9fa _public_6edd9fa
#define public_6edd9fd _public_6edd9fd

PROC_DECLARE(0x6edd6f0, internal_6edd6f0, public_6edd6f0);
extern "C" NAKED register_t __cdecl internal_6edd6f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab38b @0x6edd6f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab38b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1A8
        mov eax, dword ptr ss : [esp+0x1BC]
        mov edx, dword ptr ss : [esp+0x1B8]
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ss : [esp+0xF]
        push ebp
        push esi
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], edx
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea eax, ss:[esp+0x1CC]
        push esi
        push eax
        mov dword ptr ss : [esp+0x1C8], edi
        mov dword ptr ds : [ebx], offset public_6fb6c74
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edd9fa
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edd9f8
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [esp+0x1C8]
        push ecx
        mov ecx, edi
        call public_6f73930
        mov edx, dword ptr ss : [esp+0x1D0]
        push edx
        mov ecx, edi
        call public_6f73930
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6edd7bf
        mov dword ptr ds : [ebx+0x24], eax
        jmp public_6edd9fd
        public_6edd7bf : nop
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edd9fd
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edd7f4
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6edd841
        public_6edd7f4 : nop
        push 0x10
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        push edi
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
        lea edx, ds:[edi+0x10]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6edd841 : nop
        push offset public_6fb6c60 @0x6edd841*/
  FIXUP public_6edd841 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6c60
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0xAC], 0
        mov byte ptr ss : [esp+0xB0], 0
        call public_6ead640
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb62ec @0x6edd868*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea edx, ss:[esp+0xB4]
        push edx
        lea eax, ss:[esp+0xF8]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x30]
        rep movsd
        lea ecx, ss:[esp+0x34]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6edd8ec
/*FIXUP push offset public_6fb632c @0x6edd8de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x24]
        call public_6ead640
/*FIXUP public_6edd8ec : nop
        push offset public_6fb6324 @0x6edd8ec*/
  FIXUP public_6edd8ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x24]
        call public_6eec250
        lea eax, ss:[esp+0x68]
        mov ecx, 0x11
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x64]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [eax-4]
        test ecx, ecx
        jne public_6edd941
        mov dword ptr ds : [ebx+0x24], 0
        jmp public_6edd9fd
        public_6edd941 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push ecx
        lea edx, ss:[esp+0x138]
        push 1
        push edx
        call public_6eeb210
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [eax-4]
        test ecx, ecx
        jne public_6edd99b
        mov dword ptr ds : [ebx+0x24], 0
        jmp public_6edd9fd
        public_6edd99b : nop
        mov ecx, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_6fb6064 @0x6edd99f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push ecx
        lea edx, ss:[esp+0x17C]
        push 2
        push edx
        call public_6eeb210
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [eax-4]
        test ecx, ecx
        jne public_6edd9fd
        mov dword ptr ds : [ebx+0x24], 0
        jmp public_6edd9fd
        public_6edd9f8 : nop
        xor edi, edi
        public_6edd9fa : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edd9fd : nop
        mov ecx, dword ptr ss : [esp+0x1B8]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1B4
        ret 0xC
        UNREACHABLE_TRAP(0x6edd6f0)
    }
}

#undef public_6edd7bf
#undef public_6edd7f4
#undef public_6edd841
#undef public_6edd8ec
#undef public_6edd941
#undef public_6edd99b
#undef public_6edd9f8
#undef public_6edd9fa
#undef public_6edd9fd
