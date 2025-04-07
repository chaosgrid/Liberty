#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62683d0);
CLANG_FORWARD_PROC_SYMBOL(public_62684f0);
CLANG_FORWARD_PROC_SYMBOL(public_6268e30);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6309b20);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);
CLANG_FORWARD_PROC_SYMBOL(public_6309b50);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6332f50);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639649f);

#define public_6313055 _public_6313055
#define public_63130d3 _public_63130d3
#define public_6313125 _public_6313125
#define public_631314e _public_631314e
#define public_6313173 _public_6313173
#define public_63131b0 _public_63131b0

PROC_DECLARE(0x6312ff0, internal_6312ff0, public_6312ff0);
extern "C" NAKED register_t __cdecl internal_6312ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639649f @0x6312ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639649f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x2C], edi
        mov al, byte ptr ss : [esp+0x70]
        push edi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call public_6268e30
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], edi
        push 4
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 1
        call public_63128e0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jle public_63131b0
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x14], eax
        public_6313055 : nop
        lea ecx, ss:[esp+0x48]
        call public_6309ae0
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_62683d0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [ecx+4]
        push 4
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        add edi, 8
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, edi
        call public_6309b30
        push 4
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        xor ebp, ebp
        call public_63128e0
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp ebx, 0xFFFFFFFF
        je public_63130d3
        cmp ebx, 0x4000
        jae public_63130d3
        lea edx, ds:[ebx+1]
        push edx
        call dword ptr ds : [public_6399328]
        add esp, 4
        mov ebp, eax
        push ebx
        push ebp
        mov ecx, esi
        call public_63128e0
        mov byte ptr ds : [ebx+ebp], 0
        public_63130d3 : nop
        push 0
        push ebp
        call public_6333ca0
        mov dword ptr ss : [esp+0x28], eax
        add esp, 8
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6309b40
        push 4
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov ecx, edi
        call public_633bad0
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        jl public_6313125
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6313125 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        mov ecx, edi
        call public_6332f50
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        jl public_631314e
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_631314e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov ecx, edi
        call public_6309b20
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 1
        jl public_6313173
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx]
        inc ecx
        dec eax
        mov byte ptr ss : [esp+0x12], dl
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6313173 : nop
        cmp byte ptr ss : [esp+0x12], 1
        sete al
        mov byte ptr ss : [esp+0x30], al
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, edi
        call public_6309b50
        push 1
        lea edx, ss:[esp+0x17]
        push edx
        mov ecx, esi
        call public_63128e0
        cmp byte ptr ss : [esp+0x13], 1
        sete al
        mov byte ptr ds : [edi+0x18], al
        dec dword ptr ss : [esp+0x14]
        jne public_6313055
        pop ebp
        pop ebx
        public_63131b0 : nop
        mov esi, dword ptr ss : [esp+0x70]
        mov al, byte ptr ss : [esp+0x34]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi], al
        call public_6268e30
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        call public_632c410
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov edi, eax
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_62684f0
        mov dword ptr ss : [esp+0x2C], 1
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x74], 0
        call public_62728a0
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x6312ff0)
    }
}

#undef public_6313055
#undef public_63130d3
#undef public_6313125
#undef public_631314e
#undef public_6313173
#undef public_63131b0
