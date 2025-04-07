#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1240);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8100);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee2fc2 _public_6ee2fc2
#define public_6ee2fc4 _public_6ee2fc4
#define public_6ee3030 _public_6ee3030
#define public_6ee3040 _public_6ee3040
#define public_6ee3043 _public_6ee3043
#define public_6ee3047 _public_6ee3047
#define public_6ee3070 _public_6ee3070
#define public_6ee309e _public_6ee309e
#define public_6ee30a7 _public_6ee30a7
#define public_6ee30d6 _public_6ee30d6
#define public_6ee30fd _public_6ee30fd

PROC_DECLARE(0x6ee2f90, internal_6ee2f90, public_6ee2f90);
extern "C" NAKED register_t __cdecl internal_6ee2f90()
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
        je public_6ee2fc2
        mov ecx, edi
        call public_6ee11f0
        mov dword ptr ds : [edi], offset public_6ee9448
        mov dword ptr ds : [edi+0x2C], 1
        jmp public_6ee2fc4
        public_6ee2fc2 : nop
        xor edi, edi
        public_6ee2fc4 : nop
        mov esi, dword ptr ss : [esp+0x2030]
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        je public_6ee30fd
        mov ecx, dword ptr ss : [esp+0x2038]
        mov edx, dword ptr ss : [esp+0x2034]
        push ecx
        push eax
        push edx
        mov ecx, edi
        call public_6ee1240
        test eax, eax
        jl public_6ee30fd
        push ebx
        push ebp
        mov ebp, dword ptr ds : [esi+0x124]
        lea eax, ss:[ebp+1]
        mov dword ptr ds : [esi+0x124], eax
        mov ecx, dword ptr ds : [esi+0xFC]
        mov edx, dword ptr ds : [esi+0x100]
        mov dword ptr ss : [esp+0x1C], edi
        lea edi, ds:[esi+0xF8]
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebx, ecx
        mov al, 1
        je public_6ee3047
        nop 
        public_6ee3030 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebx, esi
        je public_6ee3040
        mov esi, dword ptr ds : [esi]
        jmp public_6ee3043
        public_6ee3040 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ee3043 : nop
        cmp esi, edx
        jne public_6ee3030
        public_6ee3047 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ee3070
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee3070 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ee30a7
        cmp ebx, dword ptr ds : [ecx]
        jne public_6ee309e
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        push esi
        lea ecx, ss:[esp+0x2C]
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
        public_6ee309e : nop
        lea ecx, ss:[esp+0x14]
        call public_6ee8100
        public_6ee30a7 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ss : [esp+0x18]
        jge public_6ee30d6
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, edi
        call public_6ee7e10
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x2024
        ret 0xC
        public_6ee30d6 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
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
        public_6ee30fd : nop
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi+0x124]
        push eax
        lea ecx, ss:[esp+0x30]
/*FIXUP push offset public_6eea1ec @0x6ee310e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea1ec
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0x5C5
/*FIXUP push offset public_6eea070 @0x6ee3125*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee312f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x2024
        ret 0xC
        UNREACHABLE_TRAP(0x6ee2f90)
    }
}

#undef public_6ee2fc2
#undef public_6ee2fc4
#undef public_6ee3030
#undef public_6ee3040
#undef public_6ee3043
#undef public_6ee3047
#undef public_6ee3070
#undef public_6ee309e
#undef public_6ee30a7
#undef public_6ee30d6
#undef public_6ee30fd
