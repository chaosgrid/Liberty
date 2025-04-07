#include "Content-PCH.h"


#define public_6ec1f93 _public_6ec1f93
#define public_6ec1fae _public_6ec1fae
#define public_6ec1fc6 _public_6ec1fc6
#define public_6ec1fe3 _public_6ec1fe3

PROC_DECLARE(0x6ec1f50, internal_6ec1f50, public_6ec1f50);
extern "C" NAKED register_t __cdecl internal_6ec1f50()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb30a0]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec1fe3
        push 1
        mov ecx, esi
        call edi
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ec1f93
        mov byte ptr ss : [ebp+0x14], al
        jmp public_6ec1fc6
        public_6ec1f93 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6ec1fae
        mov eax, 0x2F
        public_6ec1fae : nop
        push ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        public_6ec1fc6 : nop
        mov dword ptr ss : [ebp+0x10], eax
        lea eax, ss:[ebp+0x14]
/*FIXUP push offset public_6fb5930 @0x6ec1fcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5930
        push eax
        call dword ptr ds : [public_6fb3364]
        add esp, 8
        test eax, eax
        je public_6ec1fe3
        mov byte ptr ss : [ebp+0x44], 1
        public_6ec1fe3 : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ec1f50)
    }
}

#undef public_6ec1f93
#undef public_6ec1fae
#undef public_6ec1fc6
#undef public_6ec1fe3
