#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6edf7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab3eb);

#define public_6edf87d _public_6edf87d
#define public_6edf895 _public_6edf895
#define public_6edf89f _public_6edf89f
#define public_6edf8a9 _public_6edf8a9
#define public_6edf8c6 _public_6edf8c6
#define public_6edf8ce _public_6edf8ce
#define public_6edf8d7 _public_6edf8d7
#define public_6edf922 _public_6edf922
#define public_6edf925 _public_6edf925

PROC_DECLARE(0x6edf7a0, internal_6edf7a0, public_6edf7a0);
extern "C" NAKED register_t __cdecl internal_6edf7a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab3eb @0x6edf7a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab3eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        mov eax, dword ptr ss : [esp+0xA8]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xB4]
        push esi
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0xB0]
        lea ebx, ss:[ebp+0x14]
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+0x10], edi
        lea esi, ss:[ebp+0xC]
        mov byte ptr ds : [ebx], dl
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp+0x24], eax
        mov dword ptr ss : [ebp+0x28], edi
        mov dword ptr ss : [ebp+0x2C], edi
        lea ecx, ss:[esp+0xB8]
        push esi
        push ecx
        mov dword ptr ss : [esp+0xB4], edi
        mov dword ptr ss : [ebp], offset public_6fb6fa0
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edf922
        push 0x200
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edf922
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edf925
        mov dword ptr ss : [ebp+0x28], 0x4A39
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        je public_6edf87d
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edf8d7
        public_6edf87d : nop
        push 4
        call public_6fa912a
        mov edx, dword ptr ds : [ebx+8]
        mov esi, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, edx
        mov ecx, esi
        je public_6edf8a9
        public_6edf895 : nop
        cmp ecx, edi
        je public_6edf89f
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        xor edi, edi
        public_6edf89f : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6edf895
        public_6edf8a9 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        cmp ecx, edi
        lea eax, ds:[esi+4]
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6edf8c6
        xor eax, eax
        jmp public_6edf8ce
        public_6edf8c6 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        public_6edf8ce : nop
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], esi
        public_6edf8d7 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6edf8db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x68]
/*FIXUP push offset public_6fb6444 @0x6edf8e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea ecx, ss:[esp+0x30]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+8]
        push 1
        push eax
        mov ecx, ebx
        call public_6f937c0
        jmp public_6edf925
        public_6edf922 : nop
        mov dword ptr ss : [ebp+0x24], edi
        public_6edf925 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 0xC
        UNREACHABLE_TRAP(0x6edf7a0)
    }
}

#undef public_6edf87d
#undef public_6edf895
#undef public_6edf89f
#undef public_6edf8a9
#undef public_6edf8c6
#undef public_6edf8ce
#undef public_6edf8d7
#undef public_6edf922
#undef public_6edf925
