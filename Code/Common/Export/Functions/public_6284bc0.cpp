#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6284bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);

#define public_6284c04 _public_6284c04
#define public_6284c5c _public_6284c5c
#define public_6284c5f _public_6284c5f
#define public_6284c64 _public_6284c64
#define public_6284c95 _public_6284c95

PROC_DECLARE(0x6284bc0, internal_6284bc0, public_6284bc0);
extern "C" NAKED register_t __cdecl internal_6284bc0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+4], ecx
        je public_6284c95
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6284c95
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ds : [public_63992e0]
        push esi
        public_6284c04 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov esi, eax
        test esi, esi
        je public_6284c5f
        cmp esi, dword ptr ss : [esp+0x1C]
        je public_6284c5f
        mov ecx, dword ptr ds : [ebx+0x54]
        test ecx, ecx
        je public_6284c5c
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6284c5c
        push 8
        add ecx, 0x84
        push ecx
        add eax, 0x84
        push eax
        call ebp
        mov edx, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ds : [ebx+0x54]
        push 0xBF800000
        push edx
        push eax
        call public_6343700
        add esp, 0x18
        mov dword ptr ds : [esi+0x74], 2
        public_6284c5c : nop
        push esi
        jmp public_6284c64
        public_6284c5f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        public_6284c64 : nop
        push ebx
        push edi
        call public_6284ae0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_6284c04
        pop esi
        pop ebp
        pop ebx
        public_6284c95 : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6284bc0)
    }
}

#undef public_6284c04
#undef public_6284c5c
#undef public_6284c5f
#undef public_6284c64
#undef public_6284c95
