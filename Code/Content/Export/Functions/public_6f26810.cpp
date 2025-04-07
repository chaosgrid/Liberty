#include "Content-PCH.h"


#define public_6f26842 _public_6f26842
#define public_6f26860 _public_6f26860
#define public_6f26880 _public_6f26880
#define public_6f26907 _public_6f26907
#define public_6f26921 _public_6f26921
#define public_6f269db _public_6f269db
#define public_6f269f5 _public_6f269f5
#define public_6f26a13 _public_6f26a13
#define public_6f26a31 _public_6f26a31
#define public_6f26a4f _public_6f26a4f
#define public_6f26a6d _public_6f26a6d
#define public_6f26a87 _public_6f26a87

PROC_DECLARE(0x6f26810, internal_6f26810, public_6f26810);
extern "C" NAKED register_t __cdecl internal_6f26810()
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
        jne public_6f26842
        mov dword ptr ss : [ebp+0x1CC], eax
        mov byte ptr ss : [ebp+0x1D0], al
        jmp public_6f26880
        public_6f26842 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x1D0]
        jb public_6f26860
        mov eax, 0x2F
        public_6f26860 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x1D0], 0
        mov dword ptr ss : [ebp+0x1CC], eax
        public_6f26880 : nop
        mov esi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x19C]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 3
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x1A0]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 4
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x124], 1
        fstp dword ptr ss : [ebp+0x1A4]
        call dword ptr ds : [public_6fb3048]
        mov edi, eax
/*FIXUP push offset public_6fb91f0 @0x6f268d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f26921
/*FIXUP push offset public_6fb91e0 @0x6f268eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91e0
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f26907
        mov byte ptr ss : [ebp+0x173], 1
        jmp public_6f26921
/*FIXUP public_6f26907 : nop
        push offset public_6fb91d4 @0x6f26907*/
  FIXUP public_6f26907 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d4
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f26921
        mov byte ptr ss : [ebp+0x172], 1
        public_6f26921 : nop
        push 5
        mov ecx, ebx
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 6
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x128]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 7
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x12C]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 8
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x130]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 9
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x168]
        call dword ptr ds : [public_6fb3040]
        push 0xA
        mov ecx, ebx
        mov byte ptr ss : [ebp+0x170], al
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0xB
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x16C]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0xC
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x178]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push 0xD
        mov ecx, ebx
        fstp dword ptr ss : [ebp+0x17C]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f269db
        push 0xD
        mov ecx, ebx
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [ebp+0x1AC], al
        public_6f269db : nop
        push 0xE
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f269f5
        push 0xE
        mov ecx, ebx
        call esi
        mov dword ptr ss : [ebp+0x1B8], eax
        public_6f269f5 : nop
        push 0xF
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26a13
        push 0xF
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1B0]
        public_6f26a13 : nop
        push 0x10
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26a31
        push 0x10
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1BC]
        public_6f26a31 : nop
        push 0x11
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26a4f
        push 0x11
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1C0]
        public_6f26a4f : nop
        push 0x12
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26a6d
        push 0x12
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x1B4]
        public_6f26a6d : nop
        push 0x13
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f26a87
        push 0x13
        mov ecx, ebx
        call esi
        mov dword ptr ss : [ebp+0x1C8], eax
        public_6f26a87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f26810)
    }
}

#undef public_6f26842
#undef public_6f26860
#undef public_6f26880
#undef public_6f26907
#undef public_6f26921
#undef public_6f269db
#undef public_6f269f5
#undef public_6f26a13
#undef public_6f26a31
#undef public_6f26a4f
#undef public_6f26a6d
#undef public_6f26a87
