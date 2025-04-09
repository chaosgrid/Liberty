#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48dd40);
CLANG_FORWARD_PROC_SYMBOL(public_491410);
CLANG_FORWARD_PROC_SYMBOL(public_4917c0);
CLANG_FORWARD_PROC_SYMBOL(public_4963d0);
CLANG_FORWARD_PROC_SYMBOL(public_496600);
CLANG_FORWARD_PROC_SYMBOL(public_49e1d0);
CLANG_FORWARD_PROC_SYMBOL(public_49fbf0);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_49e1ed _public_49e1ed
#define public_49e211 _public_49e211
#define public_49e248 _public_49e248
#define public_49e260 _public_49e260
#define public_49e27f _public_49e27f
#define public_49e297 _public_49e297
#define public_49e2f0 _public_49e2f0
#define public_49e2ff _public_49e2ff
#define public_49e301 _public_49e301
#define public_49e384 _public_49e384
#define public_49e389 _public_49e389
#define public_49e3e9 _public_49e3e9
#define public_49e422 _public_49e422
#define public_49e510 _public_49e510
#define public_49e532 _public_49e532

PROC_DECLARE(0x49e1d0, internal_49e1d0, public_49e1d0);
extern "C" NAKED register_t __cdecl internal_49e1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6720a0]
        sub esp, 0x14
        cmp eax, 6
        push esi
        push edi
        mov esi, ecx
        jne public_49e1ed
        mov eax, dword ptr ds : [esi+0xF44]
        push eax
        call public_4a0220
        public_49e1ed : nop
        mov eax, dword ptr ds : [esi+0x814]
        test eax, eax
        mov dword ptr ds : [esi+0x7D0], 1
        mov dword ptr ds : [esi+0x838], 0xFFFFFFFF
        je public_49e248
        lea edi, ds:[esi+0x80C]
        public_49e211 : nop
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        call public_53e430
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call public_516f70
        mov eax, dword ptr ds : [esi+0x814]
        test eax, eax
        jne public_49e211
        public_49e248 : nop
        mov eax, dword ptr ds : [esi+0x404]
        test eax, eax
        push ebx
        je public_49e297
        push ebp
        lea ebp, ds:[esi+0x3FC]
        lea ebx, ds:[ebx]
        public_49e260 : nop
        mov eax, dword ptr ds : [esi+0x400]
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi+8]
        test ebx, ebx
        je public_49e27f
        mov ecx, ebx
        call public_48dd40
        push ebx
        call public_5b7e1d
        add esp, 4
        public_49e27f : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_516f70
        mov eax, dword ptr ds : [esi+0x404]
        test eax, eax
        jne public_49e260
        pop ebp
        public_49e297 : nop
        xor eax, eax
        mov ecx, 0x63
        lea edi, ds:[esi+0x4B8]
        rep stosd
        mov ecx, 0x63
        lea edi, ds:[esi+0x644]
        rep stosd
        mov ecx, esi
        call public_4917c0
        mov ecx, esi
        call public_491410
        mov ecx, dword ptr ds : [esi+0x7EC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7E0]
        xor bl, bl
        test ecx, ecx
        je public_49e2ff
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        xor ecx, ecx
        lea edx, ds:[esi+0xF28]
        lea ecx, ds:[ecx]
        public_49e2f0 : nop
        cmp dword ptr ds : [edx], eax
        je public_49e2ff
        inc ecx
        add edx, 4
        cmp ecx, 4
        jl public_49e2f0
        jmp public_49e301
        public_49e2ff : nop
        mov bl, 1
        public_49e301 : nop
        mov ecx, dword ptr ds : [esi+0x7F0]
        mov edx, dword ptr ds : [ecx]
        movzx edi, bl
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8D8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8DC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC58]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xB5C]
        test eax, eax
        je public_49e384
        mov ecx, dword ptr ds : [esi+0xB60]
        sub ecx, eax
        sar ecx, 2
        test ecx, ecx
        je public_49e384
        test bl, bl
        jne public_49e384
        xor eax, eax
        jmp public_49e389
        public_49e384 : nop
        mov eax, 1
        public_49e389 : nop
        mov ecx, dword ptr ds : [esi+0xB50]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        je public_49e3e9
        cmp eax, 2
        je public_49e3e9
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        jmp public_49e422
        public_49e3e9 : nop
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        public_49e422 : nop
        mov ecx, dword ptr ds : [esi+0xB54]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAF8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAFC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB00]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB04]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x46C]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+0x7D0]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        push 0x3F800000
        mov dword ptr ds : [ecx+8], edx
        push eax
        mov ecx, esi
        call public_4963d0
        mov ecx, esi
        call public_496600
        mov ecx, esi
        call public_49fbf0
        lea edi, ds:[esi+0xB08]
        mov ebx, 8
        lea esp, ss:[esp]
        public_49e510 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebx
        jne public_49e510
        add esi, 0xB28
        mov edi, 8
        pop ebx
        public_49e532 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        add esi, 4
        dec edi
        jne public_49e532
        pop edi
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x49e1d0)
    }
}

#undef public_49e1ed
#undef public_49e211
#undef public_49e248
#undef public_49e260
#undef public_49e27f
#undef public_49e297
#undef public_49e2f0
#undef public_49e2ff
#undef public_49e301
#undef public_49e384
#undef public_49e389
#undef public_49e3e9
#undef public_49e422
#undef public_49e510
#undef public_49e532
