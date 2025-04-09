#include "FreeLancer-PCH.h"


#define public_5896e4 _public_5896e4
#define public_589713 _public_589713
#define public_58973f _public_58973f
#define public_589769 _public_589769
#define public_5897ac _public_5897ac
#define public_5897b3 _public_5897b3
#define public_5897c2 _public_5897c2

PROC_DECLARE(0x5896b0, internal_5896b0, public_5896b0);
extern "C" NAKED register_t __cdecl internal_5896b0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x2E0]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, byte ptr ds : [esi+0x2F4]
        mov bl, 1
        test bl, al
        jne public_5896e4
        mov eax, edi
        jmp public_589713
        public_5896e4 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0xC]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x14]
        public_589713 : nop
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_5897ac
        test byte ptr ds : [esi+0x2F4], bl
        jne public_58973f
        mov eax, edi
        jmp public_589769
        public_58973f : nop
        fld dword ptr ds : [edi]
        lea eax, ss:[esp+0xC]
        fadd dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0xB0]
        fstp dword ptr ss : [esp+0x14]
        public_589769 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [public_5c6d90]
        lea ebx, ss:[esp+0x18]
        push ebx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5897ac : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_5897c2
        public_5897b3 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5897b3
        public_5897c2 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5896b0)
    }
}

#undef public_5896e4
#undef public_589713
#undef public_58973f
#undef public_589769
#undef public_5897ac
#undef public_5897b3
#undef public_5897c2
