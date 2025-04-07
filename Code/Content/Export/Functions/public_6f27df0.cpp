#include "Content-PCH.h"


#define public_6f27e7e _public_6f27e7e
#define public_6f27ef1 _public_6f27ef1
#define public_6f27f16 _public_6f27f16
#define public_6f27f34 _public_6f27f34
#define public_6f27f58 _public_6f27f58
#define public_6f27f6c _public_6f27f6c
#define public_6f27f97 _public_6f27f97

PROC_DECLARE(0x6f27df0, internal_6f27df0, public_6f27df0);
extern "C" NAKED register_t __cdecl internal_6f27df0()
{
    __asm
    {
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        xor ebx, ebx
        push 5
        mov ecx, edi
        mov dword ptr ss : [ebp+0x11C], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27e7e
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
        public_6f27e7e : nop
        push esi
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        mov eax, ebx
        mov ecx, edi
        push eax
        jne public_6f27ef1
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
        jmp public_6f27f6c
        public_6f27ef1 : nop
        mov dword ptr ss : [ebp+0x118], 2
        inc ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f27f16
        mov dword ptr ss : [ebp+0x14C], eax
        mov byte ptr ss : [ebp+0x150], al
        jmp public_6f27f58
        public_6f27f16 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x150]
        jb public_6f27f34
        mov eax, 0x2F
        public_6f27f34 : nop
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
        public_6f27f58 : nop
        mov eax, ebx
        push eax
        mov ecx, edi
        inc ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        public_6f27f6c : nop
        push ebx
        fstp dword ptr ss : [ebp+0x148]
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        pop esi
        jne public_6f27f97
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3040]
        test al, al
        jne public_6f27f97
        mov dword ptr ss : [ebp+0x11C], 2
        public_6f27f97 : nop
        pop edi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27df0)
    }
}

#undef public_6f27e7e
#undef public_6f27ef1
#undef public_6f27f16
#undef public_6f27f34
#undef public_6f27f58
#undef public_6f27f6c
#undef public_6f27f97
