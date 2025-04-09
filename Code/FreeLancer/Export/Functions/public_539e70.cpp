#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_539eae _public_539eae
#define public_539eb3 _public_539eb3
#define public_539ebf _public_539ebf
#define public_539f80 _public_539f80

PROC_DECLARE(0x539e70, internal_539e70, public_539e70);
extern "C" NAKED register_t __cdecl internal_539e70()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_539f80
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_539ebf
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_539eae
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_539eae
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_539eb3
        public_539eae : nop
        call public_54bb00
        public_539eb3 : nop
        cmp eax, dword ptr ds : [public_673344]
        jne public_539f80
        public_539ebf : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edi]
        mov ebx, eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x30]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        call dword ptr ds : [public_5c6a18]
        mov edx, dword ptr ds : [edi]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x40]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x30], eax
        movzx eax, word ptr ss : [esp+0x4C]
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov dword ptr ss : [esp+0x38], eax
        mov ax, word ptr ss : [esp+0x54]
        mov word ptr ss : [esp+0x3C], ax
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+0xDC]
        pop ebx
        public_539f80 : nop
        pop edi
        pop esi
        add esp, 0x38
        ret 0x10
        UNREACHABLE_TRAP(0x539e70)
    }
}

#undef public_539eae
#undef public_539eb3
#undef public_539ebf
#undef public_539f80
