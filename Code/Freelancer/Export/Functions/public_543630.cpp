#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5038c0);
CLANG_FORWARD_PROC_SYMBOL(public_503a80);
CLANG_FORWARD_PROC_SYMBOL(public_543630);
CLANG_FORWARD_PROC_SYMBOL(public_5437d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bd50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0e4b);

#define public_5436a8 _public_5436a8
#define public_5436ca _public_5436ca
#define public_5436ed _public_5436ed
#define public_5436ef _public_5436ef

PROC_DECLARE(0x543630, internal_543630, public_543630);
extern "C" NAKED register_t __cdecl internal_543630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0e4b @0x543632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0e4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov byte ptr ds : [ebx+0x15C], 1
        call public_54baf0
        cmp ebx, eax
        jne public_5436a8
        mov eax, dword ptr ds : [ebx+0x188]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x24]
        add eax, 0x74
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edi, dword ptr ds : [ebx+0x188]
        add edi, 0x80
        mov ecx, 9
        rep movsd
        call public_54bd50
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_5436a8 : nop
        mov esi, dword ptr ds : [ebx+0x188]
        xor edi, edi
        cmp esi, edi
        je public_5436ca
        mov ecx, esi
        call public_503a80
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [ebx+0x188], edi
        public_5436ca : nop
        push 0xDC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_5436ed
        push ebx
        mov ecx, eax
        call public_5038c0
        jmp public_5436ef
        public_5436ed : nop
        xor eax, eax
        public_5436ef : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+0x188], eax
        mov ecx, dword ptr ds : [edx]
        add eax, 0x74
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov edi, dword ptr ds : [ebx+0x188]
        add edi, 0x80
        mov ecx, 9
        rep movsd
        push 4
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_5437d0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x543630)
    }
}

#undef public_5436a8
#undef public_5436ca
#undef public_5436ed
#undef public_5436ef
