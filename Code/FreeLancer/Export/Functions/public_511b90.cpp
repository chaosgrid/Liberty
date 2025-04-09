#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_511b90);
CLANG_FORWARD_PROC_SYMBOL(public_5201d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5553a0);

#define public_511bcb _public_511bcb
#define public_511c18 _public_511c18
#define public_511c48 _public_511c48
#define public_511c52 _public_511c52
#define public_511c60 _public_511c60
#define public_511c8c _public_511c8c
#define public_511c92 _public_511c92

PROC_DECLARE(0x511b90, internal_511b90, public_511b90);
extern "C" NAKED register_t __cdecl internal_511b90()
{
    __asm
    {
        sub esp, 0x2C
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], 0
        call public_54baf0
        test eax, eax
        je public_511bcb
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x134]
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_511bcb
        fld dword ptr ds : [public_5c75dc]
        pop edi
        add esp, 0x2C
        ret 4
        public_511bcb : nop
        push ebx
        push esi
        call public_5553a0
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edi]
        xor bl, bl
        cmp esi, edi
        je public_511c52
        public_511c18 : nop
        test bl, bl
        jne public_511c92
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x4C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        test al, al
        je public_511c48
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov bl, 1
        public_511c48 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_511c18
        test bl, bl
        jne public_511c92
        public_511c52 : nop
        call public_5201d0
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_511c92
        public_511c60 : nop
        test bl, bl
        jne public_511c92
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x4C]
        test al, al
        je public_511c8c
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov bl, 1
        public_511c8c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_511c60
        public_511c92 : nop
        fld dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        pop edi
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x511b90)
    }
}

#undef public_511bcb
#undef public_511c18
#undef public_511c48
#undef public_511c52
#undef public_511c60
#undef public_511c8c
#undef public_511c92
