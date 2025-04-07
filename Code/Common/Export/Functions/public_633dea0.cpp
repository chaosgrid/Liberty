#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633dea0);
CLANG_FORWARD_PROC_SYMBOL(public_633fa10);
CLANG_FORWARD_PROC_SYMBOL(public_6340c40);

#define public_633dec0 _public_633dec0
#define public_633ded3 _public_633ded3
#define public_633ded6 _public_633ded6
#define public_633deda _public_633deda
#define public_633df13 _public_633df13
#define public_633df20 _public_633df20
#define public_633df28 _public_633df28
#define public_633df4c _public_633df4c

PROC_DECLARE(0x633dea0, internal_633dea0, public_633dea0);
extern "C" NAKED register_t __cdecl internal_633dea0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_633deda
        lea esp, ss:[esp]
        public_633dec0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_633ded3
        mov esi, dword ptr ds : [esi]
        jmp public_633ded6
        public_633ded3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_633ded6 : nop
        cmp esi, ecx
        jne public_633dec0
        public_633deda : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_633df28
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_633df20
        cmp edi, dword ptr ds : [edx]
        jne public_633df13
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_633fa10
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
        public_633df13 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6340c40
        mov ecx, dword ptr ss : [esp+0x1C]
        public_633df20 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_633df4c
        public_633df28 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_633fa10
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
        public_633df4c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x633dea0)
    }
}

#undef public_633dec0
#undef public_633ded3
#undef public_633ded6
#undef public_633deda
#undef public_633df13
#undef public_633df20
#undef public_633df28
#undef public_633df4c
