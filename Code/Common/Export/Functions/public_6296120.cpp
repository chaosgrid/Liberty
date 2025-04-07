#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b010);

#define public_6296135 _public_6296135
#define public_6296150 _public_6296150
#define public_6296169 _public_6296169
#define public_6296183 _public_6296183
#define public_629618a _public_629618a
#define public_6296191 _public_6296191

PROC_DECLARE(0x6296120, internal_6296120, public_6296120);
extern "C" NAKED register_t __cdecl internal_6296120()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x3C]
        push esi
        mov esi, dword ptr ss : [ebp+0x38]
        cmp esi, eax
        mov dword ptr ss : [esp+8], esi
        je public_6296191
        push ebx
        push edi
        public_6296135 : nop
        mov ax, word ptr ds : [esi]
        cmp ax, word ptr ss : [esp+0x18]
        jne public_6296183
        mov ebx, dword ptr ss : [ebp+0x3C]
        lea eax, ds:[esi+0x3C]
        cmp eax, ebx
        je public_6296169
        mov edx, esi
        nop 
        lea esp, ss:[esp]
        public_6296150 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x3C
        mov ecx, 0xF
        add edx, 0x3C
        cmp eax, ebx
        rep movsd
        jne public_6296150
        mov esi, dword ptr ss : [esp+0x10]
        public_6296169 : nop
        movzx ecx, word ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [ebp+0x3C]
        push ecx
        add edi, 0xFFFFFFC4
        push 0xD
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x3C], edi
        call public_629b010
        jmp public_629618a
        public_6296183 : nop
        add esi, 0x3C
        mov dword ptr ss : [esp+0x10], esi
        public_629618a : nop
        cmp esi, dword ptr ss : [ebp+0x3C]
        jne public_6296135
        pop edi
        pop ebx
        public_6296191 : nop
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6296120)
    }
}

#undef public_6296135
#undef public_6296150
#undef public_6296169
#undef public_6296183
#undef public_629618a
#undef public_6296191
