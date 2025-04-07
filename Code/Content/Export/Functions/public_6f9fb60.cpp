#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9fb60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f9fb80 _public_6f9fb80
#define public_6f9fb88 _public_6f9fb88
#define public_6f9fb8e _public_6f9fb8e
#define public_6f9fbb0 _public_6f9fbb0
#define public_6f9fbb8 _public_6f9fbb8
#define public_6f9fbc2 _public_6f9fbc2

PROC_DECLARE(0x6f9fb60, internal_6f9fb60, public_6f9fb60);
extern "C" NAKED register_t __cdecl internal_6f9fb60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [edi+4], dl
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f9fb80
        xor eax, eax
        jmp public_6f9fb88
        public_6f9fb80 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f9fb88 : nop
        test eax, eax
        jge public_6f9fb8e
        xor eax, eax
        public_6f9fb8e : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f9fbc2
        lea esp, ss:[esp]
        public_6f9fbb0 : nop
        test ecx, ecx
        je public_6f9fbb8
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f9fbb8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f9fbb0
        public_6f9fbc2 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f9fb60)
    }
}

#undef public_6f9fb80
#undef public_6f9fb88
#undef public_6f9fb8e
#undef public_6f9fbb0
#undef public_6f9fbb8
#undef public_6f9fbc2
