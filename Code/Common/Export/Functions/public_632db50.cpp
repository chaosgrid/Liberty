#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334450);

#define public_632dbd0 _public_632dbd0
#define public_632dbe1 _public_632dbe1

PROC_DECLARE(0x632db50, internal_632db50, public_632db50);
extern "C" NAKED register_t __cdecl internal_632db50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        lea eax, ds:[esi+0x14]
        push eax
        call public_6334450
        mov ecx, dword ptr ds : [edi+0x18]
        push ecx
        lea edx, ds:[esi+0x18]
        push edx
        call public_6334400
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [edi+0x24]
        lea ecx, ds:[edi+0x24]
        lea eax, ds:[esi+0x24]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        add esp, 0x10
        xor ebx, ebx
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_632dbe1
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        push ebp
        lea ecx, ds:[ecx]
        public_632dbd0 : nop
        mov ebp, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc ebx
        add edx, 4
        cmp ebx, ebp
        jl public_632dbd0
        pop ebp
        public_632dbe1 : nop
        mov eax, dword ptr ds : [edi+0x58]
        push eax
        lea ecx, ds:[esi+0x58]
        push ecx
        call public_6334400
        mov edx, dword ptr ds : [edi+0x5C]
        add esp, 8
        mov dword ptr ds : [esi+0x5C], edx
        mov eax, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632db50)
    }
}

#undef public_632dbd0
#undef public_632dbe1
