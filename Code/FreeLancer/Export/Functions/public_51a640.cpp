#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51cad0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

#define public_51a678 _public_51a678

PROC_DECLARE(0x51a640, internal_51a640, public_51a640);
extern "C" NAKED register_t __cdecl internal_51a640()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], 0x32
        mov dword ptr ss : [esp+0x10], 0x33
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x18], 0x35
        mov dword ptr ss : [esp+0x1C], 0x36
        xor esi, esi
        lea edi, ds:[ebx+0xF8]
        public_51a678 : nop
        mov eax, dword ptr ss : [esp+esi*4+0xC]
        push eax
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 5
        jb public_51a678
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, ebx
        call public_51cad0
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x51a640)
    }
}

#undef public_51a678
