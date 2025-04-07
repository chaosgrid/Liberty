#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f471c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);

#define public_6f8bb92 _public_6f8bb92
#define public_6f8bb94 _public_6f8bb94
#define public_6f8bbc0 _public_6f8bbc0
#define public_6f8bc31 _public_6f8bc31
#define public_6f8bc3a _public_6f8bc3a
#define public_6f8bc48 _public_6f8bc48

PROC_DECLARE(0x6f8bb80, internal_6f8bb80, public_6f8bb80);
extern "C" NAKED register_t __cdecl internal_6f8bb80()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test edi, edi
        je public_6f8bb92
        lea edx, ds:[edi+0x54]
        jmp public_6f8bb94
        public_6f8bb92 : nop
        xor edx, edx
        public_6f8bb94 : nop
        mov eax, dword ptr ds : [edi+0xB0]
        lea ecx, ds:[eax+0x58]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [ecx]
        mov ebp, eax
        call dword ptr ds : [edx+0x74]
        mov ebx, eax
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6f8bc48
        mov edi, edi
        public_6f8bbc0 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f8bc31
        lea eax, ss:[esp+0x14]
        push eax
        call public_6f47af0
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0x90]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x94]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x98]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [public_6fbc2ec]
        fmul dword ptr ds : [public_6fbc2ec]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6f8bc31
        mov ecx, dword ptr ds : [esi]
        push 4
        call public_6f471b0
        mov ecx, dword ptr ds : [public_6fbc2f0]
        push ecx
        mov ecx, dword ptr ds : [esi]
        call public_6f471c0
        jmp public_6f8bc3a
        public_6f8bc31 : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        call public_6f471b0
        public_6f8bc3a : nop
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        cmp esi, eax
        jne public_6f8bbc0
        public_6f8bc48 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0xC]
        push 1
        push 3
        lea edx, ss:[esp+0x18]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f8bb80)
    }
}

#undef public_6f8bb92
#undef public_6f8bb94
#undef public_6f8bbc0
#undef public_6f8bc31
#undef public_6f8bc3a
#undef public_6f8bc48
