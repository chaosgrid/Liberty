#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb20d0);

#define public_6eb20fc _public_6eb20fc
#define public_6eb211a _public_6eb211a

PROC_DECLARE(0x6eb20d0, internal_6eb20d0, public_6eb20d0);
extern "C" NAKED register_t __cdecl internal_6eb20d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        push esi
        mov dword ptr ds : [edx+4], ecx
        lea esi, ds:[eax+0xC]
        xor ecx, ecx
        cmp esi, ecx
        jne public_6eb20fc
        mov dword ptr ds : [edx+8], ecx
        mov byte ptr ds : [edx+0xC], cl
        mov eax, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [edx+0x24], eax
        mov eax, edx
        pop esi
        ret 4
        public_6eb20fc : nop
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
        jb public_6eb211a
        mov eax, 0x17
        public_6eb211a : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x24]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [edx+0x24], eax
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb20d0)
    }
}

#undef public_6eb20fc
#undef public_6eb211a
