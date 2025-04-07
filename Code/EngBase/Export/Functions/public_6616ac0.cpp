#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616b09 _public_6616b09
#define public_6616b11 _public_6616b11
#define public_6616b48 _public_6616b48
#define public_6616b5c _public_6616b5c

PROC_DECLARE(0x6616ac0, internal_6616ac0, public_6616ac0);
extern "C" NAKED register_t __cdecl internal_6616ac0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        cmp eax, 0xFFFFFFFF
        mov ebx, 0xFFFFFFFE
        je public_6616b5c
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6616b09
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616b09
        lea eax, ss:[esp+0x14]
        jmp public_6616b11
        public_6616b09 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6616b11 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_6616b5c
        mov edx, dword ptr ds : [eax+0xC]
        xor ecx, ecx
        fld dword ptr ds : [edx+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_6616b48
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, 1
        test al, al
        sete al
        mov byte ptr ds : [edx], al
        mov eax, ecx
        pop ebx
        pop ecx
        ret 0xC
        public_6616b48 : nop
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        test al, al
        sete al
        mov byte ptr ds : [edx], al
        mov eax, ecx
        pop ebx
        pop ecx
        ret 0xC
        public_6616b5c : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6616ac0)
    }
}

#undef public_6616b09
#undef public_6616b11
#undef public_6616b48
#undef public_6616b5c
