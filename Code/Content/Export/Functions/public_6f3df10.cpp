#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3df10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f3df54 _public_6f3df54
#define public_6f3df5c _public_6f3df5c
#define public_6f3df8a _public_6f3df8a
#define public_6f3df90 _public_6f3df90
#define public_6f3dfb3 _public_6f3dfb3
#define public_6f3dfbd _public_6f3dfbd

PROC_DECLARE(0x6f3df10, internal_6f3df10, public_6f3df10);
extern "C" NAKED register_t __cdecl internal_6f3df10()
{
    __asm
    {
        sub esp, 0x140
        push esi
        mov esi, dword ptr ss : [esp+0x148]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f3dfbd
        push esi
        mov ecx, offset public_6fd0960
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0964]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f3df54
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f3df54
        lea eax, ss:[esp+8]
        jmp public_6f3df5c
        public_6f3df54 : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f3df5c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f3dfbd
        mov edx, dword ptr ss : [esp+0x14C]
        push ebx
        push edi
        lea esi, ds:[eax+0x10]
        mov ecx, 0x4E
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ebx, dword ptr ss : [esp+0x148]
        xor al, al
        test bh, bh
        je public_6f3df8a
        mov al, 1
        jmp public_6f3df90
        public_6f3df8a : nop
        mov bl, byte ptr ds : [edx+0x3D4]
        public_6f3df90 : nop
        test al, al
        lea edi, ds:[edx+0x2A0]
        mov ecx, 0x4E
        lea esi, ss:[esp+0x14]
        rep movsd
        pop edi
        mov byte ptr ds : [edx+0x3D4], bl
        pop ebx
        je public_6f3dfb3
        mov byte ptr ds : [edx+0x3D5], al
        public_6f3dfb3 : nop
        mov al, 1
        pop esi
        add esp, 0x140
        ret 
        public_6f3dfbd : nop
        xor al, al
        pop esi
        add esp, 0x140
        ret 
        UNREACHABLE_TRAP(0x6f3df10)
    }
}

#undef public_6f3df54
#undef public_6f3df5c
#undef public_6f3df8a
#undef public_6f3df90
#undef public_6f3dfb3
#undef public_6f3dfbd
