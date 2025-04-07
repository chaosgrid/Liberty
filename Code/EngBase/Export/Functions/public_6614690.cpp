#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6614714 _public_6614714

PROC_DECLARE(0x6614690, internal_6614690, public_6614690);
extern "C" NAKED register_t __cdecl internal_6614690()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push 0x1C
        call public_66281dc
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_6614714
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        push 0x34
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], cl
        mov byte ptr ds : [esi+0x10], bl
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [eax+0x31], bl
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [eax+0x31], 1
        mov edx, dword ptr ds : [esi+0xC]
        push 0x34
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0xC]
        call public_66281dc
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x30], bl
        mov byte ptr ds : [eax+0x31], bl
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi], offset public_66291e4
        mov dword ptr ds : [esi+0x18], 1
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_6614714 : nop
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6614690)
    }
}

#undef public_6614714
