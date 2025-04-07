#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d730);

#define public_6ceea20 _public_6ceea20
#define public_6ceea22 _public_6ceea22
#define public_6ceeaf0 _public_6ceeaf0

PROC_DECLARE(0x6cee9f0, internal_6cee9f0, public_6cee9f0);
extern "C" NAKED register_t __cdecl internal_6cee9f0()
{
    __asm
    {
        sub esp, 0x38
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6ceeaf0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ceea20
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ceea22
        public_6ceea20 : nop
        xor eax, eax
        public_6ceea22 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6ceeaf0
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x24]
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
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
        call dword ptr ds : [public_6d6437c]
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], eax
        movzx eax, word ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x38], eax
        mov ax, word ptr ds : [edi+8]
        mov word ptr ss : [esp+0x3C], ax
        push edx
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        call public_6d0d730
        pop ebx
        public_6ceeaf0 : nop
        pop edi
        pop esi
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6cee9f0)
    }
}

#undef public_6ceea20
#undef public_6ceea22
#undef public_6ceeaf0
