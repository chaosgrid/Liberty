#include "Content-PCH.h"


#define public_6ec1020 _public_6ec1020
#define public_6ec103c _public_6ec103c
#define public_6ec1050 _public_6ec1050
#define public_6ec106b _public_6ec106b
#define public_6ec1085 _public_6ec1085

PROC_DECLARE(0x6ec0ff0, internal_6ec0ff0, public_6ec0ff0);
extern "C" NAKED register_t __cdecl internal_6ec0ff0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call esi
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
/*FIXUP push offset public_6fb57d8 @0x6ec100d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d8
        call edi
        add esp, 8
        test eax, eax
        jne public_6ec1020
        mov dword ptr ss : [ebp+0x50], eax
        jmp public_6ec103c
        public_6ec1020 : nop
        push 0
        mov ecx, ebx
        call esi
        push eax
/*FIXUP push offset public_6fb57d0 @0x6ec1027*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57d0
        call edi
        add esp, 8
        test eax, eax
        jne public_6ec103c
        mov dword ptr ss : [ebp+0x50], 1
        public_6ec103c : nop
        push 1
        mov ecx, ebx
        call esi
        mov esi, eax
        test esi, esi
        jne public_6ec1050
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec1085
        public_6ec1050 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec106b
        mov eax, 0x2F
        public_6ec106b : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x10], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec1085 : nop
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x40]
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x44]
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x48]
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x4C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec0ff0)
    }
}

#undef public_6ec1020
#undef public_6ec103c
#undef public_6ec1050
#undef public_6ec106b
#undef public_6ec1085
