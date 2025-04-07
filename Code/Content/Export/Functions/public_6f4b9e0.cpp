#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6f29c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a190);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d200);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf0b8);

#define public_6f4ba81 _public_6f4ba81
#define public_6f4bb82 _public_6f4bb82
#define public_6f4bc70 _public_6f4bc70
#define public_6f4bcb3 _public_6f4bcb3
#define public_6f4bcbc _public_6f4bcbc
#define public_6f4bcd6 _public_6f4bcd6
#define public_6f4bcdd _public_6f4bcdd

PROC_DECLARE(0x6f4b9e0, internal_6f4b9e0, public_6f4b9e0);
extern "C" NAKED register_t __cdecl internal_6f4b9e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf0b8 @0x6f4b9e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf0b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x20]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6f4bcd6
        mov ebp, dword ptr ss : [esp+0x60]
        lea ecx, ss:[ebp+4]
        push ecx
        call public_6f49b00
        mov esi, eax
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x60], esi
        je public_6f4bcdd
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_6f47af0
        fld dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f4ba81
        fld dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f4ba81
        fld dword ptr ss : [esp+0x34]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f4bcdd
        public_6f4ba81 : nop
        lea eax, ss:[ebp+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6f478c0
        mov esi, eax
        test esi, esi
        je public_6f4bcd6
        mov ecx, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi+0x48], ecx
        je public_6f4bcd6
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_6f4bb82
        call public_6f57710
        test al, al
        je public_6f4bb82
        mov al, byte ptr ss : [ebp+0x24]
        test al, al
        jne public_6f4bcbc
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov byte ptr ss : [ebp+0x24], 1
        je public_6f4bcbc
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        call public_6f1cd20
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        cmp eax, 5
        jne public_6f4bcbc
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        call public_6f47af0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x50]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcomp dword ptr ds : [public_6fb8570]
        fnstsw ax
        test ah, 5
        jp public_6f4bcbc
        mov ecx, edi
        call public_6f1ccb0
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, edx
        mov byte ptr ds : [edx], 1
        mov al, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6f4bb82 : nop
        mov byte ptr ss : [ebp+0x24], 0
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi+0x48]
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push ebp
        call public_6f29c10
        lea edx, ss:[esp+0x44]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x48]
        push edx
        push ebp
        push eax
        call public_6f2a190
        mov al, byte ptr ss : [esp+0x7C]
        push 0x2C
        mov byte ptr ss : [esp+0x30], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0
        push 1
        lea ecx, ss:[esp+0x80]
        push ecx
        push 0x19
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x98], 0
        call public_6f5ea40
        add esp, 0x34
        mov eax, esp
        mov dword ptr ss : [esp+0x64], esp
        push 0x1A
        push 9
        push 0x5A
        push ebp
        push 0x3318
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [edi]
        push 1
        push 5
        mov dword ptr ss : [esp+0x80], eax
        call public_6f4d200
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 4
        add eax, 0x330E
        push eax
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x88]
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ss : [esp+0x64]
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov edi, eax
        je public_6f4bcb3
        nop 
        lea esp, ss:[esp]
        public_6f4bc70 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x68], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f4bc70
        mov eax, dword ptr ss : [esp+0x18]
        public_6f4bcb3 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4bcbc : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov al, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6f4bcd6 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov byte ptr ds : [ecx], 0
        public_6f4bcdd : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        xor al, al
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6f4b9e0)
    }
}

#undef public_6f4ba81
#undef public_6f4bb82
#undef public_6f4bc70
#undef public_6f4bcb3
#undef public_6f4bcbc
#undef public_6f4bcd6
#undef public_6f4bcdd
