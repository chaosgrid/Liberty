#include "FreeLancer-PCH.h"


#define public_5a09e0 _public_5a09e0
#define public_5a09f5 _public_5a09f5
#define public_5a09fc _public_5a09fc
#define public_5a0a53 _public_5a0a53
#define public_5a0a66 _public_5a0a66

PROC_DECLARE(0x5a09d0, internal_5a09d0, public_5a09d0);
extern "C" NAKED register_t __cdecl internal_5a09d0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0xC]
        push edi
        xor edi, edi
        cmp esi, edi
        je public_5a09fc
        mov edi, edi
        public_5a09e0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        cmp eax, edi
        je public_5a09f5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x8C]
        public_5a09f5 : nop
        mov esi, dword ptr ds : [esi+8]
        cmp esi, edi
        jne public_5a09e0
        public_5a09fc : nop
        cmp dword ptr ds : [ebx+4], edi
        je public_5a0a53
        lea esi, ds:[ebx+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x24], edi
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, edi
        je public_5a0a53
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ds:[ebx+0x1D0]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        mov byte ptr ds : [ebx+0x328], al
        public_5a0a53 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        pop edi
        pop esi
        pop ebx
        je public_5a0a66
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ecx+0x60]
        push eax
        call dword ptr ds : [edx+0x14]
        public_5a0a66 : nop
        ret 
        UNREACHABLE_TRAP(0x5a09d0)
    }
}

#undef public_5a09e0
#undef public_5a09f5
#undef public_5a09fc
#undef public_5a0a53
#undef public_5a0a66
