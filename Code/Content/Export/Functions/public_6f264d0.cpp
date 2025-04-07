#include "Content-PCH.h"


#define public_6f2651d _public_6f2651d
#define public_6f26533 _public_6f26533
#define public_6f265c5 _public_6f265c5
#define public_6f265f5 _public_6f265f5
#define public_6f26613 _public_6f26613
#define public_6f26639 _public_6f26639
#define public_6f2667f _public_6f2667f
#define public_6f26699 _public_6f26699

PROC_DECLARE(0x6f264d0, internal_6f264d0, public_6f264d0);
extern "C" NAKED register_t __cdecl internal_6f264d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x17C], 1
        call dword ptr ds : [public_6fb3048]
        mov edi, dword ptr ds : [public_6fb3294]
        mov esi, eax
/*FIXUP push offset public_6fb91f0 @0x6f264f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6f26533
/*FIXUP push offset public_6fb91e0 @0x6f26505*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91e0
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f2651d
        mov byte ptr ss : [ebp+0x167], 1
        jmp public_6f26533
/*FIXUP public_6f2651d : nop
        push offset public_6fb91d4 @0x6f2651d*/
  FIXUP public_6f2651d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d4
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f26533
        mov byte ptr ss : [ebp+0x166], 1
        public_6f26533 : nop
        mov edi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x118], 1
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x11C]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 3
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x120]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 4
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x124]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 5
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x15C]
        call dword ptr ds : [public_6fb3040]
        push 6
        mov ecx, ebx
        mov byte ptr ss : [ebp+0x164], al
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f265c5
        push 6
        mov ecx, ebx
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+0x160]
        public_6f265c5 : nop
        push 7
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26699
        push 7
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f265f5
        mov dword ptr ss : [ebp+0x180], eax
        mov byte ptr ss : [ebp+0x184], al
        jmp public_6f26639
        public_6f265f5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x184]
        jb public_6f26613
        mov eax, 0x2F
        public_6f26613 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3020]
        mov byte ptr ds : [eax+ebp+0x184], 0
        mov dword ptr ss : [ebp+0x180], eax
        public_6f26639 : nop
        push 8
        mov ecx, ebx
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 9
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x16C]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0xA
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x170]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2667f
        push 0xA
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x174]
        public_6f2667f : nop
        push 0xB
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26699
        push 0xB
        mov ecx, ebx
        call edi
        mov dword ptr ss : [ebp+0x17C], eax
        public_6f26699 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f264d0)
    }
}

#undef public_6f2651d
#undef public_6f26533
#undef public_6f265c5
#undef public_6f265f5
#undef public_6f26613
#undef public_6f26639
#undef public_6f2667f
#undef public_6f26699
