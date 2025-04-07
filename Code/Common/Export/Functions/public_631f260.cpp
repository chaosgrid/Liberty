#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);
CLANG_FORWARD_PROC_SYMBOL(public_6321d80);
CLANG_FORWARD_PROC_SYMBOL(public_6322070);
CLANG_FORWARD_PROC_SYMBOL(public_6322280);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_6322500);
CLANG_FORWARD_PROC_SYMBOL(public_63225b0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396cd0);

#define public_631f2da _public_631f2da
#define public_631f397 _public_631f397
#define public_631f3b0 _public_631f3b0
#define public_631f3d3 _public_631f3d3

PROC_DECLARE(0x631f260, internal_631f260, public_631f260);
extern "C" NAKED register_t __cdecl internal_631f260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396cd0 @0x631f262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396cd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        mov eax, dword ptr ss : [esp+0xA8]
        push ebx
        push esi
        add eax, 4
        push edi
        push eax
        call public_630e510
        xor ecx, ecx
        mov cx, ax
        add esp, 4
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, offset public_64018ec
        call public_6301640
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_64018f0]
        xor ebx, ebx
        cmp eax, ecx
        je public_631f2da
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x20]
        push eax
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6322500
        jmp public_631f397
        public_631f2da : nop
        lea eax, ss:[esp+0xE]
        push eax
        push ebx
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x40], bl
        call public_6322280
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0x70], edx
        call public_6322070
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, offset public_64018ec
        mov byte ptr ss : [esp+0xB4], 1
        call public_63225b0
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0xAC], bl
        call public_6321d80
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_6322500
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x68], ebx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 8
        lea esi, ds:[eax+0x10]
        public_631f397 : nop
        cmp dword ptr ss : [esp+0xBC], ebx
        jbe public_631f3d3
        lea edi, ds:[esi+0x20]
        mov esi, dword ptr ss : [esp+0xB8]
        lea ebx, ds:[ebx]
        public_631f3b0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], edx
        call public_63222f0
        add esi, 8
        jmp public_631f3b0
        public_631f3d3 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x631f260)
    }
}

#undef public_631f2da
#undef public_631f397
#undef public_631f3b0
#undef public_631f3d3
