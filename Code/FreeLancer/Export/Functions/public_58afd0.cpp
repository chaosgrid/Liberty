#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);

#define public_58afe0 _public_58afe0
#define public_58afed _public_58afed
#define public_58aff4 _public_58aff4
#define public_58b01e _public_58b01e
#define public_58b054 _public_58b054

PROC_DECLARE(0x58afd0, internal_58afd0, public_58afd0);
extern "C" NAKED register_t __cdecl internal_58afd0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_58aff4
        mov edi, edi
        public_58afe0 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_58afed
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_58afed : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_58afe0
        public_58aff4 : nop
        mov al, byte ptr ds : [edi+0x389]
        test al, al
        je public_58b054
        mov byte ptr ds : [edi+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_58b01e
        push 0xB
        call public_5646e0
        add esp, 4
        public_58b01e : nop
        fld dword ptr ds : [edi+0xB0]
        mov edx, dword ptr ds : [edi+0x32C]
        fadd dword ptr ds : [edi+0x68]
        mov esi, dword ptr ds : [edi+0x370]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+0x334]
        push edx
        call public_4145d0
        mov ecx, dword ptr ds : [edi+0x334]
        push esi
        call public_415860
        public_58b054 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x58afd0)
    }
}

#undef public_58afe0
#undef public_58afed
#undef public_58aff4
#undef public_58b01e
#undef public_58b054
