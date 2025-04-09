#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42a0f0 _public_42a0f0
#define public_42a12d _public_42a12d
#define public_42a162 _public_42a162

PROC_DECLARE(0x42a0c0, internal_42a0c0, public_42a0c0);
extern "C" NAKED register_t __cdecl internal_42a0c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_42a0f0
        mov eax, dword ptr ds : [public_5c6d48]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [public_5c6d48]
        mov edx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [esi+0x30], 0
        public_42a0f0 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [esi+0x34], 0
        mov dword ptr ds : [esi+0x38], 0xBF800000
        call dword ptr ds : [eax+0x14]
        test al, al
        je public_42a162
        test byte ptr ds : [esi+0xC], 4
        je public_42a12d
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        test byte ptr ds : [esi+0xC], 4
        je public_42a12d
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x94]
        public_42a12d : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_667c74]
        add esp, 4
        dec ecx
        mov dword ptr ds : [public_667c74], ecx
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [esi+0x2C], 0
        call dword ptr ds : [edx+8]
        public_42a162 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42a0c0)
    }
}

#undef public_42a0f0
#undef public_42a12d
#undef public_42a162
