#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd88d1 _public_6bd88d1

PROC_DECLARE(0x6bd8870, internal_6bd8870, public_6bd8870);
extern "C" NAKED register_t __cdecl internal_6bd8870()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x12
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd88d1
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 8
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x34], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x38], edx
        fld dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [edx+0x3C]
        mov ax, word ptr ds : [eax+2]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x40], ax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd88d1 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd8870)
    }
}

#undef public_6bd88d1
