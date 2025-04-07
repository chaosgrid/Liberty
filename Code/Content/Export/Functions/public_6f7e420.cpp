#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e990);

#define public_6f7e451 _public_6f7e451
#define public_6f7e486 _public_6f7e486
#define public_6f7e49e _public_6f7e49e
#define public_6f7e4c9 _public_6f7e4c9
#define public_6f7e4e7 _public_6f7e4e7
#define public_6f7e507 _public_6f7e507

PROC_DECLARE(0x6f7e420, internal_6f7e420, public_6f7e420);
extern "C" NAKED register_t __cdecl internal_6f7e420()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        push esi
        mov edx, ebx
        mov dword ptr ss : [ebp+0x10], eax
        push edi
        lea eax, ss:[ebp+0x14]
        sub edx, ebp
        mov dword ptr ss : [esp+0x14], 8
        public_6f7e451 : nop
        lea esi, ds:[edx+eax]
        mov edi, eax
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x18
        dec ecx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f7e451
        lea eax, ds:[ebx+0xD8]
        xor edi, edi
        cmp eax, edi
        jne public_6f7e486
        mov dword ptr ss : [ebp+0xD4], edi
        mov byte ptr ss : [ebp+0xD8], 0
        jmp public_6f7e49e
        public_6f7e486 : nop
        push eax
        lea ecx, ss:[ebp+0xD8]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xD4], eax
        public_6f7e49e : nop
        lea edx, ds:[ebx+0x108]
        push edx
        lea ecx, ss:[ebp+0x108]
        call public_6f7e990
        lea esi, ds:[ebx+0x120]
        cmp esi, edi
        jne public_6f7e4c9
        mov dword ptr ss : [ebp+0x11C], edi
        mov byte ptr ss : [ebp+0x120], 0
        jmp public_6f7e507
        public_6f7e4c9 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ss:[ebp+0x120]
        jb public_6f7e4e7
        mov eax, 0x3F
        public_6f7e4e7 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x120], 0
        mov dword ptr ss : [ebp+0x11C], eax
        public_6f7e507 : nop
        mov al, byte ptr ds : [ebx+0x164]
        mov byte ptr ss : [ebp+0x164], al
        mov ecx, dword ptr ds : [ebx+0x168]
        mov dword ptr ss : [ebp+0x168], ecx
        lea esi, ds:[ebx+0x16C]
        lea edi, ss:[ebp+0x16C]
        mov ecx, 0xF6
        rep movsd
        mov dl, byte ptr ds : [ebx+0x544]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x544], dl
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f7e420)
    }
}

#undef public_6f7e451
#undef public_6f7e486
#undef public_6f7e49e
#undef public_6f7e4c9
#undef public_6f7e4e7
#undef public_6f7e507
