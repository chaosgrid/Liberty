#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a500);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661a55b _public_661a55b
#define public_661a574 _public_661a574
#define public_661a592 _public_661a592

PROC_DECLARE(0x661a500, internal_661a500, public_661a500);
extern "C" NAKED register_t __cdecl internal_661a500()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        push edi
        mov al, byte ptr ds : [esi+0x2D]
        mov edi, dword ptr ds : [ebx+8]
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        jne public_661a592
        mov al, byte ptr ds : [esi+0x2C]
        push ebp
        push 0x30
        mov byte ptr ss : [esp+0x14], al
        call public_66281dc
        mov ecx, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x14]
        mov ebp, eax
        add esp, 4
        lea eax, ss:[ebp+0xC]
        mov dword ptr ss : [ebp+4], ecx
        test eax, eax
        mov byte ptr ss : [ebp+0x2C], dl
        mov byte ptr ss : [ebp+0x2D], 0
        je public_661a55b
        add esi, 0xC
        mov ecx, 8
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        public_661a55b : nop
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        jne public_661a574
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, ebp
        public_661a574 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push edx
        mov ecx, ebx
        call public_661a500
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        mov ecx, ebx
        call public_661a500
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        public_661a592 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x661a500)
    }
}

#undef public_661a55b
#undef public_661a574
#undef public_661a592
