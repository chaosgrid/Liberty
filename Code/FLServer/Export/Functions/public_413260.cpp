#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4192a2);

#define public_413292 _public_413292

PROC_DECLARE(0x413260, internal_413260, public_413260);
extern "C" NAKED register_t __cdecl internal_413260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push eax
        push edi
        push ebx
        mov esi, ecx
        call public_4192a2
        add esi, 0x120
        cmp edi, esi
        mov ebp, eax
        jne public_413292
        mov edx, dword ptr ds : [ebx]
        push 0xFF
        mov ecx, ebx
        call dword ptr ds : [edx+0x38]
        public_413292 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x413260)
    }
}

#undef public_413292
