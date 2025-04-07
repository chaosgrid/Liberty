#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d91850);
CLANG_FORWARD_PROC_SYMBOL(public_6d91ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2518);

#define public_6d8a642 _public_6d8a642
#define public_6d8a691 _public_6d8a691
#define public_6d8a6c0 _public_6d8a6c0
#define public_6d8a6d4 _public_6d8a6d4
#define public_6d8a6da _public_6d8a6da
#define public_6d8a6e2 _public_6d8a6e2
#define public_6d8a70f _public_6d8a70f
#define public_6d8a71a _public_6d8a71a

PROC_DECLARE(0x6d8a5c0, internal_6d8a5c0, public_6d8a5c0);
extern "C" NAKED register_t __cdecl internal_6d8a5c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6db2518 @0x6d8a5c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x2B
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a71a
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_6d91850
        mov cl, byte ptr ss : [esp+0x34]
        push 0xC
        mov byte ptr ss : [esp+0x18], cl
        call public_6db1f8a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0
        mov al, byte ptr ds : [esi+0x14]
        xor edi, edi
        test al, al
        mov dword ptr ss : [esp+0x28], 0
        jbe public_6d8a691
        public_6d8a642 : nop
        push 8
        call public_6db1f8a
        mov edx, dword ptr ds : [esi+0x10]
        xor ecx, ecx
        mov cx, di
        mov dword ptr ss : [esp+0x38], eax
        add esp, 4
        shl ecx, 3
        mov edx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+ecx+4]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6d8cad0
        movzx ax, byte ptr ds : [esi+0x14]
        inc edi
        cmp di, ax
        jb public_6d8a642
        public_6d8a691 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6d91ca0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d8a6da
        nop 
        lea esp, ss:[esp]
        public_6d8a6c0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d8a6d4
        push ecx
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        public_6d8a6d4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d8a6c0
        public_6d8a6da : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d8a70f
        public_6d8a6e2 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6d8a6e2
        mov eax, dword ptr ss : [esp+0x18]
        public_6d8a70f : nop
        push eax
        call public_6db1dc2
        add esp, 4
        pop edi
        pop esi
        public_6d8a71a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d8a5c0)
    }
}

#undef public_6d8a642
#undef public_6d8a691
#undef public_6d8a6c0
#undef public_6d8a6d4
#undef public_6d8a6da
#undef public_6d8a6e2
#undef public_6d8a70f
#undef public_6d8a71a
