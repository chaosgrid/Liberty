#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7530);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb21a1);

#define public_6fa731d _public_6fa731d
#define public_6fa733a _public_6fa733a
#define public_6fa7361 _public_6fa7361
#define public_6fa736c _public_6fa736c
#define public_6fa7380 _public_6fa7380
#define public_6fa738c _public_6fa738c
#define public_6fa73a1 _public_6fa73a1
#define public_6fa73a9 _public_6fa73a9

PROC_DECLARE(0x6fa7230, internal_6fa7230, public_6fa7230);
extern "C" NAKED register_t __cdecl internal_6fa7230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb21a1 @0x6fa7232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb21a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6fa73a9
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        lea esi, ds:[eax+8]
        mov al, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0x14]
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x15], 0
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x30], ecx
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        jne public_6fa733a
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_6f214c0
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6f305b0
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6fa731d
        mov dword ptr ss : [esp+0x28], ebx
        public_6fa731d : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6fa7530
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6fa7530
        mov dword ptr ds : [ebx+8], eax
        public_6fa733a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        je public_6fa73a1
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6fa736c
        public_6fa7361 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6fa7361
        public_6fa736c : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6fa738c
        mov edi, edi
        public_6fa7380 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6fa7380
        public_6fa738c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6fa73a1 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6fa73a9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa7230)
    }
}

#undef public_6fa731d
#undef public_6fa733a
#undef public_6fa7361
#undef public_6fa736c
#undef public_6fa7380
#undef public_6fa738c
#undef public_6fa73a1
#undef public_6fa73a9
