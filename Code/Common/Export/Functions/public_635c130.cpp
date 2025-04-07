#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c130);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_635c19e _public_635c19e

PROC_DECLARE(0x635c130, internal_635c130, public_635c130);
extern "C" NAKED register_t __cdecl internal_635c130()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov edx, dword ptr ds : [eax+0xFC]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        je public_635c19e
        mov eax, dword ptr ds : [esi+4]
        push ebx
        mov dword ptr ss : [esp+0xC], ecx
        lea ebx, ds:[edi+0x20]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edx
        call public_6363280
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [edi]
        push ecx
        mov ecx, ebx
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fadd dword ptr ds : [edi+0x10]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push esi
        call public_6362f90
        pop ebx
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        add esp, 8
        ret 8
        public_635c19e : nop
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0xC], eax
        fsub dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[eax+0x20]
        fadd dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [eax+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        push esi
        call public_6362f90
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x635c130)
    }
}

#undef public_635c19e
