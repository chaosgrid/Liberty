#include "THORN-PCH.h"


#define public_6f385dc _public_6f385dc
#define public_6f385eb _public_6f385eb
#define public_6f38661 _public_6f38661

PROC_DECLARE(0x6f38590, internal_6f38590, public_6f38590);
extern "C" NAKED register_t __cdecl internal_6f38590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        or ecx, 0xFFFFFFFF
        lea ebx, ds:[eax+0xC]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f385dc
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6f385dc : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov edx, dword ptr ds : [public_6f5a020]
        je public_6f385eb
        mov edx, ebx
        public_6f385eb : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x14], offset public_6f60040
        mov ecx, 0xB
        lea edi, ss:[esp+0x18]
        rep stosd
        mov dword ptr ss : [esp+0x30], 0x8000080
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x10], 0x34
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [esp+0x20], 0xC0000000
        mov dword ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6f5a000]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edi, eax
        test edi, edi
        jl public_6f38661
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edi, eax
        public_6f38661 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6f38590)
    }
}

#undef public_6f385dc
#undef public_6f385eb
#undef public_6f38661
