#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62935d8 _public_62935d8
#define public_629360e _public_629360e
#define public_629363d _public_629363d

PROC_DECLARE(0x6293570, internal_6293570, public_6293570);
extern "C" NAKED register_t __cdecl internal_6293570()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        xor bl, bl
        call dword ptr ds : [edx+0x58]
        test al, al
        je public_629363d
        mov al, byte ptr ds : [esi+0x38]
        test al, al
        jne public_62935d8
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x40]
        push ecx
        lea edx, ds:[esi+0x3C]
        push edx
        mov ecx, esi
        mov byte ptr ds : [esi+0x38], 1
        call dword ptr ds : [eax+0x8C]
        public_62935d8 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [edx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [ebx+0xA0]
        mov ebx, eax
        mov eax, dword ptr ds : [public_63fc114]
        test eax, eax
        jne public_629360e
        call public_6391cf0
        mov dword ptr ds : [public_63fc114], eax
        public_629360e : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x40
        push esi
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_629363d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6293570)
    }
}

#undef public_62935d8
#undef public_629360e
#undef public_629363d
