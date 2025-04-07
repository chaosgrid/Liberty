#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d000);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d100);
CLANG_FORWARD_PROC_SYMBOL(public_6d60190);

#define public_6cfa67b _public_6cfa67b
#define public_6cfa69a _public_6cfa69a
#define public_6cfa6a3 _public_6cfa6a3
#define public_6cfa6a8 _public_6cfa6a8

PROC_DECLARE(0x6cfa520, internal_6cfa520, public_6cfa520);
extern "C" NAKED register_t __cdecl internal_6cfa520()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x6C
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cfa6a8
        lea edx, ss:[esp+4]
        push edx
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cfa6a3
        mov eax, dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x78]
        push edx
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cfa69a
        mov edx, dword ptr ss : [esp+0x74]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
/*FIXUP push offset public_6d88590 @0x6cfa580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88590
/*FIXUP push offset public_6d88538 @0x6cfa585*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push ebx
        push edx
        call public_6d60190
        push ebx
/*FIXUP push offset public_6d88890 @0x6cfa592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88890
/*FIXUP push offset public_6d88538 @0x6cfa597*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push eax
        call public_6d60190
        mov ecx, dword ptr ss : [esp+0x38]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xA4]
        add esp, 0x28
        cmp eax, ecx
        je public_6cfa67b
        mov edx, dword ptr ds : [public_6d64388]
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6d64384]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x50], eax
        mov edx, dword ptr ds : [edx+8]
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], 2
        mov byte ptr ss : [esp+0x68], bl
        mov byte ptr ss : [esp+0x69], 1
        mov byte ptr ss : [esp+0x72], bl
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        mov byte ptr ss : [esp+0x6A], bl
        call public_6d0d000
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x80]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        push esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6d0d100
        public_6cfa67b : nop
        mov ecx, dword ptr ss : [esp+0x84]
        push ecx
        mov ecx, dword ptr ss : [esp+0x80]
        push edi
        push esi
        call public_6d0cee0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x6C
        ret 
        public_6cfa69a : nop
        mov eax, 0xFFFFFFFD
        add esp, 0x6C
        ret 
        public_6cfa6a3 : nop
        mov eax, 0xFFFFFFFE
        public_6cfa6a8 : nop
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6cfa520)
    }
}

#undef public_6cfa67b
#undef public_6cfa69a
#undef public_6cfa6a3
#undef public_6cfa6a8
