#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63283d5 _public_63283d5

PROC_DECLARE(0x6328370, internal_6328370, public_6328370);
extern "C" NAKED register_t __cdecl internal_6328370()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        je public_63283d5
        fld dword ptr ds : [edi+8]
        push 0xCC0020
        call public_6391dae
        fld dword ptr ds : [edi+4]
        push eax
        call public_6391dae
        fld dword ptr ds : [public_63ed66c]
        fmul dword ptr ds : [edi+8]
        push eax
        mov eax, dword ptr ds : [edi+0xC]
        push 0
        push 0
        push eax
        call public_6391dae
        fld dword ptr ds : [public_63ed66c]
        fmul dword ptr ds : [edi+4]
        push eax
        call public_6391dae
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x38]
        push eax
        add ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x3C]
        push ecx
        add edx, dword ptr ds : [esi+0x30]
        push edx
        push eax
        call dword ptr ds : [public_63990b4]
        public_63283d5 : nop
        fld dword ptr ds : [public_63ed66c]
        fmul dword ptr ds : [edi+4]
        fiadd dword ptr ds : [esi+0x30]
        call public_6391dae
        pop edi
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6328370)
    }
}

#undef public_63283d5
