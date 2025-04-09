#include "FreeLancer-PCH.h"


#define public_4526a0 _public_4526a0
#define public_4526ae _public_4526ae
#define public_4526b9 _public_4526b9
#define public_4526bb _public_4526bb
#define public_452723 _public_452723

PROC_DECLARE(0x452680, internal_452680, public_452680);
extern "C" NAKED register_t __cdecl internal_452680()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        push ebx
        or edx, 0xFFFFFFFF
        xor ecx, ecx
        lea eax, ds:[esi+0x274]
        lea esp, ss:[esp]
        public_4526a0 : nop
        mov bl, byte ptr ds : [eax+0x34]
        test bl, bl
        je public_4526ae
        mov ebx, dword ptr ds : [eax]
        cmp ebx, dword ptr ds : [edi+0x2C]
        je public_4526b9
        public_4526ae : nop
        inc ecx
        add eax, 0x3C
        cmp ecx, 0x20
        jl public_4526a0
        jmp public_4526bb
        public_4526b9 : nop
        mov edx, ecx
        public_4526bb : nop
        imul edx, 0x3C
        mov al, byte ptr ds : [edx+esi+0x2A9]
        test al, al
        lea edi, ds:[edx+esi]
        pop ebx
        je public_452723
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        lea ecx, ss:[esp+0xC]
        add esi, 0x24
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x278]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx+8], eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6274]
        add edi, 0x284
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x30
        ret 0x10
        public_452723 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x452680)
    }
}

#undef public_4526a0
#undef public_4526ae
#undef public_4526b9
#undef public_4526bb
#undef public_452723
