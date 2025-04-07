#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_62ad6f0);

#define public_62ad720 _public_62ad720
#define public_62ad744 _public_62ad744
#define public_62ad74f _public_62ad74f
#define public_62ad751 _public_62ad751
#define public_62ad772 _public_62ad772
#define public_62ad77d _public_62ad77d
#define public_62ad785 _public_62ad785
#define public_62ad788 _public_62ad788
#define public_62ad7b2 _public_62ad7b2

PROC_DECLARE(0x62ad6f0, internal_62ad6f0, public_62ad6f0);
extern "C" NAKED register_t __cdecl internal_62ad6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push edi
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_62ad7b2
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        public_62ad720 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_62ad785
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        je public_62ad74f
        public_62ad744 : nop
        cmp dword ptr ds : [ecx], eax
        je public_62ad751
        add ecx, 4
        cmp ecx, edx
        jne public_62ad744
        public_62ad74f : nop
        mov ecx, edx
        public_62ad751 : nop
        cmp ecx, edx
        jne public_62ad77d
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push edx
        mov ecx, esi
        call public_628e250
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0x18]
        je public_62ad77d
        public_62ad772 : nop
        cmp dword ptr ds : [ecx], eax
        je public_62ad77d
        add ecx, 4
        cmp ecx, edx
        jne public_62ad772
        public_62ad77d : nop
        mov ecx, dword ptr ds : [eax+4]
        push esi
        push ecx
        push eax
        jmp public_62ad788
        public_62ad785 : nop
        push esi
        push edi
        push ebx
        public_62ad788 : nop
        call public_62ad6f0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edi
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_62ad720
        pop esi
        pop ebx
        public_62ad7b2 : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x62ad6f0)
    }
}

#undef public_62ad720
#undef public_62ad744
#undef public_62ad74f
#undef public_62ad751
#undef public_62ad772
#undef public_62ad77d
#undef public_62ad785
#undef public_62ad788
#undef public_62ad7b2
