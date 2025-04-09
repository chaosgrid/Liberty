#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e650);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_47e719 _public_47e719
#define public_47e781 _public_47e781

PROC_DECLARE(0x47e650, internal_47e650, public_47e650);
extern "C" NAKED register_t __cdecl internal_47e650()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3A4]
        push edi
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_47e781
        mov al, byte ptr ds : [esi+0x4E3]
        test al, al
        jne public_47e781
        call public_47e790
        mov cl, byte ptr ds : [eax+0xC]
        test cl, cl
        jne public_47e781
        mov dword ptr ds : [esi+0x93C], 1
        mov eax, dword ptr ds : [eax+0x14]
        cmp eax, 1
        mov dword ptr ds : [esi+0x940], eax
        mov ecx, esi
        jne public_47e719
        push 0
        call public_4795f0
        cmp dword ptr ds : [esi+0x3A4], edi
        je public_47e781
        mov al, byte ptr ds : [esi+0x4E3]
        test al, al
        jne public_47e781
        mov ecx, esi
        call public_47e790
        mov edi, eax
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        jne public_47e781
        call public_54baf0
        test eax, eax
        je public_47e781
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ds : [esi+0x93C]
        push edx
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x38]
        mov dword ptr ds : [esi+0x914], 0x3F800000
        mov eax, dword ptr ds : [public_671c64]
        push 0
        push eax
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        ret 
        public_47e719 : nop
        push 1
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x940]
        mov ecx, dword ptr ds : [esi+0x920]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 1
        push 0x37
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x93C]
        mov ecx, dword ptr ds : [esi+0x920]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x93C]
        push ecx
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x47e75f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x928]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_47e781 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x47e650)
    }
}

#undef public_47e719
#undef public_47e781
