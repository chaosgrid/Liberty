#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d24870);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d629c9);

#define public_6d248a2 _public_6d248a2
#define public_6d248b9 _public_6d248b9
#define public_6d248d0 _public_6d248d0
#define public_6d24958 _public_6d24958

PROC_DECLARE(0x6d24870, internal_6d24870, public_6d24870);
extern "C" NAKED register_t __cdecl internal_6d24870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d629c9 @0x6d24872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d629c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, ebp
        je public_6d248a2
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        add eax, 0x34
        cmp eax, ecx
        jbe public_6d248d0
        public_6d248a2 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0x34
        lea eax, ds:[edi+4]
        mov dword ptr ss : [esp+0xC], 0x34
        jae public_6d248b9
        lea eax, ss:[esp+0xC]
        public_6d248b9 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], ebp
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6d248d0 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x34
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d24958
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi], offset public_6d68d00
        lea ebx, ds:[esi+8]
        push ebp
        push ebp
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [ebx], edi
        call public_6d23ef0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [public_6d68a50]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [public_6d68a54]
        mov dword ptr ds : [esi+0x20], ecx
        pop ebx
        mov dword ptr ds : [esi+0x28], ebp
        mov dword ptr ds : [esi+0x2C], esi
        mov dword ptr ds : [esi+0x24], offset public_6d68cd8
        pop edi
        mov dword ptr ds : [esi+0x30], edx
        mov dword ptr ds : [esi], offset public_6d68fbc
        mov eax, esi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6d24958 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d24870)
    }
}

#undef public_6d248a2
#undef public_6d248b9
#undef public_6d248d0
#undef public_6d24958
