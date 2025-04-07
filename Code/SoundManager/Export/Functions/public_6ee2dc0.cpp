#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1330);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8100);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee2df2 _public_6ee2df2
#define public_6ee2df4 _public_6ee2df4
#define public_6ee2e70 _public_6ee2e70
#define public_6ee2e80 _public_6ee2e80
#define public_6ee2e83 _public_6ee2e83
#define public_6ee2e87 _public_6ee2e87
#define public_6ee2eb0 _public_6ee2eb0
#define public_6ee2ede _public_6ee2ede
#define public_6ee2ee7 _public_6ee2ee7
#define public_6ee2f16 _public_6ee2f16
#define public_6ee2f3d _public_6ee2f3d

PROC_DECLARE(0x6ee2dc0, internal_6ee2dc0, public_6ee2dc0);
extern "C" NAKED register_t __cdecl internal_6ee2dc0()
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
        je public_6ee2df2
        mov ecx, edi
        call public_6ee11f0
        mov dword ptr ds : [edi], offset public_6ee9448
        mov dword ptr ds : [edi+0x2C], 1
        jmp public_6ee2df4
        public_6ee2df2 : nop
        xor edi, edi
        public_6ee2df4 : nop
        mov esi, dword ptr ss : [esp+0x2030]
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        je public_6ee2f3d
        mov ecx, dword ptr ss : [esp+0x2038]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x203C]
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+0x14]
        push edx
        push ecx
        push eax
        mov ecx, edi
        call public_6ee1330
        test eax, eax
        jl public_6ee2f3d
        push ebx
        push ebp
        mov ebp, dword ptr ds : [esi+0x124]
        lea edx, ss:[ebp+1]
        mov dword ptr ss : [esp+0x1C], edi
        lea edi, ds:[esi+0xF8]
        mov dword ptr ds : [esi+0x124], edx
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebx, ecx
        mov al, 1
        je public_6ee2e87
        lea esp, ss:[esp]
        public_6ee2e70 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebx, esi
        je public_6ee2e80
        mov esi, dword ptr ds : [esi]
        jmp public_6ee2e83
        public_6ee2e80 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ee2e83 : nop
        cmp esi, edx
        jne public_6ee2e70
        public_6ee2e87 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ee2eb0
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee2eb0 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ee2ee7
        cmp ebx, dword ptr ds : [ecx]
        jne public_6ee2ede
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        push esi
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee2ede : nop
        lea ecx, ss:[esp+0x14]
        call public_6ee8100
        public_6ee2ee7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x18]
        jge public_6ee2f16
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee2f16 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6ee7cb0
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee2f3d : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+0x124]
        push edx
        lea eax, ss:[esp+0x30]
/*FIXUP push offset public_6eea1ec @0x6ee2f4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea1ec
        push eax
        call public_6ee71c0
        push eax
        push 0x5B3
/*FIXUP push offset public_6eea070 @0x6ee2f5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee2f69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x2024
        ret 0xC
        UNREACHABLE_TRAP(0x6ee2dc0)
    }
}

#undef public_6ee2df2
#undef public_6ee2df4
#undef public_6ee2e70
#undef public_6ee2e80
#undef public_6ee2e83
#undef public_6ee2e87
#undef public_6ee2eb0
#undef public_6ee2ede
#undef public_6ee2ee7
#undef public_6ee2f16
#undef public_6ee2f3d
