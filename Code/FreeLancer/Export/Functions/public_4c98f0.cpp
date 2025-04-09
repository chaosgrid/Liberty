#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c98f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a30);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd93e);

#define public_4c9900 _public_4c9900
#define public_4c9935 _public_4c9935
#define public_4c9957 _public_4c9957
#define public_4c9986 _public_4c9986
#define public_4c99a8 _public_4c99a8
#define public_4c99d7 _public_4c99d7
#define public_4c99e8 _public_4c99e8
#define public_4c99fd _public_4c99fd

PROC_DECLARE(0x4c98f0, internal_4c98f0, public_4c98f0);
extern "C" NAKED register_t __cdecl internal_4c98f0()
{
    __asm
    {
        mov ecx, offset public_6735b4
        jmp public_4c9900
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4c9900 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5bd93e @0x4c9902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd93e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        xor ebp, ebp
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], ebp
        je public_4c99d7
        public_4c9935 : nop
        mov edi, dword ptr ds : [esi+0x3C]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], edi
        je public_4c99a8
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        call public_4c9a30
        lea ebp, ds:[edi+4]
        mov dword ptr ss : [esp+0x10], 4
        public_4c9957 : nop
        mov ecx, ebp
        call public_420f70
        mov eax, dword ptr ss : [esp+0x10]
        add ebp, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_4c9957
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_4c9986
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [edi], 0
/*FIXUP public_4c9986 : nop
        push offset _public_420d10 @0x4c9986*/
  FIXUP public_4c9986 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        lea eax, ds:[edi+4]
        push eax
        mov byte ptr ss : [esp+0x34], 0
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        xor ebp, ebp
        public_4c99a8 : nop
        mov dword ptr ds : [esi+0x3C], ebp
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ds : [ebx+8], ecx
        mov esi, edi
        jne public_4c9935
        public_4c99d7 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_4c99fd
        public_4c99e8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_516f70
        cmp esi, edi
        jne public_4c99e8
        public_4c99fd : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4c98f0)
    }
}

#undef public_4c9900
#undef public_4c9935
#undef public_4c9957
#undef public_4c9986
#undef public_4c99a8
#undef public_4c99d7
#undef public_4c99e8
#undef public_4c99fd
