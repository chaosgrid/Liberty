#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad320);

#define public_6f0c029 _public_6f0c029
#define public_6f0c0d6 _public_6f0c0d6
#define public_6f0c112 _public_6f0c112
#define public_6f0c19f _public_6f0c19f
#define public_6f0c1f1 _public_6f0c1f1
#define public_6f0c297 _public_6f0c297

PROC_DECLARE(0x6f0bfe0, internal_6f0bfe0, public_6f0bfe0);
extern "C" NAKED register_t __cdecl internal_6f0bfe0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad320 @0x6f0bfe8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad320
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        dec eax
        push edi
        je public_6f0c1f1
        dec eax
        je public_6f0c029
        dec eax
        jne public_6f0c297
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x18], 2
        call dword ptr ds : [eax+0x10]
        jmp public_6f0c297
        public_6f0c029 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 5
        mov edi, 4
        jne public_6f0c112
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax]
        add eax, 0x11C
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ds:[eax+eax*2]
        fsub dword ptr ds : [ecx+edx*4]
        lea ecx, ds:[ecx+edx*4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        je public_6f0c0d6
        test ah, 0x41
        jp public_6f0c112
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f0c112
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f0c112
        mov ecx, esi
        call public_6f0bf10
        jmp public_6f0c112
        public_6f0c0d6 : nop
        test ah, 0x41
        jp public_6f0c112
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f0c112
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f0c112
        mov dword ptr ds : [esi+0x18], edi
        public_6f0c112 : nop
        cmp dword ptr ds : [esi+0x18], edi
        je public_6f0c297
        push ebp
        mov dword ptr ss : [esp+0x10], 0
        lea eax, ss:[esp+0x10]
        push eax
        mov ebx, 1
        push 5
        mov dword ptr ss : [esp+0x38], ebx
        call public_6f24870
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [public_6fb8120]
        add esp, 8
        push 0
        push 0
        push 0
        push 0xBF800000
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4]
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        call public_6f26460
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+0x164], bl
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x114], ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6f0c19f
        mov ebp, eax
        public_6f0c19f : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        pop ebp
        je public_6f0c297
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xC], 0
        jmp public_6f0c297
        public_6f0c1f1 : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], edi
        call public_6f28e10
        lea eax, ss:[esp+0x10]
        push eax
        push 5
        call public_6f24870
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [public_6fb8120]
        add esp, 8
        push edi
        push edi
        push edi
        push 0xBF800000
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4]
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        call public_6f26460
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, 1
        mov byte ptr ds : [edx+0x164], bl
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x114], ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x18], 2
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f0c297
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f0c297 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6f0bfe0)
    }
}

#undef public_6f0c029
#undef public_6f0c0d6
#undef public_6f0c112
#undef public_6f0c19f
#undef public_6f0c1f1
#undef public_6f0c297
