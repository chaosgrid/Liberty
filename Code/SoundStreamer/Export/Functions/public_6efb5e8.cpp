#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9bee);
CLANG_FORWARD_PROC_SYMBOL(public_6efb5e8);

#define public_6efb62e _public_6efb62e
#define public_6efb635 _public_6efb635

PROC_DECLARE(0x6efb5e8, internal_6efb5e8, public_6efb5e8);
extern "C" NAKED register_t __cdecl internal_6efb5e8()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        push edi
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, eax
        and ecx, 3
        cmp cl, 2
        jne public_6efb635
        test ax, 0x108
        je public_6efb635
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        test edi, edi
        jle public_6efb635
        push edi
        push eax
        push dword ptr ds : [esi+0x10]
        call public_6ef9bee
        add esp, 0xC
        cmp eax, edi
        jne public_6efb62e
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x80
        je public_6efb635
        and al, 0xFD
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6efb635
        public_6efb62e : nop
        or dword ptr ds : [esi+0xC], 0x20
        or ebx, 0xFFFFFFFF
        public_6efb635 : nop
        mov eax, dword ptr ds : [esi+8]
        and dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6efb5e8)
    }
}

#undef public_6efb62e
#undef public_6efb635
