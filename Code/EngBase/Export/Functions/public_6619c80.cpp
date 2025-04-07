#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619c80);
CLANG_FORWARD_PROC_SYMBOL(public_661a500);
CLANG_FORWARD_PROC_SYMBOL(public_661aa60);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6619cea _public_6619cea
#define public_6619d08 _public_6619d08
#define public_6619d2e _public_6619d2e
#define public_6619d39 _public_6619d39
#define public_6619d4b _public_6619d4b
#define public_6619d57 _public_6619d57
#define public_6619d63 _public_6619d63

PROC_DECLARE(0x6619c80, internal_6619c80, public_6619c80);
extern "C" NAKED register_t __cdecl internal_6619c80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ds : [edx+4]
        mov al, byte ptr ss : [ebp+0x2D]
        test al, al
        jne public_6619d08
        mov al, byte ptr ss : [ebp+0x2C]
        push edi
        push 0x30
        mov byte ptr ss : [esp+0x14], al
        call public_66281dc
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        push eax
        mov dword ptr ds : [edi+4], ecx
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x2C], dl
        mov byte ptr ds : [edi+0x2D], 0
        call public_661aa60
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        jne public_6619cea
        mov ebx, edi
        public_6619cea : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6619d08 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6619d63
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_6619d39
        public_6619d2e : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6619d2e
        public_6619d39 : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        jne public_6619d57
        public_6619d4b : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        je public_6619d4b
        public_6619d57 : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6619d63 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6619c80)
    }
}

#undef public_6619cea
#undef public_6619d08
#undef public_6619d2e
#undef public_6619d39
#undef public_6619d4b
#undef public_6619d57
#undef public_6619d63
