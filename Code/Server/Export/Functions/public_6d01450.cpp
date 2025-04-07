#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d00130);
CLANG_FORWARD_PROC_SYMBOL(public_6d01150);
CLANG_FORWARD_PROC_SYMBOL(public_6d01550);

#define public_6d01467 _public_6d01467
#define public_6d01486 _public_6d01486
#define public_6d01488 _public_6d01488
#define public_6d01499 _public_6d01499
#define public_6d014ab _public_6d014ab
#define public_6d014b4 _public_6d014b4
#define public_6d014cb _public_6d014cb
#define public_6d014fc _public_6d014fc
#define public_6d01548 _public_6d01548

PROC_DECLARE(0x6d01450, internal_6d01450, public_6d01450);
extern "C" NAKED register_t __cdecl internal_6d01450()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_6ce7e20
        test al, al
        jne public_6d01467
        pop edi
        pop esi
        ret 4
        public_6d01467 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        jne public_6d014cb
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6d01486
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6d01486
        mov eax, ecx
        jmp public_6d01488
        public_6d01486 : nop
        xor eax, eax
        public_6d01488 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6d01499
        mov eax, dword ptr ds : [public_6d645a4]
        jmp public_6d014ab
        public_6d01499 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d014b4
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_6d64424]
        public_6d014ab : nop
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+0x50]
        public_6d014b4 : nop
        push edi
        mov ecx, esi
        call public_6d01550
        push edi
        mov ecx, esi
        call public_6d01150
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6d014cb : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov ecx, dword ptr ds : [esi+0x10]
        je public_6d014fc
        mov al, byte ptr ds : [ecx+0x214]
        test al, al
        je public_6d01548
        push esi
        call public_6d00130
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x90], 0
        mov al, 1
        pop esi
        ret 4
        public_6d014fc : nop
        mov al, byte ptr ds : [ecx+0x2BD]
        test al, al
        jne public_6d01548
        fld dword ptr ds : [esi+0x94]
        fsub dword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x94]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6d01548
        push 1
        call dword ptr ds : [public_6d645a0]
        push esi
        call public_6d00130
        mov dword ptr ds : [esi+0x94], 0
        add esp, 4
        mov dword ptr ds : [esi+0x90], 0
        public_6d01548 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d01450)
    }
}

#undef public_6d01467
#undef public_6d01486
#undef public_6d01488
#undef public_6d01499
#undef public_6d014ab
#undef public_6d014b4
#undef public_6d014cb
#undef public_6d014fc
#undef public_6d01548
