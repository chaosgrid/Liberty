#include "Content-PCH.h"


#define public_6ebfb91 _public_6ebfb91
#define public_6ebfba7 _public_6ebfba7
#define public_6ebfbbb _public_6ebfbbb
#define public_6ebfbd6 _public_6ebfbd6
#define public_6ebfbf6 _public_6ebfbf6
#define public_6ebfc3e _public_6ebfc3e
#define public_6ebfc72 _public_6ebfc72
#define public_6ebfca9 _public_6ebfca9
#define public_6ebfccc _public_6ebfccc
#define public_6ebfce4 _public_6ebfce4

PROC_DECLARE(0x6ebfb60, internal_6ebfb60, public_6ebfb60);
extern "C" NAKED register_t __cdecl internal_6ebfb60()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call edi
        mov esi, eax
/*FIXUP push offset public_6fb57d8 @0x6ebfb78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d8
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ebfb91
        mov byte ptr ds : [ebx+0x50], 1
        jmp public_6ebfba7
/*FIXUP public_6ebfb91 : nop
        push offset public_6fb57d0 @0x6ebfb91*/
  FIXUP public_6ebfb91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ebfba7
        mov byte ptr ds : [ebx+0x50], al
        public_6ebfba7 : nop
        push 1
        mov ecx, ebp
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ebfbbb
        mov dword ptr ds : [ebx+0x18], eax
        mov byte ptr ds : [ebx+0x1C], al
        jmp public_6ebfbf6
        public_6ebfbbb : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0x1C]
        jb public_6ebfbd6
        mov eax, 0x2F
        public_6ebfbd6 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebx+0x1C], 0
        mov dword ptr ds : [ebx+0x18], eax
        public_6ebfbf6 : nop
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        push 3
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x10]
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x14]
        push 5
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fcom dword ptr ds : [public_6fb444c]
        fst dword ptr ds : [ebx+0x4C]
        fnstsw ax
        test ah, 0x41
        jnp public_6ebfc3e
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [ebx+0x4C]
        public_6ebfc3e : nop
        push 6
        fstp st(0)
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ebfc72
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6ebfc72
        push 6
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x58]
        public_6ebfc72 : nop
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ebfce4
/*FIXUP push offset public_6fb57c4 @0x6ebfc80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57c4
        push 7
        mov ecx, ebp
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ebfca9
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x5C], 2
        pop ebx
        ret 4
/*FIXUP public_6ebfca9 : nop
        push offset public_6fb57b4 @0x6ebfca9*/
  FIXUP public_6ebfca9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57b4
        push 7
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ebfccc
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x5C], 1
        pop ebx
        ret 4
/*FIXUP public_6ebfccc : nop
        push offset public_6fb57a8 @0x6ebfccc*/
  FIXUP public_6ebfccc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a8
        push 7
        mov ecx, ebp
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ebfce4
        mov dword ptr ds : [ebx+0x5C], eax
        public_6ebfce4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebfb60)
    }
}

#undef public_6ebfb91
#undef public_6ebfba7
#undef public_6ebfbbb
#undef public_6ebfbd6
#undef public_6ebfbf6
#undef public_6ebfc3e
#undef public_6ebfc72
#undef public_6ebfca9
#undef public_6ebfccc
#undef public_6ebfce4
