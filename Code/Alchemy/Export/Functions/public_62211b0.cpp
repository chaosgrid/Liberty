#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_62211b0);

#define public_62211cf _public_62211cf
#define public_62211e1 _public_62211e1
#define public_62211f0 _public_62211f0
#define public_6221218 _public_6221218
#define public_6221221 _public_6221221
#define public_6221242 _public_6221242

PROC_DECLARE(0x62211b0, internal_62211b0, public_62211b0);
extern "C" NAKED register_t __cdecl internal_62211b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ebp
        je public_6221218
        lea esi, ds:[eax+8]
        sub ebp, eax
        public_62211cf : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62211e1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_62211e1 : nop
        mov eax, dword ptr ds : [esi-8]
        test eax, eax
        mov dword ptr ds : [edi], eax
        je public_62211f0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_62211f0 : nop
        mov eax, dword ptr ds : [esi-4]
        add esi, 0x10
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi-0x10]
        mov dword ptr ds : [esi+ebp-0x10], ecx
        mov edx, dword ptr ds : [esi-0xC]
        mov dword ptr ds : [edi+0xC], edx
        lea eax, ds:[esi-8]
        add edi, 0x10
        cmp eax, ebx
        jne public_62211cf
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6221218 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, edi
        cmp edi, ebx
        je public_6221242
        public_6221221 : nop
        mov ecx, esi
        call public_621f5f0
        add esi, 0x10
        cmp esi, ebx
        jne public_6221221
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6221242 : nop
        mov dword ptr ds : [ecx+8], edi
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62211b0)
    }
}

#undef public_62211cf
#undef public_62211e1
#undef public_62211f0
#undef public_6221218
#undef public_6221221
#undef public_6221242
