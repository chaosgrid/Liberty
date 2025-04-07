#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8370);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9340);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b60);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa07b);

#define public_6eb2ba8 _public_6eb2ba8
#define public_6eb2bb9 _public_6eb2bb9
#define public_6eb2be3 _public_6eb2be3
#define public_6eb2bfb _public_6eb2bfb
#define public_6eb2c17 _public_6eb2c17

PROC_DECLARE(0x6eb2b10, internal_6eb2b10, public_6eb2b10);
extern "C" NAKED register_t __cdecl internal_6eb2b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa07b @0x6eb2b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa07b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC4
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_6ea7bf0
        mov ebp, dword ptr ss : [esp+0xF8]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ss : [esp+0xE8]
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0xF0]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0xF4]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x30], ecx
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x58], eax
        jle public_6eb2bb9
        mov edx, ebp
        lea esi, ss:[esp+0x28]
        lea eax, ss:[esp+0x38]
        sub edx, esi
        public_6eb2ba8 : nop
        mov esi, dword ptr ds : [edx+eax]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+0x58]
        inc ecx
        add eax, 4
        cmp ecx, esi
        jl public_6eb2ba8
        public_6eb2bb9 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        mov edx, dword ptr ss : [ebp+0x40]
        lea ecx, ss:[ebp+0x40]
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0xD0], edx
        call dword ptr ds : [public_6fb3074]
        mov esi, eax
        cmp esi, ebx
        jne public_6eb2be3
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x6C], bl
        jmp public_6eb2c17
        public_6eb2be3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6eb2bfb
        mov eax, 0x1F
        public_6eb2bfb : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x6C], bl
        mov dword ptr ss : [esp+0x68], eax
        public_6eb2c17 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0xF4]
        call public_6ea9340
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        mov edx, dword ptr ss : [esp+0xE8]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0xE4], ebx
        call public_6ea8370
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6ea7ef0
        push esi
        call public_6f00b60
        mov edi, dword ptr ss : [esp+0xE8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edi], esi
        mov dword ptr ss : [esp+0xDC], 0xFFFFFFFF
        call public_6ea7c30
        mov ecx, dword ptr ss : [esp+0xD4]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD0
        ret 
        UNREACHABLE_TRAP(0x6eb2b10)
    }
}

#undef public_6eb2ba8
#undef public_6eb2bb9
#undef public_6eb2be3
#undef public_6eb2bfb
#undef public_6eb2c17
