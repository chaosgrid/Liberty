#include "Content-PCH.h"


#define public_6ec1d2c _public_6ec1d2c
#define public_6ec1d44 _public_6ec1d44
#define public_6ec1d61 _public_6ec1d61
#define public_6ec1d9a _public_6ec1d9a

PROC_DECLARE(0x6ec1d00, internal_6ec1d00, public_6ec1d00);
extern "C" NAKED register_t __cdecl internal_6ec1d00()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        jne public_6ec1d2c
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6ec1d61
        public_6ec1d2c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec1d44
        mov eax, 0x3F
        public_6ec1d44 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        public_6ec1d61 : nop
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec1d9a
        mov edi, offset public_6fb5924
        lea esi, ss:[esp+0x14]
        mov ecx, 0xA
        xor eax, eax
        repe cmpsb
        je public_6ec1d9a
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        add ebx, 0xC
        push ebx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec1d9a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ec1d00)
    }
}

#undef public_6ec1d2c
#undef public_6ec1d44
#undef public_6ec1d61
#undef public_6ec1d9a
