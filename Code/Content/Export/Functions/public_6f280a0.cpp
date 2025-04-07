#include "Content-PCH.h"


#define public_6f28132 _public_6f28132
#define public_6f281a5 _public_6f281a5
#define public_6f281ca _public_6f281ca
#define public_6f281e8 _public_6f281e8
#define public_6f2820c _public_6f2820c
#define public_6f28220 _public_6f28220
#define public_6f2824b _public_6f2824b

PROC_DECLARE(0x6f280a0, internal_6f280a0, public_6f280a0);
extern "C" NAKED register_t __cdecl internal_6f280a0()
{
    __asm
    {
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        push 5
        mov ecx, edi
        mov dword ptr ss : [ebp+0x11C], 1
        xor ebx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f28132
        push 0
        mov ecx, edi
        mov dword ptr ss : [ebp+0x118], 1
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x130]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x134]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x138]
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x13C]
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x140]
        push 5
        mov ecx, edi
        mov ebx, 6
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x144]
        public_6f28132 : nop
        push esi
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        mov eax, ebx
        mov ecx, edi
        push eax
        jne public_6f281a5
        mov esi, dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [ebp+0x118], 0
        inc ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, ebx
        push eax
        mov ecx, edi
        fstp dword ptr ss : [ebp+0x120]
        inc ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, ebx
        push eax
        mov ecx, edi
        fstp dword ptr ss : [ebp+0x124]
        inc ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov eax, ebx
        push eax
        mov ecx, edi
        fstp dword ptr ss : [ebp+0x128]
        inc ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        jmp public_6f28220
        public_6f281a5 : nop
        mov dword ptr ss : [ebp+0x118], 2
        inc ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f281ca
        mov dword ptr ss : [ebp+0x14C], eax
        mov byte ptr ss : [ebp+0x150], al
        jmp public_6f2820c
        public_6f281ca : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x150]
        jb public_6f281e8
        mov eax, 0x2F
        public_6f281e8 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+ebp+0x150], 0
        mov dword ptr ss : [ebp+0x14C], eax
        public_6f2820c : nop
        mov eax, ebx
        push eax
        mov ecx, edi
        inc ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        public_6f28220 : nop
        push ebx
        fstp dword ptr ss : [ebp+0x148]
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        pop esi
        jne public_6f2824b
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3040]
        test al, al
        jne public_6f2824b
        mov dword ptr ss : [ebp+0x11C], 2
        public_6f2824b : nop
        pop edi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f280a0)
    }
}

#undef public_6f28132
#undef public_6f281a5
#undef public_6f281ca
#undef public_6f281e8
#undef public_6f2820c
#undef public_6f28220
#undef public_6f2824b
