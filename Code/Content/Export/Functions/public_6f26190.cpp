#include "Content-PCH.h"


#define public_6f261e1 _public_6f261e1
#define public_6f261fb _public_6f261fb
#define public_6f2621f _public_6f2621f
#define public_6f2623d _public_6f2623d
#define public_6f26263 _public_6f26263
#define public_6f262ba _public_6f262ba
#define public_6f262e6 _public_6f262e6
#define public_6f26304 _public_6f26304
#define public_6f26324 _public_6f26324
#define public_6f26370 _public_6f26370
#define public_6f2638a _public_6f2638a

PROC_DECLARE(0x6f26190, internal_6f26190, public_6f26190);
extern "C" NAKED register_t __cdecl internal_6f26190()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x17C], 1
        call edi
        mov esi, eax
/*FIXUP push offset public_6fb91f0 @0x6f261b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f261fb
/*FIXUP push offset public_6fb91e0 @0x6f261c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91e0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f261e1
        mov byte ptr ss : [ebp+0x167], 1
        jmp public_6f261fb
/*FIXUP public_6f261e1 : nop
        push offset public_6fb91d4 @0x6f261e1*/
  FIXUP public_6f261e1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d4
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f261fb
        mov byte ptr ss : [ebp+0x166], 1
        public_6f261fb : nop
        push 1
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x118], 0
        call edi
        mov esi, eax
        test esi, esi
        jne public_6f2621f
        mov dword ptr ss : [ebp+0x180], eax
        mov byte ptr ss : [ebp+0x184], al
        jmp public_6f26263
        public_6f2621f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x184]
        jb public_6f2623d
        mov eax, 0x2F
        public_6f2623d : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebp+0x184], 0
        mov dword ptr ss : [ebp+0x180], eax
        public_6f26263 : nop
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x15C]
/*FIXUP push offset public_6fb4368 @0x6f26273*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4368
        push 3
        mov ecx, ebx
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        neg eax
        sbb al, al
        inc al
        push 4
        mov ecx, ebx
        mov byte ptr ss : [ebp+0x164], al
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f262ba
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+0x160]
        public_6f262ba : nop
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2638a
        push 5
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6f262e6
        mov dword ptr ss : [ebp+0x1B4], eax
        mov byte ptr ss : [ebp+0x1B8], al
        jmp public_6f26324
        public_6f262e6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x1B8]
        jb public_6f26304
        mov eax, 0x2F
        public_6f26304 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x1B8], 0
        mov dword ptr ss : [ebp+0x1B4], eax
        public_6f26324 : nop
        mov esi, dword ptr ds : [public_6fb3020]
        push 6
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 7
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x16C]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 8
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x170]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26370
        push 8
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x174]
        public_6f26370 : nop
        push 9
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2638a
        push 9
        mov ecx, ebx
        call esi
        mov dword ptr ss : [ebp+0x17C], eax
        public_6f2638a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f26190)
    }
}

#undef public_6f261e1
#undef public_6f261fb
#undef public_6f2621f
#undef public_6f2623d
#undef public_6f26263
#undef public_6f262ba
#undef public_6f262e6
#undef public_6f26304
#undef public_6f26324
#undef public_6f26370
#undef public_6f2638a
