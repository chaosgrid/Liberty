#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_629f090);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_630a8b0);

#define public_629b770 _public_629b770
#define public_629b7e1 _public_629b7e1
#define public_629b7ee _public_629b7ee
#define public_629b803 _public_629b803
#define public_629b83e _public_629b83e
#define public_629b84a _public_629b84a

PROC_DECLARE(0x629b750, internal_629b750, public_629b750);
extern "C" NAKED register_t __cdecl internal_629b750()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebp, ecx
        je public_629b7ee
        mov ebx, dword ptr ds : [public_639902c]
        public_629b770 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        mov ecx, ebp
        push eax
        call public_629b6d0
        mov edi, eax
        test edi, edi
        je public_629b83e
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_629b83e
        mov eax, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0x44]
        fsubr dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_629b83e
        push edi
        call public_629f090
        add esp, 4
        test eax, eax
        je public_629b7e1
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        push eax
        call ebx
        add esp, 8
        public_629b7e1 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_629b770
        mov edi, ecx
        public_629b7ee : nop
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        public_629b803 : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_629b440
        mov esi, eax
        test esi, esi
        je public_629b84a
        lea ecx, ss:[esp+0x28]
        call public_6309ae0
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        test al, al
        je public_629b803
        movzx esi, word ptr ds : [esi+8]
        push esi
        mov ecx, edi
        call public_630a8b0
        test eax, eax
        jne public_629b803
        public_629b83e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x38
        ret 4
        public_629b84a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x629b750)
    }
}

#undef public_629b770
#undef public_629b7e1
#undef public_629b7ee
#undef public_629b803
#undef public_629b83e
#undef public_629b84a
