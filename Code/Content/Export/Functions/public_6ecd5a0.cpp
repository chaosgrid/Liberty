#include "Content-PCH.h"


#define public_6ecd5fa _public_6ecd5fa
#define public_6ecd612 _public_6ecd612
#define public_6ecd62e _public_6ecd62e
#define public_6ecd658 _public_6ecd658
#define public_6ecd67c _public_6ecd67c
#define public_6ecd696 _public_6ecd696

PROC_DECLARE(0x6ecd5a0, internal_6ecd5a0, public_6ecd5a0);
extern "C" NAKED register_t __cdecl internal_6ecd5a0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push edi
        mov edi, dword ptr ds : [public_6fb3020]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call edi
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call edi
        push 2
        mov ecx, esi
        mov dword ptr ss : [ebp+0x10], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecd696
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jne public_6ecd5fa
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_6ecd62e
        public_6ecd5fa : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ecd612
        mov eax, 0x3F
        public_6ecd612 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        public_6ecd62e : nop
        mov esi, dword ptr ds : [public_6fb3294]
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6fb5f70 @0x6ecd638*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f70
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecd658
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x14], 3
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ecd658 : nop
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb5f60 @0x6ecd65c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f60
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecd67c
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x14], 7
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ecd67c : nop
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6fb5938 @0x6ecd680*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5938
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecd696
        mov dword ptr ss : [ebp+0x14], 8
        public_6ecd696 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ecd5a0)
    }
}

#undef public_6ecd5fa
#undef public_6ecd612
#undef public_6ecd62e
#undef public_6ecd658
#undef public_6ecd67c
#undef public_6ecd696
