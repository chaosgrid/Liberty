#include "Content-PCH.h"


#define public_6f27431 _public_6f27431
#define public_6f27450 _public_6f27450
#define public_6f27471 _public_6f27471
#define public_6f274a3 _public_6f274a3
#define public_6f274ed _public_6f274ed
#define public_6f2750f _public_6f2750f

PROC_DECLARE(0x6f27400, internal_6f27400, public_6f27400);
extern "C" NAKED register_t __cdecl internal_6f27400()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov ebp, ecx
        push 0
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x10C], 1
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f27431
        mov dword ptr ss : [ebp+0x110], eax
        mov byte ptr ss : [ebp+0x114], al
        jmp public_6f27471
        public_6f27431 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x114]
        jb public_6f27450
        mov eax, 0x2F
        public_6f27450 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x114], 0
        mov dword ptr ss : [ebp+0x110], eax
        pop edi
        public_6f27471 : nop
        mov esi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fst dword ptr ss : [ebp+0x154]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6f274a3
        mov eax, dword ptr ds : [public_6fb8e2c]
        mov dword ptr ss : [ebp+0x154], eax
        public_6f274a3 : nop
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f274ed
        push 2
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 3
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x158]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 4
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x15C]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [ebp+0x160]
        public_6f274ed : nop
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2750f
        push 5
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [ebp+0x164]
        public_6f2750f : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27400)
    }
}

#undef public_6f27431
#undef public_6f27450
#undef public_6f27471
#undef public_6f274a3
#undef public_6f274ed
#undef public_6f2750f
