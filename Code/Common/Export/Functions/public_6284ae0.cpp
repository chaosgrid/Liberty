#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);

#define public_6284b20 _public_6284b20
#define public_6284b78 _public_6284b78
#define public_6284b7b _public_6284b7b
#define public_6284b80 _public_6284b80
#define public_6284bb1 _public_6284bb1

PROC_DECLARE(0x6284ae0, internal_6284ae0, public_6284ae0);
extern "C" NAKED register_t __cdecl internal_6284ae0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, 0xFFFFFFFF
        push edi
        je public_6284bb1
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6284bb1
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ds : [public_63992e0]
        push esi
        nop 
        lea esp, ss:[esp]
        public_6284b20 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov esi, eax
        test esi, esi
        je public_6284b7b
        cmp esi, dword ptr ss : [esp+0x1C]
        je public_6284b7b
        mov ecx, dword ptr ds : [ebx+0x54]
        test ecx, ecx
        je public_6284b78
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6284b78
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
        public_6284b78 : nop
        push esi
        jmp public_6284b80
        public_6284b7b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        public_6284b80 : nop
        push ebx
        push edi
        call public_6284ae0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_6284b20
        pop esi
        pop ebp
        pop ebx
        public_6284bb1 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6284ae0)
    }
}

#undef public_6284b20
#undef public_6284b78
#undef public_6284b7b
#undef public_6284b80
#undef public_6284bb1
