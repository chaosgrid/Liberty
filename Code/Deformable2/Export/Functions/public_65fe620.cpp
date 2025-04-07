#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe620);

#define public_65fe645 _public_65fe645
#define public_65fe670 _public_65fe670
#define public_65fe67a _public_65fe67a

PROC_DECLARE(0x65fe620, internal_65fe620, public_65fe620);
extern "C" NAKED register_t __cdecl internal_65fe620()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6601020]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65fe645
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        public_65fe645 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_65fe67a
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_6601014]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        pop edi
        lea esp, ss:[esp]
        public_65fe670 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65fe670
        public_65fe67a : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65fe620)
    }
}

#undef public_65fe645
#undef public_65fe670
#undef public_65fe67a
