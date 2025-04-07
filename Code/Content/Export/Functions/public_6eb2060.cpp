#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2060);

#define public_6eb2086 _public_6eb2086
#define public_6eb20a4 _public_6eb20a4

PROC_DECLARE(0x6eb2060, internal_6eb2060, public_6eb2060);
extern "C" NAKED register_t __cdecl internal_6eb2060()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi+4]
        add esi, 0xC
        xor eax, eax
        cmp esi, eax
        mov dword ptr ds : [edx+4], ecx
        jne public_6eb2086
        mov byte ptr ds : [edx+0xC], al
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop esi
        ret 4
        public_6eb2086 : nop
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x18
        lea ebp, ds:[edx+0xC]
        jb public_6eb20a4
        mov eax, 0x17
        public_6eb20a4 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        pop ebx
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb2060)
    }
}

#undef public_6eb2086
#undef public_6eb20a4
