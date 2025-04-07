#include "Content-PCH.h"


#define public_6f27770 _public_6f27770
#define public_6f277a2 _public_6f277a2
#define public_6f277c1 _public_6f277c1
#define public_6f277e2 _public_6f277e2
#define public_6f27816 _public_6f27816
#define public_6f27820 _public_6f27820

PROC_DECLARE(0x6f27710, internal_6f27710, public_6f27710);
extern "C" NAKED register_t __cdecl internal_6f27710()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 1
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x118], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27816
/*FIXUP push offset public_6fb9200 @0x6f27747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9200
        push 1
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f27770
        push 1
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        public_6f27770 : nop
        push 2
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x11C], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27820
        push 2
        mov ecx, ebp
        call esi
        mov esi, eax
        test esi, esi
        jne public_6f277a2
        mov dword ptr ds : [ebx+0x138], eax
        mov byte ptr ds : [ebx+0x13C], al
        jmp public_6f277e2
        public_6f277a2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x13C]
        jb public_6f277c1
        mov eax, 0x2F
        public_6f277c1 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x13C], 0
        mov dword ptr ds : [ebx+0x138], eax
        pop edi
        public_6f277e2 : nop
        mov esi, dword ptr ds : [public_6fb3020]
        push 3
        mov ecx, ebp
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        push 4
        mov ecx, ebp
        fstp dword ptr ds : [ebx+0x12C]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        fstp dword ptr ds : [ebx+0x130]
        pop ebx
        ret 4
        public_6f27816 : nop
        mov dword ptr ds : [ebx+0x11C], 0
        public_6f27820 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27710)
    }
}

#undef public_6f27770
#undef public_6f277a2
#undef public_6f277c1
#undef public_6f277e2
#undef public_6f27816
#undef public_6f27820
