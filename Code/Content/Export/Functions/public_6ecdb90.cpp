#include "Content-PCH.h"


#define public_6ecdbf3 _public_6ecdbf3
#define public_6ecdc0c _public_6ecdc0c
#define public_6ecdc29 _public_6ecdc29
#define public_6ecdc4e _public_6ecdc4e
#define public_6ecdc68 _public_6ecdc68

PROC_DECLARE(0x6ecdb90, internal_6ecdb90, public_6ecdb90);
extern "C" NAKED register_t __cdecl internal_6ecdb90()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xC]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x10]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x14]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x18]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jne public_6ecdbf3
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6ecdc29
        public_6ecdbf3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ecdc0c
        mov eax, 0x3F
        public_6ecdc0c : nop
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
        pop edi
        public_6ecdc29 : nop
        mov esi, dword ptr ds : [public_6fb3294]
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6fb5fc4 @0x6ecdc33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5fc4
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecdc4e
        pop esi
        mov dword ptr ss : [ebp+0x1C], ebx
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ecdc4e : nop
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6fb5fc0 @0x6ecdc52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5fc0
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecdc68
        mov dword ptr ss : [ebp+0x1C], 1
        public_6ecdc68 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ecdb90)
    }
}

#undef public_6ecdbf3
#undef public_6ecdc0c
#undef public_6ecdc29
#undef public_6ecdc4e
#undef public_6ecdc68
