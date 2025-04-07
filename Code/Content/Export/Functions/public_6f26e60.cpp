#include "Content-PCH.h"


#define public_6f26eb0 _public_6f26eb0
#define public_6f26ec6 _public_6f26ec6
#define public_6f2706a _public_6f2706a
#define public_6f27096 _public_6f27096
#define public_6f270b4 _public_6f270b4
#define public_6f270da _public_6f270da
#define public_6f27120 _public_6f27120
#define public_6f2713a _public_6f2713a

PROC_DECLARE(0x6f26e60, internal_6f26e60, public_6f26e60);
extern "C" NAKED register_t __cdecl internal_6f26e60()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x17C], 1
        call dword ptr ds : [public_6fb3048]
        mov edi, dword ptr ds : [public_6fb3294]
        mov esi, eax
/*FIXUP push offset public_6fb91f0 @0x6f26e89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91f0
        push esi
        call edi
        add esp, 8
        test eax, eax
        je public_6f26ec6
/*FIXUP push offset public_6fb91e0 @0x6f26e98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91e0
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f26eb0
        mov byte ptr ds : [ebx+0x167], 1
        jmp public_6f26ec6
/*FIXUP public_6f26eb0 : nop
        push offset public_6fb91d4 @0x6f26eb0*/
  FIXUP public_6f26eb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d4
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6f26ec6
        mov byte ptr ds : [ebx+0x166], 1
        public_6f26ec6 : nop
        push 3
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x118], 2
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x144]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 6
        mov ecx, ebp
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0x12C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push 9
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ebx+0x138]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        push 0xC
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 0xB
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 0xA
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x150]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 0xD
        mov ecx, ebp
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x15C]
        push 0xE
        mov ecx, ebp
        call dword ptr ds : [public_6fb3040]
        mov esi, dword ptr ds : [public_6fb306c]
        push 0xF
        mov ecx, ebp
        mov byte ptr ds : [ebx+0x164], al
        call esi
        test al, al
        mov edi, dword ptr ds : [public_6fb3020]
        jne public_6f2706a
        push 0xF
        mov ecx, ebp
        call edi
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ebx+0x160]
        public_6f2706a : nop
        push 0x10
        mov ecx, ebp
        call esi
        test al, al
        jne public_6f2713a
        push 0x10
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f27096
        mov dword ptr ds : [ebx+0x180], eax
        mov byte ptr ds : [ebx+0x184], al
        jmp public_6f270da
        public_6f27096 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x184]
        jb public_6f270b4
        mov eax, 0x2F
        public_6f270b4 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3020]
        mov byte ptr ds : [eax+ebx+0x184], 0
        mov dword ptr ds : [ebx+0x180], eax
        public_6f270da : nop
        push 0x11
        mov ecx, ebp
        call edi
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        push 0x12
        mov ecx, ebp
        fstp dword ptr ds : [ebx+0x16C]
        call edi
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        push 0x13
        mov ecx, ebp
        fstp dword ptr ds : [ebx+0x170]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f27120
        push 0x13
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x174]
        public_6f27120 : nop
        push 0x14
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f2713a
        push 0x14
        mov ecx, ebp
        call edi
        mov dword ptr ds : [ebx+0x17C], eax
        public_6f2713a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f26e60)
    }
}

#undef public_6f26eb0
#undef public_6f26ec6
#undef public_6f2706a
#undef public_6f27096
#undef public_6f270b4
#undef public_6f270da
#undef public_6f27120
#undef public_6f2713a
