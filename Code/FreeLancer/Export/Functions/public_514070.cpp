#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_514070);

#define public_5140b2 _public_5140b2

PROC_DECLARE(0x514070, internal_514070, public_514070);
extern "C" NAKED register_t __cdecl internal_514070()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov ecx, edi
        xor bl, bl
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5140b2
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, esi
        call public_503070
        pop edi
        pop esi
        pop ebx
        ret 0x14
        public_5140b2 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x514070)
    }
}

#undef public_5140b2
