#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_632dc77 _public_632dc77
#define public_632dc88 _public_632dc88

PROC_DECLARE(0x632dc10, internal_632dc10, public_632dc10);
extern "C" NAKED register_t __cdecl internal_632dc10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, dword ptr ds : [edi+0x48]
        push eax
        lea ecx, ds:[esi+0x18]
        push ecx
        call public_6334400
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov edx, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+4]
        lea eax, ds:[esi+0x24]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        add esp, 8
        cmp edx, ebx
        mov dword ptr ds : [eax+0x30], edx
        jle public_632dc88
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        push ebp
        public_632dc77 : nop
        mov ebp, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc ebx
        add edx, 4
        cmp ebx, ebp
        jl public_632dc77
        pop ebp
        public_632dc88 : nop
        mov eax, dword ptr ds : [edi+0x40]
        push eax
        lea ecx, ds:[esi+0x58]
        push ecx
        call public_6334400
        mov edx, dword ptr ds : [edi+0x44]
        add esp, 8
        mov dword ptr ds : [esi+0x5C], edx
        mov eax, dword ptr ds : [edi+0x4C]
        pop edi
        mov dword ptr ds : [esi+0x60], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632dc10)
    }
}

#undef public_632dc77
#undef public_632dc88
