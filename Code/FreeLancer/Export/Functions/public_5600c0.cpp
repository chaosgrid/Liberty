#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_5600c0);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1afd);

#define public_5601d0 _public_5601d0
#define public_5601e7 _public_5601e7
#define public_560210 _public_560210
#define public_56024b _public_56024b

PROC_DECLARE(0x5600c0, internal_5600c0, public_5600c0);
extern "C" NAKED register_t __cdecl internal_5600c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1afd @0x5600c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1afd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5e1a4c
        mov dword ptr ds : [esi+0x7C], offset public_5e1a34
        mov dword ptr ds : [esi+0x80], offset public_5e1a2c
        lea ecx, ds:[esi+0x174]
        mov dword ptr ss : [esp+0x24], 0x12
        call public_46ba90
        lea ecx, ds:[esi+0x168]
        mov byte ptr ss : [esp+0x24], 0x11
        call public_46ba90
        lea ecx, ds:[esi+0x15C]
        mov byte ptr ss : [esp+0x24], 0x10
        call public_46ba90
        lea ecx, ds:[esi+0x150]
        mov byte ptr ss : [esp+0x24], 0xF
        call public_46ba90
        lea ecx, ds:[esi+0x144]
        mov byte ptr ss : [esp+0x24], 0xE
        call public_46ba90
        lea ecx, ds:[esi+0x138]
        mov byte ptr ss : [esp+0x24], 0xD
        call public_46ba90
        lea ecx, ds:[esi+0x12C]
        mov byte ptr ss : [esp+0x24], 0xC
        call public_46ba90
        lea ecx, ds:[esi+0x120]
        mov byte ptr ss : [esp+0x24], 0xB
        call public_46ba90
        xor ebx, ebx
        mov dword ptr ds : [esi+0x11C], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x104], ebx
        mov dword ptr ds : [esi+0x100], ebx
        mov eax, dword ptr ds : [esi+0xD0]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        lea ebp, ds:[esi+0xCC]
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_5601e7
        lea esp, ss:[esp]
        public_5601d0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_46d680
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_5601d0
        public_5601e7 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [esi+0xC4]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, eax
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_56024b
        mov edi, edi
        public_560210 : nop
        mov edi, ebp
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0xC8]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        dec ecx
        cmp ebp, eax
        mov dword ptr ds : [esi+0xC8], ecx
        jne public_560210
        public_56024b : nop
        mov eax, dword ptr ds : [esi+0xC4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov byte ptr ss : [esp+0x24], bl
        call public_591ef0
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_591ba0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5600c0)
    }
}

#undef public_5601d0
#undef public_5601e7
#undef public_560210
#undef public_56024b
