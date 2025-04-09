#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427080);
CLANG_FORWARD_PROC_SYMBOL(public_4274b0);
CLANG_FORWARD_PROC_SYMBOL(public_427760);

#define public_427098 _public_427098
#define public_4270b8 _public_4270b8
#define public_4270bb _public_4270bb
#define public_4270c0 _public_4270c0
#define public_4270eb _public_4270eb
#define public_427103 _public_427103
#define public_42711c _public_42711c
#define public_427140 _public_427140

PROC_DECLARE(0x427080, internal_427080, public_427080);
extern "C" NAKED register_t __cdecl internal_427080()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_4270c0
        public_427098 : nop
        lea eax, ds:[esi+0x10]
        push eax
        lea eax, ss:[ebp+4]
        push eax
        mov ebx, esi
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        setl al
        test al, al
        je public_4270b8
        mov esi, dword ptr ds : [esi]
        jmp public_4270bb
        public_4270b8 : nop
        mov esi, dword ptr ds : [esi+8]
        public_4270bb : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_427098
        public_4270c0 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_4270eb
        push ebp
        push ebx
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_4274b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_4270eb : nop
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        je public_427103
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx]
        je public_42711c
        lea ecx, ss:[esp+0x1C]
        call public_427760
        public_427103 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+4]
        push ecx
        add edx, 0x10
        push edx
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jge public_427140
        public_42711c : nop
        push ebp
        push ebx
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_4274b0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_427140 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x427080)
    }
}

#undef public_427098
#undef public_4270b8
#undef public_4270bb
#undef public_4270c0
#undef public_4270eb
#undef public_427103
#undef public_42711c
#undef public_427140
