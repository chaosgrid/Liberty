#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31670);
CLANG_FORWARD_PROC_SYMBOL(public_6f31910);
CLANG_FORWARD_PROC_SYMBOL(public_6f319b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f319d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32350);
CLANG_FORWARD_PROC_SYMBOL(public_6f323c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a80);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac34a);

#define public_6ef4d40 _public_6ef4d40
#define public_6ef4d42 _public_6ef4d42
#define public_6ef4dcd _public_6ef4dcd
#define public_6ef4ddb _public_6ef4ddb
#define public_6ef4e0d _public_6ef4e0d
#define public_6ef4e3f _public_6ef4e3f

PROC_DECLARE(0x6ef4cf0, internal_6ef4cf0, public_6ef4cf0);
extern "C" NAKED register_t __cdecl internal_6ef4cf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac34a @0x6ef4cf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac34a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+0x104]
        push edi
        xor edi, edi
        push edi
        push edi
        push edi
        push eax
        mov eax, dword ptr ds : [ecx+8]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f31670
        cmp esi, dword ptr ds : [ebx+4]
        je public_6ef4e3f
        push ebp
        mov ebp, dword ptr ss : [esp+0x7C]
        jmp public_6ef4d42
        public_6ef4d40 : nop
        xor edi, edi
        public_6ef4d42 : nop
        mov ecx, dword ptr ds : [esi+0x508]
        mov dword ptr ss : [esp+0x28], ecx
        mov eax, dword ptr ds : [esi+0x7C]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6eac680
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x70], edi
        call public_6eac680
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0x24]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        mov dword ptr ss : [esp+0x78], 1
        call public_6f319b0
        mov eax, dword ptr ss : [ebp+0x24]
        push 1
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call public_6f319d0
        add esp, 0x18
        test al, al
        je public_6ef4ddb
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [ebp+0x24]
        lea edi, ds:[esi+8]
        push edi
        push ecx
        push edx
        call public_6f34a80
        mov ecx, dword ptr ds : [edi]
        add esp, 0xC
        test ecx, ecx
        je public_6ef4dcd
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], 0
        public_6ef4dcd : nop
        lea ecx, ss:[esp+0x30]
        push edi
        push ecx
        call public_6f31910
        add esp, 8
        public_6ef4ddb : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [eax]
        jne public_6ef4e0d
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6f32350
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        call public_6f323c0
        add esp, 0x18
        public_6ef4e0d : nop
        inc dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x70], 2
        call edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call edi
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_6ef4d40
        pop ebp
        public_6ef4e3f : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6ef4cf0)
    }
}

#undef public_6ef4d40
#undef public_6ef4d42
#undef public_6ef4dcd
#undef public_6ef4ddb
#undef public_6ef4e0d
#undef public_6ef4e3f
