#include "Content-PCH.h"


#define public_6ecbaca _public_6ecbaca
#define public_6ecbae3 _public_6ecbae3
#define public_6ecbb0a _public_6ecbb0a
#define public_6ecbb25 _public_6ecbb25
#define public_6ecbb45 _public_6ecbb45
#define public_6ecbb65 _public_6ecbb65
#define public_6ecbb80 _public_6ecbb80
#define public_6ecbba0 _public_6ecbba0
#define public_6ecbbbb _public_6ecbbbb
#define public_6ecbbeb _public_6ecbbeb
#define public_6ecbc2f _public_6ecbc2f
#define public_6ecbc5b _public_6ecbc5b
#define public_6ecbc67 _public_6ecbc67
#define public_6ecbce2 _public_6ecbce2
#define public_6ecbcfd _public_6ecbcfd
#define public_6ecbd41 _public_6ecbd41
#define public_6ecbd6d _public_6ecbd6d
#define public_6ecbd74 _public_6ecbd74
#define public_6ecbd90 _public_6ecbd90

PROC_DECLARE(0x6ecba90, internal_6ecba90, public_6ecba90);
extern "C" NAKED register_t __cdecl internal_6ecba90()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5e98 @0x6ecbaa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e98
        mov ebx, ecx
        push 0
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1B], 0
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbaca
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6ecbae3
/*FIXUP public_6ecbaca : nop
        push offset public_6fb5e94 @0x6ecbaca*/
  FIXUP public_6ecbaca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e94
        push 0
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbae3
        mov byte ptr ss : [esp+0x13], al
        public_6ecbae3 : nop
        push 1
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 2
        mov ecx, ebp
        mov dword ptr ds : [ebx+0xC], eax
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ecbb0a
        mov dword ptr ds : [ebx+0x10], eax
        mov byte ptr ds : [ebx+0x14], al
        jmp public_6ecbb45
        public_6ecbb0a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x14]
        jb public_6ecbb25
        mov eax, 0x2F
        public_6ecbb25 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x14], 0
        mov dword ptr ds : [ebx+0x10], eax
        public_6ecbb45 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ecx, ebp
        je public_6ecbc67
        push 3
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ecbb65
        mov dword ptr ds : [ebx+0x44], eax
        mov byte ptr ds : [ebx+0x48], al
        jmp public_6ecbba0
        public_6ecbb65 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x48]
        jb public_6ecbb80
        mov eax, 0x2F
        public_6ecbb80 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x48], 0
        mov dword ptr ds : [ebx+0x44], eax
        public_6ecbba0 : nop
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecbbbb
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x7C], eax
        public_6ecbbbb : nop
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecbbeb
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [ebx+0x78]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6ecbbeb
        mov eax, dword ptr ds : [public_6fb4674]
        mov dword ptr ds : [ebx+0x78], eax
        public_6ecbbeb : nop
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecbd90
/*FIXUP push offset public_6fb5e74 @0x6ecbbfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e74
        push 6
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbc2f
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x8D], al
        mov byte ptr ds : [ebx+0x8C], 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_6ecbc2f : nop
        push offset public_6fb5e60 @0x6ecbc2f*/
  FIXUP public_6ecbc2f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e60
        push 6
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbc5b
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x8C], al
        mov byte ptr ds : [ebx+0x8D], 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_6ecbc5b : nop
        push offset public_6fb5e54 @0x6ecbc5b*/
  FIXUP public_6ecbc5b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e54
        push 6
        jmp public_6ecbd74
        public_6ecbc67 : nop
        mov esi, dword ptr ds : [public_6fb306c]
        push 5
        call esi
        push 9
        mov ecx, ebp
        call esi
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x28]
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[ebx+0x80]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push 6
        mov ecx, ebp
        call esi
        test al, al
        jne public_6ecbce2
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x7C], eax
        public_6ecbce2 : nop
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecbcfd
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x78]
        public_6ecbcfd : nop
        push 8
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecbd90
/*FIXUP push offset public_6fb5e74 @0x6ecbd0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e74
        push 8
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbd41
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x8D], al
        mov byte ptr ds : [ebx+0x8C], 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_6ecbd41 : nop
        push offset public_6fb5e60 @0x6ecbd41*/
  FIXUP public_6ecbd41 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e60
        push 8
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbd6d
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x8C], al
        mov byte ptr ds : [ebx+0x8D], 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_6ecbd6d : nop
        push offset public_6fb5e54 @0x6ecbd6d*/
  FIXUP public_6ecbd6d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e54
        push 8
        public_6ecbd74 : nop
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ecbd90
        mov byte ptr ds : [ebx+0x8D], 1
        mov byte ptr ds : [ebx+0x8C], 1
        public_6ecbd90 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ecba90)
    }
}

#undef public_6ecbaca
#undef public_6ecbae3
#undef public_6ecbb0a
#undef public_6ecbb25
#undef public_6ecbb45
#undef public_6ecbb65
#undef public_6ecbb80
#undef public_6ecbba0
#undef public_6ecbbbb
#undef public_6ecbbeb
#undef public_6ecbc2f
#undef public_6ecbc5b
#undef public_6ecbc67
#undef public_6ecbce2
#undef public_6ecbcfd
#undef public_6ecbd41
#undef public_6ecbd6d
#undef public_6ecbd74
#undef public_6ecbd90
