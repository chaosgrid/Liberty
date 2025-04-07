#include "Content-PCH.h"


#define public_6ec5d84 _public_6ec5d84
#define public_6ec5d9f _public_6ec5d9f
#define public_6ec5dc2 _public_6ec5dc2
#define public_6ec5dd6 _public_6ec5dd6
#define public_6ec5df1 _public_6ec5df1
#define public_6ec5e14 _public_6ec5e14
#define public_6ec5e3d _public_6ec5e3d
#define public_6ec5e55 _public_6ec5e55

PROC_DECLARE(0x6ec5d60, internal_6ec5d60, public_6ec5d60);
extern "C" NAKED register_t __cdecl internal_6ec5d60()
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
        jne public_6ec5d84
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        jmp public_6ec5dc2
        public_6ec5d84 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec5d9f
        mov eax, 0x2F
        public_6ec5d9f : nop
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
        public_6ec5dc2 : nop
        push 1
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ec5dd6
        mov dword ptr ss : [ebp+0x40], eax
        mov byte ptr ss : [ebp+0x44], al
        jmp public_6ec5e14
        public_6ec5dd6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec5df1
        mov eax, 0x2F
        public_6ec5df1 : nop
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
        mov dword ptr ss : [ebp+0x40], eax
/*FIXUP public_6ec5e14 : nop
        push offset public_6fb5b14 @0x6ec5e14*/
  FIXUP public_6ec5e14 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b14
        push 2
        mov ecx, edi
        call ebx
        mov esi, dword ptr ds : [public_6fb3294]
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec5e3d
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x74], 1
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ec5e3d : nop
        push offset public_6fb5b0c @0x6ec5e3d*/
  FIXUP public_6ec5e3d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b0c
        push 2
        mov ecx, edi
        call ebx
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec5e55
        mov dword ptr ss : [ebp+0x74], eax
        public_6ec5e55 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5d60)
    }
}

#undef public_6ec5d84
#undef public_6ec5d9f
#undef public_6ec5dc2
#undef public_6ec5dd6
#undef public_6ec5df1
#undef public_6ec5e14
#undef public_6ec5e3d
#undef public_6ec5e55
