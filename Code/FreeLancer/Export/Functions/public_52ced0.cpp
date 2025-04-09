#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428790);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_52ced0);

#define public_52cefc _public_52cefc
#define public_52cefe _public_52cefe
#define public_52cf01 _public_52cf01
#define public_52cf78 _public_52cf78
#define public_52cf7b _public_52cf7b

PROC_DECLARE(0x52ced0, internal_52ced0, public_52ced0);
extern "C" NAKED register_t __cdecl internal_52ced0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_52cf7b
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_52cf01
        push 0x64
        call public_428f80
        add esp, 4
        test eax, eax
        je public_52cefc
        mov ecx, eax
        call public_428790
        jmp public_52cefe
        public_52cefc : nop
        xor eax, eax
        public_52cefe : nop
        mov dword ptr ds : [esi+0x1C], eax
        public_52cf01 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        call dword ptr ds : [eax+0x8C]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        dec ecx
        imul eax, ecx
        neg eax
        mov dword ptr ss : [esp+0xC], eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x80]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx]
        call dword ptr ds : [eax+0x2C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x98]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        pop edi
        push 0
        jne public_52cf78
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call dword ptr ds : [edx+0x58]
        pop esi
        ret 8
        public_52cf78 : nop
        call dword ptr ds : [edx+0x64]
        public_52cf7b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x52ced0)
    }
}

#undef public_52cefc
#undef public_52cefe
#undef public_52cf01
#undef public_52cf78
#undef public_52cf7b
