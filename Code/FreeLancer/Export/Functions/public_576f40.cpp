#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5765b0);
CLANG_FORWARD_PROC_SYMBOL(public_576f40);
CLANG_FORWARD_PROC_SYMBOL(public_578690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3b86);

#define public_576fd6 _public_576fd6
#define public_577027 _public_577027
#define public_577032 _public_577032
#define public_577041 _public_577041
#define public_577055 _public_577055
#define public_57706e _public_57706e
#define public_577090 _public_577090
#define public_5770c1 _public_5770c1
#define public_5770e4 _public_5770e4
#define public_577101 _public_577101
#define public_577111 _public_577111
#define public_577134 _public_577134
#define public_577138 _public_577138
#define public_57713d _public_57713d
#define public_57717e _public_57717e
#define public_577193 _public_577193
#define public_577197 _public_577197
#define public_5771ae _public_5771ae
#define public_57724f _public_57724f
#define public_577260 _public_577260
#define public_577271 _public_577271
#define public_577294 _public_577294
#define public_5772b5 _public_5772b5

PROC_DECLARE(0x576f40, internal_576f40, public_576f40);
extern "C" NAKED register_t __cdecl internal_576f40()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c3b86 @0x576f48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3b86
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1680
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x1690]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push ebp
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c605c]
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x16A0], ebp
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5771ae
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_576fd6
/*FIXUP push offset public_5e4388 @0x576fc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4388
        lea ecx, ss:[esp+0x12C]
        call dword ptr ds : [public_5c6050]
        test al, al
        jne public_577027
        public_576fd6 : nop
        lea ecx, ss:[esp+0x1550]
        mov dword ptr ss : [esp+0x1698], 1
        call dword ptr ds : [public_5c6c04]
        lea ecx, ss:[esp+0x128]
        mov dword ptr ss : [esp+0x1698], 2
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x169C], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        xor eax, eax
        jmp public_5772b5
        public_577027 : nop
        mov eax, dword ptr ds : [public_67c258]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_57706e
        public_577032 : nop
        mov ecx, dword ptr ds : [ebx+0x20]
        cmp ecx, ecx
        mov esi, dword ptr ds : [ebx+0x1C]
        lea edi, ds:[ebx+0x18]
        mov eax, ecx
        je public_577055
        public_577041 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        add eax, 8
        add esi, 8
        cmp eax, ecx
        jne public_577041
        public_577055 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        mov ecx, edi
        call public_53aaa0
        mov dword ptr ds : [edi+8], esi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [public_67c258]
        jne public_577032
        public_57706e : nop
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5771ae
        mov ebp, dword ptr ds : [public_5c6cf4]
        mov ebx, dword ptr ds : [public_5c6d24]
        nop 
/*FIXUP public_577090 : nop
        push offset public_5e4348 @0x577090*/
  FIXUP public_577090 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4348
        lea ecx, ss:[esp+0x12C]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_577197
        lea ecx, ss:[esp+0x128]
        xor esi, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_577193
/*FIXUP public_5770c1 : nop
        push offset public_5c866c @0x5770c1*/
  FIXUP public_5770c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x12C]
        call ebp
        test al, al
        lea ecx, ss:[esp+0x128]
        je public_57713d
        call dword ptr ds : [public_5c6698]
        mov edi, eax
        xor esi, esi
        public_5770e4 : nop
        mov eax, dword ptr ds : [esi*4+public_614dd8]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        je public_577101
        inc esi
        cmp esi, 0xCC
        jb public_5770e4
        xor esi, esi
        public_577101 : nop
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_577134
        public_577111 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_577138
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov ecx, dword ptr ds : [public_67c258]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jne public_577111
        public_577134 : nop
        xor esi, esi
        jmp public_57717e
        public_577138 : nop
        lea esi, ds:[eax+8]
        jmp public_57717e
/*FIXUP public_57713d : nop
        push offset public_5e4300 @0x57713d*/
  FIXUP public_57713d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4300
        call ebp
        test al, al
        je public_57717e
        test esi, esi
        je public_57717e
        xor eax, eax
        lea edx, ss:[esp+0x128]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        call public_5765b0
        test al, al
        je public_57717e
        mov eax, dword ptr ds : [esi+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0x10]
        push 1
        push eax
        call public_578690
        public_57717e : nop
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5770c1
        public_577193 : nop
        inc dword ptr ss : [esp+0x10]
        public_577197 : nop
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_577090
        xor ebp, ebp
        public_5771ae : nop
        mov ebx, 3
        lea eax, ss:[esp+0x1550]
        mov dword ptr ss : [esp+0x1698], ebx
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x1550]
        mov byte ptr ss : [esp+0x1698], 4
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x1554]
        mov byte ptr ss : [esp+0x169C], bl
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x16A0], 5
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x138]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_577271
        cmp dword ptr ss : [esp+0x13C], ebp
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_577260
        mov eax, dword ptr ss : [esp+0x140]
        cmp eax, ebp
        je public_57724f
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x140], ebp
        mov dword ptr ss : [esp+0x144], ebp
        public_57724f : nop
        mov eax, dword ptr ss : [esp+0x13C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x13C], ebp
        public_577260 : nop
        mov ecx, dword ptr ss : [esp+0x138]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x138], edi
        public_577271 : nop
        mov eax, dword ptr ss : [esp+0x140]
        cmp eax, ebp
        je public_577294
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x140], ebp
        mov dword ptr ss : [esp+0x144], ebp
        public_577294 : nop
        push 1
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x14C], ebp
        mov dword ptr ss : [esp+0x169C], edi
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ss : [esp+0x10]
        public_5772b5 : nop
        mov ecx, dword ptr ss : [esp+0x1690]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x168C
        ret 
        UNREACHABLE_TRAP(0x576f40)
    }
}

#undef public_576fd6
#undef public_577027
#undef public_577032
#undef public_577041
#undef public_577055
#undef public_57706e
#undef public_577090
#undef public_5770c1
#undef public_5770e4
#undef public_577101
#undef public_577111
#undef public_577134
#undef public_577138
#undef public_57713d
#undef public_57717e
#undef public_577193
#undef public_577197
#undef public_5771ae
#undef public_57724f
#undef public_577260
#undef public_577271
#undef public_577294
#undef public_5772b5
