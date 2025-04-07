#include "Content-PCH.h"


#define public_6ec7d63 _public_6ec7d63
#define public_6ec7d80 _public_6ec7d80
#define public_6ec7d9d _public_6ec7d9d
#define public_6ec7dcf _public_6ec7dcf

PROC_DECLARE(0x6ec7d40, internal_6ec7d40, public_6ec7d40);
extern "C" NAKED register_t __cdecl internal_6ec7d40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec7d63
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec7d9d
        public_6ec7d63 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        lea edx, ss:[ebp+0x10]
        jb public_6ec7d80
        mov eax, 0x7F
        public_6ec7d80 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec7d9d : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec7dcf
/*FIXUP push offset public_6fb4ac0 @0x6ec7dab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ac0
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec7dcf
        mov byte ptr ss : [ebp+0x90], 1
        public_6ec7dcf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7d40)
    }
}

#undef public_6ec7d63
#undef public_6ec7d80
#undef public_6ec7d9d
#undef public_6ec7dcf
