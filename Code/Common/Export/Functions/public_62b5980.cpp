#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62858e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62b63c0);
CLANG_FORWARD_PROC_SYMBOL(public_63185f0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63415e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639473f);

#define public_62b5a18 _public_62b5a18
#define public_62b5a20 _public_62b5a20
#define public_62b5a46 _public_62b5a46
#define public_62b5a4a _public_62b5a4a

PROC_DECLARE(0x62b5980, internal_62b5980, public_62b5980);
extern "C" NAKED register_t __cdecl internal_62b5980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639473f @0x62b5982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639473f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp], offset public_639b884
        xor ebx, ebx
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x34], 2
        call public_62858e0
        mov edi, dword ptr ss : [ebp+0xC0]
        mov ecx, dword ptr ss : [ebp+0xCC]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0xBC]
        add esp, 8
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_62b5a18
        mov ecx, eax
        cmp eax, ecx
        jne public_62b5a18
        cmp edi, edi
        jne public_62b5a18
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_62b63c0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_62b5a4a
        public_62b5a18 : nop
        cmp eax, edi
        je public_62b5a46
        lea esp, ss:[esp]
        public_62b5a20 : nop
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_63185f0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b5a20
        public_62b5a46 : nop
        mov dword ptr ss : [esp+0x14], eax
        public_62b5a4a : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        add esp, 8
        lea ecx, ss:[ebp+0x9C]
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x2C], bl
        call public_63415e0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_62af440
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62b5980)
    }
}

#undef public_62b5a18
#undef public_62b5a20
#undef public_62b5a46
#undef public_62b5a4a
