#include "Content-PCH.h"


#define public_6ecc4ac _public_6ecc4ac
#define public_6ecc4ce _public_6ecc4ce
#define public_6ecc4e9 _public_6ecc4e9
#define public_6ecc509 _public_6ecc509
#define public_6ecc586 _public_6ecc586
#define public_6ecc5b2 _public_6ecc5b2

PROC_DECLARE(0x6ecc420, internal_6ecc420, public_6ecc420);
extern "C" NAKED register_t __cdecl internal_6ecc420()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        push esi
        mov esi, dword ptr ds : [public_6fb3020]
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call esi
        push 1
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x50], eax
        call esi
        mov edi, dword ptr ds : [public_6fb306c]
        push 4
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x54], eax
        call edi
        test al, al
        mov ecx, ebp
        push 2
        jne public_6ecc4ac
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x10]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x14]
        push 5
        mov ecx, ebp
        call edi
        test al, al
        jne public_6ecc5b2
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        add ebx, 0x4C
        push ebx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_6ecc4ac : nop
        call edi
        test al, al
        jne public_6ecc5b2
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ecc4ce
        mov dword ptr ds : [ebx+0x18], eax
        mov byte ptr ds : [ebx+0x1C], al
        jmp public_6ecc509
        public_6ecc4ce : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x1C]
        jb public_6ecc4e9
        mov eax, 0x2F
        public_6ecc4e9 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb306c]
        mov byte ptr ds : [eax+ebx+0x1C], 0
        mov dword ptr ds : [ebx+0x18], eax
        public_6ecc509 : nop
        push 3
        mov ecx, ebp
        call edi
        test al, al
        jne public_6ecc5b2
        push 3
        mov ecx, ebp
        lea esi, ds:[ebx+0x4C]
        call dword ptr ds : [public_6fb3048]
        push eax
        push esi
        call dword ptr ds : [public_6fb3628]
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ds:[ebx+0x4C]
        mov ecx, 0xD
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[esp+0x2C]
        rep movsd
        push eax
        mov byte ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x2C], offset public_6fb5ed8
        call dword ptr ds : [public_6fb3680]
        add esp, 0x10
        test eax, eax
        jne public_6ecc5b2
        mov cl, byte ptr ss : [esp+0x60]
        test cl, cl
        lea eax, ds:[ebx+0xC]
        je public_6ecc586
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x58]
        pop edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0x54
        ret 4
        public_6ecc586 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        public_6ecc5b2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6ecc420)
    }
}

#undef public_6ecc4ac
#undef public_6ecc4ce
#undef public_6ecc4e9
#undef public_6ecc509
#undef public_6ecc586
#undef public_6ecc5b2
