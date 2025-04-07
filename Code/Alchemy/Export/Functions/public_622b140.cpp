#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_622b140);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624937b);

#define public_622b166 _public_622b166
#define public_622b168 _public_622b168
#define public_622b177 _public_622b177
#define public_622b195 _public_622b195
#define public_622b1da _public_622b1da
#define public_622b1df _public_622b1df
#define public_622b200 _public_622b200

PROC_DECLARE(0x622b140, internal_622b140, public_622b140);
extern "C" NAKED register_t __cdecl internal_622b140()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624937b @0x622b148*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624937b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        xor ebp, ebp
        push esi
        cmp ecx, ebp
        push edi
        je public_622b166
        lea edi, ds:[ecx+4]
        jmp public_622b168
        public_622b166 : nop
        xor edi, edi
        public_622b168 : nop
        mov dword ptr ss : [esp+0xC], edi
        mov esi, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x1C], ebp
        cmp esi, ebp
        je public_622b195
        public_622b177 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ds : [edi+0x1C]
        cmp esi, ebp
        jne public_622b177
        public_622b195 : nop
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_622b1da
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_6202da0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_622b200
        public_622b1da : nop
        cmp eax, edi
        je public_622b200
        push ebx
        public_622b1df : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6202e40
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_622b1df
        pop ebx
        public_622b200 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_62460e0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push edx
        mov dword ptr ds : [esi+0x10], ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x622b140)
    }
}

#undef public_622b166
#undef public_622b168
#undef public_622b177
#undef public_622b195
#undef public_622b1da
#undef public_622b1df
#undef public_622b200
