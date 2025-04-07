#include "Content-PCH.h"


#define public_6ec0751 _public_6ec0751
#define public_6ec0767 _public_6ec0767
#define public_6ec077b _public_6ec077b
#define public_6ec0796 _public_6ec0796
#define public_6ec07b6 _public_6ec07b6
#define public_6ec07ca _public_6ec07ca
#define public_6ec07e5 _public_6ec07e5
#define public_6ec0805 _public_6ec0805
#define public_6ec0826 _public_6ec0826
#define public_6ec085d _public_6ec085d
#define public_6ec0897 _public_6ec0897
#define public_6ec08bd _public_6ec08bd
#define public_6ec08d8 _public_6ec08d8

PROC_DECLARE(0x6ec0720, internal_6ec0720, public_6ec0720);
extern "C" NAKED register_t __cdecl internal_6ec0720()
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
        call edi
        mov esi, eax
/*FIXUP push offset public_6fb57d8 @0x6ec0738*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d8
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec0751
        mov byte ptr ss : [ebp+0x78], 1
        jmp public_6ec0767
/*FIXUP public_6ec0751 : nop
        push offset public_6fb57d0 @0x6ec0751*/
  FIXUP public_6ec0751 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec0767
        mov byte ptr ss : [ebp+0x78], al
        public_6ec0767 : nop
        push 1
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec077b
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec07b6
        public_6ec077b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec0796
        mov eax, 0x2F
        public_6ec0796 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebp+0x10], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec07b6 : nop
        push 2
        mov ecx, ebx
        call edi
        mov esi, eax
        test esi, esi
        jne public_6ec07ca
        mov dword ptr ss : [ebp+0x40], eax
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6ec0805
        public_6ec07ca : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec07e5
        mov eax, 0x2F
        public_6ec07e5 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [public_6fb3048]
        mov byte ptr ds : [eax+ebp+0x44], 0
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec0805 : nop
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fcom dword ptr ds : [public_6fb444c]
        fst dword ptr ss : [ebp+0x74]
        fnstsw ax
        test ah, 0x41
        jne public_6ec0826
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x74]
        public_6ec0826 : nop
        push 4
        fstp st(0)
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec085d
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ec085d
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x80]
        public_6ec085d : nop
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec08d8
/*FIXUP push offset public_6fb57c4 @0x6ec086b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57c4
        push 5
        mov ecx, ebx
        call edi
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec0897
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x84], 2
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ec0897 : nop
        push offset public_6fb57b4 @0x6ec0897*/
  FIXUP public_6ec0897 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57b4
        push 5
        mov ecx, ebx
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec08bd
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x84], 1
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ec08bd : nop
        push offset public_6fb57a8 @0x6ec08bd*/
  FIXUP public_6ec08bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a8
        push 5
        mov ecx, ebx
        call edi
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec08d8
        mov dword ptr ss : [ebp+0x84], eax
        public_6ec08d8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec0720)
    }
}

#undef public_6ec0751
#undef public_6ec0767
#undef public_6ec077b
#undef public_6ec0796
#undef public_6ec07b6
#undef public_6ec07ca
#undef public_6ec07e5
#undef public_6ec0805
#undef public_6ec0826
#undef public_6ec085d
#undef public_6ec0897
#undef public_6ec08bd
#undef public_6ec08d8
