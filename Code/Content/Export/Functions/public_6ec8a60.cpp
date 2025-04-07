#include "Content-PCH.h"


#define public_6ec8a8d _public_6ec8a8d
#define public_6ec8aa6 _public_6ec8aa6
#define public_6ec8ac3 _public_6ec8ac3

PROC_DECLARE(0x6ec8a60, internal_6ec8a60, public_6ec8a60);
extern "C" NAKED register_t __cdecl internal_6ec8a60()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jne public_6ec8a8d
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6ec8ac3
        public_6ec8a8d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6ec8aa6
        mov eax, 0x1F
        public_6ec8aa6 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        pop edi
        public_6ec8ac3 : nop
        lea eax, ss:[esp+0x10]
        push eax
        add ebp, 0xC
        push ebp
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6ec8a60)
    }
}

#undef public_6ec8a8d
#undef public_6ec8aa6
#undef public_6ec8ac3
