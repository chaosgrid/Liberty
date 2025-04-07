#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628d660);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63923c0);

#define public_626151e _public_626151e
#define public_626156c _public_626156c
#define public_62615bb _public_62615bb
#define public_626160a _public_626160a
#define public_6261655 _public_6261655
#define public_62616a4 _public_62616a4
#define public_626170a _public_626170a

PROC_DECLARE(0x6261330, internal_6261330, public_6261330);
extern "C" NAKED register_t __cdecl internal_6261330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63923c0 @0x6261332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63923c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov dl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [ebx+8], dl
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        push esi
        push edi
        lea esi, ss:[ebp+0x14]
        lea edi, ds:[ebx+0x14]
        mov ecx, 0x20
        rep movsd
        lea esi, ss:[ebp+0x94]
        lea edi, ds:[ebx+0x94]
        mov ecx, 8
        rep movsd
        mov edx, dword ptr ss : [ebp+0xB4]
        mov dword ptr ds : [ebx+0xB4], edx
        mov eax, dword ptr ss : [ebp+0xB8]
        mov dword ptr ds : [ebx+0xB8], eax
        mov ecx, dword ptr ss : [ebp+0xBC]
        mov dword ptr ds : [ebx+0xBC], ecx
        mov dl, byte ptr ss : [ebp+0xC0]
        mov byte ptr ds : [ebx+0xC0], dl
        mov eax, dword ptr ss : [ebp+0xC4]
        mov dword ptr ds : [ebx+0xC4], eax
        mov ecx, dword ptr ss : [ebp+0xC8]
        mov dword ptr ds : [ebx+0xC8], ecx
        mov edx, dword ptr ss : [ebp+0xCC]
        mov dword ptr ds : [ebx+0xCC], edx
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ds : [ebx+0xD0], eax
        mov cl, byte ptr ss : [ebp+0xD4]
        mov byte ptr ds : [ebx+0xD4], cl
        mov dl, byte ptr ss : [ebp+0xD5]
        mov byte ptr ds : [ebx+0xD5], dl
        lea eax, ss:[ebp+0xD8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xD8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ss : [ebp+0xE4]
        mov byte ptr ds : [ebx+0xE4], cl
        mov dl, byte ptr ss : [ebp+0xE5]
        mov byte ptr ds : [ebx+0xE5], dl
        lea eax, ss:[ebp+0xE8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xE8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0xF4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0xF4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x100]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x100]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ss : [ebp+0x10C]
        mov byte ptr ds : [ebx+0x10C], al
        mov cl, byte ptr ss : [ebp+0x10D]
        mov byte ptr ds : [ebx+0x10D], cl
        lea edx, ss:[ebp+0x110]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x110]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[ebp+0x11C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x11C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0x128]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x128]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ss : [ebp+0x134]
        lea edi, ss:[ebp+0x134]
        lea esi, ds:[ebx+0x134]
        mov ecx, edi
        mov byte ptr ds : [esi], dl
        call public_626a600
        test eax, eax
        jge public_626151e
        xor eax, eax
        public_626151e : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov cl, byte ptr ss : [ebp+0x144]
        lea edi, ss:[ebp+0x144]
        lea esi, ds:[ebx+0x144]
        mov byte ptr ds : [esi], cl
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_626a600
        test eax, eax
        jge public_626156c
        xor eax, eax
        public_626156c : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ss : [ebp+0x154]
        lea edi, ss:[ebp+0x154]
        lea esi, ds:[ebx+0x154]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi], al
        call public_626a600
        test eax, eax
        jge public_62615bb
        xor eax, eax
        public_62615bb : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dl, byte ptr ss : [ebp+0x164]
        lea edi, ss:[ebp+0x164]
        lea esi, ds:[ebx+0x164]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi], dl
        call public_626a600
        test eax, eax
        jge public_626160a
        xor eax, eax
        public_626160a : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov cl, byte ptr ss : [ebp+0x174]
        lea edi, ss:[ebp+0x174]
        lea esi, ds:[ebx+0x174]
        mov byte ptr ds : [esi], cl
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        call public_626a600
        test eax, eax
        jge public_6261655
        xor eax, eax
        public_6261655 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ss : [ebp+0x184]
        lea edi, ss:[ebp+0x184]
        lea esi, ds:[ebx+0x184]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 4
        mov byte ptr ds : [esi], al
        call public_626a600
        test eax, eax
        jge public_62616a4
        xor eax, eax
        public_62616a4 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea edx, ss:[ebp+0x194]
        lea ecx, ds:[ebx+0x194]
        push edx
        mov byte ptr ss : [esp+0x20], 5
        call public_628d660
        mov al, byte ptr ss : [ebp+0x1A4]
        lea edi, ss:[ebp+0x1A4]
        lea esi, ds:[ebx+0x1A4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 6
        mov byte ptr ds : [esi], al
        call public_626a600
        test eax, eax
        jge public_626170a
        xor eax, eax
        public_626170a : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea edx, ss:[ebp+0x1B4]
        push edx
        lea ecx, ds:[ebx+0x1B4]
        mov byte ptr ss : [esp+0x20], 7
        call public_628d660
        mov eax, dword ptr ss : [ebp+0x1C4]
        mov dword ptr ds : [ebx+0x1C4], eax
        lea esi, ss:[ebp+0x1C8]
        lea edi, ds:[ebx+0x1C8]
        mov ecx, 0x10
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6261330)
    }
}

#undef public_626151e
#undef public_626156c
#undef public_62615bb
#undef public_626160a
#undef public_6261655
#undef public_62616a4
#undef public_626170a
