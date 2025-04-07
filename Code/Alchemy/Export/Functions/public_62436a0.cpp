#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62436a0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a908);

#define public_62436ca _public_62436ca
#define public_6243709 _public_6243709
#define public_624370b _public_624370b

PROC_DECLARE(0x62436a0, internal_62436a0, public_62436a0);
extern "C" NAKED register_t __cdecl internal_62436a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a908 @0x62436a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a908
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, offset public_62575e8
        lea ebx, ds:[eax+0xC]
        xor ebp, ebp
        public_62436ca : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x14], ebp
        mov edx, dword ptr ds : [edi]
        push 0x10
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x14], edx
        call public_624612c
        add esp, 4
        cmp eax, ebp
        je public_6243709
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        mov esi, eax
        jmp public_624370b
        public_6243709 : nop
        xor esi, esi
        public_624370b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [ebx]
        push esi
        push ebp
        push eax
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        add edi, 4
        add ebx, 4
        cmp edi, offset public_625760c
        jl public_62436ca
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], 0x1FF
        mov ecx, dword ptr ss : [esp+0xC]
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62436a0)
    }
}

#undef public_62436ca
#undef public_6243709
#undef public_624370b
