#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f05990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6facd6d);

#define public_6f059d0 _public_6f059d0
#define public_6f059dd _public_6f059dd
#define public_6f059e4 _public_6f059e4
#define public_6f059f5 _public_6f059f5
#define public_6f05a0a _public_6f05a0a
#define public_6f05a30 _public_6f05a30
#define public_6f05a45 _public_6f05a45

PROC_DECLARE(0x6f05990, internal_6f05990, public_6f05990);
extern "C" NAKED register_t __cdecl internal_6f05990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facd6d @0x6f05992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facd6d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [ebp], offset public_6fb80bc
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 2
        je public_6f059e4
        lea ebx, ds:[ebx]
        public_6f059d0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f059dd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f059dd : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6f059d0
        public_6f059e4 : nop
        mov ebx, dword ptr ss : [ebp+0x1C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x18]
        mov byte ptr ss : [esp+0x24], 1
        je public_6f05a0a
        public_6f059f5 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f059f5
        public_6f05a0a : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        add ebp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        mov byte ptr ss : [esp+0x24], bl
        je public_6f05a45
        mov edi, edi
        public_6f05a30 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        call public_6ecfe80
        cmp esi, edi
        jne public_6f05a30
        public_6f05a45 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        mov dword ptr ds : [public_6fcf254], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f05990)
    }
}

#undef public_6f059d0
#undef public_6f059dd
#undef public_6f059e4
#undef public_6f059f5
#undef public_6f05a0a
#undef public_6f05a30
#undef public_6f05a45
