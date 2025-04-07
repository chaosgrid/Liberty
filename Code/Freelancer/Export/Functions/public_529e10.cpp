#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_529e10);
CLANG_FORWARD_PROC_SYMBOL(public_52aae0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c034a);

#define public_529e63 _public_529e63
#define public_529e67 _public_529e67
#define public_529ecd _public_529ecd
#define public_529f25 _public_529f25
#define public_529f9e _public_529f9e
#define public_52a005 _public_52a005
#define public_52a05a _public_52a05a
#define public_52a05c _public_52a05c
#define public_52a0b0 _public_52a0b0
#define public_52a0bf _public_52a0bf
#define public_52a0d1 _public_52a0d1
#define public_52a0d5 _public_52a0d5
#define public_52a0d7 _public_52a0d7

PROC_DECLARE(0x529e10, internal_529e10, public_529e10);
extern "C" NAKED register_t __cdecl internal_529e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c034a @0x529e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c034a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        push edi
        push ebp
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [public_5c6878]
        test al, al
        je public_52a0d5
        mov ecx, ebp
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_52a0d1
        mov esi, dword ptr ds : [public_5c6050]
        mov edi, dword ptr ds : [public_5c6030]
        xor ebx, ebx
        jmp public_529e67
        public_529e63 : nop
        mov ebp, dword ptr ss : [esp+0x3C]
/*FIXUP public_529e67 : nop
        push offset public_5dd314 @0x529e67*/
  FIXUP public_529e67 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd314
        mov ecx, ebp
        call esi
        test al, al
        je public_529ecd
        push 0x40
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_52a05a
        mov ecx, esi
        call dword ptr ds : [public_5c6874]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5dd2e4
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x34], 1
        call edi
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [public_5c69a0]
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x30]
        call public_422b80
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi], offset public_5dd2ac
        jmp public_52a05c
        public_529ecd : nop
        mov ecx, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5dd294 @0x529ed1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd294
        call esi
        test al, al
        je public_529f25
        push 0x30
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], 2
        je public_52a05a
        mov ecx, esi
        call dword ptr ds : [public_5c6874]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5dd2e4
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x34], 3
        call edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi], offset public_5dd260
        jmp public_52a05c
        public_529f25 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5dd24c @0x529f29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd24c
        call esi
        test al, al
        je public_529f9e
        push 0x54
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], 4
        je public_52a05a
        mov ecx, esi
        call dword ptr ds : [public_5c6874]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5dd2e4
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x34], 5
        call edi
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ds:[esi+0x30]
        mov byte ptr ds : [esi+0x2C], bl
        call public_5a6900
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x44]
        mov byte ptr ss : [esp+0x44], 6
        mov dword ptr ds : [esi+0x40], ebx
        call public_5154a0
        mov dword ptr ds : [esi], offset public_5dd218
        jmp public_52a05c
        public_529f9e : nop
        mov ecx, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5dd20c @0x529fa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd20c
        call esi
        test al, al
        je public_52a005
        push 0x40
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], 7
        je public_52a05a
        mov ecx, esi
        call dword ptr ds : [public_5c6874]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5dd2e4
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x34], 8
        call dword ptr ds : [public_5c69a0]
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        call public_422b80
        mov dword ptr ds : [esi], offset public_5dd1d8
        jmp public_52a05c
        public_52a005 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5dd1c8 @0x52a009*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd1c8
        call esi
        test al, al
        je public_52a0b0
        push 0x30
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], 9
        je public_52a05a
        mov ecx, esi
        call dword ptr ds : [public_5c6874]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5dd2e4
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x34], 0xA
        call edi
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ds : [esi], offset public_5dd194
        jmp public_52a05c
        public_52a05a : nop
        xor esi, esi
        public_52a05c : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_52a0d5
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_52a0d5
        fld dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        push edx
        lea ecx, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x28], esi
        call public_52aae0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        test al, al
        mov esi, dword ptr ds : [public_5c6050]
        je public_52a0bf
        mov byte ptr ss : [ebp+0x24], 1
        jmp public_52a0bf
        public_52a0b0 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5dd188 @0x52a0b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd188
        call esi
        test al, al
        jne public_52a0d1
        public_52a0bf : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_529e63
        public_52a0d1 : nop
        mov al, 1
        jmp public_52a0d7
        public_52a0d5 : nop
        xor al, al
        public_52a0d7 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x529e10)
    }
}

#undef public_529e63
#undef public_529e67
#undef public_529ecd
#undef public_529f25
#undef public_529f9e
#undef public_52a005
#undef public_52a05a
#undef public_52a05c
#undef public_52a0b0
#undef public_52a0bf
#undef public_52a0d1
#undef public_52a0d5
#undef public_52a0d7
