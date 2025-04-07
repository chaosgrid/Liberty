#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264890);
CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62648c0 _public_62648c0
#define public_62648df _public_62648df
#define public_6264904 _public_6264904
#define public_6264908 _public_6264908
#define public_6264928 _public_6264928

PROC_DECLARE(0x6264890, internal_6264890, public_6264890);
extern "C" NAKED register_t __cdecl internal_6264890()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6264904
        mov ecx, eax
        cmp eax, ecx
        jne public_6264904
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62648df
        nop 
        lea esp, ss:[esp]
        public_62648c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_626b520
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62648c0
        public_62648df : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6264928
        public_6264904 : nop
        cmp eax, edi
        je public_6264928
        public_6264908 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6264908
        public_6264928 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6264890)
    }
}

#undef public_62648c0
#undef public_62648df
#undef public_6264904
#undef public_6264908
#undef public_6264928
