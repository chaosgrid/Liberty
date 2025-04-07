#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345100);
CLANG_FORWARD_PROC_SYMBOL(public_6345610);
CLANG_FORWARD_PROC_SYMBOL(public_6347660);
CLANG_FORWARD_PROC_SYMBOL(public_634b3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352150);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397acb);

#define public_6345173 _public_6345173
#define public_63451e9 _public_63451e9
#define public_63451eb _public_63451eb
#define public_6345218 _public_6345218
#define public_6345227 _public_6345227

PROC_DECLARE(0x6345100, internal_6345100, public_6345100);
extern "C" NAKED register_t __cdecl internal_6345100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397acb @0x6345102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397acb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        push edi
        push ebp
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6345610
        mov dword ptr ds : [esi], offset public_63a544c
        xor edi, edi
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x2C], edi
        call public_6352150
        mov ebx, dword ptr ss : [esp+0x40]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ds : [esi], offset public_63a5440
        jne public_6345173
        lea ebx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x20], 0x3F800000
        public_6345173 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push 8
        lea edx, ss:[ebp+4]
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x80], ecx
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x2C], edi
        push edx
        lea eax, ds:[esi+0x84]
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        push eax
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x1C], edi
        call dword ptr ds : [public_63992e0]
        push 0x1BC
        call public_6391d9c
        add esp, 0x10
        mov dword ptr ss : [esp+0x3C], eax
        cmp eax, edi
        mov byte ptr ss : [esp+0x2C], 2
        je public_63451e9
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push edx
        push ecx
        push ebx
        push esi
        mov ecx, eax
        call public_6347660
        jmp public_63451eb
        public_63451e9 : nop
        xor eax, eax
        public_63451eb : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], eax
        cmp dword ptr ss : [ebp+0xC], edi
        mov byte ptr ss : [esp+0x2C], 1
        je public_6345218
        mov edx, dword ptr ds : [esi+0x78]
        and edx, 0xFFFFFF10
        or edx, 0x10
        mov dword ptr ds : [esi+0x78], edx
        jmp public_6345227
        public_6345218 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        and ecx, 0xFFFFFF08
        or ecx, 8
        mov dword ptr ds : [esi+0x78], ecx
        public_6345227 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [esi+0x8C], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        push esi
        call public_634b3d0
        mov ecx, dword ptr ss : [ebp+0x54]
        pop edi
        mov dword ptr ds : [esi+0xA4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x14
        UNREACHABLE_TRAP(0x6345100)
    }
}

#undef public_6345173
#undef public_63451e9
#undef public_63451eb
#undef public_6345218
#undef public_6345227
