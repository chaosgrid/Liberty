#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282ff0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628304a _public_628304a
#define public_6283068 _public_6283068

PROC_DECLARE(0x6282ff0, internal_6282ff0, public_6282ff0);
extern "C" NAKED register_t __cdecl internal_6282ff0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6283068
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        call public_630cd00
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_628304a
        mov ebx, esi
        public_628304a : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6282ff0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6282ff0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6283068 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6282ff0)
    }
}

#undef public_628304a
#undef public_6283068
