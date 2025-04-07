#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225a50);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62497ae);

#define public_622f095 _public_622f095
#define public_622f0ac _public_622f0ac
#define public_622f0b5 _public_622f0b5
#define public_622f0c7 _public_622f0c7
#define public_622f0e9 _public_622f0e9

PROC_DECLARE(0x622efc0, internal_622efc0, public_622efc0);
extern "C" NAKED register_t __cdecl internal_622efc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62497ae @0x622efc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62497ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+8], ebx
        call public_6243ff0
        xor ebp, ebp
        mov ecx, offset public_624bd80
        mov eax, offset public_624bd84
        mov dword ptr ds : [ebx+0x68], ebp
        mov dword ptr ds : [ebx+0x6C], ebp
        mov dword ptr ds : [ebx+0x70], ebp
        mov dword ptr ds : [ebx+0x74], ebp
        mov dword ptr ds : [ebx+0x64], ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ds : [ebx+0x5C], eax
        mov dword ptr ds : [ebx+0x88], ebp
        mov dword ptr ds : [ebx+0x8C], ebp
        mov dword ptr ds : [ebx+0x90], ebp
        mov dword ptr ds : [ebx+0x94], ebp
        mov dword ptr ds : [ebx+0x84], ecx
        mov dword ptr ds : [ebx+0x7C], eax
/*FIXUP push offset public_6257a70 @0x622f026*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        lea ecx, ds:[ebx+0x64]
        mov byte ptr ss : [esp+0x18], 2
        mov dword ptr ds : [ebx], offset public_624e4d8
        call public_6225a50
        mov eax, dword ptr ds : [ebx+0x6C]
        push eax
        call public_623ef70
        mov dword ptr ds : [ebx+0x60], eax
        mov edx, dword ptr ds : [ebx+0x8C]
        add esp, 4
        cmp edx, offset public_6257a70
        je public_622f0e9
        push esi
        push edi
        mov edi, offset public_6257a70
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x94]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x90], ecx
        jl public_622f0c7
        cmp dword ptr ds : [ebx+0x88], ebp
        je public_622f095
        cmp edx, ebp
        je public_622f095
        push edx
        call public_62460e0
        add esp, 4
        public_622f095 : nop
        mov eax, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x88], 1
        inc eax
        jne public_622f0ac
        xor eax, eax
        jmp public_622f0b5
        public_622f0ac : nop
        push eax
        call public_624612c
        add esp, 4
        public_622f0b5 : nop
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x90]
        mov dword ptr ds : [ebx+0x94], eax
        public_622f0c7 : nop
        mov ecx, dword ptr ds : [ebx+0x90]
        mov edi, dword ptr ds : [ebx+0x8C]
        inc ecx
        mov esi, offset public_6257a70
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        public_622f0e9 : nop
        mov eax, dword ptr ds : [ebx+0x8C]
        push eax
        call public_623ef70
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [ebx+0x80], eax
        mov dword ptr ds : [ebx+0x9C], ebp
        mov eax, ebx
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x622efc0)
    }
}

#undef public_622f095
#undef public_622f0ac
#undef public_622f0b5
#undef public_622f0c7
#undef public_622f0e9
