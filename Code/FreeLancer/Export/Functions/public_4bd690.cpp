#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd690);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd4f6);

#define public_4bd6c7 _public_4bd6c7
#define public_4bd6f7 _public_4bd6f7
#define public_4bd702 _public_4bd702
#define public_4bd709 _public_4bd709
#define public_4bd737 _public_4bd737
#define public_4bd74a _public_4bd74a

PROC_DECLARE(0x4bd690, internal_4bd690, public_4bd690);
extern "C" NAKED register_t __cdecl internal_4bd690()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd4f6 @0x4bd692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd4f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov dword ptr ss : [esp], ecx
        mov dword ptr ds : [ecx], offset public_5d5f7c
        mov edx, dword ptr ds : [public_67244c]
        xor eax, eax
        cmp edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_4bd6c7
        mov dword ptr ds : [public_67244c], eax
        public_4bd6c7 : nop
        push ebx
        push ebp
        push esi
        lea ebp, ds:[ecx+0xF4]
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        lea esi, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x18], esi
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 3
        call public_4144f0
        mov ebx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_4bd709
        public_4bd6f7 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_4bd702
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4bd702 : nop
        add edi, 8
        cmp edi, ebx
        jne public_4bd6f7
        public_4bd709 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_5b7e1d
        mov ebx, dword ptr ds : [public_5c71d8]
        xor edi, edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, edi
        je public_4bd737
        push eax
        call ebx
        add esp, 4
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        public_4bd737 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        je public_4bd74a
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        public_4bd74a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_5a1af0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4bd690)
    }
}

#undef public_4bd6c7
#undef public_4bd6f7
#undef public_4bd702
#undef public_4bd709
#undef public_4bd737
#undef public_4bd74a
