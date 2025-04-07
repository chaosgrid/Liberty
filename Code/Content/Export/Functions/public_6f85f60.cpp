#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85f60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0b13);

#define public_6f85fa4 _public_6f85fa4
#define public_6f85fb0 _public_6f85fb0
#define public_6f85fcd _public_6f85fcd
#define public_6f85fd8 _public_6f85fd8

PROC_DECLARE(0x6f85f60, internal_6f85f60, public_6f85f60);
extern "C" NAKED register_t __cdecl internal_6f85f60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0b13 @0x6f85f62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0b13
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6fbc73c
        mov ebx, dword ptr ds : [edi+0x60]
        mov eax, dword ptr ds : [edi+0x64]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], 1
        je public_6f85fd8
        mov eax, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        push ebp
        mov ebp, dword ptr ds : [public_6fb34cc]
        public_6f85fa4 : nop
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        je public_6f85fcd
        nop 
        lea esp, ss:[esp]
        public_6f85fb0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+0xC]
        push 0
        push ecx
        push eax
        call ebp
        mov eax, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        add esi, 4
        add esp, 0xC
        cmp esi, ecx
        jne public_6f85fb0
        public_6f85fcd : nop
        mov edx, dword ptr ds : [edi+0x64]
        add ebx, 4
        cmp ebx, edx
        jne public_6f85fa4
        pop ebp
        public_6f85fd8 : nop
        mov eax, dword ptr ds : [edi+0x60]
        push eax
        call public_6fa8fe0
        xor esi, esi
        mov dword ptr ds : [edi+0x60], esi
        mov dword ptr ds : [edi+0x64], esi
        mov dword ptr ds : [edi+0x68], esi
        mov dword ptr ds : [edi], offset public_6fbc700
        mov edx, dword ptr ds : [edi+0x24]
        push edx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 8
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi+0x24], esi
        mov dword ptr ds : [edi+0x28], esi
        mov dword ptr ds : [edi+0x2C], esi
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f85f60)
    }
}

#undef public_6f85fa4
#undef public_6f85fb0
#undef public_6f85fcd
#undef public_6f85fd8
