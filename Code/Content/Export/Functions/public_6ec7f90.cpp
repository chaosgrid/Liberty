#include "Content-PCH.h"


#define public_6ec7fb4 _public_6ec7fb4
#define public_6ec7fcf _public_6ec7fcf
#define public_6ec7ff2 _public_6ec7ff2
#define public_6ec8029 _public_6ec8029
#define public_6ec8041 _public_6ec8041

PROC_DECLARE(0x6ec7f90, internal_6ec7f90, public_6ec7f90);
extern "C" NAKED register_t __cdecl internal_6ec7f90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        push 0
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ec7fb4
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec7ff2
        public_6ec7fb4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec7fcf
        mov eax, 0x2F
        public_6ec7fcf : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec7ff2 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec8041
/*FIXUP push offset public_6fb584c @0x6ec8000*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb584c
        push 1
        mov ecx, edi
        call ebx
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8029
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], 1
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ec8029 : nop
        push offset public_6fb5844 @0x6ec8029*/
  FIXUP public_6ec8029 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5844
        push 1
        mov ecx, edi
        call ebx
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8041
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec8041 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7f90)
    }
}

#undef public_6ec7fb4
#undef public_6ec7fcf
#undef public_6ec7ff2
#undef public_6ec8029
#undef public_6ec8041
