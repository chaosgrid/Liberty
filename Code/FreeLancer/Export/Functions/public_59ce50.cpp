#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_59ce50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4dd7);

#define public_59ce90 _public_59ce90
#define public_59cea5 _public_59cea5
#define public_59ced0 _public_59ced0
#define public_59cf09 _public_59cf09

PROC_DECLARE(0x59ce50, internal_59ce50, public_59ce50);
extern "C" NAKED register_t __cdecl internal_59ce50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4dd7 @0x59ce52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4dd7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0x4B8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x4B4]
        mov dword ptr ss : [esp+0x20], 1
        je public_59cea5
        lea esp, ss:[esp]
        public_59ce90 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_46d680
        cmp esi, ebx
        jne public_59ce90
        public_59cea5 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov ebx, dword ptr ss : [ebp+0x4AC]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        mov byte ptr ss : [esp+0x20], 0
        je public_59cf09
        lea ebx, ds:[ebx]
        public_59ced0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+0x4B0]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+0x4B0], ecx
        jne public_59ced0
        xor esi, esi
        public_59cf09 : nop
        mov eax, dword ptr ss : [ebp+0x4AC]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x4AC], esi
        mov dword ptr ss : [ebp+0x4B0], esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_57b260
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x59ce50)
    }
}

#undef public_59ce90
#undef public_59cea5
#undef public_59ced0
#undef public_59cf09
