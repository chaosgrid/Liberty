#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550040);
CLANG_FORWARD_PROC_SYMBOL(public_550b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_550b83 _public_550b83
#define public_550b95 _public_550b95
#define public_550ba6 _public_550ba6
#define public_550bb7 _public_550bb7
#define public_550c00 _public_550c00
#define public_550c18 _public_550c18
#define public_550c1a _public_550c1a
#define public_550cbf _public_550cbf
#define public_550cc8 _public_550cc8
#define public_550ce7 _public_550ce7

PROC_DECLARE(0x550b60, internal_550b60, public_550b60);
extern "C" NAKED register_t __cdecl internal_550b60()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xEC]
        test al, al
        push edi
        je public_550ce7
        cmp dword ptr ds : [esi], 0
        je public_550bb7
        mov eax, dword ptr ds : [esi+0xC]
        xor edi, edi
        test eax, eax
        jle public_550ba6
        public_550b83 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_550b95
        push eax
        call public_5b7e1d
        add esp, 4
        public_550b95 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+edi*4], 0
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        cmp edi, eax
        jl public_550b83
        public_550ba6 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_550bb7 : nop
        fild dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov dword ptr ds : [esi+0xC], eax
        shl eax, 2
        push eax
        call public_5b7e84
        mov dword ptr ds : [esi], eax
        mov edi, eax
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+8], 0
        jle public_550ce7
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c69c4]
        lea ebx, ds:[esi+0x48]
        lea esp, ss:[esp]
        public_550c00 : nop
        push 0x58
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_550c18
        mov byte ptr ds : [eax+0x50], 0
        mov byte ptr ds : [eax+0x51], 0
        jmp public_550c1a
        public_550c18 : nop
        xor eax, eax
        public_550c1a : nop
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0x100]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call ebp
        fld dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [esi+0x68]
        fmul dword ptr ds : [esi+0xAC]
        add esp, 8
        push eax
        push ebx
        lea eax, ds:[esi+0x84]
        push eax
        lea eax, ds:[esi+0x78]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [edi]
        call public_550040
        mov edx, dword ptr ds : [esi+0xB0]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call ebp
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x44
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        fld dword ptr ds : [esi+0xA0]
        fcomp dword ptr ds : [public_5c7474]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_550cbf
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5db0b8]
        fsubr qword ptr ds : [public_5e0df8]
        fmul dword ptr ds : [esi+0x9C]
        fstp dword ptr ds : [ecx+0x38]
        jmp public_550cc8
        public_550cbf : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+0x38], 0xBF800000
        public_550cc8 : nop
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0xC]
        inc eax
        add edi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_550c00
        pop ebp
        pop ebx
        public_550ce7 : nop
        pop edi
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x550b60)
    }
}

#undef public_550b83
#undef public_550b95
#undef public_550ba6
#undef public_550bb7
#undef public_550c00
#undef public_550c18
#undef public_550c1a
#undef public_550cbf
#undef public_550cc8
#undef public_550ce7
