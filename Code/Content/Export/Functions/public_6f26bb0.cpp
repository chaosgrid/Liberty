#include "Content-PCH.h"


#define public_6f26be2 _public_6f26be2
#define public_6f26c00 _public_6f26c00
#define public_6f26c20 _public_6f26c20
#define public_6f26ca7 _public_6f26ca7
#define public_6f26cc1 _public_6f26cc1
#define public_6f26cdf _public_6f26cdf
#define public_6f26cfd _public_6f26cfd
#define public_6f26d23 _public_6f26d23
#define public_6f26da1 _public_6f26da1
#define public_6f26dbb _public_6f26dbb
#define public_6f26dd9 _public_6f26dd9
#define public_6f26df7 _public_6f26df7
#define public_6f26e15 _public_6f26e15
#define public_6f26e33 _public_6f26e33
#define public_6f26e4d _public_6f26e4d

PROC_DECLARE(0x6f26bb0, internal_6f26bb0, public_6f26bb0);
extern "C" NAKED register_t __cdecl internal_6f26bb0()
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
        mov dword ptr ss : [ebp+0x1C8], 1
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f26be2
        mov dword ptr ss : [ebp+0x200], eax
        mov byte ptr ss : [ebp+0x204], al
        jmp public_6f26c20
        public_6f26be2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x204]
        jb public_6f26c00
        mov eax, 0x2F
        public_6f26c00 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x204], 0
        mov dword ptr ss : [ebp+0x200], eax
        public_6f26c20 : nop
        mov edi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, ebx
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x19C]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 3
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x1A0]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 4
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x124], 0
        fstp dword ptr ss : [ebp+0x1A4]
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
/*FIXUP push offset public_6fb91f0 @0x6f26c78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f26cc1
/*FIXUP push offset public_6fb91e0 @0x6f26c8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91e0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f26ca7
        mov byte ptr ss : [ebp+0x173], 1
        jmp public_6f26cc1
/*FIXUP public_6f26ca7 : nop
        push offset public_6fb91d4 @0x6f26ca7*/
  FIXUP public_6f26ca7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d4
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f26cc1
        mov byte ptr ss : [ebp+0x172], 1
        public_6f26cc1 : nop
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f26cdf
        mov dword ptr ss : [ebp+0x1CC], eax
        mov byte ptr ss : [ebp+0x1D0], al
        jmp public_6f26d23
        public_6f26cdf : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x1D0]
        jb public_6f26cfd
        mov eax, 0x2F
        public_6f26cfd : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3020]
        mov byte ptr ds : [eax+ebp+0x1D0], 0
        mov dword ptr ss : [ebp+0x1CC], eax
        public_6f26d23 : nop
        push 6
        mov ecx, ebx
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 7
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x168]
        call dword ptr ds : [public_6fb3040]
        push 8
        mov ecx, ebx
        mov byte ptr ss : [ebp+0x170], al
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
        fstp dword ptr ss : [ebp+0x178]
        call edi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0xB
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x17C]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26da1
        push 0xB
        mov ecx, ebx
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [ebp+0x1AC], al
        public_6f26da1 : nop
        push 0xC
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26dbb
        push 0xC
        mov ecx, ebx
        call edi
        mov dword ptr ss : [ebp+0x1B8], eax
        public_6f26dbb : nop
        push 0xD
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26dd9
        push 0xD
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1B0]
        public_6f26dd9 : nop
        push 0xE
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26df7
        push 0xE
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1BC]
        public_6f26df7 : nop
        push 0xF
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26e15
        push 0xF
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1C0]
        public_6f26e15 : nop
        push 0x10
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26e33
        push 0x10
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1B4]
        public_6f26e33 : nop
        push 0x11
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26e4d
        push 0x11
        mov ecx, ebx
        call edi
        mov dword ptr ss : [ebp+0x1C8], eax
        public_6f26e4d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f26bb0)
    }
}

#undef public_6f26be2
#undef public_6f26c00
#undef public_6f26c20
#undef public_6f26ca7
#undef public_6f26cc1
#undef public_6f26cdf
#undef public_6f26cfd
#undef public_6f26d23
#undef public_6f26da1
#undef public_6f26dbb
#undef public_6f26dd9
#undef public_6f26df7
#undef public_6f26e15
#undef public_6f26e33
#undef public_6f26e4d
