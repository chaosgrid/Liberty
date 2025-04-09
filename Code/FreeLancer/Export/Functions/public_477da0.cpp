#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_442850);
CLANG_FORWARD_PROC_SYMBOL(public_45a780);
CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbff5);

#define public_477e00 _public_477e00
#define public_477e12 _public_477e12
#define public_477e23 _public_477e23
#define public_477e2e _public_477e2e
#define public_477e62 _public_477e62
#define public_477e8f _public_477e8f

PROC_DECLARE(0x477da0, internal_477da0, public_477da0);
extern "C" NAKED register_t __cdecl internal_477da0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbff5 @0x477da2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbff5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d0eec
        mov dword ptr ds : [esi+0x7C], offset public_5d0ee0
        mov eax, dword ptr ds : [esi+0x360]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], 2
        je public_477e2e
        push ebx
        push eax
        call public_59dd00
        mov ebp, dword ptr ds : [esi+0x360]
        add esp, 8
        cmp ebp, ebx
        je public_477e23
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_477e12
        mov edi, edi
        public_477e00 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_477e00
        public_477e12 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_477e23 : nop
        mov dword ptr ds : [esi+0x360], ebx
        call public_442850
        public_477e2e : nop
        lea eax, ss:[esp+0x14]
        push eax
        push 0x66
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3D9BA5E3
        mov dword ptr ss : [esp+0x24], 0xBFA4DD2F
        call public_45a780
        mov ebp, dword ptr ds : [esi+0x3AC]
        mov edi, dword ptr ss : [ebp]
        add esp, 8
        cmp edi, ebp
        je public_477e8f
        public_477e62 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x3B0]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x3B0], ecx
        jne public_477e62
        public_477e8f : nop
        mov eax, dword ptr ds : [esi+0x3AC]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3AC], ebx
        mov dword ptr ds : [esi+0x3B0], ebx
        mov byte ptr ss : [esp+0x28], bl
        call public_4c6200
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x477da0)
    }
}

#undef public_477e00
#undef public_477e12
#undef public_477e23
#undef public_477e2e
#undef public_477e62
#undef public_477e8f
