#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d9220);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5190);
CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);

#define public_62d9235 _public_62d9235
#define public_62d9240 _public_62d9240
#define public_62d9255 _public_62d9255
#define public_62d9257 _public_62d9257
#define public_62d9292 _public_62d9292
#define public_62d929f _public_62d929f
#define public_62d92aa _public_62d92aa
#define public_62d92de _public_62d92de
#define public_62d92e0 _public_62d92e0
#define public_62d930f _public_62d930f
#define public_62d9311 _public_62d9311
#define public_62d932f _public_62d932f
#define public_62d933e _public_62d933e
#define public_62d9340 _public_62d9340
#define public_62d9370 _public_62d9370
#define public_62d9372 _public_62d9372
#define public_62d939a _public_62d939a

PROC_DECLARE(0x62d9220, internal_62d9220, public_62d9220);
extern "C" NAKED register_t __cdecl internal_62d9220()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d9235
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62d9240
        public_62d9235 : nop
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0xC
        ret 
        public_62d9240 : nop
        mov al, byte ptr ds : [esi+0x5C]
        xor bl, bl
        test al, al
        jne public_62d92aa
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d9255
        lea ecx, ds:[eax-8]
        jmp public_62d9257
        public_62d9255 : nop
        xor ecx, ecx
        public_62d9257 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push 0xBF7FF972
        push eax
        call dword ptr ds : [edx]
        push eax
        call public_62e53e0
        mov bl, al
        add esp, 0xC
        test bl, bl
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        je public_62d9292
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0x3F800000
        push eax
        jmp public_62d929f
        public_62d9292 : nop
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        push ecx
        public_62d929f : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        call public_62e8ce0
        public_62d92aa : nop
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+8]
        push edx
        add ecx, 0x18
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_62e8c20
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d92de
        add eax, 0xFFFFFFF8
        jmp public_62d92e0
        public_62d92de : nop
        xor eax, eax
        public_62d92e0 : nop
        push eax
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        push eax
        call public_62e4bb0
        mov al, byte ptr ds : [esi+0x5C]
        add esp, 8
        test al, al
        jne public_62d933e
        fcomp dword ptr ds : [esi+0x54]
        fnstsw ax
        test ah, 5
        jp public_62d932f
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d930f
        lea ecx, ds:[eax-8]
        jmp public_62d9311
        public_62d930f : nop
        xor ecx, ecx
        public_62d9311 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0xBF34FDF4
        push edx
        call dword ptr ds : [eax]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62d932f
        test bl, bl
        je public_62d9340
        public_62d932f : nop
        mov byte ptr ds : [esi+0x5C], 0
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0xC
        ret 
        public_62d933e : nop
        fstp st(0)
        public_62d9340 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0xBF800000
        add ecx, 0x18
        mov byte ptr ds : [esi+0x5C], 1
        call public_62e89a0
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d939a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d939a
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_62d9370
        add eax, 0xFFFFFFF8
        jmp public_62d9372
        public_62d9370 : nop
        xor eax, eax
        public_62d9372 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e5190
        add esp, 0xC
        test al, al
        je public_62d939a
        mov byte ptr ds : [esi+0x5C], 0
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 
        public_62d939a : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d9220)
    }
}

#undef public_62d9235
#undef public_62d9240
#undef public_62d9255
#undef public_62d9257
#undef public_62d9292
#undef public_62d929f
#undef public_62d92aa
#undef public_62d92de
#undef public_62d92e0
#undef public_62d930f
#undef public_62d9311
#undef public_62d932f
#undef public_62d933e
#undef public_62d9340
#undef public_62d9370
#undef public_62d9372
#undef public_62d939a
