#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1330);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8100);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee2c12 _public_6ee2c12
#define public_6ee2c14 _public_6ee2c14
#define public_6ee2ca0 _public_6ee2ca0
#define public_6ee2cb0 _public_6ee2cb0
#define public_6ee2cb3 _public_6ee2cb3
#define public_6ee2cb7 _public_6ee2cb7
#define public_6ee2ce0 _public_6ee2ce0
#define public_6ee2d0e _public_6ee2d0e
#define public_6ee2d17 _public_6ee2d17
#define public_6ee2d46 _public_6ee2d46
#define public_6ee2d6d _public_6ee2d6d

PROC_DECLARE(0x6ee2be0, internal_6ee2be0, public_6ee2be0);
extern "C" NAKED register_t __cdecl internal_6ee2be0()
{
    __asm
    {
        mov eax, 0x2024
        call public_6ee8da0
        push esi
        push edi
        push 0x30
        call public_6ee8de2
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6ee2c12
        mov ecx, edi
        call public_6ee11f0
        mov dword ptr ds : [edi], offset public_6ee9448
        mov dword ptr ds : [edi+0x2C], 1
        jmp public_6ee2c14
        public_6ee2c12 : nop
        xor edi, edi
        public_6ee2c14 : nop
        mov esi, dword ptr ss : [esp+0x2030]
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        je public_6ee2d6d
        mov ecx, dword ptr ss : [esp+0x2048]
        mov edx, dword ptr ss : [esp+0x2044]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2040]
        push eax
        mov eax, dword ptr ss : [esp+0x2048]
        push edx
        mov edx, dword ptr ss : [esp+0x2044]
        push eax
        mov eax, dword ptr ss : [esp+0x2044]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_6ee1330
        test eax, eax
        jl public_6ee2d6d
        push ebx
        push ebp
        mov ebp, dword ptr ds : [esi+0x124]
        lea ecx, ss:[ebp+1]
        mov dword ptr ss : [esp+0x1C], edi
        lea edi, ds:[esi+0xF8]
        mov dword ptr ds : [esi+0x124], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebx, ecx
        mov al, 1
        je public_6ee2cb7
        lea esp, ss:[esp]
        public_6ee2ca0 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebx, esi
        je public_6ee2cb0
        mov esi, dword ptr ds : [esi]
        jmp public_6ee2cb3
        public_6ee2cb0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ee2cb3 : nop
        cmp esi, edx
        jne public_6ee2ca0
        public_6ee2cb7 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ee2ce0
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0x1C
        public_6ee2ce0 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ee2d17
        cmp ebx, dword ptr ds : [ecx]
        jne public_6ee2d0e
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0x1C
        public_6ee2d0e : nop
        lea ecx, ss:[esp+0x14]
        call public_6ee8100
        public_6ee2d17 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x18]
        jge public_6ee2d46
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push esi
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0x1C
        public_6ee2d46 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6ee7cb0
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0x1C
        public_6ee2d6d : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x124]
        push ecx
        lea edx, ss:[esp+0x30]
/*FIXUP push offset public_6eea1ec @0x6ee2d7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea1ec
        push edx
        call public_6ee71c0
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        push 0x59D
/*FIXUP push offset public_6eea070 @0x6ee2d94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee2d9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x2024
        ret 0x1C
        UNREACHABLE_TRAP(0x6ee2be0)
    }
}

#undef public_6ee2c12
#undef public_6ee2c14
#undef public_6ee2ca0
#undef public_6ee2cb0
#undef public_6ee2cb3
#undef public_6ee2cb7
#undef public_6ee2ce0
#undef public_6ee2d0e
#undef public_6ee2d17
#undef public_6ee2d46
#undef public_6ee2d6d
