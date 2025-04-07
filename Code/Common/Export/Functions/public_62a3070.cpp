#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a30f0 _public_62a30f0
#define public_62a310d _public_62a310d
#define public_62a3124 _public_62a3124
#define public_62a3135 _public_62a3135

PROC_DECLARE(0x62a3070, internal_62a3070, public_62a3070);
extern "C" NAKED register_t __cdecl internal_62a3070()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], edx
        push esi
        push edi
        lea esi, ss:[ebp+0xC]
        lea edi, ds:[ebx+0xC]
        mov ecx, 9
        rep movsd
        lea eax, ss:[ebp+0x30]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x30]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], ecx
        mov edx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], edx
        mov al, byte ptr ss : [ebp+0x44]
        push 0xC
        mov byte ptr ds : [ebx+0x44], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x48], eax
        mov dword ptr ds : [ebx+0x4C], 0
        mov ecx, dword ptr ss : [ebp+0x48]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a3135
        lea esp, ss:[esp]
        public_62a30f0 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_62a310d
        mov ecx, eax
        public_62a310d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62a3124
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        public_62a3124 : nop
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x4C], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_62a30f0
        public_62a3135 : nop
        mov edx, dword ptr ss : [ebp+0x50]
        pop edi
        mov dword ptr ds : [ebx+0x50], edx
        mov al, byte ptr ss : [ebp+0x54]
        pop esi
        mov byte ptr ds : [ebx+0x54], al
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a3070)
    }
}

#undef public_62a30f0
#undef public_62a310d
#undef public_62a3124
#undef public_62a3135
