#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb05f1);

#define public_6f7e028 _public_6f7e028
#define public_6f7e02e _public_6f7e02e
#define public_6f7e054 _public_6f7e054
#define public_6f7e08c _public_6f7e08c
#define public_6f7e09d _public_6f7e09d
#define public_6f7e0a5 _public_6f7e0a5

PROC_DECLARE(0x6f7dfd0, internal_6f7dfd0, public_6f7dfd0);
extern "C" NAKED register_t __cdecl internal_6f7dfd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb05f1 @0x6f7dfd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb05f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6f7e0a5
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f7e028
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f7e028 : nop
        test eax, eax
        jge public_6f7e02e
        xor eax, eax
        public_6f7e02e : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f7e09d
        push ebx
        lea edx, ss:[ebp+0x10]
        lea ebx, ds:[eax+0x10]
        public_6f7e054 : nop
        test ebp, ebp
        je public_6f7e08c
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        lea ecx, ds:[ebx-0xC]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[edx-0xC]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, 0xC
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        public_6f7e08c : nop
        add eax, 0x44
        add ebp, 0x44
        add edx, 0x44
        add ebx, 0x44
        cmp eax, ecx
        jne public_6f7e054
        pop ebx
        public_6f7e09d : nop
        pop esi
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop ebp
        public_6f7e0a5 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f7dfd0)
    }
}

#undef public_6f7e028
#undef public_6f7e02e
#undef public_6f7e054
#undef public_6f7e08c
#undef public_6f7e09d
#undef public_6f7e0a5
