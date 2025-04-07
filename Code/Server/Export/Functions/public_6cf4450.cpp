#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);

#define public_6cf450b _public_6cf450b
#define public_6cf4547 _public_6cf4547
#define public_6cf4549 _public_6cf4549
#define public_6cf4594 _public_6cf4594

PROC_DECLARE(0x6cf4450, internal_6cf4450, public_6cf4450);
extern "C" NAKED register_t __cdecl internal_6cf4450()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        push ebx
        push edi
        mov esi, ecx
        call public_6cee630
        cmp edi, 1
        jne public_6cf4594
        mov ecx, dword ptr ds : [esi+0x28]
        push 0x8000000
        push ebx
        call public_6d0c8d0
        test eax, eax
        jne public_6cf4594
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [public_6d6419c]
        call ebp
        mov ecx, eax
        add ecx, 0x24
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6cf4594
        mov ecx, dword ptr ds : [esi+0x10]
        call ebp
        add eax, 0x24
        push eax
        call dword ptr ds : [public_6d641a0]
        mov edi, eax
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        je public_6cf4594
        fld dword ptr ds : [edi+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf4594
        fld dword ptr ds : [edi+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf450b
        fld dword ptr ds : [edi+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf450b
        fld dword ptr ds : [edi+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf4594
        public_6cf450b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6cf4547
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        jne public_6cf4547
        mov eax, ecx
        jmp public_6cf4549
        public_6cf4547 : nop
        xor eax, eax
        public_6cf4549 : nop
        mov eax, dword ptr ds : [eax+0xE4]
        mov dword ptr ss : [esp+0x14], eax
        call ebp
        mov dl, byte ptr ds : [eax+0xAC]
        xor ecx, ecx
        cmp dl, bl
        mov edx, dword ptr ds : [esi]
        setne cl
        add ecx, 5
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], edi
        call public_6d0b260
        public_6cf4594 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6cf4450)
    }
}

#undef public_6cf450b
#undef public_6cf4547
#undef public_6cf4549
#undef public_6cf4594
