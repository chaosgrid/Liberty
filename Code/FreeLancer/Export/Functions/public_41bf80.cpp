#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41bfc0 _public_41bfc0
#define public_41bfd5 _public_41bfd5
#define public_41bfec _public_41bfec
#define public_41c001 _public_41c001

PROC_DECLARE(0x41bf80, internal_41bf80, public_41bf80);
extern "C" NAKED register_t __cdecl internal_41bf80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp+4]
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        mov byte ptr ds : [ebx+4], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_41c001
        lea esp, ss:[esp]
        public_41bfc0 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_41bfd5
        mov ebp, eax
        public_41bfd5 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_41bfec
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_41bfec : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_41bfc0
        mov ebp, dword ptr ss : [esp+0x18]
        public_41c001 : nop
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x28], eax
        pop ebp
        mov dword ptr ds : [ebx], offset public_5c9350
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x41bf80)
    }
}

#undef public_41bfc0
#undef public_41bfd5
#undef public_41bfec
#undef public_41c001
