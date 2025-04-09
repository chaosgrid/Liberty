#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ed00);
CLANG_FORWARD_PROC_SYMBOL(public_44f550);
CLANG_FORWARD_PROC_SYMBOL(public_455ca0);

#define public_44ed20 _public_44ed20
#define public_44ed46 _public_44ed46
#define public_44ed4e _public_44ed4e
#define public_44ed84 _public_44ed84

PROC_DECLARE(0x44ed00, internal_44ed00, public_44ed00);
extern "C" NAKED register_t __cdecl internal_44ed00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x45]
        test al, al
        jne public_44ed84
        push edi
        call public_44f550
        mov eax, dword ptr ds : [esi+0x4C]
        xor edi, edi
        test eax, eax
        jle public_44ed4e
        lea esp, ss:[esp]
        public_44ed20 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_44ed46
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x4C]
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x34]
        public_44ed46 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        inc edi
        cmp edi, eax
        jl public_44ed20
        public_44ed4e : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x3C], 0
        call public_455ca0
        mov edi, dword ptr ds : [public_5c60c8]
        lea edx, ds:[esi+0xA0]
        push edx
        mov dword ptr ds : [esi+0x38], 0
        call edi
        lea eax, ds:[esi+0xA4]
        push eax
        call edi
        add esp, 8
        mov byte ptr ds : [esi+0x45], 1
        pop edi
        public_44ed84 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x44ed00)
    }
}

#undef public_44ed20
#undef public_44ed46
#undef public_44ed4e
#undef public_44ed84
