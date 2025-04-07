#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611db0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6614661 _public_6614661
#define public_6614663 _public_6614663
#define public_661467b _public_661467b

PROC_DECLARE(0x66145e0, internal_66145e0, public_66145e0);
extern "C" NAKED register_t __cdecl internal_66145e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push 0x1C
        or ebp, 0xFFFFFFFF
        call public_66281dc
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_6614661
        mov al, byte ptr ss : [esp+0x14]
        mov cl, byte ptr ss : [esp+0x14]
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
        pop edi
        jmp public_6614663
        public_6614661 : nop
        xor esi, esi
        public_6614663 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, esi
        call public_6611db0
        test eax, eax
        jne public_661467b
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_661467b : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66145e0)
    }
}

#undef public_6614661
#undef public_6614663
#undef public_661467b
