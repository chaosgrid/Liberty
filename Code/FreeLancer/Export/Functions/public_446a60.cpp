#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558470);

#define public_446a7f _public_446a7f

PROC_DECLARE(0x446a60, internal_446a60, public_446a60);
extern "C" NAKED register_t __cdecl internal_446a60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        push edi
        je public_446a7f
        fld qword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x64]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ds:[esi+0x74]
        call public_558470
        public_446a7f : nop
        fld qword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 2
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x446a60)
    }
}

#undef public_446a7f
