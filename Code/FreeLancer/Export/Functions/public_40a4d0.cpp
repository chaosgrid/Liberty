#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);
CLANG_FORWARD_PROC_SYMBOL(public_40a4d0);

#define public_40a503 _public_40a503
#define public_40a50b _public_40a50b
#define public_40a538 _public_40a538
#define public_40a554 _public_40a554
#define public_40a577 _public_40a577
#define public_40a5a3 _public_40a5a3
#define public_40a5d2 _public_40a5d2

PROC_DECLARE(0x40a4d0, internal_40a4d0, public_40a4d0);
extern "C" NAKED register_t __cdecl internal_40a4d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov ebp, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_40a503
/*FIXUP push offset public_5c7e58 @0x40a4e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7e58
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40a50b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x58]
        public_40a503 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40a50b : nop
        push offset public_5c7e4c @0x40a50b*/
  FIXUP public_40a50b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7e4c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40a577
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_40a538
        pop esi
        mov dword ptr ss : [ebp+0x5C], eax
        mov byte ptr ss : [ebp+0x60], al
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_40a538 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x60]
        jb public_40a554
        mov eax, 0x1F
        public_40a554 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp+0x60], 0
        pop esi
        mov dword ptr ss : [ebp+0x5C], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40a577 : nop
        push offset public_5c7e38 @0x40a577*/
  FIXUP public_40a577 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7e38
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_40a5a3
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x54], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_40a5a3 : nop
        push offset public_5c7e28 @0x40a5a3*/
  FIXUP public_40a5a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7e28
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40a5d2
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x80], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_40a5d2 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40a4d0)
    }
}

#undef public_40a503
#undef public_40a50b
#undef public_40a538
#undef public_40a554
#undef public_40a577
#undef public_40a5a3
#undef public_40a5d2
